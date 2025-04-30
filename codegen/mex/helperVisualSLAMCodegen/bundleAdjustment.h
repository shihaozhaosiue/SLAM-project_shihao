//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// bundleAdjustment.h
//
// Code generation for function 'bundleAdjustment'
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
class pointTrack;

class table;

class cameraIntrinsics;

class worldpointset;

class imageviewset;

} // namespace coder

// Function Declarations
namespace coder {
void bundleAdjustment(const emlrtStack &sp,
                      const array<real32_T, 2U> &varargin_1,
                      const pointTrack &varargin_2, const table &varargin_3,
                      cameraIntrinsics *varargin_4,
                      array<real32_T, 2U> &varargout_1, table &varargout_2);

void bundleAdjustment(const emlrtStack &sp, const worldpointset &varargin_1,
                      const imageviewset &varargin_2,
                      const array<uint32_T, 1U> &varargin_3,
                      cameraIntrinsics *varargin_4,
                      const uint32_T varargin_6_data[], int32_T varargin_6_size,
                      imageviewset &varargout_2, array<real_T, 1U> &varargout_3,
                      worldpointset &varargout_1);

} // namespace coder

// End of code generation (bundleAdjustment.h)
