//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// div.cpp
//
// Code generation for function 'div'
//

// Include files
#include "div.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
void binary_expand_op_56(const emlrtStack &sp, coder::array<real32_T, 2U> &in1,
                         const real32_T in2_data[], const int32_T in2_size[2],
                         const coder::array<real32_T, 1U> &in3)
{
  int32_T in3_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in3_idx_0 = in3.size(0);
  if (in3_idx_0 == 1) {
    loop_ub = in2_size[0];
  } else {
    loop_ub = in3_idx_0;
  }
  in1.set_size(&ni_emlrtRTEI, &sp, loop_ub, 3);
  stride_0_0 = (in2_size[0] != 1);
  in3_idx_0 = (in3_idx_0 != 1);
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2_data[i1 * stride_0_0 + in2_size[0] * i] / in3[i1 * in3_idx_0];
    }
  }
}

void binary_expand_op_6(const emlrtStack &sp, coder::array<real32_T, 2U> &in1,
                        const coder::array<real32_T, 2U> &in2)
{
  coder::array<real32_T, 2U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  b_in2.set_size(&ni_emlrtRTEI, &sp, loop_ub, 2);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] = in2[i1 * stride_0_0 + in2.size(0) * i] /
                                      in1[i1 * stride_1_0 + in1.size(0) * i];
    }
  }
  in1.set_size(&ni_emlrtRTEI, &sp, loop_ub, 2);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void rdivide(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
             const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(1);
  }
  b_in1.set_size(&ni_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] / in2[i * stride_1_1];
  }
  in1.set_size(&ni_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void rdivide(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
             const coder::array<real32_T, 1U> &in2,
             const coder::array<real32_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&rtb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] / in3[i * stride_1_0];
  }
}

void rdivide(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
             const coder::array<real32_T, 1U> &in2)
{
  coder::array<real32_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&ni_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] / in2[i * stride_1_0];
  }
  in1.set_size(&ni_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (div.cpp)
