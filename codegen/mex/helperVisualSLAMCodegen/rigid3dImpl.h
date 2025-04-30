//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rigid3dImpl.h
//
// Code generation for function 'rigid3dImpl'
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

// Type Definitions
namespace coder {
namespace images {
namespace internal {
class rigid3dImpl {
public:
  static void validateRotationMatrix(const emlrtStack &sp,
                                     const real32_T rot[9]);
  static void validateTranslationVector(const emlrtStack &sp,
                                        const real32_T trans[3]);
};

} // namespace internal
} // namespace images
} // namespace coder

// End of code generation (rigid3dImpl.h)
