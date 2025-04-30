//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rotationToQuaternion.h
//
// Code generation for function 'rotationToQuaternion'
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

// Function Declarations
void binary_expand_op_23(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         real_T in2, const int32_T in3_size[2]);

namespace coder {
namespace vision {
namespace internal {
namespace quaternion {
void rotationToQuaternion(const emlrtStack &sp, const array<real_T, 3U> &R,
                          array<real_T, 2U> &b_quaternion);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (rotationToQuaternion.h)
