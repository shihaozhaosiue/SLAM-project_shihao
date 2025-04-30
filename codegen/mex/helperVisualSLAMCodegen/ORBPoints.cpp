//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ORBPoints.cpp
//
// Code generation for function 'ORBPoints'
//

// Include files
#include "ORBPoints.h"
#include "FeaturePointsImpl.h"
#include "ORBPointsImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ue_emlrtRSI{
    79,                            // lineNo
    "ORBPointsImpl/selectUniform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pathName
};

static emlrtRSInfo ve_emlrtRSI{
    105,                               // lineNo
    "FeaturePointsImpl/selectUniform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    124,                               // lineNo
    "FeaturePointsImpl/selectUniform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo xe_emlrtRSI{
    137,                               // lineNo
    "FeaturePointsImpl/selectUniform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo qf_emlrtRSI{
    28,                    // lineNo
    "ORBPoints_cg/select", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m" // pathName
};

static emlrtRSInfo rf_emlrtRSI{
    39,                    // lineNo
    "ORBPoints_cg/select", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m" // pathName
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    108,                               // lineNo
    20,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    108,                               // lineNo
    26,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtECInfo e_emlrtECI{
    -1,                                // nDims
    108,                               // lineNo
    13,                                // colNo
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    128,                               // lineNo
    24,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    128,                               // lineNo
    30,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtECInfo f_emlrtECI{
    -1,                                // nDims
    128,                               // lineNo
    17,                                // colNo
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    137,                               // lineNo
    49,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    137,                               // lineNo
    51,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    106,                               // lineNo
    34,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    112,                               // lineNo
    35,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    113,                               // lineNo
    33,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    114,                               // lineNo
    33,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    31,                    // lineNo
    46,                    // colNo
    "",                    // aName
    "ORBPoints_cg/select", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m", // pName
    0                           // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    32,                    // lineNo
    44,                    // colNo
    "",                    // aName
    "ORBPoints_cg/select", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m", // pName
    0                           // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    33,                    // lineNo
    43,                    // colNo
    "",                    // aName
    "ORBPoints_cg/select", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m", // pName
    0                           // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    34,                    // lineNo
    49,                    // colNo
    "",                    // aName
    "ORBPoints_cg/select", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    125,                               // lineNo
    38,                                // colNo
    "",                                // aName
    "FeaturePointsImpl/selectUniform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtRTEInfo yj_emlrtRTEI{
    84,                  // lineNo
    13,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo ak_emlrtRTEI{
    86,                  // lineNo
    13,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo bk_emlrtRTEI{
    87,                  // lineNo
    13,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo ck_emlrtRTEI{
    89,                  // lineNo
    37,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo dk_emlrtRTEI{
    47,              // lineNo
    25,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

static emlrtRTEInfo ek_emlrtRTEI{
    108,                 // lineNo
    13,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo fk_emlrtRTEI{
    24,              // lineNo
    17,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

static emlrtRTEInfo gk_emlrtRTEI{
    79,              // lineNo
    13,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

static emlrtRTEInfo hk_emlrtRTEI{
    410,                 // lineNo
    17,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo ik_emlrtRTEI{
    112,                 // lineNo
    27,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo jk_emlrtRTEI{
    112,                 // lineNo
    17,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo kk_emlrtRTEI{
    113,                 // lineNo
    26,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo lk_emlrtRTEI{
    113,                 // lineNo
    17,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo mk_emlrtRTEI{
    114,                 // lineNo
    26,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo nk_emlrtRTEI{
    114,                 // lineNo
    17,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo ok_emlrtRTEI{
    128,                 // lineNo
    17,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo xk_emlrtRTEI{
    12,             // lineNo
    13,             // colNo
    "ORBPoints_cg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPoints_cg.m" // pName
};

static emlrtRTEInfo yk_emlrtRTEI{
    175,             // lineNo
    29,              // colNo
    "ORBPointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ORBPointsImpl.m" // pName
};

static emlrtRTEInfo wu_emlrtRTEI{
    248,                 // lineNo
    13,                  // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

// Function Definitions
namespace coder {
void ORBPoints::init(const emlrtStack &sp,
                     const array<real32_T, 2U> &varargin_1,
                     const array<real32_T, 1U> &varargin_3,
                     const array<real32_T, 1U> &varargin_5,
                     const array<real32_T, 1U> &varargin_7)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &od_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &pd_emlrtRSI;
  c_st.site = &rd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  FeaturePointsImpl::b_checkLocation(d_st, varargin_1);
  d_st.site = &xd_emlrtRSI;
  FeaturePointsImpl::checkMetric(d_st, varargin_7);
  d_st.site = &yd_emlrtRSI;
  if ((varargin_7.size(0) != 1) && (varargin_7.size(0) != varargin_1.size(0))) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &e_emlrtRTEI, "vision:FeaturePoints:invalidParamLength",
        "vision:FeaturePoints:invalidParamLength", 3, 4, 6, "Metric");
  }
  c_st.site = &sd_emlrtRSI;
  ORBPointsImpl::checkScale(c_st, varargin_3);
  c_st.site = &td_emlrtRSI;
  ORBPointsImpl::checkOrientation(c_st, varargin_5);
  c_st.site = &ud_emlrtRSI;
  if ((varargin_3.size(0) != 1) && (varargin_3.size(0) != varargin_1.size(0))) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &e_emlrtRTEI, "vision:FeaturePoints:invalidParamLength",
        "vision:FeaturePoints:invalidParamLength", 3, 4, 5, "Scale");
  }
  c_st.site = &vd_emlrtRSI;
  if ((varargin_5.size(0) != 1) && (varargin_5.size(0) != varargin_1.size(0))) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &e_emlrtRTEI, "vision:FeaturePoints:invalidParamLength",
        "vision:FeaturePoints:invalidParamLength", 3, 4, 11, "Orientation");
  }
  b_st.site = &qd_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &le_emlrtRSI;
  if (varargin_7.size(0) == 1) {
    e_st.site = &me_emlrtRSI;
    repmat(e_st, (const real32_T *)varargin_7.data(),
           static_cast<real_T>(varargin_1.size(0)), pOrientation);
  } else {
    loop_ub = varargin_7.size(0);
    pOrientation.set_size(&tj_emlrtRTEI, &d_st, varargin_7.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      pOrientation[i] = varargin_7[i];
    }
  }
  loop_ub = pOrientation.size(0);
  if (varargin_1.size(0) != pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(varargin_1.size(0), pOrientation.size(0),
                                    &b_emlrtECI, &c_st);
  }
  pMetric.set_size(&xk_emlrtRTEI, &c_st, pOrientation.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    pMetric[i] = pOrientation[i];
  }
  c_st.site = &he_emlrtRSI;
  d_st.site = &re_emlrtRSI;
  d_st.site = &se_emlrtRSI;
  FeaturePointsImpl::b_checkLocation(d_st, varargin_1);
  loop_ub = varargin_1.size(0) << 1;
  pLocation.set_size(&wu_emlrtRTEI, &c_st, varargin_1.size(0), 2);
  for (int32_T i{0}; i < loop_ub; i++) {
    pLocation[i] = varargin_1[i];
  }
  c_st.site = &ie_emlrtRSI;
  if (varargin_3.size(0) == 1) {
    d_st.site = &me_emlrtRSI;
    repmat(d_st, (const real32_T *)varargin_3.data(),
           static_cast<real_T>(varargin_1.size(0)), pOrientation);
  } else {
    loop_ub = varargin_3.size(0);
    pOrientation.set_size(&vj_emlrtRTEI, &c_st, varargin_3.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      pOrientation[i] = varargin_3[i];
    }
  }
  loop_ub = pOrientation.size(0);
  if (varargin_1.size(0) != pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(varargin_1.size(0), pOrientation.size(0),
                                    &d_emlrtECI, &b_st);
  }
  pScale.set_size(&xk_emlrtRTEI, &b_st, pOrientation.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    pScale[i] = pOrientation[i];
  }
  c_st.site = &je_emlrtRSI;
  if (varargin_5.size(0) == 1) {
    d_st.site = &me_emlrtRSI;
    repmat(d_st, (const real32_T *)varargin_5.data(),
           static_cast<real_T>(varargin_1.size(0)), pOrientation);
  } else {
    loop_ub = varargin_5.size(0);
    pOrientation.set_size(&wj_emlrtRTEI, &c_st, varargin_5.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      pOrientation[i] = varargin_5[i];
    }
  }
  if (varargin_1.size(0) != pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(varargin_1.size(0), pOrientation.size(0),
                                    &c_emlrtECI, &b_st);
  }
  c_st.site = &ke_emlrtRSI;
  d_st.site = &te_emlrtRSI;
}

void ORBPoints::init(const emlrtStack &sp)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  dv[0U] = rtNaN;
  st.site = &od_emlrtRSI;
  b_st.site = &pd_emlrtRSI;
  c_st.site = &rd_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  e_st.site = &ae_emlrtRSI;
  f_st.site = &be_emlrtRSI;
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (2 * k != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &f_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:ORBPoints:incorrectSize", 3, 4, 5, "Input");
  }
  b_st.site = &qd_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &le_emlrtRSI;
  e_st.site = &me_emlrtRSI;
  pMetric.set_size(&xk_emlrtRTEI, &c_st, 0);
  c_st.site = &he_emlrtRSI;
  pLocation.set_size(&yk_emlrtRTEI, &c_st, 0, 2);
  d_st.site = &re_emlrtRSI;
  d_st.site = &se_emlrtRSI;
  FeaturePointsImpl::b_checkLocation(d_st, pLocation);
  c_st.site = &ie_emlrtRSI;
  d_st.site = &me_emlrtRSI;
  e_st.site = &ne_emlrtRSI;
  pScale.set_size(&xk_emlrtRTEI, &b_st, 0);
  c_st.site = &je_emlrtRSI;
  d_st.site = &me_emlrtRSI;
  e_st.site = &ne_emlrtRSI;
  pOrientation.set_size(&xk_emlrtRTEI, &b_st, 0);
}

void b_ORBPoints::init(const emlrtStack &sp,
                       const array<real32_T, 2U> &varargin_1,
                       const array<real32_T, 1U> &varargin_3,
                       const array<real32_T, 1U> &varargin_5,
                       const array<real32_T, 1U> &varargin_7)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &od_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &pd_emlrtRSI;
  ORBPointsImpl::validate(b_st, varargin_1, varargin_3, varargin_5, varargin_7);
  b_st.site = &qd_emlrtRSI;
  c_st.site = &ge_emlrtRSI;
  d_st.site = &le_emlrtRSI;
  if (varargin_3.size(0) == 1) {
    e_st.site = &me_emlrtRSI;
    repmat(e_st, (const real32_T *)varargin_3.data(),
           static_cast<real_T>(varargin_1.size(0)), pOrientation);
  } else {
    loop_ub = varargin_3.size(0);
    pOrientation.set_size(&tj_emlrtRTEI, &d_st, varargin_3.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      pOrientation[i] = varargin_3[i];
    }
  }
  if (varargin_1.size(0) != pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(varargin_1.size(0), pOrientation.size(0),
                                    &b_emlrtECI, &c_st);
  }
  pMetric.set_size(&xk_emlrtRTEI, &c_st, pOrientation.size(0));
  loop_ub = pOrientation.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    pMetric[i] = pOrientation[i];
  }
  c_st.site = &he_emlrtRSI;
  d_st.site = &re_emlrtRSI;
  d_st.site = &se_emlrtRSI;
  FeaturePointsImpl::checkLocation(d_st, varargin_1);
  loop_ub = varargin_1.size(0) * varargin_1.size(1);
  pLocation.set_size(&wu_emlrtRTEI, &c_st, varargin_1.size(0),
                     varargin_1.size(1));
  for (int32_T i{0}; i < loop_ub; i++) {
    pLocation[i] = varargin_1[i];
  }
  c_st.site = &ie_emlrtRSI;
  if (varargin_5.size(0) == 1) {
    d_st.site = &me_emlrtRSI;
    repmat(d_st, (const real32_T *)varargin_5.data(),
           static_cast<real_T>(varargin_1.size(0)), pOrientation);
  } else {
    loop_ub = varargin_5.size(0);
    pOrientation.set_size(&vj_emlrtRTEI, &c_st, varargin_5.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      pOrientation[i] = varargin_5[i];
    }
  }
  if (varargin_1.size(0) != pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(varargin_1.size(0), pOrientation.size(0),
                                    &d_emlrtECI, &b_st);
  }
  pScale.set_size(&xk_emlrtRTEI, &b_st, pOrientation.size(0));
  loop_ub = pOrientation.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    pScale[i] = pOrientation[i];
  }
  c_st.site = &je_emlrtRSI;
  if (varargin_7.size(0) == 1) {
    d_st.site = &me_emlrtRSI;
    repmat(d_st, (const real32_T *)varargin_7.data(),
           static_cast<real_T>(varargin_1.size(0)), pOrientation);
  } else {
    loop_ub = varargin_7.size(0);
    pOrientation.set_size(&wj_emlrtRTEI, &c_st, varargin_7.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      pOrientation[i] = varargin_7[i];
    }
  }
  if (varargin_1.size(0) != pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(varargin_1.size(0), pOrientation.size(0),
                                    &c_emlrtECI, &b_st);
  }
  pNumLevels = 8U;
  pScaleFactor = 1.2F;
  pPatchSize = 31;
}

void b_ORBPoints::selectUniform(const emlrtStack &sp, b_ORBPoints &that) const
{
  array<int32_T, 1U> b_r;
  array<int32_T, 1U> r1;
  array<int32_T, 1U> r2;
  array<real32_T, 2U> b_points;
  array<real32_T, 2U> c_points;
  array<real32_T, 2U> points;
  array<real32_T, 1U> idxOut;
  array<real32_T, 1U> inputs_Orientation;
  array<real32_T, 1U> inputs_Scale;
  array<uint32_T, 2U> b_origIdx;
  array<uint32_T, 2U> origIdx;
  array<boolean_T, 1U> idx;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T NN;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &ue_emlrtRSI;
  i = pLocation.size(0);
  points.set_size(&yj_emlrtRTEI, &st, pLocation.size(0), pLocation.size(1));
  i1 = pLocation.size(0) * pLocation.size(1);
  for (i2 = 0; i2 < i1; i2++) {
    points[i2] = pLocation[i2];
  }
  loop_ub = pMetric.size(0);
  that.pOrientation.set_size(&ak_emlrtRTEI, &st, pMetric.size(0));
  for (i2 = 0; i2 < loop_ub; i2++) {
    that.pOrientation[i2] = pMetric[i2];
  }
  if (pLocation.size(0) < 1) {
    origIdx.set_size(&bk_emlrtRTEI, &st, 1, 0);
  } else {
    origIdx.set_size(&bk_emlrtRTEI, &st, 1, pLocation.size(0));
    b_loop_ub = pLocation.size(0) - 1;
    for (i2 = 0; i2 <= b_loop_ub; i2++) {
      origIdx[i2] = static_cast<uint32_T>(i2) + 1U;
    }
  }
  idxOut.set_size(&ck_emlrtRTEI, &st, pMetric.size(0));
  i1 = pMetric.size(0);
  NN = muIntScalarMin_sint32(i1, 1000);
  b_st.site = &ve_emlrtRSI;
  FeaturePointsImpl::selectPoints(b_st, pLocation, pMetric,
                                  static_cast<real_T>(NN), idx);
  b_loop_ub = idx.size(0);
  i1 = 0;
  for (b_i = 0; b_i < b_loop_ub; b_i++) {
    if (idx[b_i]) {
      i1++;
    }
  }
  b_r.set_size(&dk_emlrtRTEI, &st, i1);
  i1 = 0;
  for (b_i = 0; b_i < b_loop_ub; b_i++) {
    if (idx[b_i]) {
      b_r[i1] = b_i;
      i1++;
    }
  }
  i1 = b_r.size(0);
  for (i2 = 0; i2 < i1; i2++) {
    if (b_r[i2] > origIdx.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_r[i2], 0, origIdx.size(1) - 1,
                                    &ab_emlrtBCI, &st);
    }
  }
  if (b_r.size(0) < 1) {
    b_loop_ub = 0;
  } else {
    if (pMetric.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, pMetric.size(0), &t_emlrtBCI, &st);
    }
    if (b_r.size(0) > pMetric.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_r.size(0), 1, pMetric.size(0),
                                    &u_emlrtBCI, &st);
    }
    b_loop_ub = b_r.size(0);
  }
  inputs_Scale.set_size(&ek_emlrtRTEI, &st, b_r.size(0));
  for (i2 = 0; i2 < i1; i2++) {
    inputs_Scale[i2] = static_cast<real32_T>(origIdx[b_r[i2]]);
  }
  if (b_loop_ub != b_r.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(b_loop_ub, b_r.size(0), &e_emlrtECI, &st);
  }
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    idxOut[i2] = inputs_Scale[i2];
  }
  for (uint32_T b_first{static_cast<uint32_T>(b_r.size(0)) + 1U};
       b_first <= static_cast<uint32_T>(NN);
       b_first += static_cast<uint32_T>(r2.size(0))) {
    uint32_T u;
    b_loop_ub = idx.size(0);
    i1 = 0;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (!idx[b_i]) {
        i1++;
      }
    }
    r1.set_size(&dk_emlrtRTEI, &st, i1);
    i1 = 0;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (!idx[b_i]) {
        r1[i1] = b_i;
        i1++;
      }
    }
    b_loop_ub = r1.size(0);
    b_origIdx.set_size(&ik_emlrtRTEI, &st, 1, r1.size(0));
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if ((r1[i2] < 0) || (r1[i2] > origIdx.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(r1[i2], 0, origIdx.size(1) - 1,
                                      &bb_emlrtBCI, &st);
      }
      b_origIdx[i2] = origIdx[r1[i2]];
    }
    i1 = b_origIdx.size(1);
    origIdx.set_size(&jk_emlrtRTEI, &st, 1, b_origIdx.size(1));
    for (i2 = 0; i2 < i1; i2++) {
      origIdx[i2] = b_origIdx[i2];
    }
    b_points.set_size(&kk_emlrtRTEI, &st, r1.size(0), 2);
    for (i2 = 0; i2 < 2; i2++) {
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        if ((r1[b_i] < 0) || (r1[b_i] > points.size(0) - 1)) {
          emlrtDynamicBoundsCheckR2012b(r1[b_i], 0, points.size(0) - 1,
                                        &cb_emlrtBCI, &st);
        }
        b_points[b_i + b_points.size(0) * i2] =
            points[r1[b_i] + points.size(0) * i2];
      }
    }
    c_points.set_size(&lk_emlrtRTEI, &st, r1.size(0), 2);
    for (i2 = 0; i2 < 2; i2++) {
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        c_points[b_i + c_points.size(0) * i2] =
            points[r1[b_i] + points.size(0) * i2];
      }
    }
    points.set_size(&lk_emlrtRTEI, &st, r1.size(0), 2);
    i1 = c_points.size(0) * 2;
    for (i2 = 0; i2 < i1; i2++) {
      points[i2] = c_points[i2];
    }
    inputs_Scale.set_size(&mk_emlrtRTEI, &st, r1.size(0));
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      if ((r1[i2] < 0) || (r1[i2] > that.pOrientation.size(0) - 1)) {
        emlrtDynamicBoundsCheckR2012b(r1[i2], 0, that.pOrientation.size(0) - 1,
                                      &db_emlrtBCI, &st);
      }
      inputs_Scale[i2] = that.pOrientation[r1[i2]];
    }
    b_loop_ub = inputs_Scale.size(0);
    that.pOrientation.set_size(&nk_emlrtRTEI, &st, inputs_Scale.size(0));
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      that.pOrientation[i2] = inputs_Scale[i2];
    }
    b_st.site = &we_emlrtRSI;
    FeaturePointsImpl::selectPoints(
        b_st, b_points, that.pOrientation,
        static_cast<real_T>((NN - static_cast<int32_T>(b_first)) + 1), idx);
    b_loop_ub = idx.size(0);
    i1 = 0;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (idx[b_i]) {
        i1++;
      }
    }
    r2.set_size(&dk_emlrtRTEI, &st, i1);
    i1 = 0;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (idx[b_i]) {
        r2[i1] = b_i;
        i1++;
      }
    }
    i1 = r2.size(0);
    for (i2 = 0; i2 < i1; i2++) {
      if ((r2[i2] < 0) || (r2[i2] > origIdx.size(1) - 1)) {
        emlrtDynamicBoundsCheckR2012b(r2[i2], 0, origIdx.size(1) - 1,
                                      &ib_emlrtBCI, &st);
      }
    }
    u = (b_first + static_cast<uint32_T>(r2.size(0))) - 1U;
    if (b_first > u) {
      i2 = 0;
      b_i = 0;
    } else {
      if (static_cast<int32_T>(b_first) > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_first), 1, loop_ub,
                                      &v_emlrtBCI, &st);
      }
      i2 = static_cast<int32_T>(b_first) - 1;
      if ((static_cast<int32_T>(u) < 1) ||
          (static_cast<int32_T>(u) > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1, loop_ub,
                                      &w_emlrtBCI, &st);
      }
      b_i = static_cast<int32_T>(u);
    }
    inputs_Scale.set_size(&ok_emlrtRTEI, &st, r2.size(0));
    for (b_loop_ub = 0; b_loop_ub < i1; b_loop_ub++) {
      inputs_Scale[b_loop_ub] = static_cast<real32_T>(origIdx[r2[b_loop_ub]]);
    }
    b_loop_ub = b_i - i2;
    if (b_loop_ub != r2.size(0)) {
      emlrtSubAssignSizeCheck1dR2017a(b_loop_ub, r2.size(0), &f_emlrtECI, &st);
    }
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      idxOut[i2 + b_i] = inputs_Scale[b_i];
    }
  }
  if (NN < 1) {
    NN = 0;
  } else {
    if (pMetric.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, pMetric.size(0), &x_emlrtBCI, &st);
    }
    if (NN > pMetric.size(0)) {
      emlrtDynamicBoundsCheckR2012b(NN, 1, pMetric.size(0), &y_emlrtBCI, &st);
    }
  }
  b_iv[0] = 1;
  b_iv[1] = NN;
  b_st.site = &xe_emlrtRSI;
  internal::indexShapeCheck(b_st, idxOut.size(0), b_iv);
  b_st.site = &xe_emlrtRSI;
  c_st.site = &qf_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  for (i2 = 0; i2 < NN; i2++) {
    b_i = static_cast<int32_T>(idxOut[i2]);
    if ((b_i < 1) || (b_i > i)) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, i, &eb_emlrtBCI, &b_st);
    }
  }
  for (i = 0; i < NN; i++) {
    i2 = static_cast<int32_T>(idxOut[i]);
    if ((i2 < 1) || (i2 > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &fb_emlrtBCI, &b_st);
    }
  }
  for (i = 0; i < NN; i++) {
    i2 = static_cast<int32_T>(idxOut[i]);
    if ((i2 < 1) || (i2 > pScale.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, pScale.size(0), &gb_emlrtBCI, &b_st);
    }
  }
  for (i = 0; i < NN; i++) {
    i2 = static_cast<int32_T>(idxOut[i]);
    if ((i2 < 1) || (i2 > pOrientation.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, pOrientation.size(0), &hb_emlrtBCI,
                                    &b_st);
    }
  }
  c_st.site = &rf_emlrtRSI;
  d_st.site = &od_emlrtRSI;
  that.pLocation.set_size(&fk_emlrtRTEI, &d_st, NN, 2);
  for (i = 0; i < 2; i++) {
    for (i2 = 0; i2 < NN; i2++) {
      that.pLocation[i2 + that.pLocation.size(0) * i] =
          pLocation[(static_cast<int32_T>(idxOut[i2]) + pLocation.size(0) * i) -
                    1];
    }
  }
  that.pOrientation.set_size(&fk_emlrtRTEI, &d_st, NN);
  inputs_Scale.set_size(&fk_emlrtRTEI, &d_st, NN);
  inputs_Orientation.set_size(&fk_emlrtRTEI, &d_st, NN);
  for (i = 0; i < NN; i++) {
    i2 = static_cast<int32_T>(idxOut[i]) - 1;
    that.pOrientation[i] = pMetric[i2];
    inputs_Scale[i] = pScale[i2];
    inputs_Orientation[i] = pOrientation[i2];
  }
  e_st.site = &pd_emlrtRSI;
  ORBPointsImpl::validate(e_st, that.pLocation, that.pOrientation, inputs_Scale,
                          inputs_Orientation);
  e_st.site = &qd_emlrtRSI;
  f_st.site = &ge_emlrtRSI;
  g_st.site = &le_emlrtRSI;
  if (NN == 1) {
    real32_T that_data;
    that_data = that.pOrientation[0];
    h_st.site = &me_emlrtRSI;
    repmat(h_st, (const real32_T *)&that_data, 1.0, that.pOrientation);
  }
  if (NN != that.pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(NN, that.pOrientation.size(0), &b_emlrtECI,
                                    &f_st);
  }
  that.pMetric.set_size(&gk_emlrtRTEI, &f_st, that.pOrientation.size(0));
  loop_ub = that.pOrientation.size(0);
  for (i = 0; i < loop_ub; i++) {
    that.pMetric[i] = that.pOrientation[i];
  }
  f_st.site = &he_emlrtRSI;
  g_st.site = &re_emlrtRSI;
  g_st.site = &se_emlrtRSI;
  FeaturePointsImpl::checkLocation(g_st, that.pLocation);
  f_st.site = &ie_emlrtRSI;
  if (NN == 1) {
    g_st.site = &me_emlrtRSI;
    repmat(g_st, (const real32_T *)inputs_Scale.data(), 1.0, that.pOrientation);
  } else {
    loop_ub = inputs_Scale.size(0);
    that.pOrientation.set_size(&hk_emlrtRTEI, &f_st, inputs_Scale.size(0));
    for (i = 0; i < loop_ub; i++) {
      that.pOrientation[i] = inputs_Scale[i];
    }
  }
  if (NN != that.pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(NN, that.pOrientation.size(0), &d_emlrtECI,
                                    &e_st);
  }
  that.pScale.set_size(&gk_emlrtRTEI, &e_st, that.pOrientation.size(0));
  loop_ub = that.pOrientation.size(0);
  for (i = 0; i < loop_ub; i++) {
    that.pScale[i] = that.pOrientation[i];
  }
  f_st.site = &je_emlrtRSI;
  if (NN == 1) {
    g_st.site = &me_emlrtRSI;
    repmat(g_st, (const real32_T *)inputs_Orientation.data(), 1.0,
           that.pOrientation);
  } else {
    loop_ub = inputs_Orientation.size(0);
    that.pOrientation.set_size(&hk_emlrtRTEI, &f_st,
                               inputs_Orientation.size(0));
    for (i = 0; i < loop_ub; i++) {
      that.pOrientation[i] = inputs_Orientation[i];
    }
  }
  if (NN != that.pOrientation.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(NN, that.pOrientation.size(0), &c_emlrtECI,
                                    &e_st);
  }
  that.pNumLevels = 8U;
  f_st.site = &ke_emlrtRSI;
  g_st.site = &te_emlrtRSI;
  that.pScaleFactor = 1.2F;
  that.pPatchSize = 31;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (ORBPoints.cpp)
