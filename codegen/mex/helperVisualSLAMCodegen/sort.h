//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sort.h
//
// Code generation for function 'sort'
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
void b_sort(const emlrtStack &sp, array<real_T, 1U> &x,
            array<int32_T, 1U> &idx);

void b_sort(const emlrtStack &sp, array<real32_T, 2U> &x,
            array<int32_T, 2U> &idx);

int32_T sort(const emlrtStack &sp, real32_T x_data[], const int32_T &x_size,
             int32_T idx_data[]);

void sort(const emlrtStack &sp, array<real_T, 1U> &x);

void sort(const emlrtStack &sp, array<uint32_T, 1U> &x);

void sort(const emlrtStack &sp, array<int32_T, 2U> &x);

void sort(const emlrtStack &sp, array<uint32_T, 1U> &x,
          array<int32_T, 1U> &idx);

void sort(const emlrtStack &sp, array<real32_T, 2U> &x,
          array<int32_T, 2U> &idx);

void sort(const emlrtStack &sp, array<int32_T, 1U> &x, array<int32_T, 1U> &idx);

void sort(const emlrtStack &sp, array<real_T, 1U> &x, array<int32_T, 1U> &idx);

} // namespace internal
} // namespace coder

// End of code generation (sort.h)
