//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MLDigraph.h
//
// Code generation for function 'MLDigraph'
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
class MLDigraph {
public:
  static void rowColtoIrJc(const emlrtStack &sp, const array<real_T, 1U> &i,
                           const array<real_T, 1U> &j, real_T n,
                           array<int32_T, 1U> &b_Ir, array<int32_T, 1U> &b_Jc);
  void get_Edges(const emlrtStack &sp, array<real_T, 2U> &ed) const;
  array<int32_T, 1U> Ir;
  array<int32_T, 1U> Jc;
  boolean_T isMultigraph;
};

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (MLDigraph.h)
