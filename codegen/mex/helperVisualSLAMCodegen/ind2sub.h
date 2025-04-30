//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ind2sub.h
//
// Code generation for function 'ind2sub'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
int32_T ind2sub(const emlrtStack &sp, const real_T siz[2], int32_T ndx,
                int32_T &varargout_2);

int32_T ind2sub(const emlrtStack &sp, const real_T siz[2], real_T ndx,
                int32_T &varargout_2);

} // namespace internal
} // namespace coder

// End of code generation (ind2sub.h)
