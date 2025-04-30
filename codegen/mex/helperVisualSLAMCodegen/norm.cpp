//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// norm.cpp
//
// Code generation for function 'norm'
//

// Include files
#include "norm.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "xzsvdc.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>

// Function Definitions
namespace coder {
real32_T b_norm(const emlrtStack &sp, const real32_T x_data[],
                const int32_T x_size[2])
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real32_T A_data[20];
  real32_T s_data[4];
  real32_T superb_data[3];
  real32_T y;
  boolean_T MATRIX_INPUT_AND_P_IS_TWO;
  boolean_T VECTOR_INPUT_AND_P_IS_NUMERIC;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  VECTOR_INPUT_AND_P_IS_NUMERIC = false;
  MATRIX_INPUT_AND_P_IS_TWO = false;
  if ((x_size[0] == 1) || (x_size[1] == 1)) {
    VECTOR_INPUT_AND_P_IS_NUMERIC = true;
  } else {
    MATRIX_INPUT_AND_P_IS_TWO = true;
  }
  if ((x_size[0] == 0) || (x_size[1] == 0)) {
    y = 0.0F;
  } else if (MATRIX_INPUT_AND_P_IS_TWO) {
    int32_T i;
    int32_T m_tmp;
    st.site = &hp_emlrtRSI;
    m_tmp = x_size[0];
    i = x_size[1];
    y = 0.0F;
    b_st.site = &ut_emlrtRSI;
    for (int32_T j{0}; j < i; j++) {
      b_st.site = &vt_emlrtRSI;
      for (int32_T b_i{0}; b_i < m_tmp; b_i++) {
        real32_T absx;
        absx = muSingleScalarAbs(x_data[b_i + x_size[0] * j]);
        if (muSingleScalarIsNaN(absx) || (absx > y)) {
          y = absx;
        }
      }
    }
    if ((!muSingleScalarIsInf(y)) && (!muSingleScalarIsNaN(y))) {
      b_st.site = &ip_emlrtRSI;
      c_st.site = &jp_emlrtRSI;
      d_st.site = &kp_emlrtRSI;
      e_st.site = &km_emlrtRSI;
      m_tmp = x_size[0] * x_size[1];
      std::copy(&x_data[0], &x_data[m_tmp], &A_data[0]);
      n_t = LAPACKE_sgesvd(
          102, 'N', 'N', (ptrdiff_t)x_size[0], (ptrdiff_t)x_size[1], &A_data[0],
          (ptrdiff_t)x_size[0], &s_data[0], nullptr, (ptrdiff_t)1, nullptr,
          (ptrdiff_t)1, &superb_data[0]);
      f_st.site = &lm_emlrtRSI;
      if ((int32_T)n_t < 0) {
        if ((int32_T)n_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&f_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&f_st, &gb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv1[0], 12, (int32_T)n_t);
        }
      }
      if ((int32_T)n_t > 0) {
        emlrtErrorWithMessageIdR2018a(&c_st, &eb_emlrtRTEI,
                                      "Coder:MATLAB:svd_NoConvergence",
                                      "Coder:MATLAB:svd_NoConvergence", 0);
      }
      y = s_data[0];
    }
  } else if (VECTOR_INPUT_AND_P_IS_NUMERIC) {
    n_t = (ptrdiff_t)(x_size[0] * x_size[1]);
    incx_t = (ptrdiff_t)1;
    y = snrm2(&n_t, (real32_T *)&x_data[0], &incx_t);
  } else {
    y = rtNaNF;
  }
  return y;
}

real_T b_norm(const real_T x[6])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k{0}; k < 6; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real_T b_norm(const emlrtStack &sp, const real_T x[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T b_x[9];
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  y = 0.0;
  for (int32_T i{0}; i < 9; i++) {
    real_T absx;
    absx = muDoubleScalarAbs(x[i]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }
  if ((!muDoubleScalarIsInf(y)) && (!muDoubleScalarIsNaN(y))) {
    real_T s[3];
    b_st.site = &ip_emlrtRSI;
    c_st.site = &jp_emlrtRSI;
    d_st.site = &kp_emlrtRSI;
    std::copy(&x[0], &x[9], &b_x[0]);
    e_st.site = &lp_emlrtRSI;
    internal::reflapack::xzsvdc(e_st, b_x, s);
    y = s[0];
  }
  return y;
}

real32_T b_norm(const real32_T x[3])
{
  real32_T absxk;
  real32_T scale;
  real32_T t;
  real32_T y;
  scale = 1.29246971E-26F;
  absxk = muSingleScalarAbs(x[0]);
  if (absxk > 1.29246971E-26F) {
    y = 1.0F;
    scale = absxk;
  } else {
    t = absxk / 1.29246971E-26F;
    y = t * t;
  }
  absxk = muSingleScalarAbs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0F;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }
  absxk = muSingleScalarAbs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0F;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }
  return scale * muSingleScalarSqrt(y);
}

real32_T b_norm(const emlrtStack &sp, const real32_T x[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  y = 0.0F;
  for (int32_T i{0}; i < 9; i++) {
    real32_T absx;
    absx = muSingleScalarAbs(x[i]);
    if (muSingleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }
  if ((!muSingleScalarIsInf(y)) && (!muSingleScalarIsNaN(y))) {
    real32_T b_x[9];
    b_st.site = &ip_emlrtRSI;
    c_st.site = &jp_emlrtRSI;
    d_st.site = &kp_emlrtRSI;
    for (int32_T i1{0}; i1 < 9; i1++) {
      b_x[i1] = x[i1];
    }
    real32_T s[3];
    e_st.site = &lp_emlrtRSI;
    internal::reflapack::xzsvdc(e_st, b_x, s);
    y = s[0];
  }
  return y;
}

real32_T c_norm(const real32_T x_data[])
{
  int32_T j;
  real32_T y;
  boolean_T exitg1;
  y = 0.0F;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    real32_T s;
    s = ((muSingleScalarAbs(x_data[4 * j]) +
          muSingleScalarAbs(x_data[4 * j + 1])) +
         muSingleScalarAbs(x_data[4 * j + 2])) +
        muSingleScalarAbs(x_data[4 * j + 3]);
    if (muSingleScalarIsNaN(s)) {
      y = rtNaNF;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }
      j++;
    }
  }
  return y;
}

real_T c_norm(const emlrtStack &sp, const real_T x[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T b_x[16];
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  y = 0.0;
  for (int32_T i{0}; i < 16; i++) {
    real_T absx;
    absx = muDoubleScalarAbs(x[i]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }
  if ((!muDoubleScalarIsInf(y)) && (!muDoubleScalarIsNaN(y))) {
    real_T s[4];
    b_st.site = &ip_emlrtRSI;
    c_st.site = &jp_emlrtRSI;
    d_st.site = &kp_emlrtRSI;
    std::copy(&x[0], &x[16], &b_x[0]);
    e_st.site = &lp_emlrtRSI;
    internal::reflapack::b_xzsvdc(e_st, b_x, s);
    y = s[0];
  }
  return y;
}

real32_T c_norm(const emlrtStack &sp, const real32_T x[16])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real32_T b_x[16];
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  y = 0.0F;
  for (int32_T i{0}; i < 16; i++) {
    real32_T absx;
    absx = muSingleScalarAbs(x[i]);
    if (muSingleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }
  if ((!muSingleScalarIsInf(y)) && (!muSingleScalarIsNaN(y))) {
    real32_T s[4];
    b_st.site = &ip_emlrtRSI;
    c_st.site = &jp_emlrtRSI;
    d_st.site = &kp_emlrtRSI;
    std::copy(&x[0], &x[16], &b_x[0]);
    e_st.site = &lp_emlrtRSI;
    internal::reflapack::b_xzsvdc(e_st, b_x, s);
    y = s[0];
  }
  return y;
}

real32_T d_norm(const emlrtStack &sp, const real32_T x_data[])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real32_T A_data[16];
  real32_T s_data[4];
  real32_T superb_data[3];
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  y = 0.0F;
  for (int32_T j{0}; j < 4; j++) {
    b_st.site = &vt_emlrtRSI;
    for (int32_T i{0}; i < 4; i++) {
      real32_T absx;
      absx = muSingleScalarAbs(x_data[i + 4 * j]);
      if (muSingleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }
    }
  }
  if ((!muSingleScalarIsInf(y)) && (!muSingleScalarIsNaN(y))) {
    ptrdiff_t info_t;
    b_st.site = &ip_emlrtRSI;
    c_st.site = &jp_emlrtRSI;
    d_st.site = &kp_emlrtRSI;
    e_st.site = &km_emlrtRSI;
    std::copy(&x_data[0], &x_data[16], &A_data[0]);
    info_t =
        LAPACKE_sgesvd(102, 'N', 'N', (ptrdiff_t)4, (ptrdiff_t)4, &A_data[0],
                       (ptrdiff_t)4, &s_data[0], nullptr, (ptrdiff_t)1, nullptr,
                       (ptrdiff_t)1, &superb_data[0]);
    f_st.site = &lm_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&f_st, &gb_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      14, &cv1[0], 12, (int32_T)info_t);
      }
    }
    if ((int32_T)info_t > 0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &eb_emlrtRTEI,
                                    "Coder:MATLAB:svd_NoConvergence",
                                    "Coder:MATLAB:svd_NoConvergence", 0);
    }
    y = s_data[0];
  }
  return y;
}

} // namespace coder

// End of code generation (norm.cpp)
