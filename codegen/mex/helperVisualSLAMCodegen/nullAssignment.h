//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// nullAssignment.h
//
// Code generation for function 'nullAssignment'
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
void make_bitarray(const emlrtStack &sp, int32_T n,
                   const array<int32_T, 1U> &idx, array<boolean_T, 2U> &b);

void nullAssignment(const emlrtStack &sp, array<real32_T, 2U> &x,
                    const array<int32_T, 2U> &idx);

void nullAssignment(const emlrtStack &sp, array<real_T, 2U> &x,
                    const array<int32_T, 2U> &idx);

void nullAssignment(const emlrtStack &sp, array<real_T, 2U> &x,
                    const array<int32_T, 1U> &idx);

int32_T num_true(const emlrtStack &sp, const array<boolean_T, 2U> &b);

} // namespace internal
} // namespace coder

// End of code generation (nullAssignment.h)
