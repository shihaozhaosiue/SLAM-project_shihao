//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperCreateNewMapPoints.h
//
// Code generation for function 'helperCreateNewMapPoints'
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

class cameraIntrinsics;

} // namespace coder

// Function Declarations
void helperCreateNewMapPoints(const emlrtStack &sp,
                              coder::worldpointset &mapPoints,
                              coder::imageviewset &vSetKeyFrames,
                              real_T currKeyFrameId,
                              const coder::cameraIntrinsics &intrinsics,
                              coder::array<real_T, 1U> &recentPointIdx);

// End of code generation (helperCreateNewMapPoints.h)
