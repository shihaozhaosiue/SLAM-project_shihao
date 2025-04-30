//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bundleAdjustmentMotion.h
//
// Code generation for function 'bundleAdjustmentMotion'
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
class c_rigidtform3d;

class cameraIntrinsics;

} // namespace coder

// Function Declarations
namespace coder {
void b_bundleAdjustmentMotion(const emlrtStack &sp,
                              const array<real32_T, 2U> &varargin_1,
                              const array<real32_T, 2U> &varargin_2,
                              const c_rigidtform3d &varargin_3,
                              const cameraIntrinsics *varargin_4,
                              c_rigidtform3d &refinedPose);

void bundleAdjustmentMotion(const emlrtStack &sp,
                            const array<real32_T, 2U> &varargin_1,
                            const array<real32_T, 2U> &varargin_2,
                            const c_rigidtform3d &varargin_3,
                            const cameraIntrinsics *varargin_4,
                            c_rigidtform3d &refinedPose);

} // namespace coder

// End of code generation (bundleAdjustmentMotion.h)
