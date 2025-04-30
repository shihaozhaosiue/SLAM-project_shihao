//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperAddNewKeyFrame.h
//
// Code generation for function 'helperAddNewKeyFrame'
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

class b_rigidtform3d;

class binaryFeatures;

class ORBPoints;

} // namespace coder

// Function Declarations
void helperAddNewKeyFrame(const emlrtStack &sp, coder::worldpointset &mapPoints,
                          coder::imageviewset &vSetKeyFrames,
                          const coder::b_rigidtform3d &cameraPose,
                          const coder::binaryFeatures &currFeatures,
                          const coder::ORBPoints &currPoints,
                          const coder::array<real_T, 1U> &mapPointsIndices,
                          const coder::array<uint32_T, 1U> &featureIndices,
                          const coder::array<uint32_T, 1U> &keyFramesIndices);

// End of code generation (helperAddNewKeyFrame.h)
