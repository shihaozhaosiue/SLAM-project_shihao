//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dijkstraShortestPathImpl.h
//
// Code generation for function 'dijkstraShortestPathImpl'
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
namespace matlab {
namespace internal {
namespace coder {
class MLGraph;

}
} // namespace internal
} // namespace matlab
} // namespace coder

// Function Declarations
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void dijkstraShortestPathImpl(const emlrtStack &sp, const MLGraph &G,
                              const array<real_T, 1U> &weight, real_T start,
                              int32_T maxNrNodes, array<real_T, 1U> &dist,
                              array<real_T, 1U> &pred);

}
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (dijkstraShortestPathImpl.h)
