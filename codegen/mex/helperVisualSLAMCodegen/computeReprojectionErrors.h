//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// computeReprojectionErrors.h
//
// Code generation for function 'computeReprojectionErrors'
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
class b_sparse;

}

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
void computeReprojectionErrors(const emlrtStack &sp, const b_sparse &visibility,
                               const array<real_T, 2U> &curMeanErr,
                               array<real32_T, 1U> &reprojectionErrors);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (computeReprojectionErrors.h)
