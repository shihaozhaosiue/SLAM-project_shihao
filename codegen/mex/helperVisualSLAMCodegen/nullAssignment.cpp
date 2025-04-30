//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// nullAssignment.cpp
//
// Code generation for function 'nullAssignment'
//

// Include files
#include "nullAssignment.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo oac_emlrtRSI{
    169,                      // lineNo
    "onearg_null_assignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo pac_emlrtRSI{
    172,                      // lineNo
    "onearg_null_assignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo qac_emlrtRSI{
    132,        // lineNo
    "num_true", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo cbc_emlrtRSI{
    258,             // lineNo
    "make_bitarray", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo dbc_emlrtRSI{
    273,           // lineNo
    "delete_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo fqc_emlrtRSI{
    289,           // lineNo
    "delete_rows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo gqc_emlrtRSI{
    167,                      // lineNo
    "onearg_null_assignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo hqc_emlrtRSI{
    185,                      // lineNo
    "onearg_null_assignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRTEInfo kh_emlrtRTEI{
    184,                      // lineNo
    9,                        // colNo
    "onearg_null_assignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo lh_emlrtRTEI{
    181,                      // lineNo
    9,                        // colNo
    "onearg_null_assignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo meb_emlrtRTEI{
    257,              // lineNo
    1,                // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo fxb_emlrtRTEI{
    26,               // lineNo
    13,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo kbc_emlrtRTEI{
    185,              // lineNo
    13,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo lbc_emlrtRTEI{
    17,               // lineNo
    9,                // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo mbc_emlrtRTEI{
    182,              // lineNo
    13,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

// Function Declarations
namespace coder {
namespace internal {
static void b_make_bitarray(const emlrtStack &sp, int32_T n,
                            const array<int32_T, 2U> &idx,
                            array<boolean_T, 2U> &b);

}
} // namespace coder

// Function Definitions
namespace coder {
namespace internal {
static void b_make_bitarray(const emlrtStack &sp, int32_T n,
                            const array<int32_T, 2U> &idx,
                            array<boolean_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b.set_size(&meb_emlrtRTEI, &sp, 1, n);
  for (b_b = 0; b_b < n; b_b++) {
    b[b_b] = false;
  }
  b_b = idx.size(1);
  st.site = &cbc_emlrtRSI;
  if (idx.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < b_b; k++) {
    b[idx[k] - 1] = true;
  }
}

void make_bitarray(const emlrtStack &sp, int32_T n,
                   const array<int32_T, 1U> &idx, array<boolean_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b.set_size(&meb_emlrtRTEI, &sp, 1, n);
  for (b_b = 0; b_b < n; b_b++) {
    b[b_b] = false;
  }
  b_b = idx.size(0);
  st.site = &cbc_emlrtRSI;
  if (idx.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < b_b; k++) {
    b[idx[k] - 1] = true;
  }
}

void nullAssignment(const emlrtStack &sp, array<real32_T, 2U> &x,
                    const array<int32_T, 2U> &idx)
{
  array<boolean_T, 2U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  int32_T ncolx_tmp;
  int32_T nrows;
  int32_T nrowx;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &vac_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx.size(1) - 1)) {
    if ((idx[k] < 1) || (idx[k] > x.size(0))) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &xg_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &wac_emlrtRSI;
  nrowx = x.size(0);
  ncolx_tmp = x.size(1);
  if (idx.size(1) == 1) {
    nrows = x.size(0) - 1;
    b_st.site = &dbc_emlrtRSI;
    nrowx = idx[0];
    for (int32_T j{0}; j < ncolx_tmp; j++) {
      b_st.site = &xac_emlrtRSI;
      for (i = nrowx; i <= nrows; i++) {
        x[(i + x.size(0) * j) - 1] = x[i + x.size(0) * j];
      }
    }
  } else {
    b_st.site = &yac_emlrtRSI;
    b_make_bitarray(b_st, x.size(0), idx, b);
    b_st.site = &abc_emlrtRSI;
    nrows = 0;
    i = b.size(1);
    c_st.site = &qac_emlrtRSI;
    if (b.size(1) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 0; k < i; k++) {
      nrows += b[k];
    }
    nrows = x.size(0) - nrows;
    i = 0;
    b_st.site = &bbc_emlrtRSI;
    if (x.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (k = 0; k < nrowx; k++) {
      if ((k + 1 > b.size(1)) || (!b[k])) {
        b_st.site = &fqc_emlrtRSI;
        for (int32_T j{0}; j < ncolx_tmp; j++) {
          x[i + x.size(0) * j] = x[k + x.size(0) * j];
        }
        i++;
      }
    }
  }
  if (nrows > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &yg_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nrows < 1) {
    nrows = 0;
  }
  for (nrowx = 0; nrowx < ncolx_tmp; nrowx++) {
    for (i = 0; i < nrows; i++) {
      x[i + nrows * nrowx] = x[i + x.size(0) * nrowx];
    }
  }
  x.set_size(&fxb_emlrtRTEI, &st, nrows, x.size(1));
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void nullAssignment(const emlrtStack &sp, array<real_T, 2U> &x,
                    const array<int32_T, 2U> &idx)
{
  array<real_T, 2U> c_x;
  array<real_T, 1U> b_x;
  array<boolean_T, 2U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T n_tmp;
  int32_T nxout;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &mac_emlrtRSI;
  n_tmp = x.size(0) * x.size(1);
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx.size(1) - 1)) {
    if ((idx[k] < 1) || (idx[k] > n_tmp)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &mh_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &nac_emlrtRSI;
  b_st.site = &gqc_emlrtRSI;
  b_make_bitarray(b_st, n_tmp, idx, b);
  b_st.site = &oac_emlrtRSI;
  nxout = 0;
  k0 = b.size(1);
  c_st.site = &qac_emlrtRSI;
  if (b.size(1) > 2147483646) {
    d_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(d_st);
  }
  for (k = 0; k < k0; k++) {
    nxout += b[k];
  }
  nxout = n_tmp - nxout;
  k0 = -1;
  b_st.site = &pac_emlrtRSI;
  if (n_tmp > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (k = 0; k < n_tmp; k++) {
    if ((k + 1 > b.size(1)) || (!b[k])) {
      k0++;
      x[k0] = x[k];
    }
  }
  if ((x.size(0) != 1) && (x.size(1) == 1)) {
    if (nxout > x.size(0)) {
      emlrtErrorWithMessageIdR2018a(&st, &lh_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nxout < 1) {
      nxout = 0;
    }
    b_x.set_size(&mbc_emlrtRTEI, &st, nxout);
    for (k0 = 0; k0 < nxout; k0++) {
      b_x[k0] = x[k0];
    }
    x.set_size(&lbc_emlrtRTEI, &st, nxout, 1);
    for (k0 = 0; k0 < nxout; k0++) {
      x[k0] = b_x[k0];
    }
  } else {
    int32_T b_iv[2];
    int32_T b_iv1[2];
    if (nxout > n_tmp) {
      emlrtErrorWithMessageIdR2018a(&st, &kh_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nxout < 1) {
      nxout = 0;
    }
    b_iv[0] = 1;
    b_iv[1] = nxout;
    b_iv1[0] = (*(int32_T(*)[2])x.size())[0];
    b_iv1[1] = (*(int32_T(*)[2])x.size())[1];
    b_st.site = &hqc_emlrtRSI;
    b_indexShapeCheck(b_st, b_iv1, b_iv);
    c_x.set_size(&kbc_emlrtRTEI, &st, 1, nxout);
    for (k0 = 0; k0 < nxout; k0++) {
      c_x[c_x.size(0) * k0] = x[k0];
    }
    x.set_size(&lbc_emlrtRTEI, &st, 1, nxout);
    for (k0 = 0; k0 < nxout; k0++) {
      x[x.size(0) * k0] = c_x[c_x.size(0) * k0];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void nullAssignment(const emlrtStack &sp, array<real_T, 2U> &x,
                    const array<int32_T, 1U> &idx)
{
  array<boolean_T, 2U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_b;
  int32_T k;
  int32_T nrows;
  int32_T nrowx;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &vac_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx.size(0) - 1)) {
    if (idx[k] > x.size(0)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &xg_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &wac_emlrtRSI;
  nrowx = x.size(0);
  if (idx.size(0) == 1) {
    nrows = x.size(0) - 1;
    nrowx = idx[0];
    for (b_b = 0; b_b < 2; b_b++) {
      b_st.site = &xac_emlrtRSI;
      for (int32_T i{nrowx}; i <= nrows; i++) {
        x[(i + x.size(0) * b_b) - 1] = x[i + x.size(0) * b_b];
      }
    }
  } else {
    int32_T i;
    b_st.site = &yac_emlrtRSI;
    make_bitarray(b_st, x.size(0), idx, b);
    b_st.site = &abc_emlrtRSI;
    nrows = 0;
    b_b = b.size(1);
    c_st.site = &qac_emlrtRSI;
    if (b.size(1) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 0; k < b_b; k++) {
      nrows += b[k];
    }
    nrows = x.size(0) - nrows;
    i = 0;
    b_st.site = &bbc_emlrtRSI;
    if (x.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (k = 0; k < nrowx; k++) {
      if ((k + 1 > b.size(1)) || (!b[k])) {
        x[i] = x[k];
        x[i + x.size(0)] = x[k + x.size(0)];
        i++;
      }
    }
  }
  if (nrows > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &yg_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nrows < 1) {
    nrows = 0;
  }
  for (nrowx = 0; nrowx < 2; nrowx++) {
    for (b_b = 0; b_b < nrows; b_b++) {
      x[b_b + nrows * nrowx] = x[b_b + x.size(0) * nrowx];
    }
  }
  x.set_size(&fxb_emlrtRTEI, &st, nrows, 2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

int32_T num_true(const emlrtStack &sp, const array<boolean_T, 2U> &b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  b_b = b.size(1);
  st.site = &qac_emlrtRSI;
  if (b.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < b_b; k++) {
    n += b[k];
  }
  return n;
}

} // namespace internal
} // namespace coder

// End of code generation (nullAssignment.cpp)
