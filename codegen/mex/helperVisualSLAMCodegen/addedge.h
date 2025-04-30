//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// addedge.h
//
// Code generation for function 'addedge'
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

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
class graphBase {
public:
  static real_T validateNodeIDs(const emlrtStack &sp,
                                const array<real_T, 1U> &ids);
};

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (addedge.h)
