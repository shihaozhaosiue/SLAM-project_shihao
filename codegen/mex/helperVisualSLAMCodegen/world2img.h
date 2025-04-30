//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// world2img.h
//
// Code generation for function 'world2img'
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

class b_rigidtform3d;

} // namespace coder

// Function Declarations
namespace coder {
void b_world2img(const emlrtStack &sp, const real32_T worldPoints[3],
                 const b_rigidtform3d &varargin_1,
                 const cameraIntrinsics &varargin_2, real32_T varargout_1[2]);

void world2img(const emlrtStack &sp, const array<real32_T, 2U> &worldPoints,
               const c_rigidtform3d &varargin_1,
               const cameraIntrinsics &varargin_2,
               array<real32_T, 2U> &varargout_1,
               array<boolean_T, 1U> &varargout_2);

} // namespace coder

// End of code generation (world2img.h)
