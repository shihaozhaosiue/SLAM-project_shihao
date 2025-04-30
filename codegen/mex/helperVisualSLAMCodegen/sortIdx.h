//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sortIdx.h
//
// Code generation for function 'sortIdx'
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
void b_sortIdx(const emlrtStack &sp, array<uint32_T, 1U> &x,
               array<int32_T, 1U> &idx);

void b_sortIdx(const emlrtStack &sp, array<real_T, 1U> &x,
               array<int32_T, 1U> &idx);

void c_sortIdx(const emlrtStack &sp, array<real_T, 1U> &x,
               array<int32_T, 1U> &idx);

void merge_block(const emlrtStack &sp, array<int32_T, 2U> &idx,
                 array<real32_T, 2U> &x, int32_T offset, int32_T n,
                 int32_T preSortLevel, array<int32_T, 1U> &iwork,
                 array<real32_T, 1U> &xwork);

void sortIdx(const emlrtStack &sp, const array<real_T, 1U> &x,
             array<int32_T, 1U> &idx);

void sortIdx(const emlrtStack &sp, const array<uint32_T, 2U> &x,
             array<int32_T, 2U> &idx);

void sortIdx(const emlrtStack &sp, array<real32_T, 1U> &x,
             array<int32_T, 1U> &idx);

void sortIdx(const emlrtStack &sp, const array<uint32_T, 1U> &x,
             array<int32_T, 1U> &idx);

void sortIdx(const emlrtStack &sp, array<int32_T, 1U> &x,
             array<int32_T, 1U> &idx);

} // namespace internal
} // namespace coder

// End of code generation (sortIdx.h)
