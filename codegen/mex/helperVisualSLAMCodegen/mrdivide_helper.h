//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mrdivide_helper.h
//
// Code generation for function 'mrdivide_helper'
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
void b_mrdiv(const emlrtStack &sp, const array<real32_T, 2U> &A,
             const real32_T B[9], array<real32_T, 2U> &Y);

void mrdiv(const emlrtStack &sp, const array<real32_T, 2U> &A,
           const real32_T B[4], array<real32_T, 2U> &Y);

void mrdiv(const emlrtStack &sp, const array<real_T, 2U> &A, const real_T B[9],
           array<real_T, 2U> &Y);

void mrdiv(const emlrtStack &sp, const real32_T A[9], const real_T B[9],
           real32_T Y[9]);

void mrdiv(const emlrtStack &sp, const array<real32_T, 2U> &A,
           const real_T B[9], array<real32_T, 2U> &Y);

void mrdiv(const emlrtStack &sp, const real_T A[12], const real_T B[9],
           real_T Y[12]);

} // namespace internal
} // namespace coder

// End of code generation (mrdivide_helper.h)
