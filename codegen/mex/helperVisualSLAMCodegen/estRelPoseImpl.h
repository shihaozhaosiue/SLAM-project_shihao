//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estRelPoseImpl.h
//
// Code generation for function 'estRelPoseImpl'
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
class cameraIntrinsics;

}

// Function Declarations
void b_or(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
          const coder::array<boolean_T, 1U> &in2);

namespace coder {
namespace vision {
namespace internal {
namespace calibration {
real_T chooseRealizableSolution(
    const emlrtStack &sp, const real32_T Rs_data[], const int32_T Rs_size[3],
    const real32_T Ts_data[], const int32_T Ts_size[2],
    const cameraIntrinsics &cameraParams1,
    const cameraIntrinsics &cameraParams2, const array<real32_T, 2U> &points1,
    const array<real32_T, 2U> &points2, real32_T R_data[], int32_T R_size[3],
    real32_T t_data[], int32_T t_size[2]);

boolean_T isFundamentalMatrix(const emlrtStack &sp, const real32_T M[9],
                              const array<real32_T, 2U> &inlierPoints1,
                              const array<real32_T, 2U> &inlierPoints2,
                              const real_T K1[9], const real_T K2[9]);

void triangulateMidPoint(const emlrtStack &sp,
                         const array<real32_T, 2U> &points1,
                         const array<real32_T, 2U> &points2,
                         const real_T P1[12], const real32_T P2[12],
                         array<real32_T, 2U> &points3D);

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (estRelPoseImpl.h)
