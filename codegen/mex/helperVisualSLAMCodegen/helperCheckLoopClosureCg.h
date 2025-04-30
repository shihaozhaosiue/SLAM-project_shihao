//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperCheckLoopClosureCg.h
//
// Code generation for function 'helperCheckLoopClosureCg'
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
struct c_helperVisualSLAMCodegenStackD;

namespace coder {
class imageviewset;

class invertedImageIndex;

} // namespace coder

// Function Declarations
boolean_T helperCheckLoopClosureCg(
    c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
    const coder::imageviewset &vSetKeyFrames, real_T currKeyframeId,
    coder::invertedImageIndex &imageDatabase, const uint8_T currImg[307200],
    uint32_T loopKeyFrameIds_data[], int32_T loopKeyFrameIds_size[2]);

// End of code generation (helperCheckLoopClosureCg.h)
