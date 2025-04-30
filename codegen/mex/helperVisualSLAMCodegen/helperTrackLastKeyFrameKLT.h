//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperTrackLastKeyFrameKLT.h
//
// Code generation for function 'helperTrackLastKeyFrameKLT'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct c_helperVisualSLAMCodegenStackD;

namespace coder {
namespace vision {
class PointTracker;

}
class worldpointset;

class binaryFeatures;

class ORBPoints;

class cameraIntrinsics;

class c_rigidtform3d;

} // namespace coder

// Function Declarations
void b_helperTrackLastKeyFrameKLT(
    c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
    coder::vision::PointTracker &tracker, const uint8_T currI[307200],
    const coder::worldpointset &mapPoints,
    const coder::array<cell_wrap_8, 2U> &views_Features,
    const coder::binaryFeatures &currFeatures,
    const coder::ORBPoints &currPoints, real_T lastKeyFrameId,
    const coder::cameraIntrinsics &intrinsics, coder::c_rigidtform3d &currPose,
    coder::array<real_T, 1U> &mapPointIdx,
    coder::array<uint32_T, 1U> &featureIdx);

// End of code generation (helperTrackLastKeyFrameKLT.h)
