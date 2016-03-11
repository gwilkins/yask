/**
 @author Gautam Wilkins (gwilkins AT ucsd.edu)
 
 @section DESCRIPTION
 Kernel for main computational domain in YASK format
 
 @section LICENSE
 Copyright (c) 2016, Regents of the University of California
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 
 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 
 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "StencilBase.hpp"

namespace odc {
    namespace kernels {
        class MainStencil;
    }
}

/**
 Stencil class for the main computational domain. Applies fourth-order staggered
 grid in space and time to calculate velocity and stress
 */
class odc::kernels::MainStencil : public StencilBase {
    
private:
    /**
     The Grid5d class uses an index to track different sets of 4D arrays, so this
     enum tracks which grid the respective indices refer to.
     */
    
    GridValue _dt;
    GridValue _dh;
    Grid3d _density;
    
    
public:
    
    enum GridVar {
        kVelocityX = 0;
        kVelocityY;
        kVelocityZ;
        kStressXX;
        kStressYY;
        kStressZZ;
        kStressXY;
        kStressXZ;
        kStressYZ;
        kDensity;
        
    };
    
    /**
     Constructor
     */
    MainStencil(int order=4, dt, dh) : StencilBase(order), _dt(dt), _dh(dh)
    {
        // Do nothing
    }
    
    /**
     Override value method to do stencil computations
     */
    virtual GridValue value(Grid5d& u, int tW, int t0, int v0, int i, int j, int k) const {
        
        if (tW <= t0) {
            return u(t0, v0, i, j, k);
        }
        
        GridValue
        
        int tm1 = tW-1;
        GridValue v = value(u, tm1, t0, v0, i, j, k);
        GridValue c1 = 9.0/8.0;
        GridValue c2 = -1.0/24.0;
        
        
        switch (v0) {
            case kVelocityX:
                
                GridValue densityX = u(t0, kDensity, i, j, k) +
                                        u(t0, kDensity, i, j-1, k) +
                                        u(t0, kDensity, i, j, k-1) +
                u(t0, kDensity, i, j-1, k-1);
                
                
                v += _dt/(_dh*densityX)*(c1*(value(u, tm1, t0, kStressXX, i, j, k) - value(u, tm1, t0, kStressXX, i-1, j, k))+
                                            c2*(value(u, tm1, t0, kStressXX, i+1, j, k)-value(u, tm1, t0, kStressXX, i-2, j, k)) +
                                            c1*(value(u, tm1, t0, kStressXY, i, j, k) - value(u, tm1, t0, kStressXY, i, j-1, k)) +
                                            c2*(value(u, tm1, t0, kStressXY, i, j+1, k) - value(u, tm1, t0, kStressXY, i, j-2, k)) +
                                            c1*(value(u, tm1, t0, kStressXZ, i, j, k) - value(u, tm1, t0, kStressXZ, i, j, k-1)) +
                                            c2*(value(u, tm1, t0, kStressXZ, i, j, k+1) - value(u, tm1, t0, kStressXZ, i, j, k-2)));
                
                
                break;
                
            case kVelocityY:
                
                break;
                
            case kVelocityZ:
                
                break;
                
                
            case kStressXX:
                
                GridValue test = value(u, tW, t0, kVelocityX, i, j, k);
                v += test;
                
                break;
                
            case kStressYY:
                
                break;
                
            case kStressZZ:
                
                break;
                
            case kStressXY:
                
                break;
                
            case kStressXZ:
                
                break;
                
            case kStressYZ:
                
                break;
            default:
                break;
        }
        
        return v;
    }
    

    
    
};


















