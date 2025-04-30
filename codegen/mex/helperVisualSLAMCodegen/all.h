//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// all.h
//
// Code generation for function 'all'
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
boolean_T all(const emlrtStack &sp, const array<boolean_T, 1U> &x);

boolean_T b_all(const emlrtStack &sp, const array<boolean_T, 1U> &x);

boolean_T c_all(const boolean_T x[5]);

} // namespace coder

// End of code generation (all.h)
