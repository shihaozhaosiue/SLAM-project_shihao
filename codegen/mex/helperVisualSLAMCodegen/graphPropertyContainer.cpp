//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// graphPropertyContainer.cpp
//
// Code generation for function 'graphPropertyContainer'
//

// Include files
#include "graphPropertyContainer.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "nullAssignment.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo sac_emlrtRSI{
    233,                             // lineNo
    "graphPropertyContainer/remove", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

static emlrtRSInfo tac_emlrtRSI{
    152,                      // lineNo
    "onearg_null_assignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo uac_emlrtRSI{
    240,                             // lineNo
    "graphPropertyContainer/remove", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

static emlrtRSInfo ifd_emlrtRSI{
    24,               // lineNo
    "nullAssignment", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo jfd_emlrtRSI{
    311,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo kfd_emlrtRSI{
    326,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo lfd_emlrtRSI{
    328,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo mfd_emlrtRSI{
    332,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo nfd_emlrtRSI{
    313,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo ofd_emlrtRSI{
    317,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtRSInfo pfd_emlrtRSI{
    336,                // lineNo
    "delete_rows_cell", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pathName
};

static emlrtBCInfo ukb_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    232,                             // lineNo
    51,                              // colNo
    "",                              // aName
    "graphPropertyContainer/remove", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo xd_emlrtDCI{
    329,                // lineNo
    29,                 // colNo
    "delete_rows_cell", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m", // pName
    4                             // checkKind
};

static emlrtRTEInfo qh_emlrtRTEI{
    342,                // lineNo
    1,                  // colNo
    "delete_rows_cell", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo rh_emlrtRTEI{
    158,                      // lineNo
    9,                        // colNo
    "onearg_null_assignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtBCInfo vkb_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    232,                             // lineNo
    26,                              // colNo
    "",                              // aName
    "graphPropertyContainer/remove", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo udc_emlrtRTEI{
    229,                      // lineNo
    13,                       // colNo
    "graphPropertyContainer", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

static emlrtRTEInfo vdc_emlrtRTEI{
    226,                      // lineNo
    24,                       // colNo
    "graphPropertyContainer", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

static emlrtRTEInfo wdc_emlrtRTEI{
    240,                      // lineNo
    34,                       // colNo
    "graphPropertyContainer", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

static emlrtRTEInfo xdc_emlrtRTEI{
    329,              // lineNo
    35,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo ydc_emlrtRTEI{
    310,              // lineNo
    35,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo aec_emlrtRTEI{
    337,              // lineNo
    13,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo bec_emlrtRTEI{
    318,              // lineNo
    17,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo cec_emlrtRTEI{
    314,              // lineNo
    17,               // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo dec_emlrtRTEI{
    240,                      // lineNo
    21,                       // colNo
    "graphPropertyContainer", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

static emlrtRTEInfo eec_emlrtRTEI{
    297,              // lineNo
    7,                // colNo
    "nullAssignment", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" // pName
};

static emlrtRTEInfo fec_emlrtRTEI{
    233,                      // lineNo
    21,                       // colNo
    "graphPropertyContainer", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void c_graphPropertyContainer::b_remove(const emlrtStack &sp,
                                        const array<real_T, 1U> &index_in)
{
  array<b_rigidtform3d, 1U> x;
  array<cell_wrap_7, 2U> b_x;
  array<real_T, 1U> b_index;
  array<int32_T, 1U> idx;
  array<int32_T, 1U> idx_tmp;
  array<boolean_T, 2U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_nrows;
  int32_T bidx;
  int32_T ii;
  int32_T k;
  int32_T loop_ub_tmp;
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
  ii = index_in.size(0);
  b_index.set_size(&udc_emlrtRTEI, &sp, index_in.size(0));
  for (loop_ub_tmp = 0; loop_ub_tmp < ii; loop_ub_tmp++) {
    b_index[loop_ub_tmp] = index_in[loop_ub_tmp];
  }
  for (ii = index_in.size(0); ii > 0; ii--) {
    loop_ub_tmp = b_index.size(0);
    if (ii > b_index.size(0)) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, b_index.size(0), &vkb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (b_index[ii - 1] > nrows) {
      st.site = &sac_emlrtRSI;
      b_st.site = &mac_emlrtRSI;
      if (ii > b_index.size(0)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &mh_emlrtRTEI,
                                      "MATLAB:subsdeldimmismatch",
                                      "MATLAB:subsdeldimmismatch", 0);
      }
      b_st.site = &nac_emlrtRSI;
      c_st.site = &tac_emlrtRSI;
      for (k = ii; k < loop_ub_tmp; k++) {
        b_index[k - 1] = b_index[k];
      }
      if (b_index.size(0) - 1 > b_index.size(0)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &rh_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      b_index.set_size(&fec_emlrtRTEI, &b_st, b_index.size(0) - 1);
    } else if (ii > b_index.size(0)) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, b_index.size(0), &ukb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  st.site = &uac_emlrtRSI;
  x.set_size(&vdc_emlrtRTEI, &st, data.f1.size(0));
  ii = data.f1.size(0);
  for (loop_ub_tmp = 0; loop_ub_tmp < ii; loop_ub_tmp++) {
    x[loop_ub_tmp] = data.f1[loop_ub_tmp];
  }
  ii = b_index.size(0);
  idx_tmp.set_size(&wdc_emlrtRTEI, &st, b_index.size(0));
  for (loop_ub_tmp = 0; loop_ub_tmp < ii; loop_ub_tmp++) {
    idx_tmp[loop_ub_tmp] = static_cast<int32_T>(b_index[loop_ub_tmp]);
  }
  b_st.site = &vac_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx_tmp.size(0) - 1)) {
    if (idx_tmp[k] > data.f1.size(0)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xg_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  b_st.site = &ifd_emlrtRSI;
  if (idx_tmp.size(0) == 1) {
    b_nrows = data.f1.size(0) - 1;
    data.f1.set_size(&ydc_emlrtRTEI, &b_st, data.f1.size(0) - 1);
    c_st.site = &jfd_emlrtRSI;
    for (bidx = 0; bidx < b_nrows; bidx++) {
      if (bidx + 1 >= idx_tmp[0]) {
        data.f1[bidx] = x[bidx + 1];
      } else {
        data.f1[bidx] = x[bidx];
      }
    }
  } else {
    c_st.site = &kfd_emlrtRSI;
    ::coder::internal::make_bitarray(c_st, data.f1.size(0), idx_tmp, b);
    c_st.site = &lfd_emlrtRSI;
    b_nrows = data.f1.size(0) - ::coder::internal::num_true(c_st, b);
    if (b_nrows < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(b_nrows), &xd_emlrtDCI,
                                  &b_st);
    }
    data.f1.set_size(&xdc_emlrtRTEI, &b_st, b_nrows);
    bidx = 0;
    c_st.site = &mfd_emlrtRSI;
    if (b_nrows > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 0; k < b_nrows; k++) {
      while ((bidx + 1 <= b.size(1)) && b[bidx]) {
        bidx++;
      }
      data.f1[k] = x[bidx];
      bidx++;
    }
  }
  if (b_nrows > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &qh_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  st.site = &uac_emlrtRSI;
  idx.set_size(&wdc_emlrtRTEI, &st, b_index.size(0));
  for (loop_ub_tmp = 0; loop_ub_tmp < ii; loop_ub_tmp++) {
    idx[loop_ub_tmp] = static_cast<int32_T>(b_index[loop_ub_tmp]);
  }
  b_st.site = &vac_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx.size(0) - 1)) {
    if (idx[k] > data.f2.size(0)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xg_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  b_st.site = &ifd_emlrtRSI;
  if (idx.size(0) == 1) {
    b_nrows = data.f2.size(0) - 1;
    b_x.set_size(&ydc_emlrtRTEI, &b_st, data.f2.size(0) - 1, 1);
    c_st.site = &jfd_emlrtRSI;
    for (bidx = 0; bidx < b_nrows; bidx++) {
      if (bidx + 1 >= idx[0]) {
        int32_T b_loop_ub_tmp;
        c_st.site = &nfd_emlrtRSI;
        ii = data.f2[bidx + 1].f1.size(0);
        loop_ub_tmp = data.f2[bidx + 1].f1.size(1);
        b_loop_ub_tmp = ii * loop_ub_tmp;
        b_x[bidx].f1.set_size(&cec_emlrtRTEI, &b_st, ii, loop_ub_tmp);
        for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub_tmp; loop_ub_tmp++) {
          b_x[bidx].f1[loop_ub_tmp] = data.f2[bidx + 1].f1[loop_ub_tmp];
        }
      } else {
        int32_T b_loop_ub_tmp;
        c_st.site = &ofd_emlrtRSI;
        ii = data.f2[bidx].f1.size(0);
        loop_ub_tmp = data.f2[bidx].f1.size(1);
        b_loop_ub_tmp = ii * loop_ub_tmp;
        b_x[bidx].f1.set_size(&bec_emlrtRTEI, &b_st, ii, loop_ub_tmp);
        for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub_tmp; loop_ub_tmp++) {
          b_x[bidx].f1[loop_ub_tmp] = data.f2[bidx].f1[loop_ub_tmp];
        }
      }
    }
  } else {
    c_st.site = &kfd_emlrtRSI;
    ::coder::internal::make_bitarray(c_st, data.f2.size(0), idx, b);
    c_st.site = &lfd_emlrtRSI;
    b_nrows = data.f2.size(0) - ::coder::internal::num_true(c_st, b);
    if (b_nrows < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(b_nrows), &xd_emlrtDCI,
                                  &b_st);
    }
    b_x.set_size(&xdc_emlrtRTEI, &b_st, b_nrows, 1);
    bidx = 0;
    c_st.site = &mfd_emlrtRSI;
    if (b_nrows > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 0; k < b_nrows; k++) {
      int32_T b_loop_ub_tmp;
      while ((bidx + 1 <= b.size(1)) && b[bidx]) {
        bidx++;
      }
      c_st.site = &pfd_emlrtRSI;
      ii = data.f2[bidx].f1.size(0);
      loop_ub_tmp = data.f2[bidx].f1.size(1);
      b_loop_ub_tmp = ii * loop_ub_tmp;
      b_x[k].f1.set_size(&aec_emlrtRTEI, &b_st, ii, loop_ub_tmp);
      for (loop_ub_tmp = 0; loop_ub_tmp < b_loop_ub_tmp; loop_ub_tmp++) {
        b_x[k].f1[loop_ub_tmp] = data.f2[bidx].f1[loop_ub_tmp];
      }
      bidx++;
    }
  }
  if (b_nrows > data.f2.size(0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &qh_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  ii = b_x.size(0);
  data.f2.set_size(&dec_emlrtRTEI, &sp, b_x.size(0), 1);
  for (loop_ub_tmp = 0; loop_ub_tmp < ii; loop_ub_tmp++) {
    data.f2[loop_ub_tmp] = b_x[loop_ub_tmp];
  }
  st.site = &uac_emlrtRSI;
  b_st.site = &vac_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx_tmp.size(0) - 1)) {
    if (idx_tmp[k] > data.f3.size(0)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xg_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  b_st.site = &wac_emlrtRSI;
  ii = data.f3.size(0);
  if (idx_tmp.size(0) == 1) {
    b_nrows = data.f3.size(0) - 1;
    loop_ub_tmp = idx_tmp[0];
    c_st.site = &xac_emlrtRSI;
    for (bidx = loop_ub_tmp; bidx <= b_nrows; bidx++) {
      data.f3[bidx - 1] = data.f3[bidx];
    }
  } else {
    c_st.site = &yac_emlrtRSI;
    ::coder::internal::make_bitarray(c_st, data.f3.size(0), idx_tmp, b);
    c_st.site = &abc_emlrtRSI;
    b_nrows = data.f3.size(0) - ::coder::internal::num_true(c_st, b);
    bidx = 0;
    c_st.site = &bbc_emlrtRSI;
    if (data.f3.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (k = 0; k < ii; k++) {
      if ((k + 1 > b.size(1)) || (!b[k])) {
        data.f3[bidx] = data.f3[k];
        bidx++;
      }
    }
  }
  if (b_nrows > data.f3.size(0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &yg_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (b_nrows < 1) {
    b_nrows = 0;
  }
  data.f3.set_size(&eec_emlrtRTEI, &b_st, b_nrows);
  nrows -= b_index.size(0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (graphPropertyContainer.cpp)
