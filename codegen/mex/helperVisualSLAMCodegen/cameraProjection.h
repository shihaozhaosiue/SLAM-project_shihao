//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cameraProjection.h
//
// Code generation for function 'cameraProjection'
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

// Type Declarations
namespace coder {
class cameraIntrinsics;

class b_rigidtform3d;

} // namespace coder

// Function Declarations
namespace coder {
void cameraProjection(const emlrtStack &sp, const cameraIntrinsics &intrinsics,
                      real_T camMatrix[12]);

void cameraProjection(const emlrtStack &sp, const cameraIntrinsics &intrinsics,
                      const b_rigidtform3d &tform, real32_T camMatrix[12]);

} // namespace coder

// End of code generation (cameraProjection.h)
