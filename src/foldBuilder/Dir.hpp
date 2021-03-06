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

///////// Stencil support.

#ifndef DIR_H
#define DIR_H

#include <iostream>
#include <iomanip>
#include <memory>
#include <algorithm>
#include <sstream>

using namespace std;

// Describe a direction in 3D space.
class Dir {
protected:
    bool _pos;                  // sign.
    string _baseName;            // name w/o sign.

public:
    Dir(bool pos, string baseName):
        _pos(pos), _baseName(baseName) {}
    virtual ~Dir() {}

    virtual bool isPos() const { return _pos; }
    virtual bool isNeg() const { return !_pos; }
    virtual bool isNone() const { return false; }
    virtual bool isX() const { return false; }
    virtual bool isY() const { return false; }
    virtual bool isZ() const { return false; }
    virtual const string& getBaseName() const { return _baseName; }
    virtual string getName() const {
        return _pos ?
            string("+") + _baseName :
            string("-") + _baseName;
    }
};

class NoDir : public Dir {
public:
    NoDir() : Dir(true, "none") {}
    virtual bool isNone() const { return true; }
    virtual string getName() const {
        return _baseName;
    }
};

class XDir : public Dir {
public:
    XDir(bool pos = true): Dir(pos, "x") {}
    virtual bool isX() const { return true; }
};

class YDir : public Dir {
public:
    YDir(bool pos = true): Dir(pos, "y") {}
    virtual bool isY() const { return true; }
};

class ZDir : public Dir {
public:
    ZDir(bool pos = true): Dir(pos, "z") {}
    virtual bool isZ() const { return true; }
};

// Collection of 3 ints (e.g., x, y, z or i, j, k).
class Triple {
public:
    int _i, _j, _k;

    Triple(int i=0, int j=0, int k=0) :
        _i(i), _j(j), _k(k) {
    }
    virtual ~Triple() {}

    // Individual lengths, assuming values are sizes.
    virtual int getXLen() const { return _i; }
    virtual int getYLen() const { return _j; }
    virtual int getZLen() const { return _k; }

    // Get overall length, assuming values are sizes.
    virtual int getLen() const {
        return product();
    }

    // Convert 3D offsets to 1D using C-style mapping,
    // assuming values are sizes.
    virtual int map321(int i, int j, int k) {
        return (k * getYLen() * getXLen()) +
            (j * getXLen()) + i;
    }
    
    // Get location in given 3D direction (ignoring sign).
    virtual int getVal(const Dir& dir) const {
        return dir.isX() ? _i :
            dir.isY() ? _j :
            dir.isZ() ? _k :
            (assert(false), 0);
    }

    // Determine whether this is inline with t2 along
    // given 3D direction.
    virtual bool isInline(const Triple& t2, const Dir& dir) const {
        return (dir.isX() && _j == t2._j && _k == t2._k) ||
            (dir.isY() && _i == t2._i && _k == t2._k) ||
            (dir.isZ() && _i == t2._i && _j == t2._j);
    }

    // Some comparison operators.
    virtual bool operator==(const Triple& rhs) const {
        return (_i == rhs._i) &&
            (_j == rhs._j) && (_k == rhs._k);
    }
    virtual bool operator!=(const Triple& rhs) const {
        return !operator==(rhs);
    }
    virtual bool operator<(const Triple& rhs) const {
        return (_i < rhs._i) ? true : (_i > rhs._i) ? false :
            (_j < rhs._j) ? true : (_j > rhs._j) ? false :
            (_k < rhs._k) ? true : false;
    }
    virtual bool operator>(const Triple& rhs) const {
        return !(operator==(rhs) || operator<(rhs));
    }

    // aggregates.
    virtual int sum() const {
        return _i + _j + _k;
    }
    virtual int product() const {
        return _i * _j * _k;
    }

    // misc.
    virtual string getName3D() const {
        ostringstream oss;
        oss << _i << 'x' << _j << 'x' << _k;
        return oss.str();
    }
};


#endif // DIR_H
