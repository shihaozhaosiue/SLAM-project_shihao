//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// convertInputDataFormat.h
//
// Code generation for function 'convertInputDataFormat'
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
namespace vision {
namespace internal {
namespace bundleAdjust {
real_T convertInputDataFormat(const emlrtStack &sp,
                              const c_rigidtform3d &cameraPoses,
                              const cameraIntrinsics *intrinsics,
                              real_T cameraMatrices[6],
                              real_T quaternionBases[4],
                              real_T intrinsicsStruct_focalLength[2],
                              real_T intrinsicsStruct_principalPoint[2],
                              real_T c_intrinsicsStruct_radialDistor[],
                              int32_T d_intrinsicsStruct_radialDistor[2],
                              real_T c_intrinsicsStruct_tangentialDi[],
                              int32_T d_intrinsicsStruct_tangentialDi[2]);

void mtimesPage(const emlrtStack &sp, const array<real_T, 3U> &x,
                const array<real_T, 3U> &y, array<real_T, 3U> &mtimes);

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (convertInputDataFormat.h)
