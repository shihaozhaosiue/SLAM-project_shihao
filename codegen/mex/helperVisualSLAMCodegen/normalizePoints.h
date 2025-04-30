//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// normalizePoints.h
//
// Code generation for function 'normalizePoints'
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

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
void normalizePoints(const emlrtStack &sp, const real32_T p[8],
                     real32_T normPoints[8], real32_T T[9]);

void normalizePoints(const emlrtStack &sp, const array<real32_T, 2U> &p,
                     array<real32_T, 2U> &normPoints, real32_T T[9]);

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (normalizePoints.h)
