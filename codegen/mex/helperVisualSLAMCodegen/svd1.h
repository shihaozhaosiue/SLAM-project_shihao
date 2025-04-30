//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// svd1.h
//
// Code generation for function 'svd1'
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
namespace internal {
int32_T b_svd(const emlrtStack &sp, const array<real32_T, 2U> &A,
              array<real32_T, 2U> &U, real32_T s_data[], real32_T V[81]);

int32_T b_svd(const emlrtStack &sp, const array<real_T, 2U> &A,
              array<real_T, 2U> &U, real_T s_data[], real_T V[81]);

int32_T b_svd(const emlrtStack &sp, const real_T A_data[],
              const int32_T A_size[2], real_T U_data[], int32_T U_size[2],
              real_T s_data[], real_T V[9]);

int32_T c_svd(const emlrtStack &sp, const array<real32_T, 2U> &A,
              array<real32_T, 2U> &U, real32_T s_data[], real32_T V[16]);

} // namespace internal
} // namespace coder

// End of code generation (svd1.h)
