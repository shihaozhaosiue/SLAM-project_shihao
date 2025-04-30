//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkAndConvertPoints.h
//
// Code generation for function 'checkAndConvertPoints'
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
namespace inputValidation {
void checkAndConvertPoints(const emlrtStack &sp,
                           const array<real32_T, 2U> &pointsIn);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (checkAndConvertPoints.h)
