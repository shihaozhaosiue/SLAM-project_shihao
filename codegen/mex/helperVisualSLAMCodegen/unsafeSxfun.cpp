//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// unsafeSxfun.cpp
//
// Code generation for function 'unsafeSxfun'
//

// Include files
#include "unsafeSxfun.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo efc_emlrtRTEI{
    383,                             // lineNo
    13,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo ffc_emlrtRTEI{
    382,                             // lineNo
    13,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo gfc_emlrtRTEI{
    381,                             // lineNo
    13,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

// Function Definitions
void binary_expand_op_47(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
                         const coder::array<real32_T, 2U> &in3,
                         const coder::array<real32_T, 3U> &in4)
{
  coder::array<real32_T, 1U> b_in3;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&efc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_0 + in3.size(0) * 2] -
               in4[(i * stride_1_0 + in4.size(0) * 2) + in4.size(0) * 3];
  }
  in1.set_size(&fpb_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    real32_T varargin_1;
    varargin_1 = b_in3[i];
    in1[i] = varargin_1 * varargin_1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void binary_expand_op_48(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
                         const coder::array<real32_T, 2U> &in3,
                         const coder::array<real32_T, 3U> &in4)
{
  coder::array<real32_T, 1U> b_in3;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&ffc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_0 + in3.size(0)] -
               in4[(i * stride_1_0 + in4.size(0)) + in4.size(0) * 3];
  }
  in1.set_size(&epb_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    real32_T varargin_1;
    varargin_1 = b_in3[i];
    in1[i] = varargin_1 * varargin_1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void binary_expand_op_49(const emlrtStack &sp, coder::array<real32_T, 1U> &in1,
                         const coder::array<real32_T, 2U> &in3,
                         const coder::array<real32_T, 3U> &in4)
{
  coder::array<real32_T, 1U> b_in3;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&gfc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_0] - in4[i * stride_1_0 + in4.size(0) * 3];
  }
  in1.set_size(&dpb_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    real32_T varargin_1;
    varargin_1 = b_in3[i];
    in1[i] = varargin_1 * varargin_1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (unsafeSxfun.cpp)
