//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cvalgMatchFeatures.h
//
// Code generation for function 'cvalgMatchFeatures'
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
namespace matchFeatures {
void b_findNearestNeighbors(const emlrtStack &sp,
                            const array<real32_T, 2U> &scores,
                            array<uint32_T, 2U> &indexPairs,
                            array<real32_T, 2U> &topTwoMetrics);

void c_findNearestNeighbors(const emlrtStack &sp,
                            const array<real32_T, 2U> &scores,
                            array<uint32_T, 2U> &indexPairs,
                            array<real32_T, 2U> &topTwoMetrics);

void cvalgMatchFeatures(const emlrtStack &sp,
                        const array<uint8_T, 2U> &features1in,
                        array<uint8_T, 2U> &features2in,
                        array<uint32_T, 2U> &indexPairs,
                        array<real32_T, 1U> &matchMetric);

void exhaustiveSearch(const emlrtStack &sp, const array<uint8_T, 2U> &features1,
                      const array<uint8_T, 2U> &features2,
                      real32_T matchThreshold, uint32_T N1, uint32_T N2,
                      array<uint32_T, 2U> &indexPairs,
                      array<real32_T, 2U> &matchMetric);

} // namespace matchFeatures
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (cvalgMatchFeatures.h)
