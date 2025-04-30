//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sumMatrixIncludeNaN.cpp
//
// Code generation for function 'sumMatrixIncludeNaN'
//

// Include files
#include "sumMatrixIncludeNaN.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo bk_emlrtRSI{
    178,          // lineNo
    "sumColumnB", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

static emlrtRSInfo ck_emlrtRSI{
    183,          // lineNo
    "sumColumnB", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

static emlrtRSInfo dk_emlrtRSI{
    189,          // lineNo
    "sumColumnB", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

static emlrtRSInfo ek_emlrtRSI{
    210,         // lineNo
    "sumColumn", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" // pathName
};

// Function Declarations
namespace coder {
static real32_T sumColumnB(const emlrtStack &sp, const array<real32_T, 1U> &x,
                           int32_T vlen, int32_T vstart);

static real32_T sumColumnB(const emlrtStack &sp, const array<real32_T, 1U> &x,
                           int32_T vlen);

static real_T sumColumnB(const emlrtStack &sp, const array<real_T, 1U> &x,
                         int32_T vlen, int32_T vstart);

static real_T sumColumnB(const emlrtStack &sp, const array<real_T, 1U> &x,
                         int32_T vlen);

static real32_T sumColumnB4(const array<real32_T, 1U> &x, int32_T vstart);

static real_T sumColumnB4(const array<real_T, 1U> &x, int32_T vstart);

} // namespace coder

// Function Definitions
namespace coder {
static real32_T sumColumnB(const emlrtStack &sp, const array<real32_T, 1U> &x,
                           int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &bk_emlrtRSI;
    y = x[vstart - 1];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[vstart + k];
    }
  } else {
    int32_T b_vstart;
    int32_T inb;
    int32_T nfb;
    real32_T b_y;
    nfb = vlen / 1024;
    inb = nfb << 10;
    y = x[vstart - 1];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[vstart + k];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      b_vstart = vstart + ((k - 1) << 10);
      b_y = x[b_vstart - 1];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[b_vstart + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      b_vstart = vstart + inb;
      st.site = &dk_emlrtRSI;
      b_y = x[b_vstart - 1];
      nfb = vlen - inb;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[b_vstart + k];
      }
      y += b_y;
    }
  }
  return y;
}

static real32_T sumColumnB(const emlrtStack &sp, const array<real32_T, 1U> &x,
                           int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T nfb;
    st.site = &bk_emlrtRSI;
    y = x[0];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    nfb = static_cast<uint16_T>(vlen - 1);
    for (int32_T k{0}; k < nfb; k++) {
      y += x[k + 1];
    }
  } else {
    int32_T inb;
    int32_T nfb;
    real32_T b_y;
    nfb = vlen / 1024;
    inb = nfb << 10;
    y = x[0];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[k + 1];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      int32_T vstart;
      vstart = (k - 1) << 10;
      b_y = x[vstart];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[(vstart + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &dk_emlrtRSI;
      b_y = x[inb];
      nfb = vlen - inb;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[(inb + k) + 1];
      }
      y += b_y;
    }
  }
  return y;
}

static real_T sumColumnB(const emlrtStack &sp, const array<real_T, 1U> &x,
                         int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &bk_emlrtRSI;
    y = x[vstart - 1];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[vstart + k];
    }
  } else {
    real_T b_y;
    int32_T b_vstart;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    y = x[vstart - 1];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[vstart + k];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      b_vstart = vstart + ((k - 1) << 10);
      b_y = x[b_vstart - 1];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[b_vstart + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      b_vstart = vstart + inb;
      st.site = &dk_emlrtRSI;
      b_y = x[b_vstart - 1];
      nfb = vlen - inb;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[b_vstart + k];
      }
      y += b_y;
    }
  }
  return y;
}

static real_T sumColumnB(const emlrtStack &sp, const array<real_T, 1U> &x,
                         int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T nfb;
    st.site = &bk_emlrtRSI;
    y = x[0];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    nfb = static_cast<uint16_T>(vlen - 1);
    for (int32_T k{0}; k < nfb; k++) {
      y += x[k + 1];
    }
  } else {
    real_T b_y;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    y = x[0];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[k + 1];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      int32_T vstart;
      vstart = (k - 1) << 10;
      b_y = x[vstart];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[(vstart + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &dk_emlrtRSI;
      b_y = x[inb];
      nfb = vlen - inb;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[(inb + k) + 1];
      }
      y += b_y;
    }
  }
  return y;
}

static real32_T sumColumnB4(const array<real32_T, 1U> &x, int32_T vstart)
{
  real32_T psum2;
  real32_T psum3;
  real32_T psum4;
  real32_T y;
  y = x[vstart - 1];
  psum2 = x[vstart + 1023];
  psum3 = x[vstart + 2047];
  psum4 = x[vstart + 3071];
  for (int32_T k{0}; k < 1023; k++) {
    int32_T psum1_tmp;
    psum1_tmp = vstart + k;
    y += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (y + psum2) + (psum3 + psum4);
}

static real_T sumColumnB4(const array<real_T, 1U> &x, int32_T vstart)
{
  real_T psum2;
  real_T psum3;
  real_T psum4;
  real_T y;
  y = x[vstart - 1];
  psum2 = x[vstart + 1023];
  psum3 = x[vstart + 2047];
  psum4 = x[vstart + 3071];
  for (int32_T k{0}; k < 1023; k++) {
    int32_T psum1_tmp;
    psum1_tmp = vstart + k;
    y += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (y + psum2) + (psum3 + psum4);
}

real_T b_sumColumnB(const array<real_T, 2U> &x, int32_T col)
{
  int32_T i0;
  i0 = (col - 1) << 1;
  return x[i0] + x[i0 + 1];
}

real32_T b_sumColumnB(const real32_T x[9], int32_T col)
{
  int32_T i0;
  i0 = (col - 1) * 3;
  return (x[i0] + x[i0 + 1]) + x[i0 + 2];
}

real_T b_sumColumnB(const real_T x[9], int32_T col)
{
  int32_T i0;
  i0 = (col - 1) * 3;
  return (x[i0] + x[i0 + 1]) + x[i0 + 2];
}

real32_T sumColumnB(const real32_T x[8], int32_T col)
{
  int32_T i0;
  i0 = (col - 1) << 1;
  return x[i0] + x[i0 + 1];
}

real32_T sumColumnB(const real32_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

real_T sumColumnB(const emlrtStack &sp, const array<real_T, 2U> &x, int32_T col,
                  int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T i0;
    st.site = &bk_emlrtRSI;
    i0 = vstart + (col - 1) * x.size(0);
    y = x[i0 - 1];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[i0 + k];
    }
  } else {
    real_T b_y;
    int32_T i0;
    int32_T i0_tmp;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    i0_tmp = (col - 1) * x.size(0);
    i0 = vstart + i0_tmp;
    y = x[i0 - 1];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[i0 + k];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      i0 = (vstart + ((k - 1) << 10)) + i0_tmp;
      b_y = x[i0 - 1];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[i0 + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &dk_emlrtRSI;
      i0 = (vstart + inb) + i0_tmp;
      b_y = x[i0 - 1];
      nfb = vlen - inb;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB(const emlrtStack &sp, const array<real_T, 2U> &x, int32_T col,
                  int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T i0;
    int32_T nfb;
    st.site = &bk_emlrtRSI;
    i0 = (col - 1) * x.size(0);
    y = x[i0];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    nfb = static_cast<uint16_T>(vlen - 1);
    for (int32_T k{0}; k < nfb; k++) {
      y += x[(i0 + k) + 1];
    }
  } else {
    real_T b_y;
    int32_T i0;
    int32_T i0_tmp;
    int32_T inb;
    int32_T nfb;
    nfb = vlen / 1024;
    inb = nfb << 10;
    i0_tmp = (col - 1) * x.size(0);
    y = x[i0_tmp];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[(i0_tmp + k) + 1];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      i0 = ((k - 1) << 10) + i0_tmp;
      b_y = x[i0];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[(i0 + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &dk_emlrtRSI;
      i0 = (inb + i0_tmp) + 1;
      b_y = x[i0 - 1];
      nfb = (vlen - inb) - 2;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb; k++) {
        b_y += x[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB(const real_T x[30], int32_T col)
{
  real_T y;
  int32_T i0;
  i0 = (col - 1) * 10;
  y = x[i0];
  for (int32_T k{0}; k < 9; k++) {
    y += x[(i0 + k) + 1];
  }
  return y;
}

real32_T sumColumnB(const array<real32_T, 2U> &x, int32_T col)
{
  int32_T i0;
  i0 = (col - 1) << 1;
  return x[i0] + x[i0 + 1];
}

real_T sumColumnB(const array<real_T, 2U> &x, int32_T col)
{
  int32_T i0;
  i0 = (col - 1) * 3;
  return (x[i0] + x[i0 + 1]) + x[i0 + 2];
}

real32_T sumColumnB(const emlrtStack &sp, const array<real32_T, 2U> &x,
                    int32_T col, int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T i0;
    int32_T nfb;
    st.site = &bk_emlrtRSI;
    i0 = (col - 1) * x.size(0);
    y = x[i0];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    nfb = static_cast<uint16_T>(vlen - 1);
    for (int32_T k{0}; k < nfb; k++) {
      y += x[(i0 + k) + 1];
    }
  } else {
    int32_T i0;
    int32_T i0_tmp;
    int32_T inb;
    int32_T nfb;
    real32_T b_y;
    nfb = vlen / 1024;
    inb = nfb << 10;
    i0_tmp = (col - 1) * x.size(0);
    y = x[i0_tmp];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[(i0_tmp + k) + 1];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      i0 = ((k - 1) << 10) + i0_tmp;
      b_y = x[i0];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[(i0 + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &dk_emlrtRSI;
      i0 = (inb + i0_tmp) + 1;
      b_y = x[i0 - 1];
      nfb = (vlen - inb) - 2;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb; k++) {
        b_y += x[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real32_T sumColumnB(const emlrtStack &sp, const array<real32_T, 2U> &x,
                    int32_T col, int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    int32_T i0;
    st.site = &bk_emlrtRSI;
    i0 = vstart + (col - 1) * x.size(0);
    y = x[i0 - 1];
    b_st.site = &ek_emlrtRSI;
    if (vlen - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{0}; k <= vlen - 2; k++) {
      y += x[i0 + k];
    }
  } else {
    int32_T i0;
    int32_T i0_tmp;
    int32_T inb;
    int32_T nfb;
    real32_T b_y;
    nfb = vlen / 1024;
    inb = nfb << 10;
    i0_tmp = (col - 1) * x.size(0);
    i0 = vstart + i0_tmp;
    y = x[i0 - 1];
    for (int32_T k{0}; k < 1023; k++) {
      y += x[i0 + k];
    }
    st.site = &ck_emlrtRSI;
    for (int32_T k{2}; k <= nfb; k++) {
      i0 = (vstart + ((k - 1) << 10)) + i0_tmp;
      b_y = x[i0 - 1];
      for (int32_T b_k{0}; b_k < 1023; b_k++) {
        b_y += x[i0 + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      st.site = &dk_emlrtRSI;
      i0 = (vstart + inb) + i0_tmp;
      b_y = x[i0 - 1];
      nfb = vlen - inb;
      b_st.site = &ek_emlrtRSI;
      for (int32_T k{0}; k <= nfb - 2; k++) {
        b_y += x[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB4(const array<real_T, 2U> &x, int32_T col, int32_T vstart)
{
  real_T psum2;
  real_T psum3;
  real_T psum4;
  real_T y;
  int32_T i1;
  i1 = vstart + (col - 1) * x.size(0);
  y = x[i1 - 1];
  psum2 = x[i1 + 1023];
  psum3 = x[i1 + 2047];
  psum4 = x[i1 + 3071];
  for (int32_T k{0}; k < 1023; k++) {
    int32_T psum1_tmp;
    psum1_tmp = i1 + k;
    y += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (y + psum2) + (psum3 + psum4);
}

real32_T sumColumnB4(const array<real32_T, 2U> &x, int32_T col, int32_T vstart)
{
  int32_T i1;
  real32_T psum2;
  real32_T psum3;
  real32_T psum4;
  real32_T y;
  i1 = vstart + (col - 1) * x.size(0);
  y = x[i1 - 1];
  psum2 = x[i1 + 1023];
  psum3 = x[i1 + 2047];
  psum4 = x[i1 + 3071];
  for (int32_T k{0}; k < 1023; k++) {
    int32_T psum1_tmp;
    psum1_tmp = i1 + k;
    y += x[psum1_tmp];
    psum2 += x[psum1_tmp + 1024];
    psum3 += x[psum1_tmp + 2048];
    psum4 += x[psum1_tmp + 3072];
  }
  return (y + psum2) + (psum3 + psum4);
}

real32_T sumMatrixColumns(const emlrtStack &sp, const array<real32_T, 1U> &x,
                          int32_T vlen)
{
  emlrtStack st;
  real32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  if (vlen < 4096) {
    st.site = &xj_emlrtRSI;
    y = sumColumnB(st, x, vlen);
  } else {
    int32_T inb;
    int32_T nfb;
    int32_T nleft;
    nfb = vlen / 4096;
    inb = nfb << 12;
    nleft = vlen - inb;
    y = sumColumnB4(x, 1);
    for (int32_T ib{2}; ib <= nfb; ib++) {
      y += sumColumnB4(x, ((ib - 1) << 12) + 1);
    }
    if (nleft > 0) {
      st.site = &ak_emlrtRSI;
      y += sumColumnB(st, x, nleft, inb + 1);
    }
  }
  return y;
}

real_T sumMatrixColumns(const emlrtStack &sp, const array<real_T, 1U> &x,
                        int32_T vlen)
{
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  if (vlen < 4096) {
    st.site = &xj_emlrtRSI;
    y = sumColumnB(st, x, vlen);
  } else {
    int32_T inb;
    int32_T nfb;
    int32_T nleft;
    nfb = vlen / 4096;
    inb = nfb << 12;
    nleft = vlen - inb;
    y = sumColumnB4(x, 1);
    for (int32_T ib{2}; ib <= nfb; ib++) {
      y += sumColumnB4(x, ((ib - 1) << 12) + 1);
    }
    if (nleft > 0) {
      st.site = &ak_emlrtRSI;
      y += sumColumnB(st, x, nleft, inb + 1);
    }
  }
  return y;
}

} // namespace coder

// End of code generation (sumMatrixIncludeNaN.cpp)
