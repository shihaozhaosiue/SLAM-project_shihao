//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// minPriorityQueue.h
//
// Code generation for function 'minPriorityQueue'
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
class minPriorityQueue {
public:
  void percUp(const emlrtStack &sp, int32_T i, const array<real_T, 1U> &dist);
  array<int32_T, 1U> heap;
  array<int32_T, 1U> indexToHeap;
  int32_T len;
};

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (minPriorityQueue.h)
