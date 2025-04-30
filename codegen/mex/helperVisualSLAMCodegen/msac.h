//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// msac.h
//
// Code generation for function 'msac'
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
namespace ransac {
boolean_T b_msac(const emlrtStack &sp, const array<real_T, 3U> &allPoints,
                 const real_T varargin_1[9], const real_T varargin_2[9],
                 real_T bestModelParams_data[], int32_T bestModelParams_size[2],
                 array<boolean_T, 1U> &inliers);

boolean_T c_msac(const emlrtStack &sp, const array<real_T, 2U> &allPoints,
                 const real_T varargin_1[9], real_T bestModelParams_R[9],
                 real_T bestModelParams_t[3], array<boolean_T, 1U> &inliers);

boolean_T d_msac(const emlrtStack &sp, const array<real32_T, 3U> &allPoints,
                 real32_T bestModelParams_data[],
                 int32_T bestModelParams_size[2],
                 array<boolean_T, 1U> &inliers);

boolean_T msac(const emlrtStack &sp, const array<real32_T, 3U> &allPoints,
               real32_T bestModelParams_data[], int32_T bestModelParams_size[2],
               array<boolean_T, 1U> &inliers);

} // namespace ransac
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (msac.h)
