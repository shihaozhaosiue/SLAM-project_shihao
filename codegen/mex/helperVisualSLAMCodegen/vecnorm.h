//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// vecnorm.h
//
// Code generation for function 'vecnorm'
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
void b_vecnorm(const emlrtStack &sp, const array<real32_T, 2U> &x,
               array<real32_T, 1U> &y);

void vecnorm(const emlrtStack &sp, const array<real32_T, 2U> &x,
             array<real32_T, 2U> &y);

void vecnorm(const emlrtStack &sp, const array<real32_T, 2U> &x,
             array<real32_T, 1U> &y);

} // namespace coder

// End of code generation (vecnorm.h)
