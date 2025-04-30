//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// list1.h
//
// Code generation for function 'list1'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_types.h"
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
namespace internal {
class list {
public:
  void pushBack(const emlrtStack &sp, int32_T b_value);
  array<b_struct_T, 2U> nodePool;
  array<int32_T, 2U> valuePool;
  int32_T unusedAddr;
  int32_T frontAddr;
  int32_T backAddr;
  int32_T len;
};

class b_list {
public:
  int32_T newNodeAddr(const emlrtStack &sp);
  array<b_struct_T, 1U> nodePool;
  array<real_T, 1U> valuePool;
  int32_T unusedAddr;
  int32_T frontAddr;
  int32_T backAddr;
  int32_T len;
};

} // namespace internal
} // namespace coder

// End of code generation (list1.h)
