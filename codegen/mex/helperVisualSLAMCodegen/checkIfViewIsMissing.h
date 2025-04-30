//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkIfViewIsMissing.h
//
// Code generation for function 'checkIfViewIsMissing'
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

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace inputValidation {
void checkIfViewIsMissing(const emlrtStack &sp,
                          const array<uint32_T, 1U> &viewsOrViewIds,
                          uint32_T viewId);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (checkIfViewIsMissing.h)
