/*****************************************************************************

YASK: Yet Another Stencil Kernel
Copyright (c) 2014-2016, Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.

*****************************************************************************/

////////// Support for C++ scalar and vector-code generation //////////////

#include "Vec.hpp"

/////////// Scalar code /////////////

// Outputs a C++ compilable scalar code.
class CppPrintHelper : public PrintHelper {

public:
    CppPrintHelper() { }
    virtual ~CppPrintHelper() { }

    // Format a real, preserving precision.
    static string formatReal(double v) {

        // IEEE double gives 15-17 significant decimal digits of precision per
        // https://en.wikipedia.org/wiki/Double-precision_floating-point_format.
        // Some precision might be lost if/when cast to a float, but that's ok.
        ostringstream oss;
        oss << setprecision(17) << scientific << v;
        return oss.str();
    }
    
    // Return a constant expression.
    // This is overloaded to preserve precision.
    virtual string addConstExpr(ostream& os, double v) {
        return formatReal(v);
    }

    // Return a grid reference.
    // The 'os' parameter is provided for derived types that
    // need to write intermediate code to a stream.
    virtual string constructPoint(ostream& os, const GridPoint& gp) {
        ostringstream oss;
        oss << "context." << gp.name() << "->readVal(";
            if (gp._tOk) oss << "t0 + " << gp._t;
            if (gp._vOk) oss << ", v0";
            if (gp._tOk || gp._vOk) oss << ", ";
            oss << "i + " << gp._i <<
                ", j + " << gp._j <<
                ", k + " << gp._k <<
                ", __LINE__)" << endl;
        return oss.str();
    }
};

/////////// Vector code /////////////

// Output simple C++ vector code.
class CppVecPrintHelper : public VecPrintHelper {

public:
    CppVecPrintHelper(VecInfoVisitor& vv) :
        VecPrintHelper(vv) { }

protected:
    map<string,string> _codes; // code expressions defined.
    map<double,string> _consts; // const expressions defined.

    // Define a constant if not already defined, writing definition
    // statement to os.  Creates a vector with all elements set to v.  If
    // not needed, do not write to os.  Either way, return var name.
    virtual string addConstExpr(ostream& os, double v) {
        if (_consts.count(v) == 0) {

            // Create new var.
            _consts[v] = makeVarName();
            int vlen = _vv.getVecLen();

            // A comment.
            os << " // Create a const vector with all values set to " << v << "." << endl;

            string vstr = CppPrintHelper::formatReal(v);
            os << setprecision(17) << scientific << " static const " <<
                getVarType() << " " << _consts[v] << " = { .r = { " << vstr;
            for (int i = 1; i < vlen; i++)
                os << ", " << vstr;
            os << " } };" << endl;
        }
        return _consts[v];
    }

    // Define a var if not already defined, writing definition statement to
    // os.  Creates a vector with all elements set to code.  If not needed,
    // do not write to os.  Either way, return var name.
    virtual string addCodeExpr(ostream& os, const string& code) {
        if (_codes.count(code) == 0) {

            // Create new var.
            _codes[code] = makeVarName();
            int vlen = _vv.getVecLen();

            // A comment.
            os << " // Create a vector with all values set to same value." << endl;
            os << " const " << getVarType() << " " << _codes[code] << " = " <<
                code << ";" << endl;
        }
        return _codes[code];
    }

    // Print required memory reads.
    virtual string printAlignedVec(ostream& os, const GridPoint& gp) {

        os << endl << " // Aligned vector block from " << gp.name();
        if (gp._tOk) os << " at t=t0+" << gp._t;
        os << " at point " << gp._i << ", " << gp._j << ", " << gp._k << "." << endl;
        string mvName = makeVarName();

        // Read memory.
        os << getVarType() << " " << mvName << " = context." << gp.name() << "->readVec(";
        if (gp._tOk) os << "t0 + " << gp._t;
        if (gp._vOk) os << ", v0";
        if (gp._tOk || gp._vOk) os << ", ";
        os << "veci + " << (gp._i / _vv.getXLen()) <<
            ", vecj + " << (gp._j / _vv.getYLen()) <<
            ", veck + " << (gp._k / _vv.getZLen()) <<
            ", __LINE__);" << endl;
        return mvName;
    }

    // Print conversion from memory vars to point var gp if needed.
    virtual string printUnalignedVec(ostream& os, const GridPoint& gp) {

        os << endl << " // Unaligned vector block from " << gp.name();
        if (gp._tOk) os << " at t=t0+" << gp._t;
        os << " at point " << gp._i << ", " << gp._j << ", " << gp._k << "." << endl;
        string pvName = makeVarName();
        os << getVarType() << " " << pvName << ";" << endl;

        printUnalignedVecCtor(os, gp, pvName);
        return pvName;
    }

    // Print per-element construction for one point var pvName from elems.
    virtual void printUnalignedVecSimple(ostream& os, const GridPoint& gp, const string& pvName, string prefix) {

        // just copy each element separately.
        auto& elems = _vv._vblk2elemLists[gp];
        for (size_t pelem = 0; pelem < elems.size(); pelem++) {
            auto ve = elems[pelem];

            // Look up existing input var.
            assert(_readyPoints.count(ve._vec));
            string mvName = _readyPoints[ve._vec];

            int alignedElem = ve._offset; // which element?

            os << prefix << pvName << "[" << pelem << "] = " << mvName << "[" << alignedElem << "];" << endl;
        }
    }

    // Print construction for one point var pvName from elems.
    // This version prints inefficient element-by-element assignment.
    // Override this in derived classes for more efficient implementations.
    virtual void printUnalignedVecCtor(ostream& os, const GridPoint& gp, const string& pvName) {
        printUnalignedVecSimple(os, gp, pvName, "");
    }

public:

    // Print body of prefetch function.
    virtual void printPrefetches(ostream& os, const Dir& dir, string hint) const {

        // Points to prefetch.
        GridPointSet* pfPts = NULL;

        // Leading points only if dir is set.
        GridPointSet edge;
        if (!dir.isNone()) {
            _vv.getLeadingEdge(edge, dir);
            pfPts = &edge;
        }

        // Otherwise, all points.
        else
            pfPts = &_vv._alignedVecs;

        os << " const char* p = 0;" << endl;
        for (auto ei = pfPts->begin(); ei != pfPts->end(); ei++) {
            auto gp = *ei;

            os << endl << " // Aligned vector block from " << gp.name();
            if (gp._tOk) os << " at t=t0+" << gp._t;
            os << " at point " << gp._i << ", " << gp._j << ", " << gp._k << "." << endl;
            
            // Prefetch memory.
            os << " p = (const char*)context." << gp.name() << "->getVecPtr(";
            if (gp._tOk) os << "t0 + " << gp._t;
            if (gp._vOk) os << ", v0";
            if (gp._tOk || gp._vOk) os << ", ";
            os << "veci + " << (gp._i / _vv.getXLen()) <<
                ", vecj + " << (gp._j / _vv.getYLen()) <<
                ", veck + " << (gp._k / _vv.getZLen()) <<
                ", __LINE__);" << endl;
            os << " MCP(p, " << hint << ", __LINE__);" << endl;
            os << " _mm_prefetch(p, " << hint << ");" << endl;
        }
    }
};
