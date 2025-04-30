//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estimateEssentialMatrix.h
//
// Code generation for function 'estimateEssentialMatrix'
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
class cameraIntrinsics;

}
struct cell_wrap_92;

// Function Declarations
namespace coder {
void computeCoefficients(const real_T E1[9], const real_T E2[9],
                         const real_T E3[9], const real_T E4[9], real_T C1[100],
                         real_T C2[100], real_T C3[100], real_T C4[100]);

void estimateEssentialMatrix(const emlrtStack &sp,
                             const array<real32_T, 2U> &matchedPoints1,
                             const array<real32_T, 2U> &matchedPoints2,
                             const cameraIntrinsics &varargin_1,
                             real_T E_data[], int32_T E_size[2],
                             array<boolean_T, 1U> &inlierIdx);

void evalEssential(const emlrtStack &sp, const cell_wrap_92 Es_data[],
                   const int32_T Es_size[2], const array<real_T, 3U> &x,
                   const real_T varargin_1[9], const real_T varargin_2[9],
                   array<real_T, 2U> &distances);

void fivePointAlgorithm(const emlrtStack &sp, const array<real_T, 3U> &x,
                        cell_wrap_92 Es_data[], int32_T Es_size[2]);

void polyeig4(const emlrtStack &sp, const real_T A0[100], const real_T A1[100],
              const real_T A2[100], const real_T A3[100], const real_T E1[9],
              const real_T E2[9], const real_T E3[9], const real_T E4[9],
              cell_wrap_92 Es_data[], int32_T Es_size[2]);

} // namespace coder

// End of code generation (estimateEssentialMatrix.h)
