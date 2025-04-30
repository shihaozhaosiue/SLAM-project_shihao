//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// constructFromEdgeList.h
//
// Code generation for function 'constructFromEdgeList'
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
class d_table;

class table;

namespace matlab {
namespace internal {
namespace coder {
class MLDigraph;

class c_graphPropertyContainer;

class d_graphPropertyContainer;

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// Function Declarations
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void constructFromEdgeList(const emlrtStack &sp,
                           const array<uint32_T, 1U> &s_in,
                           const array<uint32_T, 1U> &t_in,
                           const d_table &varargin_1, const table &varargin_2,
                           MLDigraph &G, c_graphPropertyContainer &EdgeProps,
                           d_graphPropertyContainer &NodeProps);

}
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (constructFromEdgeList.h)
