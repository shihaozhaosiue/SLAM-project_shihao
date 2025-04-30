//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// det.h
//
// Code generation for function 'det'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
real32_T b_det(const emlrtStack &sp, const real32_T x[16]);

real32_T det(const emlrtStack &sp, const real32_T x_data[],
             const int32_T x_size[2]);

real_T det(const emlrtStack &sp, const real_T x_data[],
           const int32_T x_size[2]);

real32_T det(const emlrtStack &sp, const real32_T x[9]);

} // namespace coder

// End of code generation (det.h)
