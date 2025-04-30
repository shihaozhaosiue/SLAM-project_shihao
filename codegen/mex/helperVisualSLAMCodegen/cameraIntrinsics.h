//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cameraIntrinsics.h
//
// Code generation for function 'cameraIntrinsics'
//

#pragma once

// Include files
#include "ImageTransformer.h"
#include "cameraIntrinsicsArray.h"
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
class b_cameraIntrinsics;

}

// Type Definitions
namespace coder {
class cameraIntrinsics {
public:
  cameraIntrinsics *init(const emlrtStack &sp);
  b_cameraIntrinsics *parenReference(const emlrtStack &sp, real_T idx,
                                     b_cameraIntrinsics &iobj_0) const;
  static b_cameraIntrinsics *makeEmpty(const emlrtStack &sp,
                                       b_cameraIntrinsics &iobj_0);
  real_T FocalLength[2];
  real_T PrincipalPoint[2];
  real_T ImageSize[2];
  real_T RadialDistortion[2];
  real_T TangentialDistortion[2];
  real_T Skew;
  real_T K[9];
  array<vision::internal::codegen::cameraIntrinsicsArray, 2U>
      cameraIntrinsicsArrayData;

protected:
  vision::internal::calibration::ImageTransformer UndistortMap;
};

class b_cameraIntrinsics {
public:
  array<real_T, 2U> FocalLength;
  array<real_T, 2U> PrincipalPoint;
  array<real_T, 2U> ImageSize;
  array<real_T, 2U> RadialDistortion;
  array<real_T, 2U> TangentialDistortion;
  array<real_T, 2U> Skew;
  real_T K[9];
  array<vision::internal::codegen::cameraIntrinsicsArray, 2U>
      cameraIntrinsicsArrayData;

protected:
  vision::internal::calibration::ImageTransformer UndistortMap;
};

} // namespace coder

// End of code generation (cameraIntrinsics.h)
