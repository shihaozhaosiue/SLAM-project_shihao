//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estgeotform2d.h
//
// Code generation for function 'estgeotform2d'
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
class projtform2d;

}

// Function Declarations
namespace coder {
void estgeotform2d(const emlrtStack &sp,
                   const array<real32_T, 2U> &matchedPoints1,
                   const array<real32_T, 2U> &matchedPoints2,
                   projtform2d &tform, array<boolean_T, 2U> &inlierIndex);

}

// End of code generation (estgeotform2d.h)
