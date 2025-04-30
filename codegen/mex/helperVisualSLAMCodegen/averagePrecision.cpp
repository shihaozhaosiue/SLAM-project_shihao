//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// averagePrecision.cpp
//
// Code generation for function 'averagePrecision'
//

// Include files
#include "averagePrecision.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Function Definitions
real_T binary_expand_op_45(const emlrtStack &sp, const emlrtRSInfo in1,
                           const real_T in2_data[], const int32_T &in2_size,
                           const uint32_T in3_data[], const int32_T &in3_size,
                           const coder::array<uint32_T, 1U> &in4)
{
  coder::array<real_T, 1U> c_in2_data;
  emlrtStack st;
  real_T b_in2_data[10];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  if (in3_size == 1) {
    loop_ub = in2_size;
  } else {
    loop_ub = in3_size;
  }
  stride_0_0 = (in2_size != 1);
  stride_1_0 = (in3_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] /
                    static_cast<real_T>(in3_data[i * stride_1_0]);
  }
  c_in2_data.set(&b_in2_data[0], loop_ub);
  st.site = const_cast<emlrtRSInfo *>(&in1);
  return coder::sum(st, c_in2_data) /
         muDoubleScalarMin(10.0, static_cast<real_T>(in4.size(0)));
}

int32_T binary_expand_op_46(real_T in1_data[],
                            const coder::array<real_T, 1U> &in2,
                            const coder::array<boolean_T, 1U> &in3)
{
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    in1_size = in2.size(0);
  } else {
    in1_size = in3.size(0);
  }
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] =
        in2[i * stride_0_0] * static_cast<real_T>(in3[i * stride_1_0]);
  }
  return in1_size;
}

// End of code generation (averagePrecision.cpp)
