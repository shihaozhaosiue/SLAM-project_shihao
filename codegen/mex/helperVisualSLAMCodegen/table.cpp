//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// table.cpp
//
// Code generation for function 'table'
//

// Include files
#include "table.h"
#include "any1.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rigidtform3d.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo gv_emlrtRTEI{
    217,     // lineNo
    17,      // colNo
    "table", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@table\\table.m" // pName
};

static emlrtRTEInfo jqb_emlrtRTEI{
    16,      // lineNo
    13,      // colNo
    "isnan", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m" // pName
};

// Function Definitions
namespace coder {
void b_table::init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
                   const array<real_T, 1U> &varargin_2,
                   const array<real32_T, 2U> &varargin_3)
{
  array<uint32_T, 2U> indices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  arrayProps.Description.size[0] = 1;
  arrayProps.Description.size[1] = 0;
  st.site = &pab_emlrtRSI;
  if (varargin_2.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  if (varargin_3.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  st.site = &qab_emlrtRSI;
  b_st.site = &rab_emlrtRSI;
  c_st.site = &tab_emlrtRSI;
  rowDim.length = varargin_1.size(0);
  d_st.site = &uab_emlrtRSI;
  loop_ub = varargin_1.size(0);
  indices.set_size(&dv_emlrtRTEI, &d_st, 1, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (i + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &d_st);
    }
    indices[i] = static_cast<uint32_T>(i + 1);
  }
  varDim.units[0].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[1].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[2].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.descrs[0].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[1].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[2].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.continuity[0] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[1] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[2] = matlab::internal::coder::tabular::Continuity::unset;
  b_st.site = &sab_emlrtRSI;
  c_st.site = &vab_emlrtRSI;
  data.f1.set_size(&gv_emlrtRTEI, &st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f1[i] = varargin_1[i];
  }
  loop_ub = varargin_2.size(0);
  data.f2.set_size(&gv_emlrtRTEI, &st, varargin_2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f2[i] = varargin_2[i];
  }
  data.f3.set_size(&hv_emlrtRTEI, &st, varargin_3.size(0), varargin_3.size(1));
  loop_ub = varargin_3.size(0) * varargin_3.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f3[i] = varargin_3[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void f_table::init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
                   const array<cell_wrap_1, 1U> &varargin_2,
                   const array<real_T, 1U> &varargin_3)
{
  array<uint32_T, 2U> indices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  arrayProps.Description.size[0] = 1;
  arrayProps.Description.size[1] = 0;
  st.site = &pab_emlrtRSI;
  if (varargin_2.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  if (varargin_3.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  st.site = &qab_emlrtRSI;
  b_st.site = &rab_emlrtRSI;
  c_st.site = &tab_emlrtRSI;
  d_st.site = &uab_emlrtRSI;
  loop_ub = varargin_1.size(0);
  indices.set_size(&dv_emlrtRTEI, &d_st, 1, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (i + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &d_st);
    }
    indices[i] = static_cast<uint32_T>(i + 1);
  }
  varDim.units[0].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[1].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[2].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.descrs[0].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[1].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[2].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.continuity[0] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[1] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[2] = matlab::internal::coder::tabular::Continuity::unset;
  b_st.site = &sab_emlrtRSI;
  c_st.site = &vab_emlrtRSI;
  data.f1.set_size(&gv_emlrtRTEI, &st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f1[i] = varargin_1[i];
  }
  loop_ub = varargin_2.size(0);
  data.f2.set_size(&gv_emlrtRTEI, &st, varargin_2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f2[i] = varargin_2[i];
  }
  loop_ub = varargin_3.size(0);
  data.f3.set_size(&hv_emlrtRTEI, &st, varargin_3.size(0), 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f3[i] = varargin_3[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void f_table::init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
                   const array<cell_wrap_1, 1U> &varargin_2,
                   const array<real_T, 2U> &varargin_3)
{
  array<uint32_T, 2U> indices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  arrayProps.Description.size[0] = 1;
  arrayProps.Description.size[1] = 0;
  st.site = &pab_emlrtRSI;
  if (varargin_2.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  if (varargin_3.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  st.site = &qab_emlrtRSI;
  b_st.site = &rab_emlrtRSI;
  c_st.site = &tab_emlrtRSI;
  d_st.site = &uab_emlrtRSI;
  loop_ub = varargin_1.size(0);
  indices.set_size(&dv_emlrtRTEI, &d_st, 1, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (i + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &d_st);
    }
    indices[i] = static_cast<uint32_T>(i + 1);
  }
  varDim.units[0].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[1].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[2].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.descrs[0].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[1].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[2].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.continuity[0] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[1] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[2] = matlab::internal::coder::tabular::Continuity::unset;
  b_st.site = &sab_emlrtRSI;
  c_st.site = &vab_emlrtRSI;
  data.f1.set_size(&gv_emlrtRTEI, &st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f1[i] = varargin_1[i];
  }
  loop_ub = varargin_2.size(0);
  data.f2.set_size(&gv_emlrtRTEI, &st, varargin_2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f2[i] = varargin_2[i];
  }
  data.f3.set_size(&hv_emlrtRTEI, &st, varargin_3.size(0), varargin_3.size(1));
  loop_ub = varargin_3.size(0) * varargin_3.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f3[i] = varargin_3[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void table::init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
                 const array<b_rigidtform3d, 1U> &varargin_2)
{
  array<uint32_T, 2U> indices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  arrayProps.Description.size[0] = 1;
  arrayProps.Description.size[1] = 0;
  st.site = &pab_emlrtRSI;
  if (varargin_2.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                                  "MATLAB:table:UnequalVarLengths",
                                  "MATLAB:table:UnequalVarLengths", 0);
  }
  st.site = &qab_emlrtRSI;
  b_st.site = &rab_emlrtRSI;
  c_st.site = &tab_emlrtRSI;
  rowDim.length = varargin_1.size(0);
  d_st.site = &uab_emlrtRSI;
  loop_ub = varargin_1.size(0);
  indices.set_size(&dv_emlrtRTEI, &d_st, 1, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    if (i + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &d_st);
    }
    indices[i] = static_cast<uint32_T>(i + 1);
  }
  varDim.hasUnits = false;
  varDim.units[0].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.units[1].f1.set_size(&ev_emlrtRTEI, &st, 1, 0);
  varDim.hasDescrs = false;
  varDim.descrs[0].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.descrs[1].f1.set_size(&fv_emlrtRTEI, &st, 1, 0);
  varDim.hasContinuity = false;
  varDim.continuity[0] = matlab::internal::coder::tabular::Continuity::unset;
  varDim.continuity[1] = matlab::internal::coder::tabular::Continuity::unset;
  b_st.site = &sab_emlrtRSI;
  c_st.site = &vab_emlrtRSI;
  data.f1.set_size(&gv_emlrtRTEI, &st, varargin_1.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f1[i] = varargin_1[i];
  }
  loop_ub = varargin_2.size(0);
  data.f2.set_size(&gv_emlrtRTEI, &st, varargin_2.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    data.f2[i] = varargin_2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void table::parenReference(const emlrtStack &sp, c_table &b) const
{
  matlab::internal::coder::tabular::b_private::varNamesDim mjd_emlrtRSI;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &htb_emlrtRSI;
  if (rowDim.length < 1.0) {
    emlrtErrorWithMessageIdR2018a(&st, &pd_emlrtRTEI,
                                  "MATLAB:table:RowIndexOutOfRange",
                                  "MATLAB:table:RowIndexOutOfRange", 0);
  }
  st.site = &itb_emlrtRSI;
  matlab::internal::coder::tabular::b_private::c_varNamesDim::subs2inds(
      st, mjd_emlrtRSI);
  b.data.f1 = data.f1[0];
  if (data.f2.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, data.f2.size(0) - 1, &gj_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b.data.f2[0] = data.f2[0];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void d_table::parenReference(const emlrtStack &sp,
                             const array<real_T, 1U> &varargin_1,
                             d_table &b) const
{
  array<cell_wrap_7, 2U> b_dataj;
  array<uint32_T, 2U> indices;
  array<boolean_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  real_T ex;
  int32_T a;
  int32_T i;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
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
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &htb_emlrtRSI;
  loop_ub = varargin_1.size(0);
  b_r.set_size(&jqb_emlrtRTEI, &st, varargin_1.size(0));
  for (a = 0; a < loop_ub; a++) {
    b_r[a] = muDoubleScalarIsNaN(varargin_1[a]);
  }
  b_st.site = &fgb_emlrtRSI;
  if (any(b_st, b_r)) {
    emlrtErrorWithMessageIdR2018a(&st, &qd_emlrtRTEI,
                                  "MATLAB:badsubscriptTextRange",
                                  "MATLAB:badsubscript", 0);
  }
  b_st.site = &ggb_emlrtRSI;
  c_st.site = &mbb_emlrtRSI;
  d_st.site = &nbb_emlrtRSI;
  e_st.site = &obb_emlrtRSI;
  if (varargin_1.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  f_st.site = &pbb_emlrtRSI;
  g_st.site = &qbb_emlrtRSI;
  if (varargin_1.size(0) <= 2) {
    if (varargin_1.size(0) == 1) {
      ex = varargin_1[0];
    } else if ((varargin_1[0] < varargin_1[1]) ||
               (muDoubleScalarIsNaN(varargin_1[0]) &&
                (!muDoubleScalarIsNaN(varargin_1[1])))) {
      ex = varargin_1[1];
    } else {
      ex = varargin_1[0];
    }
  } else {
    h_st.site = &if_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      i_st.site = &jf_emlrtRSI;
      if (varargin_1.size(0) > 2147483646) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= loop_ub)) {
        if (!muDoubleScalarIsNaN(varargin_1[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = varargin_1[0];
    } else {
      h_st.site = &hf_emlrtRSI;
      ex = varargin_1[idx - 1];
      a = idx + 1;
      i_st.site = &kf_emlrtRSI;
      if ((idx + 1 <= varargin_1.size(0)) &&
          (varargin_1.size(0) > 2147483646)) {
        j_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(j_st);
      }
      for (k = a; k <= loop_ub; k++) {
        real_T d;
        d = varargin_1[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  if (ex > rowDim.length) {
    emlrtErrorWithMessageIdR2018a(&st, &pd_emlrtRTEI,
                                  "MATLAB:table:RowIndexOutOfRange",
                                  "MATLAB:table:RowIndexOutOfRange", 0);
  }
  b_st.site = &ltb_emlrtRSI;
  c_st.site = &eed_emlrtRSI;
  d_st.site = &tab_emlrtRSI;
  b.rowDim.length = varargin_1.size(0);
  e_st.site = &uab_emlrtRSI;
  indices.set_size(&dv_emlrtRTEI, &e_st, 1, varargin_1.size(0));
  for (k = 0; k < loop_ub; k++) {
    if (k + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &e_st);
    }
    indices[k] = static_cast<uint32_T>(k + 1);
  }
  b_st.site = &hgb_emlrtRSI;
  st.site = &itb_emlrtRSI;
  b_st.site = &ktb_emlrtRSI;
  c_st.site = &ltb_emlrtRSI;
  d_st.site = &jtb_emlrtRSI;
  matlab::internal::coder::tabular::b_private::c_varNamesDim::selectFrom(
      d_st, b.varDim);
  c_st.site = &hgb_emlrtRSI;
  b.data.f1.set_size(&mpb_emlrtRTEI, &sp, varargin_1.size(0));
  for (k = 0; k < loop_ub; k++) {
    if (k + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub, &cv_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    a = static_cast<int32_T>(varargin_1[k]) - 1;
    if ((a < 0) || (a > data.f1.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(a, 0, data.f1.size(0) - 1, &gj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (k > b.data.f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(k, 0, b.data.f1.size(0) - 1, &dv_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    b.data.f1[k] = data.f1[a];
  }
  b_dataj.set_size(&mpb_emlrtRTEI, &sp, varargin_1.size(0), 1);
  for (k = 0; k < loop_ub; k++) {
    if (k + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub, &cv_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    a = static_cast<int32_T>(varargin_1[k]) - 1;
    if ((a < 0) || (a > data.f2.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(a, 0, data.f2.size(0) - 1, &gj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (k > b_dataj.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(k, 0, b_dataj.size(0) - 1, &dv_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i = data.f2[static_cast<int32_T>(varargin_1[k]) - 1].f1.size(0);
    idx = data.f2[static_cast<int32_T>(varargin_1[k]) - 1].f1.size(1);
    b_dataj[k].f1.set_size(&npb_emlrtRTEI, &sp, i, idx);
    idx *= i;
    for (i = 0; i < idx; i++) {
      b_dataj[k].f1[i] = data.f2[a].f1[i];
    }
  }
  b.data.f2.set_size(&opb_emlrtRTEI, &sp, varargin_1.size(0), 1);
  for (a = 0; a < loop_ub; a++) {
    b.data.f2[a] = b_dataj[a];
  }
  b.data.f3.set_size(&ppb_emlrtRTEI, &sp, varargin_1.size(0));
  for (a = 0; a < loop_ub; a++) {
    i = static_cast<int32_T>(varargin_1[a]);
    if ((i < 1) || (i > data.f3.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, data.f3.size(0), &ev_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    b.data.f3[a] = data.f3[i - 1];
  }
  b.arrayProps = arrayProps;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (table.cpp)
