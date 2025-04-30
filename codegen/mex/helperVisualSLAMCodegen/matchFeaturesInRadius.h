//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// matchFeaturesInRadius.h
//
// Code generation for function 'matchFeaturesInRadius'
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
class b_binaryFeatures;

class binaryFeatures;

class ORBPoints;

} // namespace coder

// Function Declarations
namespace coder {
void b_matchFeaturesInRadius(const emlrtStack &sp,
                             const b_binaryFeatures &features1,
                             const binaryFeatures &features2,
                             const ORBPoints &points2,
                             const array<real32_T, 2U> &centerPoints,
                             array<uint32_T, 2U> &indexPairs);

void matchFeaturesInRadius(const emlrtStack &sp,
                           const b_binaryFeatures &features1,
                           const binaryFeatures &features2,
                           const array<real32_T, 2U> &points2,
                           const array<real32_T, 2U> &centerPoints,
                           const array<real32_T, 1U> &radius,
                           array<uint32_T, 2U> &indexPairs);

void matchFeaturesInRadius(const emlrtStack &sp,
                           const b_binaryFeatures &features1,
                           const binaryFeatures &features2,
                           const ORBPoints &points2,
                           const array<real32_T, 2U> &centerPoints,
                           array<uint32_T, 2U> &indexPairs);

} // namespace coder

// End of code generation (matchFeaturesInRadius.h)
