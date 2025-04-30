//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// norm.h
//
// Code generation for function 'norm'
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
real32_T b_norm(const emlrtStack &sp, const real32_T x_data[],
                const int32_T x_size[2]);

real_T b_norm(const real_T x[6]);

real_T b_norm(const emlrtStack &sp, const real_T x[9]);

real32_T b_norm(const real32_T x[3]);

real32_T b_norm(const emlrtStack &sp, const real32_T x[9]);

real32_T c_norm(const real32_T x_data[]);

real_T c_norm(const emlrtStack &sp, const real_T x[16]);

real32_T c_norm(const emlrtStack &sp, const real32_T x[16]);

real32_T d_norm(const emlrtStack &sp, const real32_T x_data[]);

} // namespace coder

// End of code generation (norm.h)
