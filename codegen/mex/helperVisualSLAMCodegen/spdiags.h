//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// spdiags.h
//
// Code generation for function 'spdiags'
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

// Type Declarations
namespace coder {
class sparse;

class d_sparse;

} // namespace coder

// Function Declarations
namespace coder {
void spdiags(const emlrtStack &sp, const array<real_T, 1U> &arg1, real_T arg3,
             real_T arg4, sparse &res1);

void spdiags(const emlrtStack &sp, real_T arg1, d_sparse &res1);

} // namespace coder

// End of code generation (spdiags.h)
