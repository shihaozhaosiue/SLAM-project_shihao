//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// averagePrecision.h
//
// Code generation for function 'averagePrecision'
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
real_T binary_expand_op_45(const emlrtStack &sp, const emlrtRSInfo in1,
                           const real_T in2_data[], const int32_T &in2_size,
                           const uint32_T in3_data[], const int32_T &in3_size,
                           const coder::array<uint32_T, 1U> &in4);

int32_T binary_expand_op_46(real_T in1_data[],
                            const coder::array<real_T, 1U> &in2,
                            const coder::array<boolean_T, 1U> &in3);

// End of code generation (averagePrecision.h)
