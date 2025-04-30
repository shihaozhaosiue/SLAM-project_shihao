//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateAndParseInputs1.h
//
// Code generation for function 'validateAndParseInputs1'
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

class sparse;

class b_rigidtform3d;

class c_rigidtform3d;

class b_sparse;

class worldpointset;

class imageviewset;

} // namespace coder

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace bundleAdjust {
int32_T validateAndParseInputs(
    const emlrtStack &sp, const array<real32_T, 2U> &varargin_1,
    const pointTrack &varargin_2, const table &varargin_3,
    cameraIntrinsics **varargin_4, array<real_T, 2U> &xyzPoints,
    array<real_T, 2U> &measurements, sparse &visibility,
    uint32_T cameraPoses_ViewId_data[],
    b_rigidtform3d &cameraPoses_AbsolutePose,
    char_T cameraPoses_VariableNames_f1[6],
    char_T cameraPoses_VariableNames_f2[12], real_T fixedCameraIndex_data[],
    int32_T &fixedCameraIndex_size);

int32_T validateAndParseInputs(
    const emlrtStack &sp, const worldpointset &varargin_1,
    const imageviewset &varargin_2, const array<uint32_T, 1U> &varargin_3,
    cameraIntrinsics **varargin_4, const uint32_T varargin_6_data[],
    int32_T varargin_6_size, array<real_T, 2U> &xyzPoints,
    array<real_T, 2U> &measurements, sparse &visibility,
    array<uint32_T, 1U> &cameraPoses_ViewId,
    b_rigidtform3d &cameraPoses_AbsolutePose, real_T fixedCameraIndex_data[],
    array<real_T, 1U> &varargout_3);

void validateAndParseInputs(
    const emlrtStack &sp, const array<real32_T, 2U> &varargin_1,
    const array<real32_T, 2U> &varargin_2, const c_rigidtform3d &varargin_3,
    cameraIntrinsics **varargin_4, array<real_T, 2U> &xyzPoints,
    array<real_T, 2U> &measurements, b_sparse &visibility);

} // namespace bundleAdjust
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (validateAndParseInputs1.h)
