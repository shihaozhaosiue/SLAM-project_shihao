//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sumprod.cpp
//
// Code generation for function 'sumprod'
//

// Include files
#include "sumprod.h"
#include "combineVectorElements.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <emmintrin.h>

// Function Definitions
void binary_expand_op_14(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         const emlrtRSInfo in2,
                         const coder::array<real_T, 2U> &in3,
                         const coder::array<real_T, 2U> &in4)
{
  coder::array<real_T, 2U> b_in3;
  emlrtStack st;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(1) == 1) {
    loop_ub = in3.size(1);
  } else {
    loop_ub = in4.size(1);
  }
  b_in3.set_size(&yq_emlrtRTEI, &sp, 3, loop_ub);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < loop_ub; i++) {
    __m128d b_r;
    __m128d r1;
    b_r = _mm_loadu_pd(&in3[3 * aux_0_1]);
    r1 = _mm_loadu_pd(&in4[3 * aux_1_1]);
    _mm_storeu_pd(&b_in3[3 * i], _mm_mul_pd(b_r, r1));
    b_in3[3 * i + 2] = in3[3 * aux_0_1 + 2] * in4[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_combineVectorElements(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (sumprod.cpp)
