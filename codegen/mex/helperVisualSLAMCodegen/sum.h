//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.h
//
// Code generation for function 'sum'
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

// Type Declarations
namespace coder {
class c_sparse;

class d_sparse;

class sparse;

class b_sparse;

} // namespace coder

// Function Declarations
namespace coder {
void b_sum(const emlrtStack &sp, const array<real32_T, 2U> &x,
           array<real32_T, 1U> &y);

void b_sum(const emlrtStack &sp, const sparse &x, b_sparse &y);

void sum(const emlrtStack &sp, const array<real_T, 2U> &x, real_T y_data[],
         int32_T y_size[2]);

void sum(const emlrtStack &sp, const array<real_T, 2U> &x,
         array<real_T, 2U> &y);

void sum(const emlrtStack &sp, const array<real32_T, 2U> &x,
         array<real32_T, 1U> &y);

real32_T sum(const emlrtStack &sp, const array<real32_T, 1U> &x);

void sum(const emlrtStack &sp, const sparse &x, b_sparse &y);

real_T sum(const emlrtStack &sp, const array<real_T, 1U> &x);

void sum(const emlrtStack &sp, const array<real_T, 2U> &x,
         array<real_T, 1U> &y);

void sum(const real_T x[12], real_T y[4]);

void sum(const emlrtStack &sp, const c_sparse &x, c_sparse &y);

void sum(const emlrtStack &sp, const c_sparse &x, d_sparse &y);

real_T sum(const emlrtStack &sp, const array<real_T, 2U> &x);

} // namespace coder

// End of code generation (sum.h)
