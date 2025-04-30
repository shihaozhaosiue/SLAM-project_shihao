//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// unique.cpp
//
// Code generation for function 'unique'
//

// Include files
#include "unique.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo uqb_emlrtRSI{
    164,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo vqb_emlrtRSI{
    166,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo wqb_emlrtRSI{
    183,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo xqb_emlrtRSI{
    210,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo yqb_emlrtRSI{
    223,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo arb_emlrtRSI{
    234,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo brb_emlrtRSI{
    242,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRSInfo crb_emlrtRSI{
    248,             // lineNo
    "unique_vector", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtRTEInfo ld_emlrtRTEI{
    241,             // lineNo
    1,               // colNo
    "unique_vector", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

static emlrtRTEInfo ly_emlrtRTEI{
    165,      // lineNo
    20,       // colNo
    "unique", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

static emlrtRTEInfo my_emlrtRTEI{
    242,      // lineNo
    1,        // colNo
    "unique", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

static emlrtRTEInfo yy_emlrtRTEI{
    246,      // lineNo
    26,       // colNo
    "unique", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

// Function Definitions
namespace coder {
void unique_vector(const emlrtStack &sp, const array<real_T, 1U> &a,
                   array<real_T, 1U> &b)
{
  array<int32_T, 1U> idx;
  emlrtStack b_st;
  emlrtStack st;
  real_T x;
  int32_T b_iv[2];
  int32_T k;
  int32_T nMInf;
  int32_T nNaN;
  int32_T na_tmp;
  int32_T nb;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(0);
  st.site = &uqb_emlrtRSI;
  internal::sortIdx(st, a, idx);
  b.set_size(&ly_emlrtRTEI, &sp, a.size(0));
  st.site = &vqb_emlrtRSI;
  if (a.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (k = 0; k < na_tmp; k++) {
    b[k] = a[idx[k] - 1];
  }
  k = 0;
  while ((k + 1 <= na_tmp) && muDoubleScalarIsInf(b[k]) && (b[k] < 0.0)) {
    k++;
  }
  nMInf = k;
  k = a.size(0);
  while ((k >= 1) && muDoubleScalarIsNaN(b[k - 1])) {
    k--;
  }
  nNaN = a.size(0) - k;
  exitg1 = false;
  while ((!exitg1) && (k >= 1)) {
    x = b[k - 1];
    if (muDoubleScalarIsInf(x) && (x > 0.0)) {
      k--;
    } else {
      exitg1 = true;
    }
  }
  na_tmp = (a.size(0) - k) - nNaN;
  nb = 0;
  if (nMInf > 0) {
    nb = 1;
    st.site = &wqb_emlrtRSI;
    if (nMInf > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
  }
  while (nMInf + 1 <= k) {
    int32_T b_a;
    x = b[nMInf];
    b_a = nMInf;
    do {
      nMInf++;
    } while (!((nMInf + 1 > k) || (b[nMInf] != x)));
    nb++;
    b[nb - 1] = x;
    st.site = &xqb_emlrtRSI;
    if ((b_a + 1 <= nMInf) && (nMInf > 2147483646)) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
  }
  if (na_tmp > 0) {
    nb++;
    b[nb - 1] = b[k];
    st.site = &yqb_emlrtRSI;
    if (na_tmp > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
  }
  nMInf = k + na_tmp;
  st.site = &arb_emlrtRSI;
  for (na_tmp = 0; na_tmp < nNaN; na_tmp++) {
    b[nb + na_tmp] = b[nMInf + na_tmp];
  }
  if (nNaN - 1 >= 0) {
    nb += nNaN;
  }
  if (nb > a.size(0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &ld_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nb < 1) {
    na_tmp = 0;
  } else {
    na_tmp = nb;
  }
  b_iv[0] = 1;
  b_iv[1] = na_tmp;
  st.site = &brb_emlrtRSI;
  internal::indexShapeCheck(st, b.size(0), b_iv);
  b.set_size(&my_emlrtRTEI, &sp, na_tmp);
  st.site = &crb_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void unique_vector(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   array<uint32_T, 1U> &b, array<int32_T, 1U> &ndx)
{
  array<int32_T, 1U> idx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T k;
  int32_T na_tmp;
  int32_T nb;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(0);
  st.site = &uqb_emlrtRSI;
  internal::sortIdx(st, a, idx);
  b.set_size(&ly_emlrtRTEI, &sp, a.size(0));
  st.site = &vqb_emlrtRSI;
  if (a.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (k = 0; k < na_tmp; k++) {
    b[k] = a[idx[k] - 1];
  }
  nb = 0;
  k = 0;
  while (k + 1 <= na_tmp) {
    int32_T k0;
    uint32_T x;
    x = b[k];
    k0 = k;
    do {
      k++;
    } while (!((k + 1 > na_tmp) || (b[k] != x)));
    nb++;
    b[nb - 1] = x;
    st.site = &xqb_emlrtRSI;
    if ((k0 + 1 <= k) && (k > 2147483646)) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    idx[nb - 1] = idx[k0];
  }
  st.site = &arb_emlrtRSI;
  if (nb > a.size(0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &ld_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nb < 1) {
    na_tmp = 0;
  } else {
    na_tmp = nb;
  }
  b_iv[0] = 1;
  b_iv[1] = na_tmp;
  st.site = &brb_emlrtRSI;
  internal::indexShapeCheck(st, b.size(0), b_iv);
  b.set_size(&my_emlrtRTEI, &sp, na_tmp);
  ndx.set_size(&yy_emlrtRTEI, &sp, nb);
  st.site = &crb_emlrtRSI;
  for (k = 0; k < nb; k++) {
    ndx[k] = idx[k];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void unique_vector(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                   array<uint32_T, 1U> &b)
{
  array<int32_T, 1U> idx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T k;
  int32_T na_tmp;
  int32_T nb;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(0);
  st.site = &uqb_emlrtRSI;
  internal::sortIdx(st, a, idx);
  b.set_size(&ly_emlrtRTEI, &sp, a.size(0));
  st.site = &vqb_emlrtRSI;
  if (a.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (k = 0; k < na_tmp; k++) {
    b[k] = a[idx[k] - 1];
  }
  nb = 0;
  k = 0;
  while (k + 1 <= na_tmp) {
    int32_T b_a;
    uint32_T x;
    x = b[k];
    b_a = k;
    do {
      k++;
    } while (!((k + 1 > na_tmp) || (b[k] != x)));
    nb++;
    b[nb - 1] = x;
    st.site = &xqb_emlrtRSI;
    if ((b_a + 1 <= k) && (k > 2147483646)) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
  }
  st.site = &arb_emlrtRSI;
  if (nb > a.size(0)) {
    emlrtErrorWithMessageIdR2018a(&sp, &ld_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nb < 1) {
    na_tmp = 0;
  } else {
    na_tmp = nb;
  }
  b_iv[0] = 1;
  b_iv[1] = na_tmp;
  st.site = &brb_emlrtRSI;
  internal::indexShapeCheck(st, b.size(0), b_iv);
  b.set_size(&my_emlrtRTEI, &sp, na_tmp);
  st.site = &crb_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (unique.cpp)
