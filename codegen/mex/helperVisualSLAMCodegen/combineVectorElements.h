//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// combineVectorElements.h
//
// Code generation for function 'combineVectorElements'
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
void b_combineVectorElements(const emlrtStack &sp, const array<real32_T, 2U> &x,
                             array<real32_T, 2U> &y);

void b_combineVectorElements(const emlrtStack &sp, const array<real_T, 2U> &x,
                             array<real_T, 2U> &y);

void b_combineVectorElements(const emlrtStack &sp, const array<real32_T, 2U> &x,
                             real32_T y[3]);

int32_T combineVectorElements(const emlrtStack &sp,
                              const array<boolean_T, 1U> &x);

} // namespace coder

// End of code generation (combineVectorElements.h)
