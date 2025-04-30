//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bundleAdjustmentValidation.h
//
// Code generation for function 'bundleAdjustmentValidation'
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
class worldpointset;

class imageviewset;

} // namespace coder

// Type Definitions
namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
class bundleAdjustmentValidation {
public:
  static void checkIfViewIdsMissing(const emlrtStack &sp,
                                    const array<uint32_T, 1U> &viewIds,
                                    const worldpointset &wpSet,
                                    const imageviewset &vSet);
  static void validateViewIds(const emlrtStack &sp,
                              const array<uint32_T, 1U> &viewIds);
};

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (bundleAdjustmentValidation.h)
