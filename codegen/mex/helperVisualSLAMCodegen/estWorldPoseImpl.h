//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estWorldPoseImpl.h
//
// Code generation for function 'estWorldPoseImpl'
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

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
void solveCameraPose(const emlrtStack &sp, const real_T points_data[],
                     const int32_T points_size[2], const real_T varargin_1[9],
                     real_T pose_R[9], real_T pose_t[3]);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (estWorldPoseImpl.h)
