//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// computeLoopNumber.h
//
// Code generation for function 'computeLoopNumber'
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

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace ransac {
int32_T computeLoopNumber(const emlrtStack &sp, real_T sampleSize,
                          real_T confidence, real_T pointNum, real_T inlierNum);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (computeLoopNumber.h)
