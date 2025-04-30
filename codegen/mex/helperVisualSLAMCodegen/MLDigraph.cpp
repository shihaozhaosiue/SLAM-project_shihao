//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MLDigraph.cpp
//
// Code generation for function 'MLDigraph'
//

// Include files
#include "MLDigraph.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ped_emlrtRSI{
    656,            // lineNo
    "rowColtoIrJc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo qed_emlrtRSI{
    87,                    // lineNo
    "MLDigraph/get.Edges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo red_emlrtRSI{
    90,                    // lineNo
    "MLDigraph/get.Edges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo sed_emlrtRSI{
    95,                    // lineNo
    "MLDigraph/get.Edges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtRSInfo ted_emlrtRSI{
    96,                    // lineNo
    "MLDigraph/get.Edges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pathName
};

static emlrtBCInfo iv_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    661,            // lineNo
    23,             // colNo
    "",             // aName
    "rowColtoIrJc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtECInfo be_emlrtECI{
    -1,                    // nDims
    99,                    // lineNo
    13,                    // colNo
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtBCInfo kv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    96,                    // lineNo
    40,                    // colNo
    "",                    // aName
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo lv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    89,                    // lineNo
    28,                    // colNo
    "",                    // aName
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo mv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    91,                    // lineNo
    43,                    // colNo
    "",                    // aName
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtDCInfo kc_emlrtDCI{
    93,                    // lineNo
    39,                    // colNo
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    4                                // checkKind
};

static emlrtBCInfo nv_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    96,                    // lineNo
    17,                    // colNo
    "",                    // aName
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ov_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    97,                    // lineNo
    47,                    // colNo
    "",                    // aName
    "MLDigraph/get.Edges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m", // pName
    0                                // checkKind
};

static emlrtRTEInfo hqb_emlrtRTEI{
    656,         // lineNo
    5,           // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtRTEInfo iqb_emlrtRTEI{
    654,         // lineNo
    5,           // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtRTEInfo mqb_emlrtRTEI{
    87,          // lineNo
    13,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtRTEInfo nqb_emlrtRTEI{
    93,          // lineNo
    33,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

static emlrtRTEInfo oqb_emlrtRTEI{
    84,          // lineNo
    17,          // colNo
    "MLDigraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\MLDigraph.m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void MLDigraph::get_Edges(const emlrtStack &sp, array<real_T, 2U> &ed) const
{
  array<int32_T, 2U> b_r;
  array<int32_T, 1U> b_y1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (Jc.size(0) - 1 == 0) {
    ed.set_size(&oqb_emlrtRTEI, &sp, 0, 2);
  } else {
    int32_T dimSize_tmp;
    int32_T i;
    int32_T m;
    int32_T startIndex;
    int32_T tmp2;
    int32_T work_data;
    st.site = &qed_emlrtRSI;
    dimSize_tmp = Jc.size(0);
    if (Jc.size(0) == 0) {
      b_y1.set_size(&mqb_emlrtRTEI, &st, 0);
    } else {
      i = Jc.size(0) - 1;
      if (muIntScalarMin_sint32(i, 1) < 1) {
        b_y1.set_size(&mqb_emlrtRTEI, &st, 0);
      } else {
        if (Jc.size(0) == 1) {
          emlrtErrorWithMessageIdR2018a(
              &st, &yf_emlrtRTEI, "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
        }
        b_y1.set_size(&lqb_emlrtRTEI, &st, Jc.size(0) - 1);
        if (Jc.size(0) - 1 != 0) {
          work_data = Jc[0];
          b_st.site = &tmc_emlrtRSI;
          if (Jc.size(0) > 2147483646) {
            c_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(c_st);
          }
          for (m = 2; m <= dimSize_tmp; m++) {
            b_st.site = &smc_emlrtRSI;
            tmp2 = work_data;
            work_data = Jc[m - 1];
            b_y1[m - 2] = work_data - tmp2;
          }
        }
      }
    }
    i = b_y1.size(0);
    if (b_y1.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b_y1.size(0), &lv_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    work_data = b_y1[0];
    st.site = &red_emlrtRSI;
    for (int32_T ii{2}; ii <= i; ii++) {
      if (ii > i) {
        emlrtDynamicBoundsCheckR2012b(ii, 1, i, &mv_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      work_data += b_y1[ii - 1];
    }
    if (work_data < 0) {
      emlrtNonNegativeCheckR2012b(static_cast<real_T>(work_data), &kc_emlrtDCI,
                                  (emlrtConstCTX)&sp);
    }
    ed.set_size(&nqb_emlrtRTEI, &sp, work_data, 2);
    startIndex = 1;
    st.site = &sed_emlrtRSI;
    for (int32_T ii{0}; ii <= dimSize_tmp - 2; ii++) {
      st.site = &ted_emlrtRSI;
      if (ii + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i, &kv_emlrtBCI, &st);
      }
      b_st.site = &pj_emlrtRSI;
      c_st.site = &yo_emlrtRSI;
      d_st.site = &ap_emlrtRSI;
      e_st.site = &bp_emlrtRSI;
      if (b_y1[ii] - 1 < 0) {
        work_data = 0;
      } else {
        work_data = b_y1[ii];
      }
      b_r.set_size(&vp_emlrtRTEI, &d_st, 1, work_data);
      if (work_data > 0) {
        b_r[0] = 0;
        tmp2 = 0;
        e_st.site = &cp_emlrtRSI;
        if (work_data > 2147483646) {
          f_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(f_st);
        }
        for (m = 2; m <= work_data; m++) {
          tmp2++;
          b_r[m - 1] = tmp2;
        }
      }
      work_data = ed.size(0) << 1;
      tmp2 = b_r.size(1) - 1;
      for (int32_T i1{0}; i1 <= tmp2; i1++) {
        m = b_r[i1] + startIndex;
        if ((m < 1) || (m > work_data)) {
          emlrtDynamicBoundsCheckR2012b(m, 1, work_data, &nv_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        ed[m - 1] = ii + 1;
      }
      if (ii + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(ii + 1, 1, i, &ov_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      startIndex += b_y1[ii];
    }
    work_data = ed.size(0);
    emlrtSubAssignSizeCheckR2012b(ed.size(), 1,
                                  ((array<int32_T, 1U> *)&Ir)->size(), 1,
                                  &be_emlrtECI, (emlrtCTX)&sp);
    for (i = 0; i < work_data; i++) {
      ed[i + ed.size(0)] = Ir[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void MLDigraph::rowColtoIrJc(const emlrtStack &sp, const array<real_T, 1U> &i,
                             const array<real_T, 1U> &j, real_T n,
                             array<int32_T, 1U> &b_Ir, array<int32_T, 1U> &b_Jc)
{
  emlrtStack st;
  int32_T b_i;
  int32_T ll;
  st.prev = &sp;
  st.tls = sp.tls;
  b_i = static_cast<int32_T>(muDoubleScalarFloor(n + 1.0));
  if (n + 1.0 != b_i) {
    emlrtIntegerCheckR2012b(n + 1.0, &jc_emlrtDCI, (emlrtConstCTX)&sp);
  }
  ll = static_cast<int32_T>(n + 1.0);
  b_Jc.set_size(&gqb_emlrtRTEI, &sp, ll);
  if (n + 1.0 != b_i) {
    emlrtIntegerCheckR2012b(n + 1.0, &jc_emlrtDCI, (emlrtConstCTX)&sp);
  }
  for (b_i = 0; b_i < ll; b_i++) {
    b_Jc[b_i] = 0;
  }
  if (i.size(0) == 0) {
    b_Ir.set_size(&iqb_emlrtRTEI, &sp, 0);
  } else {
    st.site = &ped_emlrtRSI;
    ll = i.size(0);
    if (i.size(0) > muIntScalarMax_sint32(ll, ll)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &oc_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    b_Ir.set_size(&hqb_emlrtRTEI, &sp, i.size(0));
    for (b_i = 0; b_i < ll; b_i++) {
      b_Ir[b_i] = static_cast<int32_T>(i[b_i]);
    }
  }
  ll = 0;
  b_i = static_cast<int32_T>((n + 1.0) - 1.0);
  emlrtForLoopVectorCheckR2021a(2.0, 1.0, n + 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>((n + 1.0) - 1.0),
                                &xf_emlrtRTEI, (emlrtConstCTX)&sp);
  for (int32_T ii{0}; ii < b_i; ii++) {
    boolean_T exitg1;
    exitg1 = false;
    while ((!exitg1) && (ll < i.size(0))) {
      if (ll + 1 > j.size(0)) {
        emlrtDynamicBoundsCheckR2012b(ll + 1, 1, j.size(0), &iv_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (j[ll] < static_cast<real_T>(ii) + 2.0) {
        ll++;
      } else {
        exitg1 = true;
      }
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(ii) + 2U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(ii) + 2U) > b_Jc.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(ii) + 2U), 1, b_Jc.size(0),
          &jv_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_Jc[ii + 1] = ll;
  }
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (MLDigraph.cpp)
