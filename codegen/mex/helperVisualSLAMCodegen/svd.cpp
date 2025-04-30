//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// svd.cpp
//
// Code generation for function 'svd'
//

// Include files
#include "svd.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "svd1.h"
#include "xzsvdc.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRTEInfo op_emlrtRTEI{
    43,    // lineNo
    9,     // colNo
    "svd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" // pName
};

// Function Definitions
namespace coder {
void svd(const emlrtStack &sp, const array<real32_T, 2U> &A,
         array<real32_T, 2U> &U, real32_T S_data[], int32_T S_size[2],
         real32_T V[81])
{
  array<real32_T, 2U> U1;
  array<real32_T, 2U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T nx_tmp;
  int32_T s_size;
  real32_T V1[81];
  real32_T s_data[9];
  boolean_T p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &am_emlrtRSI;
  b_st.site = &dm_emlrtRSI;
  c_st.site = &em_emlrtRSI;
  nx_tmp = A.size(0) * 9;
  p = true;
  d_st.site = &fm_emlrtRSI;
  if (nx_tmp > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    if ((!p) || (muSingleScalarIsInf(A[k]) || muSingleScalarIsNaN(A[k]))) {
      p = false;
    }
  }
  if (p) {
    st.site = &bm_emlrtRSI;
    s_size = internal::b_svd(st, A, U, s_data, V);
  } else {
    b_r.set_size(&np_emlrtRTEI, &sp, A.size(0), 9);
    nx_tmp = A.size(0) * 9;
    for (int32_T k{0}; k < nx_tmp; k++) {
      b_r[k] = 0.0F;
    }
    st.site = &cm_emlrtRSI;
    s_size = internal::b_svd(st, b_r, U1, s_data, V1);
    U.set_size(&op_emlrtRTEI, &sp, U1.size(0), U1.size(1));
    nx_tmp = U1.size(0) * U1.size(1);
    for (int32_T k{0}; k < nx_tmp; k++) {
      U[k] = rtNaNF;
    }
    for (int32_T k{0}; k < s_size; k++) {
      s_data[k] = rtNaNF;
    }
    for (int32_T k{0}; k < 81; k++) {
      V[k] = rtNaNF;
    }
  }
  S_size[0] = U.size(1);
  S_size[1] = 9;
  nx_tmp = U.size(1) * 9;
  if (nx_tmp - 1 >= 0) {
    std::memset(&S_data[0], 0,
                static_cast<uint32_T>(nx_tmp) * sizeof(real32_T));
  }
  for (int32_T k{0}; k < s_size; k++) {
    S_data[k + S_size[0] * k] = s_data[k];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void svd(const emlrtStack &sp, const real_T A[9], real_T U[9], real_T S[9],
         real_T V[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  real_T s[3];
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &am_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &dm_emlrtRSI;
  c_st.site = &em_emlrtRSI;
  p = true;
  for (int32_T k{0}; k < 9; k++) {
    if (p) {
      real_T d;
      d = A[k];
      if (muDoubleScalarIsInf(d) || muDoubleScalarIsNaN(d)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (p) {
    st.site = &bm_emlrtRSI;
    b_st.site = &gm_emlrtRSI;
    c_st.site = &kp_emlrtRSI;
    std::copy(&A[0], &A[9], &b_A[0]);
    d_st.site = &lp_emlrtRSI;
    internal::reflapack::b_xzsvdc(d_st, b_A, U, s, V);
  } else {
    s[0] = rtNaN;
    s[1] = rtNaN;
    s[2] = rtNaN;
    for (int32_T k{0}; k < 9; k++) {
      U[k] = rtNaN;
      V[k] = rtNaN;
    }
  }
  std::memset(&S[0], 0, 9U * sizeof(real_T));
  S[0] = s[0];
  S[4] = s[1];
  S[8] = s[2];
}

void svd(const emlrtStack &sp, const real32_T A[9], real32_T U[9],
         real32_T S[9], real32_T V[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real32_T s[3];
  boolean_T allFiniteA;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &am_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  allFiniteA = !internal::anyNonFinite(A);
  if (allFiniteA) {
    real32_T b_A[9];
    st.site = &bm_emlrtRSI;
    b_st.site = &gm_emlrtRSI;
    c_st.site = &kp_emlrtRSI;
    for (int32_T i{0}; i < 9; i++) {
      b_A[i] = A[i];
    }
    d_st.site = &lp_emlrtRSI;
    internal::reflapack::xzsvdc(d_st, b_A, U, s, V);
  } else {
    s[0] = rtNaNF;
    s[1] = rtNaNF;
    s[2] = rtNaNF;
    for (int32_T i1{0}; i1 < 9; i1++) {
      U[i1] = rtNaNF;
      V[i1] = rtNaNF;
    }
  }
  for (int32_T i1{0}; i1 < 9; i1++) {
    S[i1] = 0.0F;
  }
  S[0] = s[0];
  S[4] = s[1];
  S[8] = s[2];
}

} // namespace coder

// End of code generation (svd.cpp)
