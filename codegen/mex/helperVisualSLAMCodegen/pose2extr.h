//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// pose2extr.h
//
// Code generation for function 'pose2extr'
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
class rigidtform3d;

class c_rigidtform3d;

class b_rigidtform3d;

} // namespace coder

// Function Declarations
namespace coder {
void pose2extr(const emlrtStack &sp, rigidtform3d &camPose);

void pose2extr(const emlrtStack &sp, c_rigidtform3d &camPose);

void pose2extr(const emlrtStack &sp, b_rigidtform3d &camPose);

} // namespace coder

// End of code generation (pose2extr.h)
