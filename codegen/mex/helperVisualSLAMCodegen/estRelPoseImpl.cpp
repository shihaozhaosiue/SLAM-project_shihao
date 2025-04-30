//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estRelPoseImpl.cpp
//
// Code generation for function 'estRelPoseImpl'
//

// Include files
#include "estRelPoseImpl.h"
#include "abs.h"
#include "cameraIntrinsics.h"
#include "cameraProjection.h"
#include "combineVectorElements.h"
#include "diag.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "mean.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "rcond.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo bv_emlrtRSI{
    174,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo cv_emlrtRSI{
    175,                        // lineNo
    "chooseRealizableSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo nv_emlrtRSI{
    208,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo ov_emlrtRSI{
    209,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo pv_emlrtRSI{
    212,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo qv_emlrtRSI{
    213,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo rv_emlrtRSI{
    215,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo sv_emlrtRSI{
    216,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo tv_emlrtRSI{
    225,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo uv_emlrtRSI{
    232,                   // lineNo
    "triangulateMidPoint", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo nw_emlrtRSI{
    93,                    // lineNo
    "isFundamentalMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo ow_emlrtRSI{
    94,                    // lineNo
    "isFundamentalMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo pw_emlrtRSI{
    95,                    // lineNo
    "isFundamentalMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo qw_emlrtRSI{
    98,                    // lineNo
    "isFundamentalMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtRSInfo rw_emlrtRSI{
    99,                    // lineNo
    "isFundamentalMatrix", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pathName
};

static emlrtBCInfo ke_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    184,                        // lineNo
    13,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    183,                        // lineNo
    17,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    169,                        // lineNo
    48,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ne_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    169,                        // lineNo
    40,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo oe_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    167,                        // lineNo
    81,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    167,                        // lineNo
    74,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    170,                        // lineNo
    22,                         // colNo
    "",                         // aName
    "chooseRealizableSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    238,                   // lineNo
    14,                    // colNo
    "",                    // aName
    "triangulateMidPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    236,                   // lineNo
    61,                    // colNo
    "",                    // aName
    "triangulateMidPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    236,                   // lineNo
    35,                    // colNo
    "",                    // aName
    "triangulateMidPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    222,                   // lineNo
    27,                    // colNo
    "",                    // aName
    "triangulateMidPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    222,                   // lineNo
    17,                    // colNo
    "",                    // aName
    "triangulateMidPoint", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m", // pName
    0                                // checkKind
};

static emlrtRTEInfo ur_emlrtRTEI{
    154,              // lineNo
    1,                // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

static emlrtRTEInfo xr_emlrtRTEI{
    201,              // lineNo
    12,               // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

static emlrtRTEInfo yr_emlrtRTEI{
    212,              // lineNo
    6,                // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

static emlrtRTEInfo as_emlrtRTEI{
    213,              // lineNo
    6,                // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

static emlrtRTEInfo xec_emlrtRTEI{
    170,              // lineNo
    31,               // colNo
    "estRelPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estRelPoseImpl.m" // pName
};

// Function Definitions
void b_or(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
          const coder::array<boolean_T, 1U> &in2)
{
  coder::array<boolean_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  b_in1.set_size(&xec_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = (in1[i * stride_0_0] || in2[i * stride_1_0]);
  }
  in1.set_size(&xec_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
namespace vision {
namespace internal {
namespace calibration {
real_T chooseRealizableSolution(
    const emlrtStack &sp, const real32_T Rs_data[], const int32_T Rs_size[3],
    const real32_T Ts_data[], const int32_T Ts_size[2],
    const cameraIntrinsics &cameraParams1,
    const cameraIntrinsics &cameraParams2, const array<real32_T, 2U> &points1,
    const array<real32_T, 2U> &points2, real32_T R_data[], int32_T R_size[3],
    real32_T t_data[], int32_T t_size[2])
{
  b_rigidtform3d b_r;
  array<int32_T, 2U> ii;
  array<real32_T, 2U> m1;
  array<real32_T, 2U> m2;
  array<real32_T, 2U> y;
  array<boolean_T, 2U> b_ii_data;
  array<boolean_T, 1U> r1;
  array<boolean_T, 1U> x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T camMatrix1[12];
  real_T validFraction;
  int32_T acoef;
  int32_T b_loop_ub;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T val;
  boolean_T ii_data[4];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = Ts_size[0];
  ii.set_size(&ur_emlrtRTEI, &sp, 1, Ts_size[0]);
  for (i = 0; i < loop_ub; i++) {
    ii[i] = 0;
  }
  st.site = &vu_emlrtRSI;
  cameraProjection(st, cameraParams1, camMatrix1);
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    real_T b_camMatrix1[12];
    real32_T b_camMatrix2[12];
    real32_T camMatrix2[12];
    real32_T Ts[3];
    if (b_i + 1 > Rs_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Rs_size[2], &pe_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (b_i + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &oe_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Ts[0] = Ts_data[b_i];
    Ts[1] = Ts_data[b_i + Ts_size[0]];
    Ts[2] = Ts_data[b_i + Ts_size[0] * 2];
    st.site = &wu_emlrtRSI;
    b_r.init(st, &Rs_data[9 * b_i], Ts);
    st.site = &wu_emlrtRSI;
    cameraProjection(st, cameraParams2, b_r, camMatrix2);
    for (i = 0; i < 3; i++) {
      acoef = i << 2;
      b_camMatrix1[acoef] = camMatrix1[i];
      b_camMatrix2[acoef] = camMatrix2[i];
      b_camMatrix1[acoef + 1] = camMatrix1[i + 3];
      b_camMatrix2[acoef + 1] = camMatrix2[i + 3];
      b_camMatrix1[acoef + 2] = camMatrix1[i + 6];
      b_camMatrix2[acoef + 2] = camMatrix2[i + 6];
      b_camMatrix1[acoef + 3] = camMatrix1[i + 9];
      b_camMatrix2[acoef + 3] = camMatrix2[i + 9];
    }
    st.site = &xu_emlrtRSI;
    triangulateMidPoint(st, points1, points2, b_camMatrix1, b_camMatrix2, m1);
    if (b_i + 1 > Rs_size[2]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Rs_size[2], &ne_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &yu_emlrtRSI;
    b_st.site = &ln_emlrtRSI;
    ::coder::internal::blas::b_mtimes(b_st, m1, &Rs_data[9 * b_i], y);
    if (b_i + 1 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &me_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    b_loop_ub = y.size(0);
    m2.set_size(&jp_emlrtRTEI, &sp, y.size(0), 3);
    if (y.size(0) != 0) {
      acoef = (y.size(0) != 1);
      for (k = 0; k < 3; k++) {
        for (val = 0; val < b_loop_ub; val++) {
          m2[val + m2.size(0) * k] =
              y[acoef * val + y.size(0) * k] + Ts_data[b_i + Ts_size[0] * k];
        }
      }
    }
    acoef = m1.size(0);
    x.set_size(&vr_emlrtRTEI, &sp, m1.size(0));
    for (i = 0; i < acoef; i++) {
      x[i] = (m1[i + m1.size(0) * 2] < 0.0F);
    }
    r1.set_size(&wr_emlrtRTEI, &sp, y.size(0));
    for (i = 0; i < b_loop_ub; i++) {
      r1[i] = (m2[i + m2.size(0) * 2] < 0.0F);
    }
    if ((m1.size(0) != y.size(0)) && ((m1.size(0) != 1) && (y.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(m1.size(0), y.size(0), &db_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    st.site = &av_emlrtRSI;
    if (x.size(0) == r1.size(0)) {
      for (i = 0; i < acoef; i++) {
        x[i] = (x[i] || r1[i]);
      }
    } else {
      b_st.site = &av_emlrtRSI;
      b_or(b_st, x, r1);
    }
    b_st.site = &yn_emlrtRSI;
    c_st.site = &tj_emlrtRSI;
    acoef = combineVectorElements(c_st, x);
    if (b_i + 1 > ii.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(1), &se_emlrtBCI, &st);
    }
    ii[b_i] = acoef;
  }
  st.site = &bv_emlrtRSI;
  b_st.site = &vv_emlrtRSI;
  b_loop_ub = ii.size(1);
  if (ii.size(1) <= 2) {
    if (ii.size(1) == 1) {
      val = ii[0];
    } else {
      val = ii[ii.size(1) - 1];
      if (ii[0] <= val) {
        val = ii[0];
      }
    }
  } else {
    val = ii[0];
    for (k = 2; k <= b_loop_ub; k++) {
      i = ii[k - 1];
      if (val > i) {
        val = i;
      }
    }
  }
  st.site = &cv_emlrtRSI;
  acoef = ii.size(1);
  for (i = 0; i < b_loop_ub; i++) {
    ii_data[i] = (ii[i] == val);
  }
  b_ii_data.set(&ii_data[0], 1, acoef);
  b_st.site = &aq_emlrtRSI;
  c_eml_find(b_st, b_ii_data, ii);
  validFraction =
      1.0 - static_cast<real_T>(val) / static_cast<real_T>(points1.size(0));
  R_size[0] = 3;
  R_size[1] = 3;
  i = ii.size(1);
  R_size[2] = ii.size(1);
  acoef = 9 * ii.size(1);
  if (acoef - 1 >= 0) {
    std::memset(&R_data[0], 0, static_cast<uint32_T>(acoef) * sizeof(real32_T));
  }
  t_size[0] = ii.size(1);
  t_size[1] = 3;
  acoef = ii.size(1) * 3;
  if (acoef - 1 >= 0) {
    std::memset(&t_data[0], 0, static_cast<uint32_T>(acoef) * sizeof(real32_T));
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real32_T absxk;
    real32_T absxk_tmp;
    real32_T b_absxk_tmp;
    real32_T c_absxk_tmp;
    real32_T scale;
    real32_T t;
    real32_T tNorm;
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &te_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    k = ii[b_i];
    if ((k < 1) || (k > Rs_size[2])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Rs_size[2], &le_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &qe_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    for (val = 0; val < 3; val++) {
      acoef = val + 9 * (k - 1);
      b_loop_ub = 3 * val + 9 * b_i;
      R_data[b_loop_ub] = Rs_data[acoef];
      R_data[b_loop_ub + 1] = Rs_data[acoef + 3];
      R_data[b_loop_ub + 2] = Rs_data[acoef + 6];
    }
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ue_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (k > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(k, 1, loop_ub, &ke_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (b_i + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &re_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    scale = 1.29246971E-26F;
    acoef = ii[b_i];
    t_data[b_i] = Ts_data[k - 1];
    absxk_tmp = Ts_data[acoef - 1];
    absxk = muSingleScalarAbs(absxk_tmp);
    if (absxk > 1.29246971E-26F) {
      tNorm = 1.0F;
      scale = absxk;
    } else {
      t = absxk / 1.29246971E-26F;
      tNorm = t * t;
    }
    b_loop_ub = b_i + t_size[0];
    t_data[b_loop_ub] = Ts_data[(k + Ts_size[0]) - 1];
    b_absxk_tmp = Ts_data[(acoef + Ts_size[0]) - 1];
    absxk = muSingleScalarAbs(b_absxk_tmp);
    if (absxk > scale) {
      t = scale / absxk;
      tNorm = tNorm * t * t + 1.0F;
      scale = absxk;
    } else {
      t = absxk / scale;
      tNorm += t * t;
    }
    val = b_i + t_size[0] * 2;
    t_data[val] = Ts_data[(k + Ts_size[0] * 2) - 1];
    c_absxk_tmp = Ts_data[(acoef + Ts_size[0] * 2) - 1];
    absxk = muSingleScalarAbs(c_absxk_tmp);
    if (absxk > scale) {
      t = scale / absxk;
      tNorm = tNorm * t * t + 1.0F;
      scale = absxk;
    } else {
      t = absxk / scale;
      tNorm += t * t;
    }
    tNorm = scale * muSingleScalarSqrt(tNorm);
    if (tNorm != 0.0F) {
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &re_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      t_data[b_i] = absxk_tmp / tNorm;
      t_data[b_loop_ub] = b_absxk_tmp / tNorm;
      t_data[val] = c_absxk_tmp / tNorm;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return validFraction;
}

boolean_T isFundamentalMatrix(const emlrtStack &sp, const real32_T M[9],
                              const array<real32_T, 2U> &inlierPoints1,
                              const array<real32_T, 2U> &inlierPoints2,
                              const real_T K1[9], const real_T K2[9])
{
  array<real32_T, 2U> b_result;
  array<real32_T, 2U> b_y;
  array<real32_T, 2U> c_result;
  array<real32_T, 2U> y;
  array<real32_T, 1U> b_r;
  array<real32_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_K1[9];
  int32_T i;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T pts1h_size_idx_1;
  int32_T result;
  real32_T A[9];
  real32_T errorF;
  int8_T b_input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &nw_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (inlierPoints1.size(0) != 0) {
    result = inlierPoints1.size(0);
  } else {
    result = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((inlierPoints1.size(0) != result) && (inlierPoints1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((inlierPoints1.size(0) != result) && (inlierPoints1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  tf = (result == 0);
  if (tf || (inlierPoints1.size(0) != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (tf || (inlierPoints1.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  pts1h_size_idx_1 = input_sizes_idx_1 + sizes_idx_1;
  b_result.set_size(&pn_emlrtRTEI, &b_st, result, pts1h_size_idx_1);
  for (i = 0; i < input_sizes_idx_1; i++) {
    for (int32_T i1{0}; i1 < result; i1++) {
      b_result[i1 + b_result.size(0) * i] = inlierPoints1[i1 + result * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result; i1++) {
      b_result[i1 + b_result.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &ow_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (inlierPoints2.size(0) != 0) {
    input_sizes_idx_1 = inlierPoints2.size(0);
  } else if (inlierPoints1.size(0) != 0) {
    input_sizes_idx_1 = inlierPoints1.size(0);
  } else {
    input_sizes_idx_1 = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((inlierPoints2.size(0) != input_sizes_idx_1) &&
      (inlierPoints2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((inlierPoints1.size(0) != input_sizes_idx_1) &&
      (inlierPoints1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  tf = (input_sizes_idx_1 == 0);
  if (tf || (inlierPoints2.size(0) != 0)) {
    b_input_sizes_idx_1 = 2;
  } else {
    b_input_sizes_idx_1 = 0;
  }
  if (tf || (inlierPoints1.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  i = b_input_sizes_idx_1 + sizes_idx_1;
  c_result.set_size(&pn_emlrtRTEI, &b_st, input_sizes_idx_1, i);
  loop_ub = b_input_sizes_idx_1;
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    for (int32_T i2{0}; i2 < input_sizes_idx_1; i2++) {
      c_result[i2 + c_result.size(0) * i1] =
          inlierPoints2[i2 + input_sizes_idx_1 * i1];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    for (int32_T i2{0}; i2 < input_sizes_idx_1; i2++) {
      c_result[i2 + c_result.size(0) * b_input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &pw_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (c_result.size(1) != 3) {
    if ((input_sizes_idx_1 == 1) && (i == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  ::coder::internal::blas::c_mtimes(b_st, c_result, M, y);
  st.site = &pw_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (b_result.size(1) != 3) {
    if ((result == 1) && (pts1h_size_idx_1 == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  ::coder::internal::blas::mtimes(b_st, y, b_result, b_y);
  st.site = &pw_emlrtRSI;
  diag(st, b_y, b_r);
  st.site = &pw_emlrtRSI;
  b_abs(st, b_r, r1);
  st.site = &pw_emlrtRSI;
  errorF = mean(st, r1);
  st.site = &qw_emlrtRSI;
  b_st.site = &qw_emlrtRSI;
  mldivide(b_st, K2, M, A);
  for (i = 0; i < 3; i++) {
    b_K1[3 * i] = K1[i];
    b_K1[3 * i + 1] = K1[i + 3];
    b_K1[3 * i + 2] = K1[i + 6];
  }
  real32_T F[9];
  real32_T errorE;
  b_st.site = &oq_emlrtRSI;
  ::coder::internal::mrdiv(b_st, A, b_K1, F);
  st.site = &rw_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  b_st.site = &ln_emlrtRSI;
  ::coder::internal::blas::c_mtimes(b_st, c_result, F, y);
  st.site = &rw_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  b_st.site = &ln_emlrtRSI;
  ::coder::internal::blas::mtimes(b_st, y, b_result, b_y);
  st.site = &rw_emlrtRSI;
  diag(st, b_y, b_r);
  st.site = &rw_emlrtRSI;
  b_abs(st, b_r, r1);
  st.site = &rw_emlrtRSI;
  errorE = mean(st, r1);
  tf = (errorF < errorE);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return tf;
}

void triangulateMidPoint(const emlrtStack &sp,
                         const array<real32_T, 2U> &points1,
                         const array<real32_T, 2U> &points2,
                         const real_T P1[12], const real32_T P2[12],
                         array<real32_T, 2U> &points3D)
{
  array<real32_T, 2U> a1;
  array<real32_T, 2U> a2;
  array<real32_T, 2U> b_points1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T b_P1[12];
  real_T A[9];
  real_T a21;
  real_T c1_idx_2;
  real_T maxval;
  int32_T b_r1;
  int32_T i;
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  real32_T b_P2[12];
  real32_T c_P2[9];
  real32_T c2[3];
  real32_T y_idx_0;
  real32_T y_idx_1;
  real32_T y_idx_2;
  int8_T b_input_sizes_idx_1;
  int8_T b_sizes_idx_1;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
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
  i = points1.size(0);
  points3D.set_size(&xr_emlrtRTEI, &sp, points1.size(0), 3);
  for (int32_T i1{0}; i1 < 4; i1++) {
    b_P1[3 * i1] = P1[i1];
    b_P2[3 * i1] = P2[i1];
    r3 = 3 * i1 + 1;
    b_P1[r3] = P1[i1 + 4];
    b_P2[r3] = P2[i1 + 4];
    r3 = 3 * i1 + 2;
    b_P1[r3] = P1[i1 + 8];
    b_P2[r3] = P2[i1 + 8];
  }
  __m128d b_r;
  __m128d r1;
  st.site = &nv_emlrtRSI;
  b_r = _mm_loadu_pd(&b_P1[0]);
  r1 = _mm_set1_pd(-1.0);
  _mm_storeu_pd(&A[0], _mm_mul_pd(b_r, r1));
  A[2] = -b_P1[2];
  b_r = _mm_loadu_pd(&b_P1[3]);
  _mm_storeu_pd(&A[3], _mm_mul_pd(b_r, r1));
  A[5] = -b_P1[5];
  b_r = _mm_loadu_pd(&b_P1[6]);
  _mm_storeu_pd(&A[6], _mm_mul_pd(b_r, r1));
  A[8] = -b_P1[8];
  b_st.site = &xm_emlrtRSI;
  c_st.site = &ym_emlrtRSI;
  d_st.site = &an_emlrtRSI;
  b_r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muDoubleScalarAbs(A[0]);
  a21 = muDoubleScalarAbs(A[1]);
  if (a21 > maxval) {
    maxval = a21;
    b_r1 = 1;
    r2 = 0;
  }
  if (muDoubleScalarAbs(A[2]) > maxval) {
    b_r1 = 2;
    r2 = 1;
    r3 = 0;
  }
  A[r2] /= A[b_r1];
  A[r3] /= A[b_r1];
  A[r2 + 3] -= A[r2] * A[b_r1 + 3];
  A[r3 + 3] -= A[r3] * A[b_r1 + 3];
  A[r2 + 6] -= A[r2] * A[b_r1 + 6];
  A[r3 + 6] -= A[r3] * A[b_r1 + 6];
  if (muDoubleScalarAbs(A[r3 + 3]) > muDoubleScalarAbs(A[r2 + 3])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }
  A[r3 + 3] /= A[r2 + 3];
  A[r3 + 6] -= A[r3 + 3] * A[r2 + 6];
  if ((A[b_r1] == 0.0) || (A[r2 + 3] == 0.0) || (A[r3 + 6] == 0.0)) {
    e_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&e_st)) {
      f_st.site = &cn_emlrtRSI;
      ::coder::internal::b_warning(f_st);
    }
  }
  maxval = b_P1[b_r1 + 9];
  a21 = b_P1[r2 + 9] - maxval * A[r2];
  c1_idx_2 = ((b_P1[r3 + 9] - maxval * A[r3]) - a21 * A[r3 + 3]) / A[r3 + 6];
  a21 -= c1_idx_2 * A[r2 + 6];
  a21 /= A[r2 + 3];
  maxval = ((maxval - c1_idx_2 * A[b_r1 + 6]) - a21 * A[b_r1 + 3]) / A[b_r1];
  for (int32_T i1{0}; i1 < 3; i1++) {
    c_P2[3 * i1] = -b_P2[3 * i1];
    r3 = 3 * i1 + 1;
    c_P2[r3] = -b_P2[r3];
    r3 = 3 * i1 + 2;
    c_P2[r3] = -b_P2[r3];
  }
  st.site = &ov_emlrtRSI;
  mldivide(st, c_P2, &b_P2[9], c2);
  y_idx_0 = c2[0] - static_cast<real32_T>(maxval);
  y_idx_1 = c2[1] - static_cast<real32_T>(a21);
  y_idx_2 = c2[2] - static_cast<real32_T>(c1_idx_2);
  st.site = &pv_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points1.size(0) != 0) {
    r3 = points1.size(0);
  } else {
    r3 = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points1.size(0) != r3) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points1.size(0) != r3) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (r3 == 0);
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  st.site = &qv_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (points2.size(0) != 0) {
    rtemp = points2.size(0);
  } else if (points1.size(0) != 0) {
    rtemp = points1.size(0);
  } else {
    rtemp = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points2.size(0) != rtemp) && (points2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points1.size(0) != rtemp) && (points1.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (rtemp == 0);
  if (empty_non_axis_sizes || (points2.size(0) != 0)) {
    b_input_sizes_idx_1 = 2;
  } else {
    b_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points1.size(0) != 0)) {
    b_sizes_idx_1 = 1;
  } else {
    b_sizes_idx_1 = 0;
  }
  b_points1.set_size(&yr_emlrtRTEI, &sp, input_sizes_idx_1 + sizes_idx_1, r3);
  for (int32_T i1{0}; i1 < r3; i1++) {
    b_r1 = input_sizes_idx_1;
    for (r2 = 0; r2 < b_r1; r2++) {
      b_points1[r2 + b_points1.size(0) * i1] = points1[i1 + r3 * r2];
    }
    b_r1 = sizes_idx_1;
    for (r2 = 0; r2 < b_r1; r2++) {
      b_points1[input_sizes_idx_1 + b_points1.size(0) * i1] = 1.0F;
    }
  }
  st.site = &rv_emlrtRSI;
  mldivide(st, &b_P1[0], b_points1, a1);
  b_points1.set_size(&as_emlrtRTEI, &sp, b_input_sizes_idx_1 + b_sizes_idx_1,
                     rtemp);
  for (int32_T i1{0}; i1 < rtemp; i1++) {
    b_r1 = b_input_sizes_idx_1;
    for (r2 = 0; r2 < b_r1; r2++) {
      b_points1[r2 + b_points1.size(0) * i1] = points2[i1 + rtemp * r2];
    }
    b_r1 = b_sizes_idx_1;
    for (r2 = 0; r2 < b_r1; r2++) {
      b_points1[b_input_sizes_idx_1 + b_points1.size(0) * i1] = 1.0F;
    }
  }
  st.site = &sv_emlrtRSI;
  mldivide(st, &b_P2[0], b_points1, a2);
  for (rtemp = 0; rtemp < i; rtemp++) {
    real32_T AtA_tmp[6];
    real32_T b_A[6];
    real32_T AtA[4];
    real32_T a22;
    real32_T b_a21;
    real32_T f;
    real32_T f1;
    real32_T p_idx_1;
    if (rtemp + 1 > a1.size(1)) {
      emlrtDynamicBoundsCheckR2012b(rtemp + 1, 1, a1.size(1), &af_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (rtemp + 1 > a2.size(1)) {
      emlrtDynamicBoundsCheckR2012b(rtemp + 1, 1, a2.size(1), &ye_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    for (int32_T i1{0}; i1 < 3; i1++) {
      f = a1[i1 + 3 * rtemp];
      b_A[i1] = f;
      f1 = -a2[i1 + 3 * rtemp];
      b_A[i1 + 3] = f1;
      r3 = i1 << 1;
      AtA_tmp[r3] = f;
      AtA_tmp[r3 + 1] = f1;
    }
    for (int32_T i1{0}; i1 < 2; i1++) {
      f = AtA_tmp[i1];
      f1 = AtA_tmp[i1 + 2];
      b_a21 = AtA_tmp[i1 + 4];
      for (r2 = 0; r2 < 2; r2++) {
        AtA[i1 + (r2 << 1)] =
            (f * b_A[3 * r2] + f1 * b_A[3 * r2 + 1]) + b_a21 * b_A[3 * r2 + 2];
      }
    }
    st.site = &tv_emlrtRSI;
    if (rcond(AtA) < 1.1920929E-7F) {
      b_a21 = rtInfF;
      p_idx_1 = rtInfF;
      a22 = rtMinusInfF;
    } else {
      real32_T alpha[2];
      st.site = &uv_emlrtRSI;
      b_st.site = &xm_emlrtRSI;
      c_st.site = &ym_emlrtRSI;
      d_st.site = &qq_emlrtRSI;
      if (muSingleScalarAbs(AtA[1]) > muSingleScalarAbs(AtA[0])) {
        b_r1 = 1;
        r2 = 0;
      } else {
        b_r1 = 0;
        r2 = 1;
      }
      b_a21 = AtA[r2] / AtA[b_r1];
      p_idx_1 = AtA[b_r1 + 2];
      a22 = AtA[r2 + 2] - b_a21 * p_idx_1;
      if ((a22 == 0.0F) || (AtA[b_r1] == 0.0F)) {
        e_st.site = &rq_emlrtRSI;
        if (!emlrtSetWarningFlag(&e_st)) {
          f_st.site = &cn_emlrtRSI;
          ::coder::internal::b_warning(f_st);
        }
      }
      f = (AtA_tmp[r2] - AtA_tmp[b_r1] * b_a21) / a22;
      b_A[1] = f;
      b_A[0] = (AtA_tmp[b_r1] - f * p_idx_1) / AtA[b_r1];
      f1 = AtA_tmp[b_r1 + 2];
      f = (AtA_tmp[r2 + 2] - f1 * b_a21) / a22;
      b_A[3] = f;
      b_A[2] = (f1 - f * p_idx_1) / AtA[b_r1];
      f1 = AtA_tmp[b_r1 + 4];
      f = (AtA_tmp[r2 + 4] - f1 * b_a21) / a22;
      b_A[5] = f;
      b_A[4] = (f1 - f * p_idx_1) / AtA[b_r1];
      for (int32_T i1{0}; i1 < 2; i1++) {
        alpha[i1] =
            (b_A[i1] * y_idx_0 + b_A[i1 + 2] * y_idx_1) + b_A[i1 + 4] * y_idx_2;
      }
      if (rtemp + 1 > a1.size(1)) {
        emlrtDynamicBoundsCheckR2012b(rtemp + 1, 1, a1.size(1), &xe_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (rtemp + 1 > a2.size(1)) {
        emlrtDynamicBoundsCheckR2012b(rtemp + 1, 1, a2.size(1), &we_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_a21 = (((static_cast<real32_T>(maxval) + alpha[0] * a1[3 * rtemp]) +
                c2[0]) +
               alpha[1] * a2[3 * rtemp]) /
              2.0F;
      p_idx_1 = (((static_cast<real32_T>(a21) + alpha[0] * a1[3 * rtemp + 1]) +
                  c2[1]) +
                 alpha[1] * a2[3 * rtemp + 1]) /
                2.0F;
      a22 = (((static_cast<real32_T>(c1_idx_2) + alpha[0] * a1[3 * rtemp + 2]) +
              c2[2]) +
             alpha[1] * a2[3 * rtemp + 2]) /
            2.0F;
    }
    if (rtemp + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(rtemp + 1, 1, i, &ve_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    points3D[rtemp] = b_a21;
    points3D[rtemp + points3D.size(0)] = p_idx_1;
    points3D[rtemp + points3D.size(0) * 2] = a22;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (estRelPoseImpl.cpp)
