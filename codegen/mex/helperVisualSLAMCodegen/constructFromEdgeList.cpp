//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// constructFromEdgeList.cpp
//
// Code generation for function 'constructFromEdgeList'
//

// Include files
#include "constructFromEdgeList.h"
#include "MLDigraph.h"
#include "all.h"
#include "eml_int_forloop_overflow_check.h"
#include "fix.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "repmat.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "table.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bbb_emlrtRSI{
    107,                                            // lineNo
    "graphPropertyContainer/constructorTableInput", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

static emlrtRSInfo cbb_emlrtRSI{
    108,                                            // lineNo
    "graphPropertyContainer/constructorTableInput", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

static emlrtRSInfo dbb_emlrtRSI{
    114,                                            // lineNo
    "graphPropertyContainer/constructorTableInput", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

static emlrtRSInfo ebb_emlrtRSI{
    117,                                            // lineNo
    "graphPropertyContainer/constructorTableInput", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\graphPropertyContainer.m" // pathName
};

static emlrtRSInfo fed_emlrtRSI{
    209,                     // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

static emlrtRSInfo ged_emlrtRSI{
    207,                     // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

static emlrtRSInfo hed_emlrtRSI{
    199,                     // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

static emlrtRSInfo ied_emlrtRSI{
    168,                     // lineNo
    "constructFromEdgeList", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pathName
};

static emlrtRTEInfo uf_emlrtRTEI{
    136,                     // lineNo
    9,                       // colNo
    "constructFromEdgeList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pName
};

static emlrtRTEInfo vf_emlrtRTEI{
    138,                     // lineNo
    9,                       // colNo
    "constructFromEdgeList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pName
};

static emlrtRTEInfo wf_emlrtRTEI{
    199,                     // lineNo
    31,                      // colNo
    "constructFromEdgeList", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\constructFromEdgeList.m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void constructFromEdgeList(const emlrtStack &sp,
                           const array<uint32_T, 1U> &s_in,
                           const array<uint32_T, 1U> &t_in,
                           const d_table &varargin_1, const table &varargin_2,
                           MLDigraph &G, c_graphPropertyContainer &EdgeProps,
                           d_graphPropertyContainer &NodeProps)
{
  d_table w;
  array<real_T, 2U> st;
  array<real_T, 1U> b_st;
  array<real_T, 1U> s;
  array<real_T, 1U> s1;
  array<real_T, 1U> t;
  array<real_T, 1U> t1;
  array<boolean_T, 1U> b_s;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  int32_T b_loop_ub;
  int32_T last;
  int32_T loop_ub;
  uint32_T implicitTotal;
  boolean_T exitg1;
  boolean_T guard1;
  c_st.prev = &sp;
  c_st.tls = sp.tls;
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
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  c_st.site = &lbb_emlrtRSI;
  d_st.site = &xab_emlrtRSI;
  e_st.site = &yab_emlrtRSI;
  c_st.site = &hbb_emlrtRSI;
  d_st.site = &abb_emlrtRSI;
  e_st.site = &bbb_emlrtRSI;
  e_st.site = &cbb_emlrtRSI;
  f_st.site = &xab_emlrtRSI;
  g_st.site = &yab_emlrtRSI;
  e_st.site = &dbb_emlrtRSI;
  e_st.site = &ebb_emlrtRSI;
  loop_ub = varargin_2.data.f1.size(0);
  NodeProps.data.f1.set_size(&tt_emlrtRTEI, &d_st, varargin_2.data.f1.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    NodeProps.data.f1[k] = varargin_2.data.f1[k];
  }
  loop_ub = varargin_2.data.f2.size(0);
  NodeProps.data.f2.set_size(&tt_emlrtRTEI, &d_st, varargin_2.data.f2.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    NodeProps.data.f2[k] = varargin_2.data.f2[k];
  }
  c_st.site = &kbb_emlrtRSI;
  loop_ub = s_in.size(0);
  s.set_size(&bkb_emlrtRTEI, &sp, s_in.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    s[k] = s_in[k];
  }
  b_loop_ub = t_in.size(0);
  t.set_size(&ckb_emlrtRTEI, &sp, t_in.size(0));
  for (int32_T k{0}; k < b_loop_ub; k++) {
    t[k] = t_in[k];
  }
  c_st.site = &jbb_emlrtRSI;
  last = s.size(0) + t.size(0);
  s1.set_size(&dkb_emlrtRTEI, &c_st, last);
  for (int32_T k{0}; k < loop_ub; k++) {
    s1[k] = s[k];
  }
  for (int32_T k{0}; k < b_loop_ub; k++) {
    s1[k + s.size(0)] = t[k];
  }
  d_st.site = &mbb_emlrtRSI;
  e_st.site = &nbb_emlrtRSI;
  f_st.site = &obb_emlrtRSI;
  if (s1.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&f_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  g_st.site = &pbb_emlrtRSI;
  h_st.site = &qbb_emlrtRSI;
  if (s1.size(0) <= 2) {
    if (s1.size(0) == 1) {
      implicitTotal = static_cast<uint32_T>(s1[0]);
    } else if (s1[0] < s1[1]) {
      implicitTotal = static_cast<uint32_T>(s1[1]);
    } else {
      implicitTotal = static_cast<uint32_T>(s1[0]);
    }
  } else {
    i_st.site = &if_emlrtRSI;
    i_st.site = &hf_emlrtRSI;
    implicitTotal = static_cast<uint32_T>(s1[0]);
    j_st.site = &kf_emlrtRSI;
    if (s1.size(0) > 2147483646) {
      k_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(k_st);
    }
    for (int32_T k{2}; k <= last; k++) {
      uint32_T u;
      u = static_cast<uint32_T>(s1[k - 1]);
      if (implicitTotal < u) {
        implicitTotal = u;
      }
    }
  }
  if (static_cast<uint32_T>(varargin_2.data.f1.size(0)) < implicitTotal) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &uf_emlrtRTEI, "MATLAB:graphfun:digraph:InvalidNumNodesTable",
        "MATLAB:graphfun:digraph:InvalidNumNodesTable", 2, 6,
        static_cast<real_T>(implicitTotal));
  }
  if (static_cast<uint32_T>(varargin_2.data.f1.size(0)) < implicitTotal) {
    emlrtErrorWithMessageIdR2018a(&sp, &vf_emlrtRTEI,
                                  "MATLAB:graphfun:digraph:InvalidNumNodes",
                                  "MATLAB:graphfun:digraph:InvalidNumNodes", 2,
                                  6, static_cast<real_T>(implicitTotal));
  }
  c_st.site = &ied_emlrtRSI;
  s1.set_size(&spb_emlrtRTEI, &c_st, s_in.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    s1[k] = s[k];
  }
  d_st.site = &jed_emlrtRSI;
  b_fix(d_st, s1);
  b_s.set_size(&tpb_emlrtRTEI, &c_st, s_in.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    b_s[k] = (s[k] == s1[k]);
  }
  guard1 = false;
  d_st.site = &jed_emlrtRSI;
  if (b_all(d_st, b_s)) {
    s1.set_size(&upb_emlrtRTEI, &c_st, t_in.size(0));
    for (int32_T k{0}; k < b_loop_ub; k++) {
      s1[k] = t[k];
    }
    d_st.site = &jed_emlrtRSI;
    b_fix(d_st, s1);
    b_s.set_size(&vpb_emlrtRTEI, &c_st, t_in.size(0));
    for (int32_T k{0}; k < b_loop_ub; k++) {
      b_s[k] = (t[k] == s1[k]);
    }
    d_st.site = &jed_emlrtRSI;
    if (b_all(d_st, b_s)) {
      b_s.set_size(&wpb_emlrtRTEI, &c_st, s_in.size(0));
      for (int32_T k{0}; k < loop_ub; k++) {
        b_s[k] = (s[k] > 0.0);
      }
      d_st.site = &ked_emlrtRSI;
      if (b_all(d_st, b_s)) {
        b_s.set_size(&xpb_emlrtRTEI, &c_st, t_in.size(0));
        for (int32_T k{0}; k < b_loop_ub; k++) {
          b_s[k] = (t[k] > 0.0);
        }
        d_st.site = &ked_emlrtRSI;
        if (!b_all(d_st, b_s)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&c_st, &tf_emlrtRTEI,
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC",
                                  "MATLAB:graphfun:graphbuiltin:InvalidSRC", 0);
  }
  if (s.size(0) == 1) {
    real_T c_s[2];
    c_s[0] = t.size(0);
    c_s[1] = 1.0;
    d_st.site = &led_emlrtRSI;
    repmat(d_st, (const real_T *)s.data(), c_s, s1);
    t1.set_size(&cqb_emlrtRTEI, &c_st, t_in.size(0));
    for (int32_T k{0}; k < b_loop_ub; k++) {
      t1[k] = t[k];
    }
  } else if (t.size(0) == 1) {
    real_T c_s[2];
    c_s[0] = s.size(0);
    c_s[1] = 1.0;
    d_st.site = &med_emlrtRSI;
    repmat(d_st, (const real_T *)t.data(), c_s, t1);
    s1.set_size(&bqb_emlrtRTEI, &c_st, s_in.size(0));
    for (int32_T k{0}; k < loop_ub; k++) {
      s1[k] = s[k];
    }
  } else {
    s1.set_size(&ypb_emlrtRTEI, &c_st, s_in.size(0));
    for (int32_T k{0}; k < loop_ub; k++) {
      s1[k] = s[k];
    }
    t1.set_size(&aqb_emlrtRTEI, &c_st, t_in.size(0));
    for (int32_T k{0}; k < b_loop_ub; k++) {
      t1[k] = t[k];
    }
  }
  d_st.site = &ned_emlrtRSI;
  e_st.site = &ij_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if (t1.size(0) != s1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  loop_ub = s1.size(0);
  st.set_size(&dqb_emlrtRTEI, &c_st, s1.size(0), 2);
  for (int32_T k{0}; k < loop_ub; k++) {
    st[k] = s1[k];
  }
  loop_ub = t1.size(0);
  for (int32_T k{0}; k < loop_ub; k++) {
    st[k + st.size(0)] = t1[k];
  }
  d_st.site = &ned_emlrtRSI;
  sortrows(d_st, st, s1);
  G.isMultigraph = false;
  loop_ub = 2;
  exitg1 = false;
  while ((!exitg1) && (loop_ub - 2 <= st.size(0) - 2)) {
    boolean_T b;
    b = ((loop_ub - 1 < 1) || (loop_ub - 1 > st.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 1, st.size(0), &fv_emlrtBCI,
                                    &c_st);
    }
    if ((loop_ub < 1) || (loop_ub > st.size(0))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, st.size(0), &gv_emlrtBCI,
                                    &c_st);
    }
    if (st[loop_ub - 2] == st[loop_ub - 1]) {
      if (loop_ub > st.size(0)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, st.size(0), &hv_emlrtBCI,
                                      &c_st);
      }
      if (st[(loop_ub + st.size(0)) - 2] == st[(loop_ub + st.size(0)) - 1]) {
        G.isMultigraph = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    } else {
      loop_ub++;
    }
  }
  loop_ub = st.size(0);
  t1.set_size(&eqb_emlrtRTEI, &c_st, st.size(0));
  b_st.set_size(&fqb_emlrtRTEI, &c_st, st.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    t1[k] = st[k + st.size(0)];
    b_st[k] = st[k];
  }
  d_st.site = &oed_emlrtRSI;
  MLDigraph::rowColtoIrJc(d_st, t1, b_st,
                          static_cast<real_T>(varargin_2.data.f1.size(0)), G.Ir,
                          G.Jc);
  c_st.site = &hed_emlrtRSI;
  if (varargin_1.data.f1.size(0) !=
      static_cast<int32_T>(muDoubleScalarMax(static_cast<real_T>(s.size(0)),
                                             static_cast<real_T>(t.size(0))))) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &wf_emlrtRTEI, "MATLAB:graphfun:digraph:InvalidSizeWeight",
        "MATLAB:graphfun:digraph:InvalidSizeWeight", 0);
  }
  c_st.site = &ged_emlrtRSI;
  varargin_1.parenReference(c_st, s1, w);
  c_st.site = &fed_emlrtRSI;
  d_st.site = &abb_emlrtRSI;
  e_st.site = &bbb_emlrtRSI;
  loop_ub = w.data.f1.size(0);
  EdgeProps.nrows = w.data.f1.size(0);
  e_st.site = &cbb_emlrtRSI;
  f_st.site = &xab_emlrtRSI;
  g_st.site = &yab_emlrtRSI;
  e_st.site = &dbb_emlrtRSI;
  e_st.site = &ebb_emlrtRSI;
  EdgeProps.data.f1.set_size(&tt_emlrtRTEI, &d_st, w.data.f1.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    EdgeProps.data.f1[k] = w.data.f1[k];
  }
  EdgeProps.data.f2.set_size(&tt_emlrtRTEI, &d_st, w.data.f2.size(0),
                             w.data.f2.size(1));
  loop_ub = w.data.f2.size(0) * w.data.f2.size(1);
  for (int32_T k{0}; k < loop_ub; k++) {
    EdgeProps.data.f2[k] = w.data.f2[k];
  }
  loop_ub = w.data.f3.size(0);
  EdgeProps.data.f3.set_size(&tt_emlrtRTEI, &d_st, w.data.f3.size(0));
  for (int32_T k{0}; k < loop_ub; k++) {
    EdgeProps.data.f3[k] = w.data.f3[k];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (constructFromEdgeList.cpp)
