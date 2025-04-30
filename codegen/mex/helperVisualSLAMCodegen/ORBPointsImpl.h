//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ORBPointsImpl.h
//
// Code generation for function 'ORBPointsImpl'
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

// Type Definitions
namespace coder {
class ORBPointsImpl {
public:
  static void validate(const emlrtStack &sp,
                       const array<real32_T, 2U> &inputs_Location,
                       const array<real32_T, 1U> &inputs_Metric,
                       const array<real32_T, 1U> &inputs_Scale,
                       const array<real32_T, 1U> &inputs_Orientation);
  static void checkScale(const emlrtStack &sp,
                         const array<real32_T, 1U> &scale);
  static void checkOrientation(const emlrtStack &sp,
                               const array<real32_T, 1U> &orientation);
};

} // namespace coder

// End of code generation (ORBPointsImpl.h)
