//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// FeaturePointsImpl.h
//
// Code generation for function 'FeaturePointsImpl'
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
class FeaturePointsImpl {
public:
  static void checkLocation(const emlrtStack &sp,
                            const array<real32_T, 2U> &location);
  static void checkMetric(const emlrtStack &sp,
                          const array<real32_T, 1U> &metric);
  static void selectPoints(const emlrtStack &sp,
                           const array<real32_T, 2U> &points,
                           const array<real32_T, 1U> &metric, real_T numPoints,
                           array<boolean_T, 1U> &pointsIdx);
  static void b_checkLocation(const emlrtStack &sp,
                              const array<real32_T, 2U> &location);
};

} // namespace coder

// End of code generation (FeaturePointsImpl.h)
