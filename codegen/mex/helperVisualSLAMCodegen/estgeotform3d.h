//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estgeotform3d.h
//
// Code generation for function 'estgeotform3d'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class b_rigidtform3d;

}

// Function Declarations
namespace coder {
void estgeotform3d(const emlrtStack &sp,
                   const array<real32_T, 2U> &matchedPoints1,
                   const array<real32_T, 2U> &matchedPoints2,
                   b_rigidtform3d &tform, array<boolean_T, 2U> &inlierIndex);

}

// End of code generation (estgeotform3d.h)
