//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// svd.h
//
// Code generation for function 'svd'
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
void svd(const emlrtStack &sp, const array<real32_T, 2U> &A,
         array<real32_T, 2U> &U, real32_T S_data[], int32_T S_size[2],
         real32_T V[81]);

void svd(const emlrtStack &sp, const real_T A[9], real_T U[9], real_T S[9],
         real_T V[9]);

void svd(const emlrtStack &sp, const real32_T A[9], real32_T U[9],
         real32_T S[9], real32_T V[9]);

} // namespace coder

// End of code generation (svd.h)
