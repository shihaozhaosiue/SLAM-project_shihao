//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// squeeze.h
//
// Code generation for function 'squeeze'
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
void squeeze(const emlrtStack &sp, const array<real_T, 3U> &a,
             array<real_T, 3U> &b);

void squeeze(const emlrtStack &sp, const array<real_T, 3U> &a,
             array<real_T, 2U> &b);

} // namespace coder

// End of code generation (squeeze.h)
