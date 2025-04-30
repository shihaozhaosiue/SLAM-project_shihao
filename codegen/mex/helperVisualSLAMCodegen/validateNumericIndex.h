//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateNumericIndex.h
//
// Code generation for function 'validateNumericIndex'
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
void sparse_validateNumericIndex(const emlrtStack &sp, real_T idx);

void sparse_validateNumericIndex(const emlrtStack &sp, int32_T upperBound,
                                 const array<real_T, 1U> &idx);

} // namespace coder

// End of code generation (validateNumericIndex.h)
