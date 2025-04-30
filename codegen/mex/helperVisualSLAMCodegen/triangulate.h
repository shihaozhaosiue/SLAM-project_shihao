//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// triangulate.h
//
// Code generation for function 'triangulate'
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
void b_triangulate(const emlrtStack &sp,
                   const array<real32_T, 2U> &matchedPoints1,
                   const array<real32_T, 2U> &matchedPoints2,
                   const real32_T varargin_1[12], const real32_T varargin_2[12],
                   array<real32_T, 2U> &xyzPoints,
                   array<real32_T, 1U> &reprojectionErrors,
                   array<boolean_T, 1U> &validIndex);

void triangulate(const emlrtStack &sp,
                 const array<real32_T, 2U> &matchedPoints1,
                 const array<real32_T, 2U> &matchedPoints2,
                 const real_T varargin_1[12], const real32_T varargin_2_data[],
                 const int32_T varargin_2_size[2],
                 array<real32_T, 2U> &xyzPoints,
                 array<real32_T, 1U> &reprojectionErrors,
                 array<boolean_T, 1U> &validIndex);

} // namespace coder

// End of code generation (triangulate.h)
