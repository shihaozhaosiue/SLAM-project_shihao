//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperTrackLocalMapCg.h
//
// Code generation for function 'helperTrackLocalMapCg'
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

class c_rigidtform3d;

class binaryFeatures;

class ORBPoints;

class cameraIntrinsics;

} // namespace coder

// Function Declarations
void b_lt(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
          const coder::array<real32_T, 1U> &in2,
          const coder::array<real32_T, 1U> &in3);

void gt(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
        const coder::array<real32_T, 1U> &in2,
        const coder::array<real32_T, 1U> &in3);

boolean_T helperTrackLocalMapCg(
    const emlrtStack &sp, const coder::worldpointset &mapPoints,
    const coder::imageviewset &vSetKeyFrames,
    coder::array<real_T, 1U> &mapPointIdx,
    coder::array<uint32_T, 1U> &featureIdx, coder::c_rigidtform3d &currPose,
    const coder::binaryFeatures &currFeatures,
    const coder::ORBPoints &currPoints,
    const coder::cameraIntrinsics &intrinsics, boolean_T newKeyFrameAdded,
    real_T lastKeyFrameIndex, real_T currFrameIndex,
    real_T &numPointsRefKeyFrame, coder::array<real_T, 1U> &localPointsIndices,
    coder::array<uint32_T, 1U> &localKeyFrameIdsInternal,
    coder::array<uint32_T, 1U> &localKeyFrameIds);

// End of code generation (helperTrackLocalMapCg.h)
