//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// evaluateImageRetrieval.h
//
// Code generation for function 'evaluateImageRetrieval'
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
struct c_helperVisualSLAMCodegenStackD;

namespace coder {
class invertedImageIndex;

}

// Function Declarations
namespace coder {
real_T evaluateImageRetrieval(
    c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
    const uint8_T queryImage[307200], invertedImageIndex &imageIndex,
    const array<uint32_T, 1U> &expectedIDs, uint32_T actualIDs_data[],
    int32_T &actualIDs_size, real_T scores_data[], int32_T &scores_size);

}

// End of code generation (evaluateImageRetrieval.h)
