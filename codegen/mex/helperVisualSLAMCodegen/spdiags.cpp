//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// spdiags.cpp
//
// Code generation for function 'spdiags'
//

// Include files
#include "spdiags.h"
#include "anonymous_function.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "introsort.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo kyc_emlrtRSI{
    101,       // lineNo
    "spdiags", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pathName
};

static emlrtRSInfo lyc_emlrtRSI{
    135,       // lineNo
    "spdiags", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pathName
};

static emlrtRSInfo myc_emlrtRSI{
    136,       // lineNo
    "spdiags", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pathName
};

static emlrtRSInfo nyc_emlrtRSI{
    173,       // lineNo
    "spdiags", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pathName
};

static emlrtRTEInfo ef_emlrtRTEI{
    116,       // lineNo
    9,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo ff_emlrtRTEI{
    80,        // lineNo
    13,        // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo gf_emlrtRTEI{
    71,        // lineNo
    13,        // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo aob_emlrtRTEI{
    124,       // lineNo
    5,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo bob_emlrtRTEI{
    125,       // lineNo
    5,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo cob_emlrtRTEI{
    129,       // lineNo
    9,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo dob_emlrtRTEI{
    136,       // lineNo
    9,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo eob_emlrtRTEI{
    137,       // lineNo
    15,        // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo fob_emlrtRTEI{
    137,       // lineNo
    9,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

static emlrtRTEInfo nob_emlrtRTEI{
    119,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo oob_emlrtRTEI{
    120,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo pob_emlrtRTEI{
    1666,     // lineNo
    5,        // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo qob_emlrtRTEI{
    173,       // lineNo
    5,         // colNo
    "spdiags", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\sparfun\\spdiags.m" // pName
};

// Function Definitions
namespace coder {
void spdiags(const emlrtStack &sp, const array<real_T, 1U> &arg1, real_T arg3,
             real_T arg4, sparse &res1)
{
  array<real_T, 2U> idx;
  array<real_T, 2U> y;
  array<real_T, 1U> aDat;
  array<int32_T, 2U> b_r;
  array<int32_T, 1U> aCols;
  array<int32_T, 1U> aRows;
  array<int32_T, 1U> aRows_tmp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T maxIndex;
  real_T minAdjustedDim_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  boolean_T b{false};
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if ((!(arg3 == muDoubleScalarFloor(arg3))) || (!(arg3 >= 0.0))) {
    emlrtErrorWithMessageIdR2018a(&sp, &gf_emlrtRTEI,
                                  "Coder:toolbox:spdiagsBadSize",
                                  "Coder:toolbox:spdiagsBadSize", 3, 4, 1, "m");
  }
  if ((!(arg4 == muDoubleScalarFloor(arg4))) || (!(arg4 >= 0.0))) {
    emlrtErrorWithMessageIdR2018a(&sp, &ff_emlrtRTEI,
                                  "Coder:toolbox:spdiagsBadSize",
                                  "Coder:toolbox:spdiagsBadSize", 3, 4, 1, "n");
  }
  st.site = &kyc_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if ((!(-arg3 + 1.0 <= 0.0)) || (!(arg4 - 1.0 >= 0.0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  minAdjustedDim_data = muDoubleScalarMin(arg3, arg4);
  if (minAdjustedDim_data < 1.0) {
    maxIndex = 0.0;
  } else {
    maxIndex = minAdjustedDim_data;
  }
  b = (maxIndex > arg1.size(0));
  if (b) {
    emlrtErrorWithMessageIdR2018a(&sp, &ef_emlrtRTEI,
                                  "MATLAB:spdiags:InvalidSizeBFourInput",
                                  "MATLAB:spdiags:InvalidSizeBFourInput", 0);
  }
  i = static_cast<int32_T>((minAdjustedDim_data - 1.0) + 1.0);
  aRows.set_size(&aob_emlrtRTEI, &sp, i);
  for (int32_T i1{0}; i1 < i; i1++) {
    aRows[i1] = 0;
  }
  aCols.set_size(&bob_emlrtRTEI, &sp, i);
  for (int32_T i1{0}; i1 < i; i1++) {
    aCols[i1] = 0;
  }
  aDat.set_size(&cob_emlrtRTEI, &sp, i);
  for (int32_T i1{0}; i1 < i; i1++) {
    aDat[i1] = 0.0;
  }
  if (minAdjustedDim_data < 1.0) {
    y.set_size(&wm_emlrtRTEI, &sp, 1, 0);
  } else if (muDoubleScalarIsInf(minAdjustedDim_data) &&
             (minAdjustedDim_data == 1.0)) {
    y.set_size(&wm_emlrtRTEI, &sp, 1, 1);
    y[0] = rtNaN;
  } else {
    y.set_size(&wm_emlrtRTEI, &sp, 1,
               static_cast<int32_T>(minAdjustedDim_data - 1.0) + 1);
    i = static_cast<int32_T>(minAdjustedDim_data - 1.0);
    for (int32_T i1{0}; i1 <= i; i1++) {
      y[i1] = static_cast<real_T>(i1) + 1.0;
    }
  }
  if ((minAdjustedDim_data - 1.0) + 1.0 < 1.0) {
    idx.set_size(&dob_emlrtRTEI, &sp, 1, 0);
  } else if (muDoubleScalarIsInf((minAdjustedDim_data - 1.0) + 1.0) &&
             ((minAdjustedDim_data - 1.0) + 1.0 == 1.0)) {
    idx.set_size(&dob_emlrtRTEI, &sp, 1, 1);
    idx[0] = rtNaN;
  } else {
    idx.set_size(
        &dob_emlrtRTEI, &sp, 1,
        static_cast<int32_T>(((minAdjustedDim_data - 1.0) + 1.0) - 1.0) + 1);
    i = static_cast<int32_T>(((minAdjustedDim_data - 1.0) + 1.0) - 1.0);
    for (int32_T i1{0}; i1 <= i; i1++) {
      idx[i1] = static_cast<real_T>(i1) + 1.0;
    }
  }
  i = idx.size(1);
  loop_ub = y.size(1);
  st.site = &lyc_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  st.site = &myc_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  b_loop_ub = idx.size(1);
  b_r.set_size(&eob_emlrtRTEI, &sp, 1, idx.size(1));
  for (int32_T i1{0}; i1 < i; i1++) {
    b_r[i1] = static_cast<int32_T>(idx[i1]);
  }
  aRows_tmp.set_size(&fob_emlrtRTEI, &sp, y.size(1));
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    aRows_tmp[i1] = static_cast<int32_T>(y[i1]);
  }
  for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
    i = b_r[i1];
    aRows[i - 1] = aRows_tmp[i1];
    aCols[i - 1] = aRows_tmp[i1];
    aDat[i - 1] = arg1[aRows_tmp[i1] - 1];
  }
  st.site = &nyc_emlrtRSI;
  h_sparse(st, aRows, aCols, aDat, arg3, arg4, res1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void spdiags(const emlrtStack &sp, real_T arg1, d_sparse &res1)
{
  c_anonymous_function b_this;
  array<int32_T, 1U> b_aCols_data;
  array<int32_T, 1U> sortedIndices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T aCols_data;
  int32_T cptr;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_this.workspace.a.set_size(&aob_emlrtRTEI, &sp, 1);
  b_this.workspace.a[0] = 0;
  st.site = &lyc_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  st.site = &myc_emlrtRSI;
  b_st.site = &pj_emlrtRSI;
  b_this.workspace.a[0] = 1;
  aCols_data = 1;
  st.site = &nyc_emlrtRSI;
  b_st.site = &qcb_emlrtRSI;
  c_st.site = &tyc_emlrtRSI;
  sparse::assertValidIndexArg(c_st, b_this.workspace.a, sortedIndices);
  cptr = sortedIndices.size(0);
  b_this.workspace.b.set_size(&nob_emlrtRTEI, &b_st, sortedIndices.size(0));
  for (int32_T i{0}; i < cptr; i++) {
    b_this.workspace.b[i] = sortedIndices[i];
  }
  b_aCols_data.set(&aCols_data, 1);
  c_st.site = &syc_emlrtRSI;
  sparse::assertValidIndexArg(c_st, b_aCols_data, sortedIndices);
  cptr = sortedIndices.size(0);
  b_this.workspace.a.set_size(&oob_emlrtRTEI, &b_st, sortedIndices.size(0));
  for (int32_T i{0}; i < cptr; i++) {
    b_this.workspace.a[i] = sortedIndices[i];
  }
  c_st.site = &ryc_emlrtRSI;
  c_st.site = &qyc_emlrtRSI;
  sortedIndices.set_size(&pob_emlrtRTEI, &c_st, 1);
  sortedIndices[0] = 1;
  d_st.site = &vyc_emlrtRSI;
  internal::introsort(d_st, sortedIndices, 1, b_this);
  d_st.site = &wyc_emlrtRSI;
  sparse::permuteVector(d_st, sortedIndices, b_this.workspace.a);
  d_st.site = &xyc_emlrtRSI;
  sparse::permuteVector(d_st, sortedIndices, b_this.workspace.b);
  c_st.site = &pyc_emlrtRSI;
  if (b_this.workspace.b[0] > 1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &jf_emlrtRTEI,
                                  "Coder:builtins:IndexOutOfBounds",
                                  "Coder:builtins:IndexOutOfBounds", 6, 12,
                                  b_this.workspace.b[0], 12, 1, 12, 1);
  }
  if (b_this.workspace.a[0] > 1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kf_emlrtRTEI,
                                  "Coder:builtins:IndexOutOfBounds",
                                  "Coder:builtins:IndexOutOfBounds", 6, 12,
                                  b_this.workspace.a[0], 12, 1, 12, 1);
  }
  res1.d.set_size(&qob_emlrtRTEI, &b_st, 1);
  res1.colidx.set_size(&qob_emlrtRTEI, &b_st, 2);
  res1.colidx[0] = 1;
  res1.rowidx.set_size(&qob_emlrtRTEI, &b_st, 1);
  res1.rowidx[0] = 0;
  cptr = 1;
  if (b_this.workspace.a[0] == 1) {
    res1.rowidx[0] = b_this.workspace.b[0];
    cptr = 2;
  }
  res1.colidx[1] = cptr;
  c_st.site = &oyc_emlrtRSI;
  res1.d[0] = arg1;
  c_st.site = &aib_emlrtRSI;
  res1.fillIn();
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (spdiags.cpp)
