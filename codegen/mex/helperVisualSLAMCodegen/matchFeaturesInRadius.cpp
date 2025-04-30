//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// matchFeaturesInRadius.cpp
//
// Code generation for function 'matchFeaturesInRadius'
//

// Include files
#include "matchFeaturesInRadius.h"
#include "ORBPoints.h"
#include "assertValidSizeArg.h"
#include "binaryFeatures.h"
#include "eml_int_forloop_overflow_check.h"
#include "exhaustiveDistanceMetrics.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "partialSort.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "validatenonnan.h"
#include "validatepositive.h"
#include "coder_array.h"
#include "cvstCG_ComputeMetric.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    egc_emlrtRSI{
        9,                       // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    fgc_emlrtRSI{
        13,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    ggc_emlrtRSI{
        34,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    hgc_emlrtRSI{
        36,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    igc_emlrtRSI{
        39,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    jgc_emlrtRSI{
        54,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    kgc_emlrtRSI{
        62,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    lgc_emlrtRSI{
        96,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    mgc_emlrtRSI{
        98,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    ngc_emlrtRSI{
        152,           // lineNo
        "parseInputs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    ogc_emlrtRSI{
        153,           // lineNo
        "parseInputs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    pgc_emlrtRSI{
        155,           // lineNo
        "parseInputs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    qgc_emlrtRSI{
        250,            // lineNo
        "checkPoints2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    rgc_emlrtRSI{
        254,                             // lineNo
        "checkImagePointsWithKnownSize", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    sgc_emlrtRSI{
        235,                 // lineNo
        "checkCenterPoints", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    tgc_emlrtRSI{
        265,           // lineNo
        "checkRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    moc_emlrtRSI{
        262,           // lineNo
        "checkRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo
    noc_emlrtRSI{
        267,           // lineNo
        "checkRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

static emlrtRSInfo ooc_emlrtRSI{
    70,       // lineNo
    "repmat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

static emlrtECInfo
    wc_emlrtECI{
        1,                       // nDims
        36,                      // lineNo
        18,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtECInfo
    xc_emlrtECI{
        2,                       // nDims
        36,                      // lineNo
        18,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtECInfo
    yc_emlrtECI{
        1,                       // nDims
        42,                      // lineNo
        18,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtECInfo
    ad_emlrtECI{
        2,                       // nDims
        42,                      // lineNo
        18,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtBCInfo
    io_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        52,                      // lineNo
        42,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    jo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        53,                      // lineNo
        63,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    ko_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        63,                      // lineNo
        58,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    lo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        67,                      // lineNo
        35,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    mo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        82,                      // lineNo
        20,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    no_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        96,                      // lineNo
        43,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    oo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        98,                      // lineNo
        44,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    po_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        86,                      // lineNo
        33,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    qo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        53,                      // lineNo
        43,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    ro_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        63,                      // lineNo
        44,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    so_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        94,                      // lineNo
        34,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    to_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        103,                     // lineNo
        31,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    uo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        98,                      // lineNo
        57,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    vo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        100,                     // lineNo
        47,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    wo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        100,                     // lineNo
        65,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtBCInfo
    xo_emlrtBCI{
        -1,                      // iFirst
        -1,                      // iLast
        100,                     // lineNo
        22,                      // colNo
        "",                      // aName
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m", // pName
        0    // checkKind
    };

static emlrtRTEInfo
    chb_emlrtRTEI{
        35,                      // lineNo
        15,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo dhb_emlrtRTEI{
    17,          // lineNo
    21,          // colNo
    "metricSSD", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "matchFeatures\\metricSSD.m" // pName
};

static emlrtRTEInfo
    ehb_emlrtRTEI{
        34,                      // lineNo
        1,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    fhb_emlrtRTEI{
        36,                      // lineNo
        1,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    ghb_emlrtRTEI{
        20,                      // lineNo
        13,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    hhb_emlrtRTEI{
        21,                      // lineNo
        13,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    ihb_emlrtRTEI{
        41,                      // lineNo
        1,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    jhb_emlrtRTEI{
        50,                      // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    khb_emlrtRTEI{
        52,                      // lineNo
        9,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    lhb_emlrtRTEI{
        1,                       // lineNo
        38,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    mhb_emlrtRTEI{
        62,                      // lineNo
        74,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    nhb_emlrtRTEI{
        85,                      // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    ohb_emlrtRTEI{
        86,                      // lineNo
        22,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    phb_emlrtRTEI{
        86,                      // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    qhb_emlrtRTEI{
        92,                      // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    rhb_emlrtRTEI{
        96,                      // lineNo
        35,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    shb_emlrtRTEI{
        98,                      // lineNo
        32,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    thb_emlrtRTEI{
        103,                     // lineNo
        20,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    uhb_emlrtRTEI{
        103,                     // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    plb_emlrtRTEI{
        71,      // lineNo
        5,       // colNo
        "power", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

static emlrtRTEInfo
    rac_emlrtRTEI{
        135,                     // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    sac_emlrtRTEI{
        136,                     // lineNo
        5,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    tac_emlrtRTEI{
        155,                     // lineNo
        1,                       // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRTEInfo
    dfc_emlrtRTEI{
        42,                      // lineNo
        18,                      // colNo
        "matchFeaturesInRadius", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pName
    };

static emlrtRSInfo
    ijd_emlrtRSI{
        42,                      // lineNo
        "matchFeaturesInRadius", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\matchFeaturesInRadius."
        "m" // pathName
    };

// Function Declarations
static void binary_expand_op_21(const emlrtStack &sp,
                                coder::array<boolean_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real_T, 2U> &in3);

namespace coder {
static void checkCenterPoints(const emlrtStack &sp,
                              const array<real32_T, 2U> &points,
                              real_T numPoints);

static void
checkImagePointsWithKnownSize(const emlrtStack &sp,
                              const array<real32_T, 2U> &imagePoints,
                              real_T numPoints);

static real_T parseInputs(
    const emlrtStack &sp, const b_binaryFeatures &featuresIn1,
    const binaryFeatures &featuresIn2, const array<real32_T, 2U> &centerPoints,
    const array<real32_T, 2U> &points2, const array<real32_T, 1U> &radius,
    array<uint8_T, 2U> &features1, array<uint8_T, 2U> &features2,
    array<real32_T, 2U> &b_radius, real_T &numPoints2);

} // namespace coder
static void f_and(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
                  const coder::array<boolean_T, 2U> &in2);

static void le(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
               const coder::array<real32_T, 2U> &in2,
               const coder::array<real32_T, 2U> &in3);

// Function Definitions
static void binary_expand_op_21(const emlrtStack &sp,
                                coder::array<boolean_T, 2U> &in1,
                                const coder::array<real32_T, 2U> &in2,
                                const coder::array<real_T, 2U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&fhb_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in3.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in3.size(1);
  }
  in1.set_size(&fhb_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_1_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          (in2[i1 * stride_0_0 + in2.size(0) * aux_0_1] <=
           in3[i1 * stride_1_0 + in3.size(0) * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

namespace coder {
static void checkCenterPoints(const emlrtStack &sp,
                              const array<real32_T, 2U> &points,
                              real_T numPoints)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T sz[2];
  real_T t12_f4[2];
  real_T d;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &sgc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  t12_f4[0] = numPoints;
  t12_f4[1] = 2.0;
  b_st.site = &rgc_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  sz[0] = numPoints;
  sz[1] = 2.0;
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      d = t12_f4[k];
      if ((!(d != d)) &&
          (muDoubleScalarIsInf(d) || (!(d == muDoubleScalarFloor(sz[k]))))) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&c_st, &re_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      d = t12_f4[k];
      if ((!(d != d)) && (!(d == points.size(k)))) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:matchFeaturesInRadius:incorrectSize", 3, 4, 12, "centerPoints");
  }
}

static void
checkImagePointsWithKnownSize(const emlrtStack &sp,
                              const array<real32_T, 2U> &imagePoints,
                              real_T numPoints)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T sz[2];
  real_T t13_f4[2];
  real_T d;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  t13_f4[0] = numPoints;
  t13_f4[1] = 2.0;
  st.site = &rgc_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  sz[0] = numPoints;
  sz[1] = 2.0;
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      d = t13_f4[k];
      if ((!(d != d)) &&
          (muDoubleScalarIsInf(d) || (!(d == muDoubleScalarFloor(sz[k]))))) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &re_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  p = true;
  for (int32_T k{0}; k < 2; k++) {
    if (p) {
      d = t13_f4[k];
      if ((!(d != d)) && (!(d == imagePoints.size(k)))) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:matchFeaturesInRadius:incorrectSize", 3, 4, 7, "points2");
  }
}

static real_T parseInputs(
    const emlrtStack &sp, const b_binaryFeatures &featuresIn1,
    const binaryFeatures &featuresIn2, const array<real32_T, 2U> &centerPoints,
    const array<real32_T, 2U> &points2, const array<real32_T, 1U> &radius,
    array<uint8_T, 2U> &features1, array<uint8_T, 2U> &features2,
    array<real32_T, 2U> &b_radius, real_T &numPoints2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T numPoints1;
  int32_T b_numPoints1;
  int32_T b_numPoints2;
  int32_T i;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  i = featuresIn1.Features.size(0);
  features1.set_size(&rac_emlrtRTEI, &sp, featuresIn1.Features.size(0),
                     featuresIn1.Features.size(1));
  loop_ub_tmp = featuresIn1.Features.size(0) * featuresIn1.Features.size(1);
  for (b_numPoints1 = 0; b_numPoints1 < loop_ub_tmp; b_numPoints1++) {
    features1[b_numPoints1] = featuresIn1.Features[b_numPoints1];
  }
  features2.set_size(&sac_emlrtRTEI, &sp, featuresIn2.Features.size(0), 32);
  loop_ub_tmp = featuresIn2.Features.size(0) << 5;
  for (b_numPoints1 = 0; b_numPoints1 < loop_ub_tmp; b_numPoints1++) {
    features2[b_numPoints1] = featuresIn2.Features[b_numPoints1];
  }
  b_numPoints1 = featuresIn1.Features.size(0);
  b_numPoints2 = featuresIn2.Features.size(0);
  st.site = &ngc_emlrtRSI;
  b_st.site = &qgc_emlrtRSI;
  checkImagePointsWithKnownSize(
      b_st, points2, static_cast<real_T>(featuresIn2.Features.size(0)));
  st.site = &ogc_emlrtRSI;
  checkCenterPoints(st, centerPoints,
                    static_cast<real_T>(featuresIn1.Features.size(0)));
  st.site = &pgc_emlrtRSI;
  if (radius.size(0) == 1) {
    b_st.site = &moc_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    internal::valattr::validatenonnan(c_st, radius);
    c_st.site = &be_emlrtRSI;
    internal::valattr::validatepositive(c_st, radius);
    b_st.site = &tgc_emlrtRSI;
    c_st.site = &ne_emlrtRSI;
    b_radius.set_size(&xj_emlrtRTEI, &b_st, 1, featuresIn1.Features.size(0));
    c_st.site = &ooc_emlrtRSI;
    if (featuresIn1.Features.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (loop_ub_tmp = 0; loop_ub_tmp < i; loop_ub_tmp++) {
      c_st.site = &pe_emlrtRSI;
      b_radius[loop_ub_tmp] = radius[0];
    }
  } else {
    b_st.site = &noc_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    internal::valattr::validatenonnan(c_st, radius);
    c_st.site = &be_emlrtRSI;
    internal::valattr::validatepositive(c_st, radius);
    c_st.site = &be_emlrtRSI;
    if (radius.size(0) != featuresIn1.Features.size(0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &tc_emlrtRTEI,
          "Coder:toolbox:ValidateattributesincorrectNumel",
          "MATLAB:matchFeaturesInRadius:incorrectNumel", 5, 4, 6, "radius", 6,
          static_cast<real_T>(featuresIn1.Features.size(0)));
    }
    loop_ub_tmp = radius.size(0);
    b_radius.set_size(&tac_emlrtRTEI, &st, 1, radius.size(0));
    for (i = 0; i < loop_ub_tmp; i++) {
      b_radius[i] = radius[i];
    }
  }
  numPoints1 = b_numPoints1;
  numPoints2 = b_numPoints2;
  return numPoints1;
}

} // namespace coder
static void f_and(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
                  const coder::array<boolean_T, 2U> &in2)
{
  coder::array<boolean_T, 2U> b_in1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  if (in2.size(1) == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in2.size(1);
  }
  b_in1.set_size(&dfc_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_0 = (in2.size(0) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] =
          (in1[i1 * stride_0_0 + in1.size(0) * aux_0_1] &&
           in2[i1 * stride_1_0 + in2.size(0) * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&dfc_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void le(const emlrtStack &sp, coder::array<boolean_T, 2U> &in1,
               const coder::array<real32_T, 2U> &in2,
               const coder::array<real32_T, 2U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&fhb_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in3.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in3.size(1);
  }
  in1.set_size(&fhb_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_1_1 = (in3.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          (in2[i1 * stride_0_0 + in2.size(0) * aux_0_1] <=
           in3[i1 * stride_1_0 + in3.size(0) * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

namespace coder {
void b_matchFeaturesInRadius(const emlrtStack &sp,
                             const b_binaryFeatures &features1,
                             const binaryFeatures &features2,
                             const ORBPoints &points2,
                             const array<real32_T, 2U> &centerPoints,
                             array<uint32_T, 2U> &indexPairs)
{
  array<real_T, 2U> r2;
  array<real_T, 2U> r3;
  array<int32_T, 2U> b_ii;
  array<int32_T, 1U> ii;
  array<int32_T, 1U> r4;
  array<int32_T, 1U> r5;
  array<int32_T, 1U> r6;
  array<real32_T, 2U> allSpatialDist;
  array<real32_T, 2U> b_matchScores;
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> matchScores;
  array<real32_T, 2U> r1;
  array<uint32_T, 2U> b_indexPairs;
  array<uint8_T, 2U> b_features1;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> c_features1;
  array<boolean_T, 2U> b_isStrongMatch;
  array<boolean_T, 2U> isInRadius;
  array<boolean_T, 2U> isStrongMatch;
  array<boolean_T, 1U> neighborIdxLogical;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T matchIndex;
  int32_T matchScores_idx_1;
  int32_T matchThreshold;
  real32_T topTwoMetrics_data[2];
  real32_T ratio;
  uint32_T topTwoIndices_data[2];
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
  st.site = &egc_emlrtRSI;
  b_st.site = &ngc_emlrtRSI;
  c_st.site = &qgc_emlrtRSI;
  checkImagePointsWithKnownSize(
      c_st, points2.pLocation, static_cast<real_T>(features2.Features.size(0)));
  b_st.site = &ogc_emlrtRSI;
  checkCenterPoints(b_st, centerPoints,
                    static_cast<real_T>(features1.Features.size(0)));
  b_st.site = &pgc_emlrtRSI;
  c_st.site = &tgc_emlrtRSI;
  d_st.site = &ne_emlrtRSI;
  internal::assertValidSizeArg(d_st,
                               static_cast<real_T>(features1.Features.size(0)));
  st.site = &fgc_emlrtRSI;
  if (features1.Features.size(1) != 32) {
    emlrtErrorWithMessageIdR2018a(
        &st, &qe_emlrtRTEI, "vision:matchFeatures:featuresNotSameDimension",
        "vision:matchFeatures:featuresNotSameDimension", 0);
  }
  matchThreshold = static_cast<int32_T>(muSingleScalarRound(
      0.199999988F *
      (8.0F * static_cast<real32_T>(features1.Features.size(1)))));
  st.site = &ggc_emlrtRSI;
  loop_ub = centerPoints.size(0);
  matchScores.set_size(&chb_emlrtRTEI, &st, 2, centerPoints.size(0));
  for (i = 0; i < loop_ub; i++) {
    matchScores[matchScores.size(0) * i] = centerPoints[i];
    matchScores[matchScores.size(0) * i + 1] =
        centerPoints[i + centerPoints.size(0)];
  }
  allSpatialDist.set_size(&dhb_emlrtRTEI, &st, centerPoints.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      allSpatialDist[i1 + allSpatialDist.size(0) * i] =
          matchScores[i + matchScores.size(0) * i1];
    }
  }
  matchScores.set_size(&pfb_emlrtRTEI, &st, centerPoints.size(0), 2);
  loop_ub_tmp = centerPoints.size(0) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    matchScores[i] = allSpatialDist[i];
  }
  b_st.site = &rec_emlrtRSI;
  b_loop_ub = features2.Features.size(0);
  c_loop_ub = features1.Features.size(0);
  allSpatialDist.set_size(&ehb_emlrtRTEI, &b_st, features2.Features.size(0),
                          features1.Features.size(0));
  loop_ub_tmp = features2.Features.size(0) * features1.Features.size(0);
  for (i = 0; i < loop_ub_tmp; i++) {
    allSpatialDist[i] = 0.0F;
  }
  matchIndex = points2.pLocation.size(0);
  b_r.set_size(&wl_emlrtRTEI, &b_st, 2, points2.pLocation.size(0));
  for (i = 0; i < matchIndex; i++) {
    b_r[2 * i] = points2.pLocation[i];
    b_r[2 * i + 1] = points2.pLocation[i + points2.pLocation.size(0)];
  }
  r1.set_size(&xl_emlrtRTEI, &b_st, 2, centerPoints.size(0));
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 2; i1++) {
      r1[i1 + 2 * i] = matchScores[i + matchScores.size(0) * i1];
    }
  }
  ComputeMetric_ssd_single(&b_r[0], &r1[0], &allSpatialDist[0],
                           static_cast<uint32_T>(points2.pLocation.size(0)),
                           static_cast<uint32_T>(matchScores.size(0)), 2U);
  st.site = &hgc_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  r2.set_size(&ao_emlrtRTEI, &sp, 1, features1.Features.size(0));
  for (i = 0; i < c_loop_ub; i++) {
    r2[i] = 64.0;
  }
  st.site = &hgc_emlrtRSI;
  repmat(st, r2, static_cast<real_T>(features2.Features.size(0)), r3);
  if ((allSpatialDist.size(0) != r3.size(0)) &&
      ((allSpatialDist.size(0) != 1) && (r3.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(0), r3.size(0),
                                &wc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(1) != r3.size(1)) &&
      ((allSpatialDist.size(1) != 1) && (r3.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(1), r3.size(1),
                                &xc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(0) == r3.size(0)) &&
      (allSpatialDist.size(1) == r3.size(1))) {
    isInRadius.set_size(&fhb_emlrtRTEI, &sp, allSpatialDist.size(0),
                        allSpatialDist.size(1));
    loop_ub_tmp = allSpatialDist.size(0) * allSpatialDist.size(1);
    for (i = 0; i < loop_ub_tmp; i++) {
      isInRadius[i] = (allSpatialDist[i] <= r3[i]);
    }
  } else {
    st.site = &hgc_emlrtRSI;
    binary_expand_op_21(st, isInRadius, allSpatialDist, r3);
  }
  loop_ub = features1.Features.size(1);
  b_features1.set_size(&ghb_emlrtRTEI, &sp, features1.Features.size(1),
                       features1.Features.size(0));
  for (i = 0; i < c_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_features1[i1 + b_features1.size(0) * i] =
          features1.Features[i + features1.Features.size(0) * i1];
    }
  }
  matchIndex = features1.Features.size(1);
  matchScores_idx_1 = features1.Features.size(0);
  b_features2.set_size(&hhb_emlrtRTEI, &sp, 32, features2.Features.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < 32; i1++) {
      b_features2[i1 + 32 * i] =
          features2.Features[i + features2.Features.size(0) * i1];
    }
  }
  c_features1 = b_features1.reshape(matchIndex, matchScores_idx_1);
  st.site = &igc_emlrtRSI;
  vision::internal::matchFeatures::exhaustiveDistanceMetrics(
      st, b_features2, c_features1,
      static_cast<real_T>(features2.Features.size(0)),
      static_cast<real_T>(features1.Features.size(0)), matchScores);
  i = matchScores.size(0);
  i1 = matchScores.size(1);
  isStrongMatch.set_size(&ihb_emlrtRTEI, &sp, matchScores.size(0),
                         matchScores.size(1));
  loop_ub_tmp = matchScores.size(0) * matchScores.size(1);
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    isStrongMatch[i2] = (matchScores[i2] <= matchThreshold);
  }
  if ((matchScores.size(0) != isInRadius.size(0)) &&
      ((matchScores.size(0) != 1) && (isInRadius.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(matchScores.size(0), isInRadius.size(0),
                                &yc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((matchScores.size(1) != isInRadius.size(1)) &&
      ((matchScores.size(1) != 1) && (isInRadius.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(matchScores.size(1), isInRadius.size(1),
                                &ad_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((isStrongMatch.size(0) == isInRadius.size(0)) &&
      (isStrongMatch.size(1) == isInRadius.size(1))) {
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      isStrongMatch[i2] = (isStrongMatch[i2] && isInRadius[i2]);
    }
  } else {
    st.site = &ijd_emlrtRSI;
    f_and(st, isStrongMatch, isInRadius);
  }
  indexPairs.set_size(&jhb_emlrtRTEI, &sp, features1.Features.size(0), 2);
  loop_ub_tmp = features1.Features.size(0) << 1;
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    indexPairs[i2] = 0U;
  }
  for (b_loop_ub = 0; b_loop_ub < c_loop_ub; b_loop_ub++) {
    boolean_T guard1;
    if (b_loop_ub + 1 > isStrongMatch.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, isStrongMatch.size(1),
                                    &io_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub_tmp = isStrongMatch.size(0);
    neighborIdxLogical.set_size(&khb_emlrtRTEI, &sp, isStrongMatch.size(0));
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      neighborIdxLogical[i2] =
          isStrongMatch[i2 + isStrongMatch.size(0) * b_loop_ub];
    }
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (neighborIdxLogical[b_i]) {
        matchScores_idx_1++;
      }
    }
    r5.set_size(&lhb_emlrtRTEI, &sp, matchScores_idx_1);
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (neighborIdxLogical[b_i]) {
        r5[matchScores_idx_1] = b_i;
        matchScores_idx_1++;
      }
    }
    loop_ub_tmp = r5.size(0);
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      if (r5[i2] > matchScores.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r5[i2], 0, matchScores.size(0) - 1,
                                      &qo_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    if (b_loop_ub + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, i1, &jo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &jgc_emlrtRSI;
    b_st.site = &aq_emlrtRSI;
    b_eml_find(b_st, neighborIdxLogical, ii);
    guard1 = false;
    if (ii.size(0) == 1) {
      matchIndex = ii[0];
      guard1 = true;
    } else if (ii.size(0) > 1) {
      b_matchScores.set_size(&mhb_emlrtRTEI, &sp, 1, r5.size(0));
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        b_matchScores[i2] =
            matchScores[r5[i2] + matchScores.size(0) * b_loop_ub];
      }
      st.site = &kgc_emlrtRSI;
      matchScores_idx_1 =
          vision::internal::partialSort(st, b_matchScores, topTwoMetrics_data,
                                        topTwoIndices_data, matchIndex);
      if (matchIndex < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, matchIndex, &ko_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(topTwoIndices_data[0]) < 1) ||
          (static_cast<int32_T>(topTwoIndices_data[0]) > ii.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(topTwoIndices_data[0]), 1, ii.size(0),
            &ro_emlrtBCI, (emlrtConstCTX)&sp);
      }
      matchIndex = ii[static_cast<int32_T>(topTwoIndices_data[0]) - 1];
      if (matchScores_idx_1 < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, matchScores_idx_1, &lo_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (topTwoMetrics_data[1] < 1.0E-6F) {
        ratio = 1.0F;
      } else {
        ratio = topTwoMetrics_data[0] / topTwoMetrics_data[1];
      }
      if (!(ratio > 0.9F)) {
        guard1 = true;
      }
    }
    if (guard1) {
      if (b_loop_ub + 1 > c_loop_ub) {
        emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, c_loop_ub, &mo_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      indexPairs[b_loop_ub] = static_cast<uint32_T>(b_loop_ub + 1);
      if (matchIndex < 0) {
        matchIndex = 0;
      }
      indexPairs[b_loop_ub + indexPairs.size(0)] =
          static_cast<uint32_T>(matchIndex);
    }
  }
  neighborIdxLogical.set_size(&nhb_emlrtRTEI, &sp, features1.Features.size(0));
  for (i2 = 0; i2 < c_loop_ub; i2++) {
    neighborIdxLogical[i2] = (indexPairs[i2] != 0U);
  }
  matchScores_idx_1 = 0;
  for (int32_T b_i{0}; b_i < c_loop_ub; b_i++) {
    if (neighborIdxLogical[b_i]) {
      matchScores_idx_1++;
    }
  }
  r4.set_size(&lhb_emlrtRTEI, &sp, matchScores_idx_1);
  matchScores_idx_1 = 0;
  for (int32_T b_i{0}; b_i < c_loop_ub; b_i++) {
    if (neighborIdxLogical[b_i]) {
      r4[matchScores_idx_1] = b_i;
      matchScores_idx_1++;
    }
  }
  loop_ub = r4.size(0);
  b_indexPairs.set_size(&ohb_emlrtRTEI, &sp, r4.size(0), 2);
  for (i2 = 0; i2 < 2; i2++) {
    for (matchIndex = 0; matchIndex < loop_ub; matchIndex++) {
      if (r4[matchIndex] > indexPairs.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[matchIndex], 0, indexPairs.size(0) - 1,
                                      &po_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_indexPairs[matchIndex + b_indexPairs.size(0) * i2] =
          indexPairs[r4[matchIndex] + indexPairs.size(0) * i2];
    }
  }
  i2 = b_indexPairs.size(0);
  indexPairs.set_size(&phb_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
  loop_ub_tmp = b_indexPairs.size(0) << 1;
  for (matchIndex = 0; matchIndex < loop_ub_tmp; matchIndex++) {
    indexPairs[matchIndex] = b_indexPairs[matchIndex];
  }
  b_loop_ub = -1;
  for (matchThreshold = 0; matchThreshold < c_loop_ub; matchThreshold++) {
    if (neighborIdxLogical[matchThreshold]) {
      b_loop_ub++;
    }
  }
  if (b_loop_ub + 1 > 0) {
    neighborIdxLogical.set_size(&qhb_emlrtRTEI, &sp, b_loop_ub + 1);
    for (matchIndex = 0; matchIndex <= b_loop_ub; matchIndex++) {
      neighborIdxLogical[matchIndex] = true;
    }
    loop_ub_tmp = isStrongMatch.size(1);
    for (int32_T b_i{0}; b_i <= b_loop_ub; b_i++) {
      uint32_T feature2Idx;
      if (b_i + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &so_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      feature2Idx = indexPairs[b_i + indexPairs.size(0)];
      st.site = &lgc_emlrtRSI;
      if ((static_cast<int32_T>(feature2Idx) < 1) ||
          (static_cast<int32_T>(feature2Idx) > isStrongMatch.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(feature2Idx), 1,
                                      isStrongMatch.size(0), &no_emlrtBCI, &st);
      }
      b_isStrongMatch.set_size(&rhb_emlrtRTEI, &st, 1, loop_ub_tmp);
      for (matchIndex = 0; matchIndex < loop_ub_tmp; matchIndex++) {
        b_isStrongMatch[matchIndex] =
            isStrongMatch[(static_cast<int32_T>(feature2Idx) +
                           isStrongMatch.size(0) * matchIndex) -
                          1];
      }
      b_st.site = &aq_emlrtRSI;
      c_eml_find(b_st, b_isStrongMatch, b_ii);
      if (b_ii.size(1) > 1) {
        st.site = &mgc_emlrtRSI;
        if ((static_cast<int32_T>(feature2Idx) < 1) ||
            (static_cast<int32_T>(feature2Idx) > i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(feature2Idx), 1, i,
                                        &oo_emlrtBCI, &st);
        }
        loop_ub = b_ii.size(1);
        b_matchScores.set_size(&shb_emlrtRTEI, &st, 1, b_ii.size(1));
        for (matchIndex = 0; matchIndex < loop_ub; matchIndex++) {
          if ((b_ii[matchIndex] < 1) || (b_ii[matchIndex] > i1)) {
            emlrtDynamicBoundsCheckR2012b(b_ii[matchIndex], 1, i1, &uo_emlrtBCI,
                                          &st);
          }
          b_matchScores[matchIndex] =
              matchScores[(static_cast<int32_T>(feature2Idx) +
                           matchScores.size(0) * (b_ii[matchIndex] - 1)) -
                          1];
        }
        b_st.site = &bi_emlrtRSI;
        c_st.site = &ci_emlrtRSI;
        d_st.site = &di_emlrtRSI;
        e_st.site = &gf_emlrtRSI;
        if (b_ii.size(1) <= 2) {
          real32_T f;
          f = matchScores[(static_cast<int32_T>(feature2Idx) +
                           matchScores.size(0) * (b_ii[0] - 1)) -
                          1];
          ratio = matchScores[(static_cast<int32_T>(feature2Idx) +
                               matchScores.size(0) * (b_ii[1] - 1)) -
                              1];
          if ((f > ratio) ||
              (muSingleScalarIsNaN(f) && (!muSingleScalarIsNaN(ratio)))) {
            matchIndex = 2;
          } else {
            matchIndex = 1;
          }
        } else {
          f_st.site = &if_emlrtRSI;
          if (!muSingleScalarIsNaN(
                  matchScores[(static_cast<int32_T>(feature2Idx) +
                               matchScores.size(0) * (b_ii[0] - 1)) -
                              1])) {
            matchIndex = 1;
          } else {
            boolean_T exitg1;
            matchIndex = 0;
            g_st.site = &jf_emlrtRSI;
            if (b_ii.size(1) > 2147483646) {
              h_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(h_st);
            }
            matchThreshold = 2;
            exitg1 = false;
            while ((!exitg1) && (matchThreshold <= loop_ub)) {
              if (!muSingleScalarIsNaN(b_matchScores[matchThreshold - 1])) {
                matchIndex = matchThreshold;
                exitg1 = true;
              } else {
                matchThreshold++;
              }
            }
          }
          if (matchIndex == 0) {
            matchIndex = 1;
          } else {
            f_st.site = &hf_emlrtRSI;
            ratio =
                matchScores[(static_cast<int32_T>(feature2Idx) +
                             matchScores.size(0) * (b_ii[matchIndex - 1] - 1)) -
                            1];
            matchScores_idx_1 = matchIndex + 1;
            g_st.site = &kf_emlrtRSI;
            if ((matchIndex + 1 <= b_ii.size(1)) &&
                (b_ii.size(1) > 2147483646)) {
              h_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(h_st);
            }
            for (matchThreshold = matchScores_idx_1; matchThreshold <= loop_ub;
                 matchThreshold++) {
              real32_T f;
              f = b_matchScores[matchThreshold - 1];
              if (ratio > f) {
                ratio = f;
                matchIndex = matchThreshold;
              }
            }
          }
        }
        if ((matchIndex < 1) || (matchIndex > b_ii.size(1))) {
          emlrtDynamicBoundsCheckR2012b(matchIndex, 1, b_ii.size(1),
                                        &vo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &wo_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > neighborIdxLogical.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, neighborIdxLogical.size(0),
                                        &xo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        neighborIdxLogical[b_i] =
            (b_ii[matchIndex - 1] == static_cast<int32_T>(indexPairs[b_i]));
      }
    }
    matchIndex = neighborIdxLogical.size(0);
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < matchIndex; b_i++) {
      if (neighborIdxLogical[b_i]) {
        matchScores_idx_1++;
      }
    }
    r6.set_size(&lhb_emlrtRTEI, &sp, matchScores_idx_1);
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < matchIndex; b_i++) {
      if (neighborIdxLogical[b_i]) {
        r6[matchScores_idx_1] = b_i;
        matchScores_idx_1++;
      }
    }
    loop_ub = r6.size(0);
    b_indexPairs.set_size(&thb_emlrtRTEI, &sp, r6.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (r6[i1] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r6[i1], 0, indexPairs.size(0) - 1,
                                        &to_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_indexPairs[i1 + b_indexPairs.size(0) * i] =
            indexPairs[r6[i1] + indexPairs.size(0) * i];
      }
    }
    indexPairs.set_size(&uhb_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
    loop_ub_tmp = b_indexPairs.size(0) << 1;
    for (i = 0; i < loop_ub_tmp; i++) {
      indexPairs[i] = b_indexPairs[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void matchFeaturesInRadius(const emlrtStack &sp,
                           const b_binaryFeatures &features1,
                           const binaryFeatures &features2,
                           const array<real32_T, 2U> &points2,
                           const array<real32_T, 2U> &centerPoints,
                           const array<real32_T, 1U> &radius,
                           array<uint32_T, 2U> &indexPairs)
{
  array<int32_T, 2U> b_ii;
  array<int32_T, 1U> ii;
  array<int32_T, 1U> r3;
  array<int32_T, 1U> r4;
  array<int32_T, 1U> r5;
  array<real32_T, 2U> allSpatialDist;
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> b_radius;
  array<real32_T, 2U> r1;
  array<real32_T, 2U> r2;
  array<uint32_T, 2U> b_indexPairs;
  array<uint8_T, 2U> b_features1;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> c_features1;
  array<uint8_T, 2U> c_features2;
  array<uint8_T, 2U> d_features1;
  array<boolean_T, 2U> b_isStrongMatch;
  array<boolean_T, 2U> isInRadius;
  array<boolean_T, 2U> isStrongMatch;
  array<boolean_T, 1U> neighborIdxLogical;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T numPoints1;
  real_T numPoints2;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  int32_T k;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  real32_T topTwoMetrics_data[2];
  real32_T ratio;
  uint32_T topTwoIndices_data[2];
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
  st.site = &egc_emlrtRSI;
  numPoints1 =
      parseInputs(st, features1, features2, centerPoints, points2, radius,
                  b_features1, b_features2, b_radius, numPoints2);
  st.site = &fgc_emlrtRSI;
  if (b_features1.size(1) != 32) {
    emlrtErrorWithMessageIdR2018a(
        &st, &qe_emlrtRTEI, "vision:matchFeatures:featuresNotSameDimension",
        "vision:matchFeatures:featuresNotSameDimension", 0);
  }
  st.site = &ggc_emlrtRSI;
  b_st.site = &rec_emlrtRSI;
  i = static_cast<int32_T>(numPoints2);
  i1 = static_cast<int32_T>(numPoints1);
  allSpatialDist.set_size(&ehb_emlrtRTEI, &b_st, i, i1);
  loop_ub_tmp =
      static_cast<int32_T>(numPoints2) * static_cast<int32_T>(numPoints1);
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    allSpatialDist[i2] = 0.0F;
  }
  loop_ub = points2.size(0);
  b_r.set_size(&wl_emlrtRTEI, &b_st, 2, points2.size(0));
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_r[2 * i2] = points2[i2];
    b_r[2 * i2 + 1] = points2[i2 + points2.size(0)];
  }
  loop_ub = centerPoints.size(0);
  r1.set_size(&xl_emlrtRTEI, &b_st, 2, centerPoints.size(0));
  for (i2 = 0; i2 < loop_ub; i2++) {
    r1[2 * i2] = centerPoints[i2];
    r1[2 * i2 + 1] = centerPoints[i2 + centerPoints.size(0)];
  }
  ComputeMetric_ssd_single(&b_r[0], &r1[0], &allSpatialDist[0],
                           static_cast<uint32_T>(points2.size(0)),
                           static_cast<uint32_T>(centerPoints.size(0)), 2U);
  st.site = &hgc_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  b_radius.set_size(&plb_emlrtRTEI, &b_st, 1, b_radius.size(1));
  loop_ub = b_radius.size(1) - 1;
  for (i2 = 0; i2 <= loop_ub; i2++) {
    ratio = b_radius[i2];
    b_radius[i2] = ratio * ratio;
  }
  st.site = &hgc_emlrtRSI;
  b_st.site = &ne_emlrtRSI;
  if ((numPoints2 != numPoints2) || muDoubleScalarIsInf(numPoints2)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &k_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i2 = b_radius.size(1);
  r2.set_size(&xj_emlrtRTEI, &st, i, b_radius.size(1));
  b_st.site = &ry_emlrtRSI;
  if (b_radius.size(1) > 2147483646) {
    c_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (jcol = 0; jcol < i2; jcol++) {
    ibmat = jcol * static_cast<int32_T>(numPoints2);
    b_st.site = &oe_emlrtRSI;
    if (static_cast<int32_T>(numPoints2) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (itilerow = 0; itilerow < i; itilerow++) {
      b_st.site = &pe_emlrtRSI;
      r2[ibmat + itilerow] = b_radius[jcol];
    }
  }
  if ((allSpatialDist.size(0) != static_cast<int32_T>(numPoints2)) &&
      ((allSpatialDist.size(0) != 1) &&
       (static_cast<int32_T>(numPoints2) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(0),
                                static_cast<int32_T>(numPoints2), &wc_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(1) != b_radius.size(1)) &&
      ((allSpatialDist.size(1) != 1) && (b_radius.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(1), b_radius.size(1),
                                &xc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(0) == r2.size(0)) &&
      (allSpatialDist.size(1) == r2.size(1))) {
    isInRadius.set_size(&fhb_emlrtRTEI, &sp, allSpatialDist.size(0),
                        allSpatialDist.size(1));
    loop_ub_tmp = allSpatialDist.size(0) * allSpatialDist.size(1);
    for (i = 0; i < loop_ub_tmp; i++) {
      isInRadius[i] = (allSpatialDist[i] <= r2[i]);
    }
  } else {
    st.site = &hgc_emlrtRSI;
    le(st, isInRadius, allSpatialDist, r2);
  }
  loop_ub = b_features1.size(0);
  c_features1.set_size(&ghb_emlrtRTEI, &sp, 32, b_features1.size(0));
  for (i = 0; i < loop_ub; i++) {
    for (i2 = 0; i2 < 32; i2++) {
      c_features1[i2 + c_features1.size(0) * i] =
          b_features1[i + b_features1.size(0) * i2];
    }
  }
  ibmat = b_features1.size(0);
  loop_ub = b_features2.size(0);
  c_features2.set_size(&hhb_emlrtRTEI, &sp, 32, b_features2.size(0));
  for (i = 0; i < loop_ub; i++) {
    for (i2 = 0; i2 < 32; i2++) {
      c_features2[i2 + 32 * i] = b_features2[i + b_features2.size(0) * i2];
    }
  }
  d_features1 = c_features1.reshape(32, ibmat);
  st.site = &igc_emlrtRSI;
  vision::internal::matchFeatures::exhaustiveDistanceMetrics(
      st, c_features2, d_features1, numPoints2, numPoints1, allSpatialDist);
  i = allSpatialDist.size(0);
  i2 = allSpatialDist.size(1);
  isStrongMatch.set_size(&ihb_emlrtRTEI, &sp, allSpatialDist.size(0),
                         allSpatialDist.size(1));
  loop_ub_tmp = allSpatialDist.size(0) * allSpatialDist.size(1);
  for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
    isStrongMatch[jcol] = (allSpatialDist[jcol] <= 102.0F);
  }
  if ((allSpatialDist.size(0) != isInRadius.size(0)) &&
      ((allSpatialDist.size(0) != 1) && (isInRadius.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(0), isInRadius.size(0),
                                &yc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(1) != isInRadius.size(1)) &&
      ((allSpatialDist.size(1) != 1) && (isInRadius.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(1), isInRadius.size(1),
                                &ad_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((isStrongMatch.size(0) == isInRadius.size(0)) &&
      (isStrongMatch.size(1) == isInRadius.size(1))) {
    for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
      isStrongMatch[jcol] = (isStrongMatch[jcol] && isInRadius[jcol]);
    }
  } else {
    st.site = &ijd_emlrtRSI;
    f_and(st, isStrongMatch, isInRadius);
  }
  indexPairs.set_size(&jhb_emlrtRTEI, &sp, i1, 2);
  loop_ub_tmp = static_cast<int32_T>(numPoints1) << 1;
  for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
    indexPairs[jcol] = 0U;
  }
  for (loop_ub = 0; loop_ub < i1; loop_ub++) {
    boolean_T guard1;
    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         isStrongMatch.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
          isStrongMatch.size(1), &io_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub_tmp = isStrongMatch.size(0);
    neighborIdxLogical.set_size(&khb_emlrtRTEI, &sp, isStrongMatch.size(0));
    for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
      neighborIdxLogical[jcol] =
          isStrongMatch[jcol + isStrongMatch.size(0) * loop_ub];
    }
    jcol = 0;
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (neighborIdxLogical[b_i]) {
        jcol++;
      }
    }
    r4.set_size(&lhb_emlrtRTEI, &sp, jcol);
    jcol = 0;
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (neighborIdxLogical[b_i]) {
        r4[jcol] = b_i;
        jcol++;
      }
    }
    loop_ub_tmp = r4.size(0);
    for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
      if (r4[jcol] > allSpatialDist.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[jcol], 0, allSpatialDist.size(0) - 1,
                                      &qo_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    if ((loop_ub + 1 < 1) || (loop_ub + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i2, &jo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &jgc_emlrtRSI;
    b_st.site = &aq_emlrtRSI;
    b_eml_find(b_st, neighborIdxLogical, ii);
    guard1 = false;
    if (ii.size(0) == 1) {
      ibmat = ii[0];
      guard1 = true;
    } else if (ii.size(0) > 1) {
      b_radius.set_size(&mhb_emlrtRTEI, &sp, 1, r4.size(0));
      for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
        b_radius[jcol] =
            allSpatialDist[r4[jcol] + allSpatialDist.size(0) * loop_ub];
      }
      st.site = &kgc_emlrtRSI;
      jcol = vision::internal::partialSort(st, b_radius, topTwoMetrics_data,
                                           topTwoIndices_data, ibmat);
      if (ibmat < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ibmat, &ko_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(topTwoIndices_data[0]) < 1) ||
          (static_cast<int32_T>(topTwoIndices_data[0]) > ii.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(topTwoIndices_data[0]), 1, ii.size(0),
            &ro_emlrtBCI, (emlrtConstCTX)&sp);
      }
      ibmat = ii[static_cast<int32_T>(topTwoIndices_data[0]) - 1];
      if (jcol < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, jcol, &lo_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (topTwoMetrics_data[1] < 1.0E-6F) {
        ratio = 1.0F;
      } else {
        ratio = topTwoMetrics_data[0] / topTwoMetrics_data[1];
      }
      if (!(ratio > 0.9F)) {
        guard1 = true;
      }
    }
    if (guard1) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           indexPairs.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
            indexPairs.size(0), &mo_emlrtBCI, (emlrtConstCTX)&sp);
      }
      indexPairs[loop_ub] = static_cast<uint32_T>(loop_ub) + 1U;
      if (ibmat < 0) {
        ibmat = 0;
      }
      indexPairs[loop_ub + indexPairs.size(0)] = static_cast<uint32_T>(ibmat);
    }
  }
  loop_ub = indexPairs.size(0);
  neighborIdxLogical.set_size(&nhb_emlrtRTEI, &sp, indexPairs.size(0));
  for (i1 = 0; i1 < loop_ub; i1++) {
    neighborIdxLogical[i1] = (indexPairs[i1] != 0U);
  }
  jcol = 0;
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (neighborIdxLogical[b_i]) {
      jcol++;
    }
  }
  r3.set_size(&lhb_emlrtRTEI, &sp, jcol);
  jcol = 0;
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    if (neighborIdxLogical[b_i]) {
      r3[jcol] = b_i;
      jcol++;
    }
  }
  ibmat = r3.size(0);
  b_indexPairs.set_size(&ohb_emlrtRTEI, &sp, r3.size(0), 2);
  for (i1 = 0; i1 < 2; i1++) {
    for (jcol = 0; jcol < ibmat; jcol++) {
      if (r3[jcol] > indexPairs.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r3[jcol], 0, indexPairs.size(0) - 1,
                                      &po_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_indexPairs[jcol + b_indexPairs.size(0) * i1] =
          indexPairs[r3[jcol] + indexPairs.size(0) * i1];
    }
  }
  i1 = b_indexPairs.size(0);
  indexPairs.set_size(&phb_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
  loop_ub_tmp = b_indexPairs.size(0) << 1;
  for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
    indexPairs[jcol] = b_indexPairs[jcol];
  }
  itilerow = -1;
  for (k = 0; k < loop_ub; k++) {
    if (neighborIdxLogical[k]) {
      itilerow++;
    }
  }
  if (itilerow + 1 > 0) {
    neighborIdxLogical.set_size(&qhb_emlrtRTEI, &sp, itilerow + 1);
    for (jcol = 0; jcol <= itilerow; jcol++) {
      neighborIdxLogical[jcol] = true;
    }
    loop_ub_tmp = isStrongMatch.size(1);
    for (int32_T b_i{0}; b_i <= itilerow; b_i++) {
      uint32_T feature2Idx;
      if (b_i + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &so_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      feature2Idx = indexPairs[b_i + indexPairs.size(0)];
      st.site = &lgc_emlrtRSI;
      if ((static_cast<int32_T>(feature2Idx) < 1) ||
          (static_cast<int32_T>(feature2Idx) > isStrongMatch.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(feature2Idx), 1,
                                      isStrongMatch.size(0), &no_emlrtBCI, &st);
      }
      b_isStrongMatch.set_size(&rhb_emlrtRTEI, &st, 1, loop_ub_tmp);
      for (jcol = 0; jcol < loop_ub_tmp; jcol++) {
        b_isStrongMatch[jcol] =
            isStrongMatch[(static_cast<int32_T>(feature2Idx) +
                           isStrongMatch.size(0) * jcol) -
                          1];
      }
      b_st.site = &aq_emlrtRSI;
      c_eml_find(b_st, b_isStrongMatch, b_ii);
      if (b_ii.size(1) > 1) {
        st.site = &mgc_emlrtRSI;
        if ((static_cast<int32_T>(feature2Idx) < 1) ||
            (static_cast<int32_T>(feature2Idx) > i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(feature2Idx), 1, i,
                                        &oo_emlrtBCI, &st);
        }
        loop_ub = b_ii.size(1);
        b_radius.set_size(&shb_emlrtRTEI, &st, 1, b_ii.size(1));
        for (jcol = 0; jcol < loop_ub; jcol++) {
          if ((b_ii[jcol] < 1) || (b_ii[jcol] > i2)) {
            emlrtDynamicBoundsCheckR2012b(b_ii[jcol], 1, i2, &uo_emlrtBCI, &st);
          }
          b_radius[jcol] =
              allSpatialDist[(static_cast<int32_T>(feature2Idx) +
                              allSpatialDist.size(0) * (b_ii[jcol] - 1)) -
                             1];
        }
        b_st.site = &bi_emlrtRSI;
        c_st.site = &ci_emlrtRSI;
        d_st.site = &di_emlrtRSI;
        e_st.site = &gf_emlrtRSI;
        if (b_ii.size(1) <= 2) {
          real32_T f;
          f = allSpatialDist[(static_cast<int32_T>(feature2Idx) +
                              allSpatialDist.size(0) * (b_ii[0] - 1)) -
                             1];
          ratio = allSpatialDist[(static_cast<int32_T>(feature2Idx) +
                                  allSpatialDist.size(0) * (b_ii[1] - 1)) -
                                 1];
          if ((f > ratio) ||
              (muSingleScalarIsNaN(f) && (!muSingleScalarIsNaN(ratio)))) {
            ibmat = 2;
          } else {
            ibmat = 1;
          }
        } else {
          f_st.site = &if_emlrtRSI;
          if (!muSingleScalarIsNaN(
                  allSpatialDist[(static_cast<int32_T>(feature2Idx) +
                                  allSpatialDist.size(0) * (b_ii[0] - 1)) -
                                 1])) {
            ibmat = 1;
          } else {
            boolean_T exitg1;
            ibmat = 0;
            g_st.site = &jf_emlrtRSI;
            if (b_ii.size(1) > 2147483646) {
              h_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(h_st);
            }
            k = 2;
            exitg1 = false;
            while ((!exitg1) && (k <= loop_ub)) {
              if (!muSingleScalarIsNaN(b_radius[k - 1])) {
                ibmat = k;
                exitg1 = true;
              } else {
                k++;
              }
            }
          }
          if (ibmat == 0) {
            ibmat = 1;
          } else {
            f_st.site = &hf_emlrtRSI;
            ratio = allSpatialDist[(static_cast<int32_T>(feature2Idx) +
                                    allSpatialDist.size(0) *
                                        (b_ii[ibmat - 1] - 1)) -
                                   1];
            jcol = ibmat + 1;
            g_st.site = &kf_emlrtRSI;
            if ((ibmat + 1 <= b_ii.size(1)) && (b_ii.size(1) > 2147483646)) {
              h_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(h_st);
            }
            for (k = jcol; k <= loop_ub; k++) {
              real32_T f;
              f = b_radius[k - 1];
              if (ratio > f) {
                ratio = f;
                ibmat = k;
              }
            }
          }
        }
        if ((ibmat < 1) || (ibmat > b_ii.size(1))) {
          emlrtDynamicBoundsCheckR2012b(ibmat, 1, b_ii.size(1), &vo_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &wo_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > neighborIdxLogical.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, neighborIdxLogical.size(0),
                                        &xo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        neighborIdxLogical[b_i] =
            (static_cast<real_T>(b_ii[ibmat - 1]) == indexPairs[b_i]);
      }
    }
    ibmat = neighborIdxLogical.size(0);
    jcol = 0;
    for (int32_T b_i{0}; b_i < ibmat; b_i++) {
      if (neighborIdxLogical[b_i]) {
        jcol++;
      }
    }
    r5.set_size(&lhb_emlrtRTEI, &sp, jcol);
    jcol = 0;
    for (int32_T b_i{0}; b_i < ibmat; b_i++) {
      if (neighborIdxLogical[b_i]) {
        r5[jcol] = b_i;
        jcol++;
      }
    }
    loop_ub = r5.size(0);
    b_indexPairs.set_size(&thb_emlrtRTEI, &sp, r5.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (r5[i1] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r5[i1], 0, indexPairs.size(0) - 1,
                                        &to_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_indexPairs[i1 + b_indexPairs.size(0) * i] =
            indexPairs[r5[i1] + indexPairs.size(0) * i];
      }
    }
    indexPairs.set_size(&uhb_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
    loop_ub_tmp = b_indexPairs.size(0) << 1;
    for (i = 0; i < loop_ub_tmp; i++) {
      indexPairs[i] = b_indexPairs[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void matchFeaturesInRadius(const emlrtStack &sp,
                           const b_binaryFeatures &features1,
                           const binaryFeatures &features2,
                           const ORBPoints &points2,
                           const array<real32_T, 2U> &centerPoints,
                           array<uint32_T, 2U> &indexPairs)
{
  array<real_T, 2U> r2;
  array<real_T, 2U> r3;
  array<int32_T, 2U> b_ii;
  array<int32_T, 1U> ii;
  array<int32_T, 1U> r4;
  array<int32_T, 1U> r5;
  array<int32_T, 1U> r6;
  array<real32_T, 2U> allSpatialDist;
  array<real32_T, 2U> b_matchScores;
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> matchScores;
  array<real32_T, 2U> r1;
  array<uint32_T, 2U> b_indexPairs;
  array<uint8_T, 2U> b_features1;
  array<uint8_T, 2U> b_features2;
  array<uint8_T, 2U> c_features1;
  array<boolean_T, 2U> b_isStrongMatch;
  array<boolean_T, 2U> isInRadius;
  array<boolean_T, 2U> isStrongMatch;
  array<boolean_T, 1U> neighborIdxLogical;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T matchIndex;
  int32_T matchScores_idx_1;
  int32_T matchThreshold;
  real32_T topTwoMetrics_data[2];
  real32_T ratio;
  uint32_T topTwoIndices_data[2];
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
  st.site = &egc_emlrtRSI;
  b_st.site = &ngc_emlrtRSI;
  c_st.site = &qgc_emlrtRSI;
  checkImagePointsWithKnownSize(
      c_st, points2.pLocation, static_cast<real_T>(features2.Features.size(0)));
  b_st.site = &ogc_emlrtRSI;
  checkCenterPoints(b_st, centerPoints,
                    static_cast<real_T>(features1.Features.size(0)));
  b_st.site = &pgc_emlrtRSI;
  c_st.site = &tgc_emlrtRSI;
  d_st.site = &ne_emlrtRSI;
  internal::assertValidSizeArg(d_st,
                               static_cast<real_T>(features1.Features.size(0)));
  st.site = &fgc_emlrtRSI;
  if (features1.Features.size(1) != 32) {
    emlrtErrorWithMessageIdR2018a(
        &st, &qe_emlrtRTEI, "vision:matchFeatures:featuresNotSameDimension",
        "vision:matchFeatures:featuresNotSameDimension", 0);
  }
  matchThreshold = static_cast<int32_T>(muSingleScalarRound(
      0.199999988F *
      (8.0F * static_cast<real32_T>(features1.Features.size(1)))));
  st.site = &ggc_emlrtRSI;
  loop_ub = centerPoints.size(0);
  matchScores.set_size(&chb_emlrtRTEI, &st, 2, centerPoints.size(0));
  for (i = 0; i < loop_ub; i++) {
    matchScores[matchScores.size(0) * i] = centerPoints[i];
    matchScores[matchScores.size(0) * i + 1] =
        centerPoints[i + centerPoints.size(0)];
  }
  allSpatialDist.set_size(&dhb_emlrtRTEI, &st, centerPoints.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      allSpatialDist[i1 + allSpatialDist.size(0) * i] =
          matchScores[i + matchScores.size(0) * i1];
    }
  }
  matchScores.set_size(&pfb_emlrtRTEI, &st, centerPoints.size(0), 2);
  loop_ub_tmp = centerPoints.size(0) << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    matchScores[i] = allSpatialDist[i];
  }
  b_st.site = &rec_emlrtRSI;
  b_loop_ub = features2.Features.size(0);
  c_loop_ub = features1.Features.size(0);
  allSpatialDist.set_size(&ehb_emlrtRTEI, &b_st, features2.Features.size(0),
                          features1.Features.size(0));
  loop_ub_tmp = features2.Features.size(0) * features1.Features.size(0);
  for (i = 0; i < loop_ub_tmp; i++) {
    allSpatialDist[i] = 0.0F;
  }
  matchIndex = points2.pLocation.size(0);
  b_r.set_size(&wl_emlrtRTEI, &b_st, 2, points2.pLocation.size(0));
  for (i = 0; i < matchIndex; i++) {
    b_r[2 * i] = points2.pLocation[i];
    b_r[2 * i + 1] = points2.pLocation[i + points2.pLocation.size(0)];
  }
  r1.set_size(&xl_emlrtRTEI, &b_st, 2, centerPoints.size(0));
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 2; i1++) {
      r1[i1 + 2 * i] = matchScores[i + matchScores.size(0) * i1];
    }
  }
  ComputeMetric_ssd_single(&b_r[0], &r1[0], &allSpatialDist[0],
                           static_cast<uint32_T>(points2.pLocation.size(0)),
                           static_cast<uint32_T>(matchScores.size(0)), 2U);
  st.site = &hgc_emlrtRSI;
  b_st.site = &fo_emlrtRSI;
  r2.set_size(&ao_emlrtRTEI, &sp, 1, features1.Features.size(0));
  for (i = 0; i < c_loop_ub; i++) {
    r2[i] = 16.0;
  }
  st.site = &hgc_emlrtRSI;
  repmat(st, r2, static_cast<real_T>(features2.Features.size(0)), r3);
  if ((allSpatialDist.size(0) != r3.size(0)) &&
      ((allSpatialDist.size(0) != 1) && (r3.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(0), r3.size(0),
                                &wc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(1) != r3.size(1)) &&
      ((allSpatialDist.size(1) != 1) && (r3.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(allSpatialDist.size(1), r3.size(1),
                                &xc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((allSpatialDist.size(0) == r3.size(0)) &&
      (allSpatialDist.size(1) == r3.size(1))) {
    isInRadius.set_size(&fhb_emlrtRTEI, &sp, allSpatialDist.size(0),
                        allSpatialDist.size(1));
    loop_ub_tmp = allSpatialDist.size(0) * allSpatialDist.size(1);
    for (i = 0; i < loop_ub_tmp; i++) {
      isInRadius[i] = (allSpatialDist[i] <= r3[i]);
    }
  } else {
    st.site = &hgc_emlrtRSI;
    binary_expand_op_21(st, isInRadius, allSpatialDist, r3);
  }
  loop_ub = features1.Features.size(1);
  b_features1.set_size(&ghb_emlrtRTEI, &sp, features1.Features.size(1),
                       features1.Features.size(0));
  for (i = 0; i < c_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_features1[i1 + b_features1.size(0) * i] =
          features1.Features[i + features1.Features.size(0) * i1];
    }
  }
  matchIndex = features1.Features.size(1);
  matchScores_idx_1 = features1.Features.size(0);
  b_features2.set_size(&hhb_emlrtRTEI, &sp, 32, features2.Features.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < 32; i1++) {
      b_features2[i1 + 32 * i] =
          features2.Features[i + features2.Features.size(0) * i1];
    }
  }
  c_features1 = b_features1.reshape(matchIndex, matchScores_idx_1);
  st.site = &igc_emlrtRSI;
  vision::internal::matchFeatures::exhaustiveDistanceMetrics(
      st, b_features2, c_features1,
      static_cast<real_T>(features2.Features.size(0)),
      static_cast<real_T>(features1.Features.size(0)), matchScores);
  i = matchScores.size(0);
  i1 = matchScores.size(1);
  isStrongMatch.set_size(&ihb_emlrtRTEI, &sp, matchScores.size(0),
                         matchScores.size(1));
  loop_ub_tmp = matchScores.size(0) * matchScores.size(1);
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    isStrongMatch[i2] = (matchScores[i2] <= matchThreshold);
  }
  if ((matchScores.size(0) != isInRadius.size(0)) &&
      ((matchScores.size(0) != 1) && (isInRadius.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(matchScores.size(0), isInRadius.size(0),
                                &yc_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((matchScores.size(1) != isInRadius.size(1)) &&
      ((matchScores.size(1) != 1) && (isInRadius.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(matchScores.size(1), isInRadius.size(1),
                                &ad_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((isStrongMatch.size(0) == isInRadius.size(0)) &&
      (isStrongMatch.size(1) == isInRadius.size(1))) {
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      isStrongMatch[i2] = (isStrongMatch[i2] && isInRadius[i2]);
    }
  } else {
    st.site = &ijd_emlrtRSI;
    f_and(st, isStrongMatch, isInRadius);
  }
  indexPairs.set_size(&jhb_emlrtRTEI, &sp, features1.Features.size(0), 2);
  loop_ub_tmp = features1.Features.size(0) << 1;
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    indexPairs[i2] = 0U;
  }
  for (b_loop_ub = 0; b_loop_ub < c_loop_ub; b_loop_ub++) {
    boolean_T guard1;
    if (b_loop_ub + 1 > isStrongMatch.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, isStrongMatch.size(1),
                                    &io_emlrtBCI, (emlrtConstCTX)&sp);
    }
    loop_ub_tmp = isStrongMatch.size(0);
    neighborIdxLogical.set_size(&khb_emlrtRTEI, &sp, isStrongMatch.size(0));
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      neighborIdxLogical[i2] =
          isStrongMatch[i2 + isStrongMatch.size(0) * b_loop_ub];
    }
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (neighborIdxLogical[b_i]) {
        matchScores_idx_1++;
      }
    }
    r5.set_size(&lhb_emlrtRTEI, &sp, matchScores_idx_1);
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
      if (neighborIdxLogical[b_i]) {
        r5[matchScores_idx_1] = b_i;
        matchScores_idx_1++;
      }
    }
    loop_ub_tmp = r5.size(0);
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      if (r5[i2] > matchScores.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r5[i2], 0, matchScores.size(0) - 1,
                                      &qo_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    if (b_loop_ub + 1 > i1) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, i1, &jo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    st.site = &jgc_emlrtRSI;
    b_st.site = &aq_emlrtRSI;
    b_eml_find(b_st, neighborIdxLogical, ii);
    guard1 = false;
    if (ii.size(0) == 1) {
      matchIndex = ii[0];
      guard1 = true;
    } else if (ii.size(0) > 1) {
      b_matchScores.set_size(&mhb_emlrtRTEI, &sp, 1, r5.size(0));
      for (i2 = 0; i2 < loop_ub_tmp; i2++) {
        b_matchScores[i2] =
            matchScores[r5[i2] + matchScores.size(0) * b_loop_ub];
      }
      st.site = &kgc_emlrtRSI;
      matchScores_idx_1 =
          vision::internal::partialSort(st, b_matchScores, topTwoMetrics_data,
                                        topTwoIndices_data, matchIndex);
      if (matchIndex < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, matchIndex, &ko_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(topTwoIndices_data[0]) < 1) ||
          (static_cast<int32_T>(topTwoIndices_data[0]) > ii.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(topTwoIndices_data[0]), 1, ii.size(0),
            &ro_emlrtBCI, (emlrtConstCTX)&sp);
      }
      matchIndex = ii[static_cast<int32_T>(topTwoIndices_data[0]) - 1];
      if (matchScores_idx_1 < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, matchScores_idx_1, &lo_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (topTwoMetrics_data[1] < 1.0E-6F) {
        ratio = 1.0F;
      } else {
        ratio = topTwoMetrics_data[0] / topTwoMetrics_data[1];
      }
      if (!(ratio > 0.9F)) {
        guard1 = true;
      }
    }
    if (guard1) {
      if (b_loop_ub + 1 > c_loop_ub) {
        emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, c_loop_ub, &mo_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      indexPairs[b_loop_ub] = static_cast<uint32_T>(b_loop_ub + 1);
      if (matchIndex < 0) {
        matchIndex = 0;
      }
      indexPairs[b_loop_ub + indexPairs.size(0)] =
          static_cast<uint32_T>(matchIndex);
    }
  }
  neighborIdxLogical.set_size(&nhb_emlrtRTEI, &sp, features1.Features.size(0));
  for (i2 = 0; i2 < c_loop_ub; i2++) {
    neighborIdxLogical[i2] = (indexPairs[i2] != 0U);
  }
  matchScores_idx_1 = 0;
  for (int32_T b_i{0}; b_i < c_loop_ub; b_i++) {
    if (neighborIdxLogical[b_i]) {
      matchScores_idx_1++;
    }
  }
  r4.set_size(&lhb_emlrtRTEI, &sp, matchScores_idx_1);
  matchScores_idx_1 = 0;
  for (int32_T b_i{0}; b_i < c_loop_ub; b_i++) {
    if (neighborIdxLogical[b_i]) {
      r4[matchScores_idx_1] = b_i;
      matchScores_idx_1++;
    }
  }
  loop_ub = r4.size(0);
  b_indexPairs.set_size(&ohb_emlrtRTEI, &sp, r4.size(0), 2);
  for (i2 = 0; i2 < 2; i2++) {
    for (matchIndex = 0; matchIndex < loop_ub; matchIndex++) {
      if (r4[matchIndex] > indexPairs.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r4[matchIndex], 0, indexPairs.size(0) - 1,
                                      &po_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_indexPairs[matchIndex + b_indexPairs.size(0) * i2] =
          indexPairs[r4[matchIndex] + indexPairs.size(0) * i2];
    }
  }
  i2 = b_indexPairs.size(0);
  indexPairs.set_size(&phb_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
  loop_ub_tmp = b_indexPairs.size(0) << 1;
  for (matchIndex = 0; matchIndex < loop_ub_tmp; matchIndex++) {
    indexPairs[matchIndex] = b_indexPairs[matchIndex];
  }
  b_loop_ub = -1;
  for (matchThreshold = 0; matchThreshold < c_loop_ub; matchThreshold++) {
    if (neighborIdxLogical[matchThreshold]) {
      b_loop_ub++;
    }
  }
  if (b_loop_ub + 1 > 0) {
    neighborIdxLogical.set_size(&qhb_emlrtRTEI, &sp, b_loop_ub + 1);
    for (matchIndex = 0; matchIndex <= b_loop_ub; matchIndex++) {
      neighborIdxLogical[matchIndex] = true;
    }
    loop_ub_tmp = isStrongMatch.size(1);
    for (int32_T b_i{0}; b_i <= b_loop_ub; b_i++) {
      uint32_T feature2Idx;
      if (b_i + 1 > i2) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &so_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      feature2Idx = indexPairs[b_i + indexPairs.size(0)];
      st.site = &lgc_emlrtRSI;
      if ((static_cast<int32_T>(feature2Idx) < 1) ||
          (static_cast<int32_T>(feature2Idx) > isStrongMatch.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(feature2Idx), 1,
                                      isStrongMatch.size(0), &no_emlrtBCI, &st);
      }
      b_isStrongMatch.set_size(&rhb_emlrtRTEI, &st, 1, loop_ub_tmp);
      for (matchIndex = 0; matchIndex < loop_ub_tmp; matchIndex++) {
        b_isStrongMatch[matchIndex] =
            isStrongMatch[(static_cast<int32_T>(feature2Idx) +
                           isStrongMatch.size(0) * matchIndex) -
                          1];
      }
      b_st.site = &aq_emlrtRSI;
      c_eml_find(b_st, b_isStrongMatch, b_ii);
      if (b_ii.size(1) > 1) {
        st.site = &mgc_emlrtRSI;
        if ((static_cast<int32_T>(feature2Idx) < 1) ||
            (static_cast<int32_T>(feature2Idx) > i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(feature2Idx), 1, i,
                                        &oo_emlrtBCI, &st);
        }
        loop_ub = b_ii.size(1);
        b_matchScores.set_size(&shb_emlrtRTEI, &st, 1, b_ii.size(1));
        for (matchIndex = 0; matchIndex < loop_ub; matchIndex++) {
          if ((b_ii[matchIndex] < 1) || (b_ii[matchIndex] > i1)) {
            emlrtDynamicBoundsCheckR2012b(b_ii[matchIndex], 1, i1, &uo_emlrtBCI,
                                          &st);
          }
          b_matchScores[matchIndex] =
              matchScores[(static_cast<int32_T>(feature2Idx) +
                           matchScores.size(0) * (b_ii[matchIndex] - 1)) -
                          1];
        }
        b_st.site = &bi_emlrtRSI;
        c_st.site = &ci_emlrtRSI;
        d_st.site = &di_emlrtRSI;
        e_st.site = &gf_emlrtRSI;
        if (b_ii.size(1) <= 2) {
          real32_T f;
          f = matchScores[(static_cast<int32_T>(feature2Idx) +
                           matchScores.size(0) * (b_ii[0] - 1)) -
                          1];
          ratio = matchScores[(static_cast<int32_T>(feature2Idx) +
                               matchScores.size(0) * (b_ii[1] - 1)) -
                              1];
          if ((f > ratio) ||
              (muSingleScalarIsNaN(f) && (!muSingleScalarIsNaN(ratio)))) {
            matchIndex = 2;
          } else {
            matchIndex = 1;
          }
        } else {
          f_st.site = &if_emlrtRSI;
          if (!muSingleScalarIsNaN(
                  matchScores[(static_cast<int32_T>(feature2Idx) +
                               matchScores.size(0) * (b_ii[0] - 1)) -
                              1])) {
            matchIndex = 1;
          } else {
            boolean_T exitg1;
            matchIndex = 0;
            g_st.site = &jf_emlrtRSI;
            if (b_ii.size(1) > 2147483646) {
              h_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(h_st);
            }
            matchThreshold = 2;
            exitg1 = false;
            while ((!exitg1) && (matchThreshold <= loop_ub)) {
              if (!muSingleScalarIsNaN(b_matchScores[matchThreshold - 1])) {
                matchIndex = matchThreshold;
                exitg1 = true;
              } else {
                matchThreshold++;
              }
            }
          }
          if (matchIndex == 0) {
            matchIndex = 1;
          } else {
            f_st.site = &hf_emlrtRSI;
            ratio =
                matchScores[(static_cast<int32_T>(feature2Idx) +
                             matchScores.size(0) * (b_ii[matchIndex - 1] - 1)) -
                            1];
            matchScores_idx_1 = matchIndex + 1;
            g_st.site = &kf_emlrtRSI;
            if ((matchIndex + 1 <= b_ii.size(1)) &&
                (b_ii.size(1) > 2147483646)) {
              h_st.site = &qe_emlrtRSI;
              check_forloop_overflow_error(h_st);
            }
            for (matchThreshold = matchScores_idx_1; matchThreshold <= loop_ub;
                 matchThreshold++) {
              real32_T f;
              f = b_matchScores[matchThreshold - 1];
              if (ratio > f) {
                ratio = f;
                matchIndex = matchThreshold;
              }
            }
          }
        }
        if ((matchIndex < 1) || (matchIndex > b_ii.size(1))) {
          emlrtDynamicBoundsCheckR2012b(matchIndex, 1, b_ii.size(1),
                                        &vo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &wo_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > neighborIdxLogical.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, neighborIdxLogical.size(0),
                                        &xo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        neighborIdxLogical[b_i] =
            (b_ii[matchIndex - 1] == static_cast<int32_T>(indexPairs[b_i]));
      }
    }
    matchIndex = neighborIdxLogical.size(0);
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < matchIndex; b_i++) {
      if (neighborIdxLogical[b_i]) {
        matchScores_idx_1++;
      }
    }
    r6.set_size(&lhb_emlrtRTEI, &sp, matchScores_idx_1);
    matchScores_idx_1 = 0;
    for (int32_T b_i{0}; b_i < matchIndex; b_i++) {
      if (neighborIdxLogical[b_i]) {
        r6[matchScores_idx_1] = b_i;
        matchScores_idx_1++;
      }
    }
    loop_ub = r6.size(0);
    b_indexPairs.set_size(&thb_emlrtRTEI, &sp, r6.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (r6[i1] > indexPairs.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r6[i1], 0, indexPairs.size(0) - 1,
                                        &to_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_indexPairs[i1 + b_indexPairs.size(0) * i] =
            indexPairs[r6[i1] + indexPairs.size(0) * i];
      }
    }
    indexPairs.set_size(&uhb_emlrtRTEI, &sp, b_indexPairs.size(0), 2);
    loop_ub_tmp = b_indexPairs.size(0) << 1;
    for (i = 0; i < loop_ub_tmp; i++) {
      indexPairs[i] = b_indexPairs[i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (matchFeaturesInRadius.cpp)
