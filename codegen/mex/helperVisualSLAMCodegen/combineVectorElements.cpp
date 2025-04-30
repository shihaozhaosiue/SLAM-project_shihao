//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// combineVectorElements.cpp
//
// Code generation for function 'combineVectorElements'
//

// Include files
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo ao_emlrtRSI{
    149,                     // lineNo
    "combineVectorElements", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo bo_emlrtRSI{
    209,                // lineNo
    "colMajorFlatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRTEInfo mp_emlrtRTEI{
    86,                      // lineNo
    9,                       // colNo
    "combineVectorElements", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pName
};

// Function Definitions
namespace coder {
void b_combineVectorElements(const emlrtStack &sp, const array<real32_T, 2U> &x,
                             array<real32_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (x.size(1) == 0) {
    y.set_size(&mp_emlrtRTEI, &st, 1, 0);
  } else {
    int32_T i;
    b_st.site = &xn_emlrtRSI;
    c_st.site = &wj_emlrtRSI;
    i = x.size(1);
    y.set_size(&lp_emlrtRTEI, &c_st, 1, x.size(1));
    d_st.site = &oo_emlrtRSI;
    if (x.size(1) > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T col{0}; col < i; col++) {
      y[col] = sumColumnB(x, col + 1);
    }
  }
}

void b_combineVectorElements(const emlrtStack &sp, const array<real_T, 2U> &x,
                             array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (x.size(1) == 0) {
    y.set_size(&mp_emlrtRTEI, &st, 1, 0);
  } else {
    int32_T i;
    b_st.site = &xn_emlrtRSI;
    c_st.site = &wj_emlrtRSI;
    i = x.size(1);
    y.set_size(&lp_emlrtRTEI, &c_st, 1, x.size(1));
    d_st.site = &oo_emlrtRSI;
    if (x.size(1) > 2147483646) {
      e_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T col{0}; col < i; col++) {
      y[col] = sumColumnB(x, col + 1);
    }
  }
}

void b_combineVectorElements(const emlrtStack &sp, const array<real32_T, 2U> &x,
                             real32_T y[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (x.size(0) == 0) {
    y[0] = 0.0F;
    y[1] = 0.0F;
    y[2] = 0.0F;
  } else {
    b_st.site = &xn_emlrtRSI;
    c_st.site = &wj_emlrtRSI;
    if (x.size(0) < 4096) {
      d_st.site = &xj_emlrtRSI;
      y[0] = sumColumnB(d_st, x, 1, x.size(0));
      d_st.site = &xj_emlrtRSI;
      y[1] = sumColumnB(d_st, x, 2, x.size(0));
      d_st.site = &xj_emlrtRSI;
      y[2] = sumColumnB(d_st, x, 3, x.size(0));
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      for (int32_T col{0}; col < 3; col++) {
        real32_T s;
        s = sumColumnB4(x, col + 1, 1);
        for (int32_T ib{2}; ib <= nfb; ib++) {
          s += sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          d_st.site = &ak_emlrtRSI;
          s += sumColumnB(d_st, x, col + 1, nleft, inb + 1);
        }
        y[col] = s;
      }
    }
  }
}

int32_T combineVectorElements(const emlrtStack &sp,
                              const array<boolean_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T vlen;
  int32_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vlen = x.size(0);
  if (x.size(0) == 0) {
    y = 0;
  } else {
    st.site = &ao_emlrtRSI;
    y = x[0];
    b_st.site = &bo_emlrtRSI;
    if (x.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T k{2}; k <= vlen; k++) {
      y += x[k - 1];
    }
  }
  return y;
}

} // namespace coder

// End of code generation (combineVectorElements.cpp)
