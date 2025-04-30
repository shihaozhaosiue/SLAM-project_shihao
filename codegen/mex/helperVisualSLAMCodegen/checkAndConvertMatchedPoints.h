//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkAndConvertMatchedPoints.h
//
// Code generation for function 'checkAndConvertMatchedPoints'
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
void checkAndConvertMatchedPoints(const emlrtStack &sp,
                                  const array<real32_T, 2U> &matchedPoints1,
                                  const array<real32_T, 2U> &matchedPoints2);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (checkAndConvertMatchedPoints.h)
