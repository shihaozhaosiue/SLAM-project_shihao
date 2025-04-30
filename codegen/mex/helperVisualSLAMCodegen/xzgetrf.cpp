//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xzgetrf.cpp
//
// Code generation for function 'xzgetrf'
//

// Include files
#include "xzgetrf.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Function Definitions
namespace coder {
namespace internal {
namespace reflapack {
int32_T b_xzgetrf(const emlrtStack &sp, real_T A[16], int32_T ipiv[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T info;
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
  _mm_storeu_si128(
      (__m128i *)&ipiv[0],
      _mm_add_epi32(_mm_set1_epi32(1),
                    _mm_add_epi32(_mm_set1_epi32(0),
                                  _mm_loadu_si128((const __m128i *)&iv3[0]))));
  info = 0;
  for (int32_T j{0}; j < 3; j++) {
    real_T smax;
    int32_T a;
    int32_T b_tmp;
    int32_T jA;
    int32_T jp1j;
    int32_T mmj_tmp;
    mmj_tmp = 2 - j;
    b_tmp = j * 5;
    jp1j = b_tmp + 2;
    jA = 5 - j;
    st.site = &qg_emlrtRSI;
    b_st.site = &tg_emlrtRSI;
    a = 0;
    smax = muDoubleScalarAbs(A[b_tmp]);
    c_st.site = &ug_emlrtRSI;
    for (int32_T k{2}; k < jA; k++) {
      real_T s;
      s = muDoubleScalarAbs(A[(b_tmp + k) - 1]);
      if (s > smax) {
        a = k - 1;
        smax = s;
      }
    }
    if (A[b_tmp + a] != 0.0) {
      if (a != 0) {
        jA = j + a;
        ipiv[j] = jA + 1;
        smax = A[j];
        A[j] = A[jA];
        A[jA] = smax;
        smax = A[j + 4];
        A[j + 4] = A[jA + 4];
        A[jA + 4] = smax;
        smax = A[j + 8];
        A[j + 8] = A[jA + 8];
        A[jA + 8] = smax;
        smax = A[j + 12];
        A[j + 12] = A[jA + 12];
        A[jA + 12] = smax;
      }
      jA = (b_tmp - j) + 4;
      st.site = &rg_emlrtRSI;
      for (a = jp1j; a <= jA; a++) {
        A[a - 1] /= A[b_tmp];
      }
    } else {
      info = j + 1;
    }
    st.site = &sg_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    c_st.site = &wg_emlrtRSI;
    d_st.site = &xg_emlrtRSI;
    jA = b_tmp + 6;
    e_st.site = &yg_emlrtRSI;
    for (jp1j = 0; jp1j <= mmj_tmp; jp1j++) {
      smax = A[(b_tmp + (jp1j << 2)) + 4];
      if (smax != 0.0) {
        a = (jA - j) + 2;
        e_st.site = &ah_emlrtRSI;
        if ((jA <= a) && (a > 2147483646)) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (int32_T k{jA}; k <= a; k++) {
          A[k - 1] += A[((b_tmp + k) - jA) + 1] * -smax;
        }
      }
      jA += 4;
    }
  }
  if ((info == 0) && (!(A[15] != 0.0))) {
    info = 4;
  }
  return info;
}

int32_T b_xzgetrf(const emlrtStack &sp, real32_T A[16], int32_T ipiv[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T info;
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
  _mm_storeu_si128(
      (__m128i *)&ipiv[0],
      _mm_add_epi32(_mm_set1_epi32(1),
                    _mm_add_epi32(_mm_set1_epi32(0),
                                  _mm_loadu_si128((const __m128i *)&iv3[0]))));
  info = 0;
  for (int32_T j{0}; j < 3; j++) {
    int32_T a;
    int32_T b_tmp;
    int32_T jA;
    int32_T jp1j;
    int32_T mmj_tmp;
    real32_T smax;
    mmj_tmp = 2 - j;
    b_tmp = j * 5;
    jp1j = b_tmp + 2;
    jA = 5 - j;
    st.site = &qg_emlrtRSI;
    b_st.site = &tg_emlrtRSI;
    a = 0;
    smax = muSingleScalarAbs(A[b_tmp]);
    c_st.site = &ug_emlrtRSI;
    for (int32_T k{2}; k < jA; k++) {
      real32_T s;
      s = muSingleScalarAbs(A[(b_tmp + k) - 1]);
      if (s > smax) {
        a = k - 1;
        smax = s;
      }
    }
    if (A[b_tmp + a] != 0.0F) {
      if (a != 0) {
        jA = j + a;
        ipiv[j] = jA + 1;
        smax = A[j];
        A[j] = A[jA];
        A[jA] = smax;
        smax = A[j + 4];
        A[j + 4] = A[jA + 4];
        A[jA + 4] = smax;
        smax = A[j + 8];
        A[j + 8] = A[jA + 8];
        A[jA + 8] = smax;
        smax = A[j + 12];
        A[j + 12] = A[jA + 12];
        A[jA + 12] = smax;
      }
      jA = (b_tmp - j) + 4;
      st.site = &rg_emlrtRSI;
      for (a = jp1j; a <= jA; a++) {
        A[a - 1] /= A[b_tmp];
      }
    } else {
      info = j + 1;
    }
    st.site = &sg_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    c_st.site = &wg_emlrtRSI;
    d_st.site = &xg_emlrtRSI;
    jA = b_tmp + 6;
    e_st.site = &yg_emlrtRSI;
    for (jp1j = 0; jp1j <= mmj_tmp; jp1j++) {
      smax = A[(b_tmp + (jp1j << 2)) + 4];
      if (smax != 0.0F) {
        a = (jA - j) + 2;
        e_st.site = &ah_emlrtRSI;
        if ((jA <= a) && (a > 2147483646)) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (int32_T k{jA}; k <= a; k++) {
          A[k - 1] += A[((b_tmp + k) - jA) + 1] * -smax;
        }
      }
      jA += 4;
    }
  }
  if ((info == 0) && (!(A[15] != 0.0F))) {
    info = 4;
  }
  return info;
}

int32_T xzgetrf(const emlrtStack &sp, real_T A[9], int32_T ipiv[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T info;
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
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  info = 0;
  for (int32_T j{0}; j < 2; j++) {
    real_T smax;
    int32_T a;
    int32_T b_tmp;
    int32_T jA;
    int32_T jp1j;
    int32_T mmj_tmp;
    mmj_tmp = 1 - j;
    b_tmp = j << 2;
    jp1j = b_tmp + 2;
    jA = 4 - j;
    st.site = &qg_emlrtRSI;
    b_st.site = &tg_emlrtRSI;
    a = 0;
    smax = muDoubleScalarAbs(A[b_tmp]);
    c_st.site = &ug_emlrtRSI;
    for (int32_T k{2}; k < jA; k++) {
      real_T s;
      s = muDoubleScalarAbs(A[(b_tmp + k) - 1]);
      if (s > smax) {
        a = k - 1;
        smax = s;
      }
    }
    if (A[b_tmp + a] != 0.0) {
      if (a != 0) {
        jA = j + a;
        ipiv[j] = jA + 1;
        smax = A[j];
        A[j] = A[jA];
        A[jA] = smax;
        smax = A[j + 3];
        A[j + 3] = A[jA + 3];
        A[jA + 3] = smax;
        smax = A[j + 6];
        A[j + 6] = A[jA + 6];
        A[jA + 6] = smax;
      }
      jA = (b_tmp - j) + 3;
      st.site = &rg_emlrtRSI;
      for (a = jp1j; a <= jA; a++) {
        A[a - 1] /= A[b_tmp];
      }
    } else {
      info = j + 1;
    }
    st.site = &sg_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    c_st.site = &wg_emlrtRSI;
    d_st.site = &xg_emlrtRSI;
    jA = b_tmp + 5;
    e_st.site = &yg_emlrtRSI;
    for (jp1j = 0; jp1j <= mmj_tmp; jp1j++) {
      smax = A[(b_tmp + jp1j * 3) + 3];
      if (smax != 0.0) {
        a = (jA - j) + 1;
        e_st.site = &ah_emlrtRSI;
        if ((jA <= a) && (a > 2147483646)) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (int32_T k{jA}; k <= a; k++) {
          A[k - 1] += A[((b_tmp + k) - jA) + 1] * -smax;
        }
      }
      jA += 3;
    }
  }
  if ((info == 0) && (!(A[8] != 0.0))) {
    info = 3;
  }
  return info;
}

int32_T xzgetrf(const emlrtStack &sp, real32_T A[9], int32_T ipiv[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T info;
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
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  info = 0;
  for (int32_T j{0}; j < 2; j++) {
    int32_T a;
    int32_T b_tmp;
    int32_T jA;
    int32_T jp1j;
    int32_T mmj_tmp;
    real32_T smax;
    mmj_tmp = 1 - j;
    b_tmp = j << 2;
    jp1j = b_tmp + 2;
    jA = 4 - j;
    st.site = &qg_emlrtRSI;
    b_st.site = &tg_emlrtRSI;
    a = 0;
    smax = muSingleScalarAbs(A[b_tmp]);
    c_st.site = &ug_emlrtRSI;
    for (int32_T k{2}; k < jA; k++) {
      real32_T s;
      s = muSingleScalarAbs(A[(b_tmp + k) - 1]);
      if (s > smax) {
        a = k - 1;
        smax = s;
      }
    }
    if (A[b_tmp + a] != 0.0F) {
      if (a != 0) {
        jA = j + a;
        ipiv[j] = jA + 1;
        smax = A[j];
        A[j] = A[jA];
        A[jA] = smax;
        smax = A[j + 3];
        A[j + 3] = A[jA + 3];
        A[jA + 3] = smax;
        smax = A[j + 6];
        A[j + 6] = A[jA + 6];
        A[jA + 6] = smax;
      }
      jA = (b_tmp - j) + 3;
      st.site = &rg_emlrtRSI;
      for (a = jp1j; a <= jA; a++) {
        A[a - 1] /= A[b_tmp];
      }
    } else {
      info = j + 1;
    }
    st.site = &sg_emlrtRSI;
    b_st.site = &vg_emlrtRSI;
    c_st.site = &wg_emlrtRSI;
    d_st.site = &xg_emlrtRSI;
    jA = b_tmp + 5;
    e_st.site = &yg_emlrtRSI;
    for (jp1j = 0; jp1j <= mmj_tmp; jp1j++) {
      smax = A[(b_tmp + jp1j * 3) + 3];
      if (smax != 0.0F) {
        a = (jA - j) + 1;
        e_st.site = &ah_emlrtRSI;
        if ((jA <= a) && (a > 2147483646)) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (int32_T k{jA}; k <= a; k++) {
          A[k - 1] += A[((b_tmp + k) - jA) + 1] * -smax;
        }
      }
      jA += 3;
    }
  }
  if ((info == 0) && (!(A[8] != 0.0F))) {
    info = 3;
  }
  return info;
}

} // namespace reflapack
} // namespace internal
} // namespace coder

// End of code generation (xzgetrf.cpp)
