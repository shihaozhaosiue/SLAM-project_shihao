//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// issorted.h
//
// Code generation for function 'issorted'
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
boolean_T issorted(const emlrtStack &sp, const array<uint32_T, 1U> &x);

boolean_T issorted(const emlrtStack &sp, const array<real_T, 1U> &x);

} // namespace coder

// End of code generation (issorted.h)
