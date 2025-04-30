//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// det.cpp
//
// Code generation for function 'det'
//

// Include files
#include "det.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "xzgetrf.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>

// Variable Definitions
static emlrtRTEInfo jb_emlrtRTEI{
    12,    // lineNo
    15,    // colNo
    "det", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m" // pName
};

// Function Definitions
namespace coder {
real32_T b_det(const emlrtStack &sp, const real32_T x[16])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ipiv[4];
  real32_T b_x[16];
  real32_T y;
  boolean_T isodd;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uo_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::copy(&x[0], &x[16], &b_x[0]);
  b_st.site = &yp_emlrtRSI;
  internal::reflapack::b_xzgetrf(b_st, b_x, ipiv);
  isodd = (ipiv[0] > 1);
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }
  y = b_x[0] * b_x[5] * b_x[10] * b_x[15];
  if (ipiv[2] > 3) {
    isodd = !isodd;
  }
  if (isodd) {
    y = -y;
  }
  return y;
}

real32_T det(const emlrtStack &sp, const real32_T x_data[],
             const int32_T x_size[2])
{
  ptrdiff_t ipiv_t_data[4];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real32_T b_x_data[16];
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (x_size[0] != x_size[1]) {
    emlrtErrorWithMessageIdR2018a(&sp, &jb_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x_size[0] == 0) || (x_size[1] == 0)) {
    y = 1.0F;
  } else {
    ptrdiff_t info_t;
    int32_T ipiv_data[4];
    int32_T loop_ub_tmp;
    int32_T x_size_idx_0;
    boolean_T isodd;
    st.site = &uo_emlrtRSI;
    x_size_idx_0 = x_size[0];
    loop_ub_tmp = x_size[0] * x_size[1];
    std::copy(&x_data[0], &x_data[loop_ub_tmp], &b_x_data[0]);
    b_st.site = &vo_emlrtRSI;
    loop_ub_tmp = muIntScalarMin_sint32(x_size[0], x_size[1]);
    info_t = LAPACKE_sgetrf_work(102, (ptrdiff_t)x_size[0],
                                 (ptrdiff_t)x_size[1], &b_x_data[0],
                                 (ptrdiff_t)x_size[0], &ipiv_t_data[0]);
    c_st.site = &wo_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv2[0], 12, (int32_T)info_t);
      }
    }
    for (int32_T k{0}; k < loop_ub_tmp; k++) {
      ipiv_data[k] = (int32_T)ipiv_t_data[k];
    }
    y = b_x_data[0];
    for (int32_T k{0}; k <= x_size_idx_0 - 2; k++) {
      y *= b_x_data[(k + x_size_idx_0 * (k + 1)) + 1];
    }
    isodd = false;
    for (int32_T k{0}; k <= loop_ub_tmp - 2; k++) {
      if (ipiv_data[k] > k + 1) {
        isodd = !isodd;
      }
    }
    if (isodd) {
      y = -y;
    }
  }
  return y;
}

real_T det(const emlrtStack &sp, const real_T x_data[], const int32_T x_size[2])
{
  static const char_T fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 't', 'r', 'f',
                                '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t ipiv_t_data[3];
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_x_data[15];
  real_T y;
  int32_T ipiv_data[3];
  boolean_T isodd;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (x_size[0] != 3) {
    emlrtErrorWithMessageIdR2018a(&sp, &jb_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  st.site = &uo_emlrtRSI;
  std::copy(&x_data[0], &x_data[9], &b_x_data[0]);
  b_st.site = &vo_emlrtRSI;
  info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)3, (ptrdiff_t)3, &b_x_data[0],
                               (ptrdiff_t)3, &ipiv_t_data[0]);
  c_st.site = &wo_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    19, &fname[0], 12, (int32_T)info_t);
    }
  }
  for (int32_T k{0}; k < 3; k++) {
    ipiv_data[k] = (int32_T)ipiv_t_data[k];
  }
  y = b_x_data[0];
  isodd = false;
  for (int32_T k{0}; k < 2; k++) {
    y *= b_x_data[(k + 3 * (k + 1)) + 1];
    if (ipiv_data[k] > k + 1) {
      isodd = !isodd;
    }
  }
  if (isodd) {
    y = -y;
  }
  return y;
}

real32_T det(const emlrtStack &sp, const real32_T x[9])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ipiv[3];
  real32_T b_x[9];
  real32_T y;
  boolean_T isodd;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uo_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (int32_T info{0}; info < 9; info++) {
    b_x[info] = x[info];
  }
  b_st.site = &yp_emlrtRSI;
  internal::reflapack::xzgetrf(b_st, b_x, ipiv);
  isodd = (ipiv[0] > 1);
  y = b_x[0] * b_x[4] * b_x[8];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }
  if (isodd) {
    y = -y;
  }
  return y;
}

} // namespace coder

// End of code generation (det.cpp)
