//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateattributes.h
//
// Code generation for function 'validateattributes'
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
void validateattributes(const emlrtStack &sp, const array<uint32_T, 2U> &a);

void validateattributes(const emlrtStack &sp, const real32_T a[16]);

void validateattributes(const emlrtStack &sp, const array<real_T, 1U> &a);

void validateattributes(const emlrtStack &sp, const array<real32_T, 2U> &a);

} // namespace coder

// End of code generation (validateattributes.h)
