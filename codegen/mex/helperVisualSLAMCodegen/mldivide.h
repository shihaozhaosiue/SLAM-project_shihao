//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mldivide.h
//
// Code generation for function 'mldivide'
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
void mldivide(const emlrtStack &sp, const real_T A[9], const real_T B_data[],
              const int32_T B_size[2], real_T Y_data[], int32_T Y_size[2]);

void mldivide(const emlrtStack &sp, const real32_T A[9], const real32_T B[3],
              real32_T Y[3]);

void mldivide(const emlrtStack &sp, const real_T A[9],
              const array<real32_T, 2U> &B, array<real32_T, 2U> &Y);

void mldivide(const emlrtStack &sp, const real32_T A[9],
              const array<real32_T, 2U> &B, array<real32_T, 2U> &Y);

void mldivide(const emlrtStack &sp, const real_T A[9], const real32_T B[9],
              real32_T Y[9]);

void mldivide(const emlrtStack &sp, const real_T A[36], real_T B[6]);

} // namespace coder

// End of code generation (mldivide.h)
