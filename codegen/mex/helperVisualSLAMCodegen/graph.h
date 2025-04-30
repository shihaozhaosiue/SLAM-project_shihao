//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// graph.h
//
// Code generation for function 'graph'
//

#pragma once

// Include files
#include "MLGraph.h"
#include "graphPropertyContainer.h"
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
class graph {
public:
  void addedge(const emlrtStack &sp, const array<real_T, 1U> &sIn,
               const array<real_T, 1U> &tIn, graph &H) const;
  void conncomp(const emlrtStack &sp, array<real_T, 2U> &bins) const;
  matlab::internal::coder::MLGraph Underlying;
  matlab::internal::coder::graphPropertyContainer EdgeProperties;
  matlab::internal::coder::b_graphPropertyContainer NodeProperties;
};

class b_graph {
public:
  matlab::internal::coder::MLGraph Underlying;
};

class c_graph {
public:
  void init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
            const array<uint32_T, 1U> &varargin_2);
  void b_nearest(const emlrtStack &sp, real_T s, array<real_T, 1U> &nodeids,
                 array<real_T, 1U> &dOut) const;

protected:
  matlab::internal::coder::MLGraph Underlying;
  matlab::internal::coder::graphPropertyContainer EdgeProperties;
  matlab::internal::coder::graphPropertyContainer NodeProperties;
};

} // namespace coder

// End of code generation (graph.h)
