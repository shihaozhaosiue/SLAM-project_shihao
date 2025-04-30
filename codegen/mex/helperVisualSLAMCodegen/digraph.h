//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// digraph.h
//
// Code generation for function 'digraph'
//

#pragma once

// Include files
#include "MLDigraph.h"
#include "graphPropertyContainer.h"
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
class e_table;

class sparse;

} // namespace coder

// Type Definitions
namespace coder {
class digraph {
public:
  void get_Edges(const emlrtStack &sp, e_table &E) const;
  void rmedge(const emlrtStack &sp, const array<real_T, 1U> &s,
              digraph &H) const;
  void conncomp(const emlrtStack &sp, array<real_T, 2U> &bins) const;

protected:
  void adjacencyTransp(const emlrtStack &sp, sparse &out) const;
  static void underlyingConstructor(const emlrtStack &sp,
                                    const array<real_T, 1U> &varargin_1,
                                    const array<real_T, 1U> &varargin_2,
                                    real_T varargin_3,
                                    matlab::internal::coder::MLDigraph &out);

public:
  matlab::internal::coder::MLDigraph Underlying;
  matlab::internal::coder::c_graphPropertyContainer EdgeProperties;
  matlab::internal::coder::d_graphPropertyContainer NodeProperties;
};

} // namespace coder

// End of code generation (digraph.h)
