//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solveP3P.h
//
// Code generation for function 'solveP3P'
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
void solveP3P(const emlrtStack &sp, const real_T imagePointsIn[8],
              const real_T worldPointsIn_data[],
              const int32_T worldPointsIn_size[2], const real_T K[9],
              real_T Rs_data[], int32_T Rs_size[3], real_T Ts_data[],
              int32_T Ts_size[2]);

}
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (solveP3P.h)
