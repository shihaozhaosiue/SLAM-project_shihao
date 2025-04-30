//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MLGraph.h
//
// Code generation for function 'MLGraph'
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
class graph;

}

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
class MLGraph {
public:
  static void edgesConstrWithIndex(const emlrtStack &sp,
                                   const array<real_T, 1U> &s,
                                   const array<real_T, 1U> &t, real_T numNodes,
                                   MLGraph &mlg, array<real_T, 1U> &ind);
  static void definePosMapAndDiag(const emlrtStack &sp,
                                  const array<int32_T, 1U> &ir,
                                  const array<int32_T, 1U> &jc, real_T n,
                                  array<int32_T, 2U> &posMap,
                                  array<int32_T, 1U> &b_Diag);
  void get_Edges(const emlrtStack &sp, array<real_T, 2U> &ed) const;
  void init(const emlrtStack &sp, const array<real_T, 1U> &s,
            const array<real_T, 1U> &t, real_T numNodes);
  array<int32_T, 1U> Ir;
  array<int32_T, 1U> Jc;
  array<int32_T, 2U> PosMap;
  array<int32_T, 1U> Diag;
  boolean_T isMultigraph;
};

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// Function Declarations
void binary_expand_op_20(const emlrtStack &sp, coder::graph &in1,
                         const coder::array<int32_T, 1U> &in2,
                         const coder::matlab::internal::coder::MLGraph &in3);

// End of code generation (MLGraph.h)
