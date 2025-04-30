//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// optimizePoses.h
//
// Code generation for function 'optimizePoses'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class digraph;

class f_table;

} // namespace coder

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
void optimizePoses(const emlrtStack &sp, const digraph &G, f_table &poseTable);

}
} // namespace vision
} // namespace coder

// End of code generation (optimizePoses.h)
