//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperAddLoopConnections.h
//
// Code generation for function 'helperAddLoopConnections'
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
namespace coder {
class worldpointset;

class imageviewset;

class binaryFeatures;

} // namespace coder

// Function Declarations
boolean_T helperAddLoopConnections(const emlrtStack &sp,
                                   coder::worldpointset &mapPoints,
                                   coder::imageviewset &vSetKeyFrames,
                                   const uint32_T loopCandidates_data[],
                                   const int32_T loopCandidates_size[2],
                                   real_T currKeyFrameId,
                                   const coder::binaryFeatures &currFeatures);

// End of code generation (helperAddLoopConnections.h)
