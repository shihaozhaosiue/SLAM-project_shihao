//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cameraIntrinsicsArray.h
//
// Code generation for function 'cameraIntrinsicsArray'
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

// Type Definitions
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
class cameraIntrinsicsArray {
public:
  array<real_T, 2U> FocalLength;
  array<real_T, 2U> PrincipalPoint;
  array<real_T, 2U> ImageSize;
  array<real_T, 2U> RadialDistortion;
  array<real_T, 2U> TangentialDistortion;
  array<real_T, 2U> Skew;
};

} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (cameraIntrinsicsArray.h)
