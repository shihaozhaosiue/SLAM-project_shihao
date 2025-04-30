//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// exhaustiveDistanceMetrics.cpp
//
// Code generation for function 'exhaustiveDistanceMetrics'
//

// Include files
#include "exhaustiveDistanceMetrics.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "cvstCG_ComputeMetric.h"

// Variable Definitions
static emlrtRTEInfo vhb_emlrtRTEI{
    21,                          // lineNo
    9,                           // colNo
    "exhaustiveDistanceMetrics", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\exhaustiveDistanceMetrics.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace matchFeatures {
void exhaustiveDistanceMetrics(const emlrtStack &sp,
                               const array<uint8_T, 2U> &features1,
                               const array<uint8_T, 2U> &features2,
                               real_T numFeatures1, real_T numFeatures2,
                               array<real32_T, 2U> &scores)
{
  array<uint8_T, 2U> b_features1;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> b_r;
  array<uint8_T, 2U> c_features2;
  array<uint8_T, 2U> r1;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &rh_emlrtRSI;
  loop_ub = features1.size(1);
  b_features1.set_size(&sl_emlrtRTEI, &st, features1.size(1), 32);
  for (int32_T i{0}; i < 32; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
      b_features1[loop_ub_tmp + b_features1.size(0) * i] =
          features1[i + 32 * loop_ub_tmp];
    }
  }
  b_loop_ub = features2.size(1);
  c_loop_ub = features2.size(0);
  b_features2.set_size(&tl_emlrtRTEI, &st, features2.size(1),
                       features2.size(0));
  for (int32_T i{0}; i < c_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub; loop_ub_tmp++) {
      b_features2[loop_ub_tmp + b_features2.size(0) * i] =
          features2[i + features2.size(0) * loop_ub_tmp];
    }
  }
  c_features2.set_size(&ul_emlrtRTEI, &st, features2.size(1),
                       features2.size(0));
  loop_ub_tmp = features2.size(0) * features2.size(1);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    c_features2[i] = b_features2[i];
  }
  b_st.site = &sh_emlrtRSI;
  scores.set_size(&vhb_emlrtRTEI, &b_st, static_cast<int32_T>(numFeatures1),
                  static_cast<int32_T>(numFeatures2));
  loop_ub_tmp =
      static_cast<int32_T>(numFeatures1) * static_cast<int32_T>(numFeatures2);
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    scores[i] = 0.0F;
  }
  b_r.set_size(&wl_emlrtRTEI, &b_st, 32, features1.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < 32; loop_ub_tmp++) {
      b_r[loop_ub_tmp + 32 * i] =
          b_features1[i + b_features1.size(0) * loop_ub_tmp];
    }
  }
  r1.set_size(&xl_emlrtRTEI, &b_st, features2.size(0), features2.size(1));
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (loop_ub_tmp = 0; loop_ub_tmp < c_loop_ub; loop_ub_tmp++) {
      r1[loop_ub_tmp + r1.size(0) * i] =
          c_features2[i + c_features2.size(0) * loop_ub_tmp];
    }
  }
  ComputeMetric_hamming_single(&b_r[0], &r1[0], &scores[0],
                               static_cast<uint32_T>(b_features1.size(0)),
                               static_cast<uint32_T>(c_features2.size(0)), 32U);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace matchFeatures
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (exhaustiveDistanceMetrics.cpp)
