//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparseBA.h
//
// Code generation for function 'sparseBA'
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
class b_rigidtform3d;

}

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace bundleAdjust {
void inOutTypeMatchPreConjugate(const emlrtStack &sp, const real32_T R[9],
                                const real32_T t[3],
                                b_rigidtform3d &refinedPose);

}
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (sparseBA.h)
