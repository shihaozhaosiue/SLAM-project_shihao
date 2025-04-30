//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estrelpose.h
//
// Code generation for function 'estrelpose'
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
class projtform2d;

class cameraIntrinsics;

class rigidtform3d;

} // namespace coder

// Function Declarations
namespace coder {
real_T estrelpose(const emlrtStack &sp, const real32_T M[9],
                  const cameraIntrinsics &varargin_1,
                  const array<real32_T, 2U> &varargin_2,
                  const array<real32_T, 2U> &varargin_3, rigidtform3d &relPose);

real_T estrelpose(const emlrtStack &sp, const projtform2d M,
                  const cameraIntrinsics &varargin_1,
                  const array<real32_T, 2U> &varargin_2,
                  const array<real32_T, 2U> &varargin_3, rigidtform3d &relPose);

} // namespace coder

// End of code generation (estrelpose.h)
