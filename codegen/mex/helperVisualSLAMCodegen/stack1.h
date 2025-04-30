//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// stack1.h
//
// Code generation for function 'stack1'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
namespace coder {
namespace internal {
class stack {
public:
  bounded_array<struct_T, 120U, 1U> d;
  int32_T n;
};

} // namespace internal
} // namespace coder

// End of code generation (stack1.h)
