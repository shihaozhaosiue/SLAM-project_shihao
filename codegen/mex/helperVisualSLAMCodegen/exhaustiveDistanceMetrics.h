//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// exhaustiveDistanceMetrics.h
//
// Code generation for function 'exhaustiveDistanceMetrics'
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
namespace matchFeatures {
void exhaustiveDistanceMetrics(const emlrtStack &sp,
                               const array<uint8_T, 2U> &features1,
                               const array<uint8_T, 2U> &features2,
                               real_T numFeatures1, real_T numFeatures2,
                               array<real32_T, 2U> &scores);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (exhaustiveDistanceMetrics.h)
