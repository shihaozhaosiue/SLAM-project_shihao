//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// computeRigidTransform.h
//
// Code generation for function 'computeRigidTransform'
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

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
void computeRigidTransform(const emlrtStack &sp, const real_T p_data[],
                           const int32_T p_size[2], const real_T q[9],
                           real_T R_data[], int32_T R_size[2], real_T t[3]);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (computeRigidTransform.h)
