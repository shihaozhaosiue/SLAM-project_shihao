//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse.cpp
//
// Code generation for function 'sparse'
//

// Include files
#include "sparse.h"
#include "anonymous_function.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "introsort.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo hf_emlrtRTEI{
    111,             // lineNo
    35,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo if_emlrtRTEI{
    116,             // lineNo
    35,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtDCInfo hc_emlrtDCI{
    13,       // lineNo
    1,        // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m", // pName
    4 // checkKind
};

static emlrtRTEInfo yv_emlrtRTEI{
    13,       // lineNo
    1,        // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m" // pName
};

static emlrtRTEInfo gob_emlrtRTEI{
    125,      // lineNo
    44,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

// Function Definitions
namespace coder {
void h_sparse(const emlrtStack &sp, const array<int32_T, 1U> &varargin_1,
              const array<int32_T, 1U> &varargin_2,
              const array<real_T, 1U> &varargin_3, real_T varargin_4,
              real_T varargin_5, sparse &y)
{
  c_anonymous_function b_this;
  array<int32_T, 1U> sortedIndices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  int32_T cptr;
  int32_T i;
  int32_T maxr;
  int32_T nc_tmp;
  int32_T y_tmp_tmp;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qcb_emlrtRSI;
  nc_tmp = varargin_2.size(0);
  if ((varargin_1.size(0) != varargin_2.size(0)) ||
      (varargin_3.size(0) != varargin_2.size(0))) {
    emlrtErrorWithMessageIdR2018a(&st, &hf_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  if ((varargin_3.size(0) != varargin_2.size(0)) &&
      (varargin_3.size(0) != varargin_1.size(0))) {
    emlrtErrorWithMessageIdR2018a(&st, &if_emlrtRTEI, "MATLAB:samelen",
                                  "MATLAB:samelen", 0);
  }
  b_st.site = &tyc_emlrtRSI;
  sparse::assertValidIndexArg(b_st, varargin_1, b_this.workspace.b);
  b_st.site = &syc_emlrtRSI;
  sparse::assertValidIndexArg(b_st, varargin_2, b_this.workspace.a);
  sortedIndices.set_size(&gob_emlrtRTEI, &st, varargin_2.size(0));
  b_st.site = &ryc_emlrtRSI;
  if (varargin_2.size(0) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  cptr = (varargin_2.size(0) / 4) << 2;
  maxr = cptr - 4;
  for (int32_T k{0}; k <= maxr; k += 4) {
    _mm_storeu_si128(
        (__m128i *)&sortedIndices[k],
        _mm_add_epi32(_mm_add_epi32(_mm_set1_epi32(k),
                                    _mm_loadu_si128((const __m128i *)&iv3[0])),
                      _mm_set1_epi32(1)));
  }
  for (int32_T k{cptr}; k < nc_tmp; k++) {
    sortedIndices[k] = k + 1;
  }
  b_st.site = &qyc_emlrtRSI;
  c_st.site = &vyc_emlrtRSI;
  internal::introsort(c_st, sortedIndices, b_this.workspace.a.size(0), b_this);
  c_st.site = &wyc_emlrtRSI;
  sparse::permuteVector(c_st, sortedIndices, b_this.workspace.a);
  c_st.site = &xyc_emlrtRSI;
  sparse::permuteVector(c_st, sortedIndices, b_this.workspace.b);
  b_st.site = &eib_emlrtRSI;
  c_st.site = &rcb_emlrtRSI;
  if ((varargin_4 != varargin_4) || muDoubleScalarIsInf(varargin_4)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_4 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (!(varargin_4 < 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  b_st.site = &dib_emlrtRSI;
  c_st.site = &rcb_emlrtRSI;
  if ((varargin_5 != varargin_5) || muDoubleScalarIsInf(varargin_5)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_5 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
                                  "Coder:toolbox:SparseNegativeSize",
                                  "Coder:toolbox:SparseNegativeSize", 0);
  }
  if (!(varargin_5 < 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  y.m = static_cast<int32_T>(varargin_4);
  y_tmp_tmp = static_cast<int32_T>(varargin_5);
  y.n = static_cast<int32_T>(varargin_5);
  if (b_this.workspace.b.size(0) != 0) {
    b_st.site = &pyc_emlrtRSI;
    c_st.site = &mbb_emlrtRSI;
    d_st.site = &nbb_emlrtRSI;
    e_st.site = &obb_emlrtRSI;
    f_st.site = &jfb_emlrtRSI;
    cptr = b_this.workspace.b.size(0);
    g_st.site = &kfb_emlrtRSI;
    maxr = b_this.workspace.b[0];
    h_st.site = &lfb_emlrtRSI;
    if (b_this.workspace.b.size(0) > 2147483646) {
      i_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(i_st);
    }
    for (int32_T k{2}; k <= cptr; k++) {
      i = b_this.workspace.b[k - 1];
      if (maxr < i) {
        maxr = i;
      }
    }
    if (maxr > static_cast<int32_T>(varargin_4)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &jf_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
          "Coder:builtins:IndexOutOfBounds", 6, 12, maxr, 12, 1, 12,
          static_cast<int32_T>(varargin_4));
    }
  }
  if (b_this.workspace.a.size(0) != 0) {
    i = b_this.workspace.a[b_this.workspace.a.size(0) - 1];
    if (i > static_cast<int32_T>(varargin_5)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &kf_emlrtRTEI, "Coder:builtins:IndexOutOfBounds",
          "Coder:builtins:IndexOutOfBounds", 6, 12, i, 12, 1, 12,
          static_cast<int32_T>(varargin_5));
    }
  }
  cptr = varargin_2.size(0);
  maxr = muIntScalarMax_sint32(cptr, 1);
  y.d.set_size(&yv_emlrtRTEI, &st, maxr);
  for (i = 0; i < maxr; i++) {
    y.d[i] = 0.0;
  }
  y.maxnz = maxr;
  if (static_cast<int32_T>(varargin_5) + 1 < 0) {
    emlrtNonNegativeCheckR2012b(
        static_cast<real_T>(static_cast<int32_T>(varargin_5) + 1), &hc_emlrtDCI,
        &st);
  }
  cptr = static_cast<int32_T>(varargin_5) + 1;
  y.colidx.set_size(&yv_emlrtRTEI, &st, static_cast<int32_T>(varargin_5) + 1);
  for (i = 0; i < cptr; i++) {
    y.colidx[i] = 0;
  }
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, maxr);
  for (i = 0; i < maxr; i++) {
    y.rowidx[i] = 0;
  }
  cptr = 0;
  b_st.site = &bib_emlrtRSI;
  if (static_cast<int32_T>(varargin_5) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (maxr = 0; maxr < y_tmp_tmp; maxr++) {
    while ((cptr + 1 <= nc_tmp) && (b_this.workspace.a[cptr] == maxr + 1)) {
      y.rowidx[cptr] = b_this.workspace.b[cptr];
      cptr++;
    }
    y.colidx[maxr + 1] = cptr + 1;
  }
  b_st.site = &oyc_emlrtRSI;
  for (int32_T k{0}; k < nc_tmp; k++) {
    y.d[k] = varargin_3[sortedIndices[k] - 1];
  }
  b_st.site = &aib_emlrtRSI;
  y.fillIn();
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void h_sparse(const emlrtStack &sp, const array<real_T, 1U> &varargin_1,
              b_sparse &y)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T mInt_tmp;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qcb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  mInt_tmp = varargin_1.size(0);
  b_st.site = &nhb_emlrtRSI;
  if (varargin_1.size(0) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = 0;
  for (int32_T k{0}; k < mInt_tmp; k++) {
    if (varargin_1[k] != 0.0) {
      numalloc++;
    }
  }
  y.m = varargin_1.size(0);
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  y.maxnz = numalloc;
  y.d.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (int32_T k{0}; k < numalloc; k++) {
    y.d[k] = 0.0;
  }
  y.colidx.set_size(&yv_emlrtRTEI, &st, 2);
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (int32_T k{0}; k < numalloc; k++) {
    y.rowidx[k] = 0;
  }
  y.rowidx[0] = 1;
  numalloc = 0;
  for (int32_T k{0}; k < mInt_tmp; k++) {
    if (varargin_1[k] != 0.0) {
      y.rowidx[numalloc] = k + 1;
      y.d[numalloc] = 1.0;
      numalloc++;
    }
  }
  y.colidx[1] = numalloc + 1;
}

void h_sparse(const emlrtStack &sp, const array<real_T, 2U> &varargin_1,
              sparse &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T mInt_tmp;
  int32_T nInt_tmp;
  int32_T numalloc;
  int32_T row;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qcb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  mInt_tmp = varargin_1.size(0);
  nInt_tmp = varargin_1.size(1);
  b_st.site = &nhb_emlrtRSI;
  if (varargin_1.size(0) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  b_st.site = &ohb_emlrtRSI;
  if (varargin_1.size(1) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = 0;
  row = varargin_1.size(0) * varargin_1.size(1);
  for (int32_T k{0}; k < row; k++) {
    if (varargin_1[k] != 0.0) {
      numalloc++;
    }
  }
  y.m = varargin_1.size(0);
  y.n = varargin_1.size(1);
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  y.maxnz = numalloc;
  y.d.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (row = 0; row < numalloc; row++) {
    y.d[row] = 0.0;
  }
  y.colidx.set_size(&yv_emlrtRTEI, &st, varargin_1.size(1) + 1);
  for (row = 0; row <= nInt_tmp; row++) {
    y.colidx[row] = 0;
  }
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (row = 0; row < numalloc; row++) {
    y.rowidx[row] = 0;
  }
  y.rowidx[0] = 1;
  numalloc = 0;
  b_st.site = &phb_emlrtRSI;
  for (int32_T k{0}; k < nInt_tmp; k++) {
    b_st.site = &qhb_emlrtRSI;
    if (mInt_tmp > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (row = 0; row < mInt_tmp; row++) {
      if (varargin_1[row + varargin_1.size(0) * k] != 0.0) {
        y.rowidx[numalloc] = row + 1;
        y.d[numalloc] = 1.0;
        numalloc++;
      }
    }
    y.colidx[k + 1] = numalloc + 1;
  }
}

void h_sparse(const emlrtStack &sp, const array<real_T, 2U> &varargin_1,
              c_sparse &y)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T nInt_tmp;
  int32_T numalloc;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qcb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nInt_tmp = varargin_1.size(1);
  b_st.site = &ohb_emlrtRSI;
  if (varargin_1.size(1) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = 0;
  for (int32_T k{0}; k < nInt_tmp; k++) {
    if (varargin_1[k] != 0.0) {
      numalloc++;
    }
  }
  y.n = varargin_1.size(1);
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  y.maxnz = numalloc;
  y.d.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (int32_T k{0}; k < numalloc; k++) {
    y.d[k] = 0.0;
  }
  y.colidx.set_size(&yv_emlrtRTEI, &st, varargin_1.size(1) + 1);
  for (int32_T k{0}; k <= nInt_tmp; k++) {
    y.colidx[k] = 0;
  }
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (int32_T k{0}; k < numalloc; k++) {
    y.rowidx[k] = 0;
  }
  y.rowidx[0] = 1;
  numalloc = 0;
  for (int32_T k{0}; k < nInt_tmp; k++) {
    real_T xrc;
    xrc = varargin_1[k];
    if (xrc != 0.0) {
      y.rowidx[numalloc] = 1;
      y.d[numalloc] = xrc;
      numalloc++;
    }
    y.colidx[k + 1] = numalloc + 1;
  }
}

void h_sparse(const emlrtStack &sp, sparse &y)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qcb_emlrtRSI;
  y.m = 0;
  y.n = 0;
  y.d.set_size(&yv_emlrtRTEI, &st, 1);
  y.d[0] = 0.0;
  y.colidx.set_size(&yv_emlrtRTEI, &st, 1);
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, 1);
  y.rowidx[0] = 1;
  y.maxnz = 1;
}

void i_sparse(const emlrtStack &sp, boolean_T varargin_1, e_sparse &y)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qcb_emlrtRSI;
  y.d.set_size(&yv_emlrtRTEI, &st, 1);
  y.d[0] = false;
  y.colidx.set_size(&yv_emlrtRTEI, &st, 2);
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, 1);
  y.rowidx[0] = 1;
  y.colidx[1] = 1;
  if (varargin_1) {
    y.rowidx[0] = 1;
    y.d[0] = true;
    y.colidx[1] = 2;
  }
}

void j_sparse(const emlrtStack &sp, const array<boolean_T, 2U> &varargin_1,
              f_sparse &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T mInt_tmp;
  int32_T nInt_tmp;
  int32_T numalloc;
  int32_T row;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &qcb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  mInt_tmp = varargin_1.size(0);
  nInt_tmp = varargin_1.size(1);
  b_st.site = &nhb_emlrtRSI;
  if (varargin_1.size(0) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  b_st.site = &ohb_emlrtRSI;
  if (varargin_1.size(1) >= MAX_int32_T) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &lc_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
        "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
  }
  numalloc = 0;
  row = varargin_1.size(0) * varargin_1.size(1);
  for (int32_T k{0}; k < row; k++) {
    if (varargin_1[k]) {
      numalloc++;
    }
  }
  y.m = varargin_1.size(0);
  y.n = varargin_1.size(1);
  numalloc = muIntScalarMax_sint32(numalloc, 1);
  y.d.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (row = 0; row < numalloc; row++) {
    y.d[row] = false;
  }
  y.colidx.set_size(&yv_emlrtRTEI, &st, varargin_1.size(1) + 1);
  for (row = 0; row <= nInt_tmp; row++) {
    y.colidx[row] = 0;
  }
  y.colidx[0] = 1;
  y.rowidx.set_size(&yv_emlrtRTEI, &st, numalloc);
  for (row = 0; row < numalloc; row++) {
    y.rowidx[row] = 0;
  }
  y.rowidx[0] = 1;
  numalloc = 0;
  b_st.site = &phb_emlrtRSI;
  for (int32_T k{0}; k < nInt_tmp; k++) {
    b_st.site = &qhb_emlrtRSI;
    if (mInt_tmp > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (row = 0; row < mInt_tmp; row++) {
      if (varargin_1[row + varargin_1.size(0) * k]) {
        y.rowidx[numalloc] = row + 1;
        y.d[numalloc] = true;
        numalloc++;
      }
    }
    y.colidx[k + 1] = numalloc + 1;
  }
}

} // namespace coder

// End of code generation (sparse.cpp)
