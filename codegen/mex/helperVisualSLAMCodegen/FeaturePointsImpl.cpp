//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// FeaturePointsImpl.cpp
//
// Code generation for function 'FeaturePointsImpl'
//

// Include files
#include "FeaturePointsImpl.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo ce_emlrtRSI{
    380,                             // lineNo
    "FeaturePointsImpl/checkMetric", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo de_emlrtRSI{
    417,          // lineNo
    "checkParam", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo ye_emlrtRSI{
    425,            // lineNo
    "selectPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo af_emlrtRSI{
    432,            // lineNo
    "selectPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo bf_emlrtRSI{
    441,            // lineNo
    "selectPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    447,            // lineNo
    "selectPoints", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pathName
};

static emlrtRSInfo df_emlrtRSI{
    17,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

static emlrtRSInfo
    ef_emlrtRSI{
        58,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    ff_emlrtRSI{
        97,        // lineNo
        "maximum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtBCInfo jb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    441,            // lineNo
    34,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    447,            // lineNo
    21,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    450,            // lineNo
    11,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    427,            // lineNo
    15,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    442,            // lineNo
    18,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    442,            // lineNo
    18,             // colNo
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    1                                // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    442,            // lineNo
    31,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    442,            // lineNo
    31,             // colNo
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    1                                // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    443,            // lineNo
    26,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    443,            // lineNo
    40,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    444,            // lineNo
    16,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    444,            // lineNo
    16,             // colNo
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    1                                // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    444,            // lineNo
    29,             // colNo
    "",             // aName
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    0                                // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    444,            // lineNo
    29,             // colNo
    "selectPoints", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m", // pName
    1                                // checkKind
};

static emlrtRTEInfo pk_emlrtRTEI{
    449,                 // lineNo
    1,                   // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

static emlrtRTEInfo qk_emlrtRTEI{
    426,                 // lineNo
    5,                   // colNo
    "FeaturePointsImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\FeaturePointsImpl.m" // pName
};

// Function Definitions
namespace coder {
void FeaturePointsImpl::b_checkLocation(const emlrtStack &sp,
                                        const array<real32_T, 2U> &location)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  dv[0U] = rtNaN;
  st.site = &ae_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  p = true;
  i = location.size(0) << 1;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!muSingleScalarIsNaN(location[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:ORBPoints:expectedNonNaN", 3, 4, 5, "input");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(location[k])) &&
        (!muSingleScalarIsNaN(location[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:ORBPoints:expectedFinite", 3, 4, 5, "input");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!(location[k] <= 0.0F)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:ORBPoints:expectedPositive", 3, 4, 5, "input");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (location.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:ORBPoints:incorrectSize", 3, 4, 5, "Input");
  }
}

void FeaturePointsImpl::checkLocation(const emlrtStack &sp,
                                      const array<real32_T, 2U> &location)
{
  static real_T dv[2]{0.0, 2.0};
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  dv[0U] = rtNaN;
  st.site = &ae_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  p = true;
  i = location.size(0) * location.size(1);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!muSingleScalarIsNaN(location[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:ORBPoints:expectedNonNaN", 3, 4, 5, "input");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if ((!muSingleScalarIsInf(location[k])) &&
        (!muSingleScalarIsNaN(location[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:ORBPoints:expectedFinite", 3, 4, 5, "input");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!(location[k] <= 0.0F)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:ORBPoints:expectedPositive", 3, 4, 5, "input");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      real_T d;
      d = dv[k];
      if ((!(d != d)) && (location.size(k) != 2)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:ORBPoints:incorrectSize", 3, 4, 5, "Input");
  }
}

void FeaturePointsImpl::checkMetric(const emlrtStack &sp,
                                    const array<real32_T, 1U> &metric)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ce_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &de_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= metric.size(0) - 1)) {
    if (!muSingleScalarIsNaN(metric[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &f_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:ORBPoints:expectedNonNaN", 3, 4, 6, "Metric");
  }
  c_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= metric.size(0) - 1)) {
    if ((!muSingleScalarIsInf(metric[k])) &&
        (!muSingleScalarIsNaN(metric[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &g_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:ORBPoints:expectedFinite", 3, 4, 6, "Metric");
  }
}

void FeaturePointsImpl::selectPoints(const emlrtStack &sp,
                                     const array<real32_T, 2U> &points,
                                     const array<real32_T, 1U> &metric,
                                     real_T numPoints,
                                     array<boolean_T, 1U> &pointsIdx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T tmp_data[972];
  int32_T binIdx_size[2];
  uint32_T binIdx_data[972];
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
  if (numPoints == 1.0) {
    int32_T idx;
    int32_T k;
    int32_T last;
    int32_T loop_ub;
    st.site = &ye_emlrtRSI;
    b_st.site = &df_emlrtRSI;
    c_st.site = &ef_emlrtRSI;
    d_st.site = &ff_emlrtRSI;
    if (metric.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &m_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &gf_emlrtRSI;
    last = metric.size(0);
    if (metric.size(0) <= 2) {
      if (metric.size(0) == 1) {
        idx = 1;
      } else if ((metric[0] < metric[1]) ||
                 (muSingleScalarIsNaN(metric[0]) &&
                  (!muSingleScalarIsNaN(metric[1])))) {
        idx = 2;
      } else {
        idx = 1;
      }
    } else {
      f_st.site = &if_emlrtRSI;
      if (!muSingleScalarIsNaN(metric[0])) {
        idx = 1;
      } else {
        boolean_T exitg1;
        idx = 0;
        g_st.site = &jf_emlrtRSI;
        if (metric.size(0) > 2147483646) {
          h_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(h_st);
        }
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= last)) {
          if (!muSingleScalarIsNaN(metric[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        idx = 1;
      } else {
        int32_T idx_tmp;
        real32_T ex;
        f_st.site = &hf_emlrtRSI;
        ex = metric[idx - 1];
        idx_tmp = idx + 1;
        g_st.site = &kf_emlrtRSI;
        if ((idx + 1 <= metric.size(0)) && (metric.size(0) > 2147483646)) {
          h_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(h_st);
        }
        for (k = idx_tmp; k <= last; k++) {
          real32_T f;
          f = metric[k - 1];
          if (ex < f) {
            ex = f;
            idx = k;
          }
        }
      }
    }
    loop_ub = points.size(0);
    pointsIdx.set_size(&qk_emlrtRTEI, &sp, points.size(0));
    for (k = 0; k < loop_ub; k++) {
      pointsIdx[k] = false;
    }
    if ((idx < 1) || (idx > points.size(0))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, points.size(0), &mb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    pointsIdx[idx - 1] = true;
  } else {
    real_T nBins[2];
    real_T d;
    real_T gridStep_idx_0;
    real_T gridStep_idx_1;
    real_T h;
    int32_T idx;
    int32_T idx_tmp;
    int32_T k;
    int32_T last;
    int32_T loop_ub;
    st.site = &af_emlrtRSI;
    h = numPoints / 1.3333333333333333;
    if (h < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    h = muDoubleScalarMax(muDoubleScalarFloor(muDoubleScalarSqrt(h)), 1.0);
    d = muDoubleScalarFloor(h * 1.3333333333333333);
    nBins[0] = d;
    nBins[1] = h;
    gridStep_idx_0 = 640.0 / (d + 1.0);
    gridStep_idx_1 = 480.0 / (h + 1.0);
    binIdx_size[0] = static_cast<int32_T>(d);
    binIdx_size[1] = static_cast<int32_T>(h);
    last = static_cast<int32_T>(d) * static_cast<int32_T>(h);
    if (last - 1 >= 0) {
      std::memset(&binIdx_data[0], 0,
                  static_cast<uint32_T>(last) * sizeof(uint32_T));
    }
    loop_ub = points.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      real32_T whichBin[2];
      boolean_T guard1;
      st.site = &bf_emlrtRSI;
      if (i + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &jb_emlrtBCI, &st);
      }
      b_st.site = &lf_emlrtRSI;
      c_st.site = &mf_emlrtRSI;
      whichBin[0] = points[i] / static_cast<real32_T>(gridStep_idx_0);
      whichBin[1] =
          points[i + points.size(0)] / static_cast<real32_T>(gridStep_idx_1);
      for (k = 0; k < 2; k++) {
        real32_T f;
        boolean_T p;
        f = muSingleScalarFloor(whichBin[k]);
        whichBin[k] = f + 1.0F;
        if (muSingleScalarIsNaN(f + 1.0F)) {
          p = true;
        } else {
          p = (f + 1.0F > static_cast<real32_T>(nBins[k]));
        }
        if (p) {
          whichBin[k] = static_cast<real32_T>(nBins[k]);
        }
      }
      k = static_cast<int32_T>(
          muDoubleScalarFloor(static_cast<real_T>(whichBin[0])));
      if (static_cast<real_T>(whichBin[0]) != k) {
        emlrtIntegerCheckR2012b(static_cast<real_T>(whichBin[0]), &c_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(whichBin[0]) < 1) ||
          (static_cast<int32_T>(whichBin[0]) > static_cast<int32_T>(d))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(whichBin[0]), 1,
                                      static_cast<int32_T>(d), &nb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      last = static_cast<int32_T>(
          muDoubleScalarFloor(static_cast<real_T>(whichBin[1])));
      if (static_cast<real_T>(whichBin[1]) != last) {
        emlrtIntegerCheckR2012b(static_cast<real_T>(whichBin[1]), &d_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(whichBin[1]) < 1) ||
          (static_cast<int32_T>(whichBin[1]) > static_cast<int32_T>(h))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(whichBin[1]), 1,
                                      static_cast<int32_T>(h), &ob_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      idx_tmp =
          (static_cast<int32_T>(whichBin[0]) +
           static_cast<int32_T>(d) * (static_cast<int32_T>(whichBin[1]) - 1)) -
          1;
      idx = static_cast<int32_T>(binIdx_data[idx_tmp]);
      guard1 = false;
      if (idx < 1) {
        guard1 = true;
      } else {
        if (idx > metric.size(0)) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, metric.size(0), &pb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (i + 1 > metric.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, metric.size(0), &qb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (metric[idx - 1] < metric[i]) {
          guard1 = true;
        }
      }
      if (guard1) {
        if (static_cast<real_T>(whichBin[0]) != k) {
          emlrtIntegerCheckR2012b(static_cast<real_T>(whichBin[0]), &e_emlrtDCI,
                                  (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(whichBin[0]) < 1) ||
            (static_cast<int32_T>(whichBin[0]) > static_cast<int32_T>(d))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(whichBin[0]), 1,
                                        static_cast<int32_T>(d), &rb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (static_cast<real_T>(whichBin[1]) != last) {
          emlrtIntegerCheckR2012b(static_cast<real_T>(whichBin[1]), &f_emlrtDCI,
                                  (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(whichBin[1]) < 1) ||
            (static_cast<int32_T>(whichBin[1]) > static_cast<int32_T>(h))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(whichBin[1]), 1,
                                        static_cast<int32_T>(h), &sb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        binIdx_data[idx_tmp] = static_cast<uint32_T>(i + 1);
      }
    }
    int32_T binIdx[2];
    binIdx[0] = static_cast<int32_T>(d);
    binIdx[1] = static_cast<int32_T>(h);
    st.site = &cf_emlrtRSI;
    internal::indexShapeCheck(st, binIdx_size, binIdx);
    idx_tmp = static_cast<int32_T>(d) * static_cast<int32_T>(h);
    for (int32_T i{0}; i < idx_tmp; i++) {
      if ((static_cast<int32_T>(binIdx_data[i]) > 0) && (i > idx_tmp - 1)) {
        emlrtDynamicBoundsCheckR2012b(i, 0, idx_tmp - 1, &kb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
    }
    pointsIdx.set_size(&pk_emlrtRTEI, &sp, points.size(0));
    for (k = 0; k < loop_ub; k++) {
      pointsIdx[k] = false;
    }
    idx = 0;
    for (int32_T i{0}; i < idx_tmp; i++) {
      if (static_cast<int32_T>(binIdx_data[i]) > 0) {
        idx++;
      }
    }
    last = 0;
    for (int32_T i{0}; i < idx_tmp; i++) {
      uint32_T u;
      u = binIdx_data[i];
      if (static_cast<int32_T>(u) > 0) {
        if ((static_cast<int32_T>(u) < 1) ||
            (static_cast<int32_T>(u) > loop_ub)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1, loop_ub,
                                        &lb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        tmp_data[last] = static_cast<int32_T>(u);
        last++;
      }
    }
    for (k = 0; k < idx; k++) {
      pointsIdx[tmp_data[k] - 1] = true;
    }
  }
}

} // namespace coder

// End of code generation (FeaturePointsImpl.cpp)
