//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "warning.h"
#include "coder_array.h"

// Variable Definitions
static emlrtDCInfo hb_emlrtDCI{
    180,                           // lineNo
    32,                            // colNo
    "find_first_nonempty_triples", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m", // pName
    4 // checkKind
};

static emlrtRTEInfo xp_emlrtRTEI{
    138,    // lineNo
    9,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo bs_emlrtRTEI{
    358,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo xdb_emlrtRTEI{
    191,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo aeb_emlrtRTEI{
    248,    // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo ceb_emlrtRTEI{
    242,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo eeb_emlrtRTEI{
    128,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo veb_emlrtRTEI{
    180,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo web_emlrtRTEI{
    182,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo xeb_emlrtRTEI{
    184,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo afb_emlrtRTEI{
    237,    // lineNo
    17,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo bfb_emlrtRTEI{
    238,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo cfb_emlrtRTEI{
    239,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo dfb_emlrtRTEI{
    123,    // lineNo
    17,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo efb_emlrtRTEI{
    124,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo ffb_emlrtRTEI{
    125,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

// Function Definitions
void binary_expand_op_38(const emlrtStack &sp, coder::array<int32_T, 1U> &in1,
                         const emlrtRSInfo in2,
                         const coder::array<boolean_T, 1U> &in3,
                         const coder::array<boolean_T, 1U> &in4)
{
  coder::array<boolean_T, 1U> b_in3;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  b_in3.set_size(&fkb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = (in3[i * stride_0_0] && in4[i * stride_1_0]);
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_eml_find(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
void b_eml_find(const emlrtStack &sp, const array<boolean_T, 1U> &x,
                array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  st.site = &cq_emlrtRSI;
  idx = 0;
  i.set_size(&wp_emlrtRTEI, &st, x.size(0));
  b_st.site = &dq_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&xp_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T b_iv[2];
    if (idx < 1) {
      nx_tmp = 0;
    } else {
      nx_tmp = idx;
    }
    b_iv[0] = 1;
    b_iv[1] = nx_tmp;
    b_st.site = &eq_emlrtRSI;
    internal::indexShapeCheck(b_st, i.size(0), b_iv);
    i.set_size(&xp_emlrtRTEI, &st, nx_tmp);
  }
}

void c_eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
                array<int32_T, 2U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(1);
  st.site = &cq_emlrtRSI;
  idx = 0;
  i.set_size(&bs_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &dq_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(1) == 1) {
    if (idx == 0) {
      i.set_size(&xp_emlrtRTEI, &st, 1, 0);
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }
    i.set_size(&xp_emlrtRTEI, &st, i.size(0), idx);
  }
}

void d_eml_find(const emlrtStack &sp, const sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.colidx[x.colidx.size(0) - 1] - 1;
  if (nx_tmp == 0) {
    i.set_size(&deb_emlrtRTEI, &sp, 0);
    j.set_size(&eeb_emlrtRTEI, &sp, 0);
  } else {
    int32_T col;
    int32_T idx;
    st.site = &wwb_emlrtRSI;
    if (nx_tmp < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp), &gb_emlrtDCI,
                                  &st);
    }
    i.set_size(&wdb_emlrtRTEI, &st, nx_tmp);
    j.set_size(&xdb_emlrtRTEI, &st, nx_tmp);
    b_st.site = &xwb_emlrtRSI;
    if (nx_tmp > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx < nx_tmp; idx++) {
      i[idx] = x.rowidx[idx];
    }
    b_st.site = &ywb_emlrtRSI;
    idx = 0;
    col = 1;
    while (idx < nx_tmp) {
      if (idx == x.colidx[col] - 1) {
        col++;
      } else {
        idx++;
        j[idx - 1] = col;
      }
    }
    if (idx > nx_tmp) {
      emlrtErrorWithMessageIdR2018a(&st, &ud_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp == 1) {
      if (idx == 0) {
        i.set_size(&beb_emlrtRTEI, &st, 0);
        j.set_size(&ceb_emlrtRTEI, &st, 0);
      }
    } else {
      int32_T b_iv[2];
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &axb_emlrtRSI;
      internal::indexShapeCheck(b_st, i.size(0), b_iv);
      i.set_size(&ydb_emlrtRTEI, &st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &bxb_emlrtRSI;
      internal::indexShapeCheck(b_st, j.size(0), b_iv);
      j.set_size(&aeb_emlrtRTEI, &st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &cxb_emlrtRSI;
      internal::indexShapeCheck(b_st, nx_tmp, b_iv);
    }
  }
  if ((x.m == 1) && (i.size(0) != 1)) {
    st.site = &bq_emlrtRSI;
    internal::d_warning(st);
  }
}

void d_eml_find(const emlrtStack &sp, const b_sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.colidx[x.colidx.size(0) - 1] - 1;
  if (nx_tmp == 0) {
    i.set_size(&deb_emlrtRTEI, &sp, 0);
    j.set_size(&eeb_emlrtRTEI, &sp, 0);
  } else {
    int32_T col;
    int32_T idx;
    st.site = &wwb_emlrtRSI;
    if (nx_tmp < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp), &gb_emlrtDCI,
                                  &st);
    }
    i.set_size(&wdb_emlrtRTEI, &st, nx_tmp);
    j.set_size(&xdb_emlrtRTEI, &st, nx_tmp);
    b_st.site = &xwb_emlrtRSI;
    if (nx_tmp > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx < nx_tmp; idx++) {
      i[idx] = x.rowidx[idx];
    }
    b_st.site = &ywb_emlrtRSI;
    idx = 0;
    col = 1;
    while (idx < nx_tmp) {
      if (idx == x.colidx[col] - 1) {
        col++;
      } else {
        idx++;
        j[idx - 1] = col;
      }
    }
    if (idx > nx_tmp) {
      emlrtErrorWithMessageIdR2018a(&st, &ud_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp == 1) {
      if (idx == 0) {
        i.set_size(&beb_emlrtRTEI, &st, 0);
        j.set_size(&ceb_emlrtRTEI, &st, 0);
      }
    } else {
      int32_T b_iv[2];
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &axb_emlrtRSI;
      internal::indexShapeCheck(b_st, i.size(0), b_iv);
      i.set_size(&ydb_emlrtRTEI, &st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &bxb_emlrtRSI;
      internal::indexShapeCheck(b_st, j.size(0), b_iv);
      j.set_size(&aeb_emlrtRTEI, &st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &cxb_emlrtRSI;
      internal::indexShapeCheck(b_st, nx_tmp, b_iv);
    }
  }
}

void d_eml_find(const emlrtStack &sp, const array<real_T, 1U> &x,
                array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  st.site = &cq_emlrtRSI;
  idx = 0;
  i.set_size(&wp_emlrtRTEI, &st, x.size(0));
  b_st.site = &dq_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii] != 0.0) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&xp_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T b_iv[2];
    if (idx < 1) {
      nx_tmp = 0;
    } else {
      nx_tmp = idx;
    }
    b_iv[0] = 1;
    b_iv[1] = nx_tmp;
    b_st.site = &eq_emlrtRSI;
    internal::indexShapeCheck(b_st, i.size(0), b_iv);
    i.set_size(&xp_emlrtRTEI, &st, nx_tmp);
  }
}

void d_eml_find(const emlrtStack &sp, const c_sparse &x, array<int32_T, 2U> &i,
                array<int32_T, 2U> &j, array<real_T, 2U> &v)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.colidx[x.colidx.size(0) - 1];
  nx = nx_tmp - 2;
  if (nx_tmp - 1 == 0) {
    i.set_size(&dfb_emlrtRTEI, &sp, 1, 0);
    j.set_size(&efb_emlrtRTEI, &sp, 1, 0);
    v.set_size(&ffb_emlrtRTEI, &sp, 1, 0);
  } else {
    int32_T idx;
    st.site = &wwb_emlrtRSI;
    i.set_size(&veb_emlrtRTEI, &st, 1, i.size(1));
    if (nx_tmp - 1 < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp - 1), &hb_emlrtDCI,
                                  &st);
    }
    i.set_size(&veb_emlrtRTEI, &st, i.size(0), nx_tmp - 1);
    j.set_size(&web_emlrtRTEI, &st, 1, nx_tmp - 1);
    v.set_size(&xeb_emlrtRTEI, &st, 1, nx_tmp - 1);
    b_st.site = &xwb_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      i[idx] = x.rowidx[idx];
    }
    b_st.site = &ywb_emlrtRSI;
    if (nx_tmp - 1 > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx <= nx; idx++) {
      v[idx] = x.d[idx];
    }
    idx = 0;
    nx = 1;
    while (idx < nx_tmp - 1) {
      if (idx == x.colidx[nx] - 1) {
        nx++;
      } else {
        idx++;
        j[idx - 1] = nx;
      }
    }
    if (idx > nx_tmp - 1) {
      emlrtErrorWithMessageIdR2018a(&st, &ud_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp - 1 == 1) {
      if (idx == 0) {
        i.set_size(&afb_emlrtRTEI, &st, 1, 0);
        j.set_size(&bfb_emlrtRTEI, &st, 1, 0);
        v.set_size(&cfb_emlrtRTEI, &st, 1, 0);
      }
    } else {
      i.set_size(&ydb_emlrtRTEI, &st, i.size(0), idx);
      j.set_size(&aeb_emlrtRTEI, &st, j.size(0), idx);
      v.set_size(&yeb_emlrtRTEI, &st, v.size(0), idx);
    }
  }
}

void d_eml_find(const emlrtStack &sp, const array<real_T, 2U> &x,
                array<int32_T, 2U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(1);
  st.site = &cq_emlrtRSI;
  idx = 0;
  i.set_size(&bs_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &dq_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    idx++;
    i[idx - 1] = ii + 1;
    if (idx >= nx_tmp) {
      exitg1 = true;
    } else {
      ii++;
    }
  }
  if (idx > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(1) == 1) {
    if (idx == 0) {
      i.set_size(&xp_emlrtRTEI, &st, 1, 0);
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }
    i.set_size(&xp_emlrtRTEI, &st, i.size(0), idx);
  }
}

void e_eml_find(const emlrtStack &sp, const sparse &x, array<int32_T, 1U> &i,
                array<int32_T, 1U> &j)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.colidx[x.colidx.size(0) - 1] - 1;
  if (nx_tmp == 0) {
    i.set_size(&deb_emlrtRTEI, &sp, 0);
    j.set_size(&eeb_emlrtRTEI, &sp, 0);
  } else {
    int32_T col;
    int32_T idx;
    st.site = &wwb_emlrtRSI;
    if (nx_tmp < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(nx_tmp), &gb_emlrtDCI,
                                  &st);
    }
    i.set_size(&wdb_emlrtRTEI, &st, nx_tmp);
    j.set_size(&xdb_emlrtRTEI, &st, nx_tmp);
    b_st.site = &xwb_emlrtRSI;
    if (nx_tmp > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (idx = 0; idx < nx_tmp; idx++) {
      i[idx] = x.rowidx[idx];
    }
    b_st.site = &ywb_emlrtRSI;
    idx = 0;
    col = 1;
    while (idx < nx_tmp) {
      if (idx == x.colidx[col] - 1) {
        col++;
      } else {
        idx++;
        j[idx - 1] = col;
      }
    }
    if (idx > nx_tmp) {
      emlrtErrorWithMessageIdR2018a(&st, &ud_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx_tmp == 1) {
      if (idx == 0) {
        i.set_size(&beb_emlrtRTEI, &st, 0);
        j.set_size(&ceb_emlrtRTEI, &st, 0);
      }
    } else {
      int32_T b_iv[2];
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &axb_emlrtRSI;
      internal::indexShapeCheck(b_st, i.size(0), b_iv);
      i.set_size(&ydb_emlrtRTEI, &st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &bxb_emlrtRSI;
      internal::indexShapeCheck(b_st, j.size(0), b_iv);
      j.set_size(&aeb_emlrtRTEI, &st, idx);
      b_iv[0] = 1;
      b_iv[1] = idx;
      b_st.site = &cxb_emlrtRSI;
      internal::indexShapeCheck(b_st, nx_tmp, b_iv);
    }
  }
  if ((x.m == 1) && (i.size(0) != 1) && (x.n >= 2)) {
    st.site = &bq_emlrtRSI;
    internal::d_warning(st);
  }
}

void eml_find(const emlrtStack &sp, const array<boolean_T, 2U> &x,
              array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0) * x.size(1);
  st.site = &cq_emlrtRSI;
  idx = 0;
  i.set_size(&wp_emlrtRTEI, &st, nx_tmp);
  b_st.site = &dq_emlrtRSI;
  if (nx_tmp > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx_tmp - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx_tmp) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > nx_tmp) {
    emlrtErrorWithMessageIdR2018a(&st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nx_tmp == 1) {
    if (idx == 0) {
      i.set_size(&xp_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T b_iv[2];
    if (idx < 1) {
      nx_tmp = 0;
    } else {
      nx_tmp = idx;
    }
    b_iv[0] = 1;
    b_iv[1] = nx_tmp;
    b_st.site = &eq_emlrtRSI;
    internal::indexShapeCheck(b_st, i.size(0), b_iv);
    i.set_size(&xp_emlrtRTEI, &st, nx_tmp);
  }
  if ((x.size(0) == 1) && (i.size(0) != 1) && (x.size(1) >= 2)) {
    st.site = &bq_emlrtRSI;
    internal::d_warning(st);
  }
}

} // namespace coder

// End of code generation (find.cpp)
