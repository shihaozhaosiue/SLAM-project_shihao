//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// msac.cpp
//
// Code generation for function 'msac'
//

// Include files
#include "msac.h"
#include "algEstimateGeometricTransform.h"
#include "all.h"
#include "any1.h"
#include "bsxfun.h"
#include "combineVectorElements.h"
#include "computeLoopNumber.h"
#include "det.h"
#include "estWorldPoseImpl.h"
#include "estimateEssentialMatrix.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "mod.h"
#include "rand.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "svd.h"
#include "warning.h"
#include "xzsvdc.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo cl_emlrtRSI{
    67,     // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo dl_emlrtRSI{
    71,     // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo el_emlrtRSI{
    78,     // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo fl_emlrtRSI{
    86,     // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo gl_emlrtRSI{
    87,     // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo hl_emlrtRSI{
    104,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo il_emlrtRSI{
    105,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo jl_emlrtRSI{
    109,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo kl_emlrtRSI{
    110,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo ll_emlrtRSI{
    117,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo ml_emlrtRSI{
    119,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo nl_emlrtRSI{
    129,    // lineNo
    "msac", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo ol_emlrtRSI{
    24,         // lineNo
    "randperm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pathName
};

static emlrtRSInfo pl_emlrtRSI{
    40,          // lineNo
    "randkperm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pathName
};

static emlrtRSInfo ql_emlrtRSI{
    50,          // lineNo
    "randkperm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pathName
};

static emlrtRSInfo rl_emlrtRSI{
    57,          // lineNo
    "randkperm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pathName
};

static emlrtRSInfo sl_emlrtRSI{
    69,          // lineNo
    "randkperm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m" // pathName
};

static emlrtRSInfo dn_emlrtRSI{
    140,             // lineNo
    "evaluateModel", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo en_emlrtRSI{
    142,             // lineNo
    "evaluateModel", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo co_emlrtRSI{
    11,                  // lineNo
    "computeLoopNumber", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\computeLoopNumber.m" // pathName
};

static emlrtRSInfo go_emlrtRSI{
    402,          // lineNo
    "checkTForm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo gt_emlrtRSI{
    144,             // lineNo
    "evaluateModel", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pathName
};

static emlrtRSInfo bjc_emlrtRSI{
    111,              // lineNo
    "evalCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo cjc_emlrtRSI{
    118,              // lineNo
    "evalCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo djc_emlrtRSI{
    119,              // lineNo
    "evalCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo ejc_emlrtRSI{
    120,              // lineNo
    "evalCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo fjc_emlrtRSI{
    125,              // lineNo
    "evalCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo add_emlrtRSI{
    286,              // lineNo
    "computeRigid3d", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pathName
};

static emlrtRSInfo gdd_emlrtRSI{
    29,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

static emlrtBCInfo jd_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    141,             // lineNo
    5,               // colNo
    "",              // aName
    "evaluateModel", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m", // pName
    0                 // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    109,    // lineNo
    47,     // colNo
    "",     // aName
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m", // pName
    0                 // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    70,     // lineNo
    30,     // colNo
    "",     // aName
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m", // pName
    0                 // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    70,     // lineNo
    30,     // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m", // pName
    1                 // checkKind
};

static emlrtRTEInfo ib_emlrtRTEI{
    48,     // lineNo
    15,     // colNo
    "mean", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" // pName
};

static emlrtECInfo bd_emlrtECI{
    1,                // nDims
    124,              // lineNo
    9,                // colNo
    "evalCameraPose", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtBCInfo hy_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    146,             // lineNo
    24,              // colNo
    "",              // aName
    "evaluateModel", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m", // pName
    0                 // checkKind
};

static emlrtBCInfo iy_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    145,             // lineNo
    24,              // colNo
    "",              // aName
    "evaluateModel", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m", // pName
    0                 // checkKind
};

static emlrtRTEInfo eo_emlrtRTEI{
    55,     // lineNo
    1,      // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo fo_emlrtRTEI{
    132,    // lineNo
    5,      // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo go_emlrtRTEI{
    1,      // lineNo
    70,     // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo ho_emlrtRTEI{
    109,    // lineNo
    37,     // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo io_emlrtRTEI{
    118,    // lineNo
    9,      // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo jo_emlrtRTEI{
    121,    // lineNo
    13,     // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo ko_emlrtRTEI{
    84,     // lineNo
    27,     // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

static emlrtRTEInfo whb_emlrtRTEI{
    138,                // lineNo
    15,                 // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo xhb_emlrtRTEI{
    118,                // lineNo
    1,                  // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo yhb_emlrtRTEI{
    120,                // lineNo
    37,                 // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo aib_emlrtRTEI{
    121,                // lineNo
    5,                  // colNo
    "estWorldPoseImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pName
};

static emlrtRTEInfo xob_emlrtRTEI{
    282,                             // lineNo
    11,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo yob_emlrtRTEI{
    283,                             // lineNo
    11,                              // colNo
    "algEstimateGeometricTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "geotrans\\algEstimateGeometricTransform.m" // pName
};

static emlrtRTEInfo csb_emlrtRTEI{
    145,    // lineNo
    5,      // colNo
    "msac", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\msac.m" // pName
};

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace ransac {
static void b_evaluateModel(const emlrtStack &sp,
                            const cell_wrap_92 modelIn_data[],
                            const int32_T modelIn_size[2],
                            const array<real_T, 3U> &allPoints,
                            const real_T varargin_1[9],
                            const real_T varargin_2[9], real_T modelOut[9],
                            array<real_T, 1U> &distances);

static real_T
evaluateModel(const emlrtStack &sp, const cell_wrap_92 modelIn_data[],
              const int32_T modelIn_size[2], const array<real_T, 3U> &allPoints,
              const real_T varargin_1[9], const real_T varargin_2[9],
              real_T modelOut[9], array<real_T, 1U> &distances);

} // namespace ransac
} // namespace internal
} // namespace vision
} // namespace coder

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace ransac {
static void b_evaluateModel(const emlrtStack &sp,
                            const cell_wrap_92 modelIn_data[],
                            const int32_T modelIn_size[2],
                            const array<real_T, 3U> &allPoints,
                            const real_T varargin_1[9],
                            const real_T varargin_2[9], real_T modelOut[9],
                            array<real_T, 1U> &distances)
{
  array<real_T, 2U> dis;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T accDis_data[30];
  int32_T accDis_size[2];
  int32_T b_i;
  int32_T i;
  int32_T last;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &dn_emlrtRSI;
  evalEssential(st, modelIn_data, modelIn_size, allPoints, varargin_1,
                varargin_2, dis);
  last = dis.size(0) * dis.size(1);
  for (i = 0; i < last; i++) {
    b_i = dis.size(0) * dis.size(1);
    if (dis[i] > 4.0) {
      if (i > b_i - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, b_i - 1, &jd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      dis[i] = 4.0;
    }
  }
  st.site = &en_emlrtRSI;
  sum(st, dis, accDis_data, accDis_size);
  st.site = &gt_emlrtRSI;
  b_st.site = &bi_emlrtRSI;
  c_st.site = &ci_emlrtRSI;
  d_st.site = &di_emlrtRSI;
  if (accDis_size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  last = accDis_size[1];
  if (accDis_size[1] <= 2) {
    if (accDis_size[1] == 1) {
      i = 1;
    } else if ((accDis_data[0] > accDis_data[1]) ||
               (muDoubleScalarIsNaN(accDis_data[0]) &&
                (!muDoubleScalarIsNaN(accDis_data[1])))) {
      i = 2;
    } else {
      i = 1;
    }
  } else {
    int32_T k;
    if (!muDoubleScalarIsNaN(accDis_data[0])) {
      i = 1;
    } else {
      boolean_T exitg1;
      i = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(accDis_data[k - 1])) {
          i = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (i == 0) {
      i = 1;
    } else {
      real_T ex;
      ex = accDis_data[i - 1];
      b_i = i + 1;
      for (k = b_i; k <= last; k++) {
        real_T d;
        d = accDis_data[k - 1];
        if (ex > d) {
          ex = d;
          i = k;
        }
      }
    }
  }
  if (i > dis.size(1)) {
    emlrtDynamicBoundsCheckR2012b(i, 1, dis.size(1), &iy_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  last = dis.size(0);
  distances.set_size(&csb_emlrtRTEI, &sp, dis.size(0));
  for (b_i = 0; b_i < last; b_i++) {
    distances[b_i] = dis[b_i + dis.size(0) * (i - 1)];
  }
  if (i - 1 > modelIn_size[1] - 1) {
    emlrtDynamicBoundsCheckR2012b(i - 1, 0, modelIn_size[1] - 1, &hy_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  std::copy(&modelIn_data[i - 1].f1[0], &modelIn_data[i - 1].f1[9],
            &modelOut[0]);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static real_T
evaluateModel(const emlrtStack &sp, const cell_wrap_92 modelIn_data[],
              const int32_T modelIn_size[2], const array<real_T, 3U> &allPoints,
              const real_T varargin_1[9], const real_T varargin_2[9],
              real_T modelOut[9], array<real_T, 1U> &distances)
{
  array<real_T, 2U> dis;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T accDis_data[30];
  real_T sumDistances;
  int32_T accDis_size[2];
  int32_T b_i;
  int32_T i;
  int32_T last;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &dn_emlrtRSI;
  evalEssential(st, modelIn_data, modelIn_size, allPoints, varargin_1,
                varargin_2, dis);
  last = dis.size(0) * dis.size(1);
  for (i = 0; i < last; i++) {
    b_i = dis.size(0) * dis.size(1);
    if (dis[i] > 4.0) {
      if (i > b_i - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, b_i - 1, &jd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      dis[i] = 4.0;
    }
  }
  st.site = &en_emlrtRSI;
  sum(st, dis, accDis_data, accDis_size);
  st.site = &gt_emlrtRSI;
  b_st.site = &bi_emlrtRSI;
  c_st.site = &ci_emlrtRSI;
  d_st.site = &di_emlrtRSI;
  if (accDis_size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  last = accDis_size[1];
  if (accDis_size[1] <= 2) {
    if (accDis_size[1] == 1) {
      sumDistances = accDis_data[0];
      i = 1;
    } else if ((accDis_data[0] > accDis_data[1]) ||
               (muDoubleScalarIsNaN(accDis_data[0]) &&
                (!muDoubleScalarIsNaN(accDis_data[1])))) {
      sumDistances = accDis_data[1];
      i = 2;
    } else {
      sumDistances = accDis_data[0];
      i = 1;
    }
  } else {
    int32_T k;
    if (!muDoubleScalarIsNaN(accDis_data[0])) {
      i = 1;
    } else {
      boolean_T exitg1;
      i = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(accDis_data[k - 1])) {
          i = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (i == 0) {
      sumDistances = accDis_data[0];
      i = 1;
    } else {
      sumDistances = accDis_data[i - 1];
      b_i = i + 1;
      for (k = b_i; k <= last; k++) {
        real_T d;
        d = accDis_data[k - 1];
        if (sumDistances > d) {
          sumDistances = d;
          i = k;
        }
      }
    }
  }
  if (i > dis.size(1)) {
    emlrtDynamicBoundsCheckR2012b(i, 1, dis.size(1), &iy_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  last = dis.size(0);
  distances.set_size(&csb_emlrtRTEI, &sp, dis.size(0));
  for (b_i = 0; b_i < last; b_i++) {
    distances[b_i] = dis[b_i + dis.size(0) * (i - 1)];
  }
  if (i - 1 > modelIn_size[1] - 1) {
    emlrtDynamicBoundsCheckR2012b(i - 1, 0, modelIn_size[1] - 1, &hy_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  std::copy(&modelIn_data[i - 1].f1[0], &modelIn_data[i - 1].f1[9],
            &modelOut[0]);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return sumDistances;
}

boolean_T b_msac(const emlrtStack &sp, const array<real_T, 3U> &allPoints,
                 const real_T varargin_1[9], const real_T varargin_2[9],
                 real_T bestModelParams_data[], int32_T bestModelParams_size[2],
                 array<boolean_T, 1U> &inliers)
{
  array<real_T, 3U> b_allPoints;
  array<real_T, 1U> dis;
  array<int32_T, 1U> b_r;
  array<boolean_T, 1U> bestInliers;
  cell_wrap_92 modelParams_data[30];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T V[81];
  real_T Q[45];
  real_T samplePoints[30];
  real_T E1[9];
  real_T b_V[9];
  real_T bestDis;
  int32_T modelParams_size[2];
  int32_T idxTrial;
  int32_T numPts_tmp;
  int32_T numTrials;
  int32_T nz;
  int32_T skipTrials;
  boolean_T isFound;
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
  numPts_tmp = allPoints.size(0);
  idxTrial = 1;
  numTrials = 1000;
  bestDis = 4.0 * static_cast<real_T>(allPoints.size(0));
  bestModelParams_size[0] = 0;
  bestModelParams_size[1] = 0;
  skipTrials = 0;
  bestInliers.set_size(&eo_emlrtRTEI, &sp, allPoints.size(0));
  for (int32_T i{0}; i < numPts_tmp; i++) {
    bestInliers[i] = false;
  }
  while ((idxTrial <= numTrials) && (skipTrials < 10000)) {
    real_T E2[9];
    real_T E3[9];
    real_T E4[9];
    real_T indices[5];
    real_T selectedLoc;
    st.site = &cl_emlrtRSI;
    if (numPts_tmp < 5) {
      emlrtErrorWithMessageIdR2018a(&st, &cb_emlrtRTEI,
                                    "MATLAB:randperm:inputKTooLarge",
                                    "MATLAB:randperm:inputKTooLarge", 0);
    }
    b_st.site = &ol_emlrtRSI;
    for (int32_T i{0}; i < 5; i++) {
      indices[i] = 0.0;
    }
    if (numPts_tmp <= 5) {
      real_T j;
      indices[0] = 1.0;
      c_st.site = &pl_emlrtRSI;
      j = b_rand() * 2.0;
      j = muDoubleScalarFloor(j);
      indices[1] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 2.0;
      c_st.site = &pl_emlrtRSI;
      j = b_rand() * 3.0;
      j = muDoubleScalarFloor(j);
      indices[2] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 3.0;
      c_st.site = &pl_emlrtRSI;
      j = b_rand() * 4.0;
      j = muDoubleScalarFloor(j);
      indices[3] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 4.0;
      c_st.site = &pl_emlrtRSI;
      j = b_rand() * 5.0;
      j = muDoubleScalarFloor(j);
      indices[4] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 5.0;
    } else if (static_cast<real_T>(numPts_tmp) / 4.0 <= 5.0) {
      real_T t;
      t = 0.0;
      for (int32_T i{0}; i < 5; i++) {
        real_T newEntry;
        real_T pt;
        selectedLoc = static_cast<real_T>(numPts_tmp) - t;
        pt = (5.0 - static_cast<real_T>(i)) / selectedLoc;
        c_st.site = &ql_emlrtRSI;
        newEntry = b_rand();
        while (newEntry > pt) {
          t++;
          selectedLoc--;
          pt += (1.0 - pt) * ((5.0 - static_cast<real_T>(i)) / selectedLoc);
        }
        real_T j;
        t++;
        c_st.site = &rl_emlrtRSI;
        j = b_rand() * (static_cast<real_T>(i) + 1.0);
        j = muDoubleScalarFloor(j);
        indices[i] = indices[static_cast<int32_T>(j + 1.0) - 1];
        indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      }
    } else {
      real_T hashTbl[5];
      real_T link[5];
      real_T loc[5];
      real_T newEntry;
      int32_T val[5];
      for (int32_T i{0}; i < 5; i++) {
        hashTbl[i] = 0.0;
        link[i] = 0.0;
        val[i] = 0;
        loc[i] = 0.0;
      }
      newEntry = 1.0;
      for (int32_T i{0}; i < 5; i++) {
        real_T j;
        real_T pt;
        nz = (numPts_tmp - i) - 1;
        c_st.site = &sl_emlrtRSI;
        selectedLoc = b_rand() * (static_cast<real_T>(nz) + 1.0);
        selectedLoc = muDoubleScalarFloor(selectedLoc);
        if (muDoubleScalarIsNaN(selectedLoc) ||
            muDoubleScalarIsInf(selectedLoc)) {
          pt = rtNaN;
        } else if (selectedLoc == 0.0) {
          pt = 0.0;
        } else {
          pt = muDoubleScalarRem(selectedLoc, 5.0);
          if (pt == 0.0) {
            pt = 0.0;
          } else if (pt < 0.0) {
            pt += 5.0;
          }
        }
        j = hashTbl[static_cast<int32_T>(pt + 1.0) - 1];
        while ((j > 0.0) && (loc[static_cast<int32_T>(j) - 1] != selectedLoc)) {
          j = link[static_cast<int32_T>(j) - 1];
        }
        if (j > 0.0) {
          indices[i] =
              static_cast<real_T>(val[static_cast<int32_T>(j) - 1]) + 1.0;
        } else {
          indices[i] = selectedLoc + 1.0;
          j = newEntry;
          newEntry++;
          loc[static_cast<int32_T>(j) - 1] = selectedLoc;
          link[static_cast<int32_T>(j) - 1] =
              hashTbl[static_cast<int32_T>(pt + 1.0) - 1];
          hashTbl[static_cast<int32_T>(pt + 1.0) - 1] = j;
        }
        if (i + 1 < 5) {
          selectedLoc =
              hashTbl[static_cast<int32_T>(
                          muDoubleScalarRem(static_cast<real_T>(nz), 5.0) +
                          1.0) -
                      1];
          while ((selectedLoc > 0.0) &&
                 (loc[static_cast<int32_T>(selectedLoc) - 1] != nz)) {
            selectedLoc = link[static_cast<int32_T>(selectedLoc) - 1];
          }
          if (selectedLoc > 0.0) {
            val[static_cast<int32_T>(j) - 1] =
                val[static_cast<int32_T>(selectedLoc) - 1];
          } else {
            val[static_cast<int32_T>(j) - 1] = nz;
          }
        }
      }
    }
    for (int32_T i{0}; i < 2; i++) {
      for (int32_T b_i{0}; b_i < 3; b_i++) {
        for (int32_T i1{0}; i1 < 5; i1++) {
          selectedLoc = indices[i1];
          if (selectedLoc != static_cast<int32_T>(selectedLoc)) {
            emlrtIntegerCheckR2012b(selectedLoc, &k_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(selectedLoc) < 1) ||
              (static_cast<int32_T>(selectedLoc) > numPts_tmp)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(selectedLoc), 1,
                                          numPts_tmp, &ld_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          samplePoints[(i1 + 5 * b_i) + 15 * i] =
              allPoints[((static_cast<int32_T>(selectedLoc) +
                          allPoints.size(0) * b_i) +
                         allPoints.size(0) * 3 * i) -
                        1];
        }
      }
    }
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    st.site = &dl_emlrtRSI;
    r1 = _mm_loadu_pd(&samplePoints[15]);
    r2 = _mm_loadu_pd(&samplePoints[0]);
    _mm_storeu_pd(&Q[0], _mm_mul_pd(r1, r2));
    r3 = _mm_loadu_pd(&samplePoints[5]);
    _mm_storeu_pd(&Q[5], _mm_mul_pd(r1, r3));
    r4 = _mm_loadu_pd(&samplePoints[10]);
    _mm_storeu_pd(&Q[10], _mm_mul_pd(r1, r4));
    r1 = _mm_loadu_pd(&samplePoints[20]);
    _mm_storeu_pd(&Q[15], _mm_mul_pd(r1, r2));
    _mm_storeu_pd(&Q[20], _mm_mul_pd(r1, r3));
    _mm_storeu_pd(&Q[25], _mm_mul_pd(r1, r4));
    r1 = _mm_loadu_pd(&samplePoints[25]);
    _mm_storeu_pd(&Q[30], _mm_mul_pd(r1, r2));
    _mm_storeu_pd(&Q[35], _mm_mul_pd(r1, r3));
    _mm_storeu_pd(&Q[40], _mm_mul_pd(r1, r4));
    r1 = _mm_loadu_pd(&samplePoints[17]);
    r2 = _mm_loadu_pd(&samplePoints[2]);
    _mm_storeu_pd(&Q[2], _mm_mul_pd(r1, r2));
    r3 = _mm_loadu_pd(&samplePoints[7]);
    _mm_storeu_pd(&Q[7], _mm_mul_pd(r1, r3));
    r4 = _mm_loadu_pd(&samplePoints[12]);
    _mm_storeu_pd(&Q[12], _mm_mul_pd(r1, r4));
    r1 = _mm_loadu_pd(&samplePoints[22]);
    _mm_storeu_pd(&Q[17], _mm_mul_pd(r1, r2));
    _mm_storeu_pd(&Q[22], _mm_mul_pd(r1, r3));
    _mm_storeu_pd(&Q[27], _mm_mul_pd(r1, r4));
    r1 = _mm_loadu_pd(&samplePoints[27]);
    _mm_storeu_pd(&Q[32], _mm_mul_pd(r1, r2));
    _mm_storeu_pd(&Q[37], _mm_mul_pd(r1, r3));
    _mm_storeu_pd(&Q[42], _mm_mul_pd(r1, r4));
    Q[4] = samplePoints[4] * samplePoints[19];
    Q[9] = samplePoints[9] * samplePoints[19];
    Q[14] = samplePoints[14] * samplePoints[19];
    Q[19] = samplePoints[4] * samplePoints[24];
    Q[24] = samplePoints[9] * samplePoints[24];
    Q[29] = samplePoints[14] * samplePoints[24];
    Q[34] = samplePoints[4] * samplePoints[29];
    Q[39] = samplePoints[9] * samplePoints[29];
    Q[44] = samplePoints[14] * samplePoints[29];
    b_st.site = &cs_emlrtRSI;
    c_st.site = &am_emlrtRSI;
    d_st.site = &dm_emlrtRSI;
    e_st.site = &em_emlrtRSI;
    isFound = true;
    for (nz = 0; nz < 45; nz++) {
      if (isFound) {
        selectedLoc = Q[nz];
        if (muDoubleScalarIsInf(selectedLoc) ||
            muDoubleScalarIsNaN(selectedLoc)) {
          isFound = false;
        }
      } else {
        isFound = false;
      }
    }
    if (isFound) {
      real_T U[25];
      c_st.site = &bm_emlrtRSI;
      d_st.site = &gm_emlrtRSI;
      e_st.site = &kp_emlrtRSI;
      f_st.site = &lp_emlrtRSI;
      ::coder::internal::reflapack::xzsvdc(f_st, Q, U, indices, V);
    } else {
      for (int32_T i{0}; i < 81; i++) {
        V[i] = rtNaN;
      }
    }
    std::copy(&V[45], &V[54], &b_V[0]);
    for (int32_T i{0}; i < 3; i++) {
      E1[3 * i] = b_V[i];
      E1[3 * i + 1] = b_V[i + 3];
      E1[3 * i + 2] = b_V[i + 6];
    }
    std::copy(&V[54], &V[63], &b_V[0]);
    for (int32_T i{0}; i < 3; i++) {
      E2[3 * i] = b_V[i];
      E2[3 * i + 1] = b_V[i + 3];
      E2[3 * i + 2] = b_V[i + 6];
    }
    std::copy(&V[63], &V[72], &b_V[0]);
    for (int32_T i{0}; i < 3; i++) {
      E3[3 * i] = b_V[i];
      E3[3 * i + 1] = b_V[i + 3];
      E3[3 * i + 2] = b_V[i + 6];
    }
    std::copy(&V[72], &V[81], &b_V[0]);
    for (int32_T i{0}; i < 3; i++) {
      E4[3 * i] = b_V[i];
      E4[3 * i + 1] = b_V[i + 3];
      E4[3 * i + 2] = b_V[i + 6];
    }
    real_T C1[100];
    real_T C2[100];
    real_T C3[100];
    real_T C4[100];
    b_st.site = &ds_emlrtRSI;
    computeCoefficients(E1, E2, E3, E4, C1, C2, C3, C4);
    b_st.site = &es_emlrtRSI;
    polyeig4(b_st, C1, C2, C3, C4, E1, E2, E3, E4, modelParams_data,
             modelParams_size);
    if (modelParams_size[1] != 0) {
      st.site = &el_emlrtRSI;
      selectedLoc = evaluateModel(st, modelParams_data, modelParams_size,
                                  allPoints, varargin_1, varargin_2, E1, dis);
      if (selectedLoc < bestDis) {
        bestDis = selectedLoc;
        nz = dis.size(0);
        bestInliers.set_size(&ko_emlrtRTEI, &sp, dis.size(0));
        for (int32_T i{0}; i < nz; i++) {
          bestInliers[i] = (dis[i] < 4.0);
        }
        bestModelParams_size[0] = 3;
        bestModelParams_size[1] = 3;
        std::copy(&E1[0], &E1[9], &bestModelParams_data[0]);
        st.site = &fl_emlrtRSI;
        b_st.site = &yn_emlrtRSI;
        c_st.site = &tj_emlrtRSI;
        nz = combineVectorElements(c_st, bestInliers);
        st.site = &gl_emlrtRSI;
        nz = computeLoopNumber(st, 5.0, 99.0, static_cast<real_T>(numPts_tmp),
                               static_cast<real_T>(nz));
        numTrials = muIntScalarMin_sint32(numTrials, nz);
      }
      idxTrial++;
    } else {
      skipTrials++;
    }
  }
  if ((bestModelParams_size[0] * bestModelParams_size[1] != 0) &&
      (bestInliers.size(0) != 0)) {
    st.site = &il_emlrtRSI;
    b_st.site = &yn_emlrtRSI;
    c_st.site = &tj_emlrtRSI;
    nz = combineVectorElements(c_st, bestInliers);
    if (nz >= 5) {
      isFound = true;
    } else {
      isFound = false;
    }
  } else {
    isFound = false;
  }
  if (isFound) {
    idxTrial = bestInliers.size(0);
    nz = 0;
    for (int32_T i{0}; i < idxTrial; i++) {
      if (bestInliers[i]) {
        nz++;
      }
    }
    b_r.set_size(&go_emlrtRTEI, &sp, nz);
    nz = 0;
    for (int32_T i{0}; i < idxTrial; i++) {
      if (bestInliers[i]) {
        b_r[nz] = i;
        nz++;
      }
    }
    nz = b_r.size(0);
    b_allPoints.set_size(&ho_emlrtRTEI, &sp, b_r.size(0), 3, 2);
    for (int32_T i{0}; i < 2; i++) {
      for (int32_T b_i{0}; b_i < 3; b_i++) {
        for (int32_T i1{0}; i1 < nz; i1++) {
          if (b_r[i1] > allPoints.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_r[i1], 0, allPoints.size(0) - 1,
                                          &kd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          b_allPoints[(i1 + b_allPoints.size(0) * b_i) +
                      b_allPoints.size(0) * 3 * i] =
              allPoints[(b_r[i1] + allPoints.size(0) * b_i) +
                        allPoints.size(0) * 3 * i];
        }
      }
    }
    st.site = &jl_emlrtRSI;
    fivePointAlgorithm(st, b_allPoints, modelParams_data, modelParams_size);
    st.site = &kl_emlrtRSI;
    b_evaluateModel(st, modelParams_data, modelParams_size, allPoints,
                    varargin_1, varargin_2, E1, dis);
    bestModelParams_size[0] = 3;
    bestModelParams_size[1] = 3;
    std::copy(&E1[0], &E1[9], &bestModelParams_data[0]);
    nz = dis.size(0);
    inliers.set_size(&io_emlrtRTEI, &sp, dis.size(0));
    for (int32_T i{0}; i < nz; i++) {
      inliers[i] = (dis[i] < 4.0);
    }
    st.site = &ml_emlrtRSI;
    if (!any(st, inliers)) {
      isFound = false;
      inliers.set_size(&jo_emlrtRTEI, &sp, allPoints.size(0));
      for (int32_T i{0}; i < numPts_tmp; i++) {
        inliers[i] = false;
      }
    } else if (numTrials >= 1000) {
      st.site = &nl_emlrtRSI;
      ::coder::internal::c_warning(st);
    }
  } else {
    inliers.set_size(&fo_emlrtRTEI, &sp, allPoints.size(0));
    for (int32_T i{0}; i < numPts_tmp; i++) {
      inliers[i] = false;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isFound;
}

boolean_T c_msac(const emlrtStack &sp, const array<real_T, 2U> &allPoints,
                 const real_T varargin_1[9], real_T bestModelParams_R[9],
                 real_T bestModelParams_t[3], array<boolean_T, 1U> &inliers)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real_T, 2U> b_allPoints;
  array<real_T, 2U> b_projectedPointsHomog;
  array<real_T, 2U> projectedPoints;
  array<real_T, 2U> projectedPointsHomog;
  array<real_T, 2U> worldPointsHomog;
  array<real_T, 1U> dis;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T cameraMatrix[12];
  real_T modelParams_R[9];
  real_T alpha1{0.0};
  real_T bestDis;
  real_T beta1{0.0};
  int32_T allPoints_size[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T idxTrial;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T numPts_tmp;
  int32_T numTrials;
  int32_T nz;
  int32_T result;
  char_T TRANSA1{'\x00'};
  char_T TRANSB1{'\x00'};
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T isFound;
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
  numPts_tmp = allPoints.size(0);
  idxTrial = 1;
  numTrials = 10000;
  bestDis = 9.0 * static_cast<real_T>(allPoints.size(0));
  for (i = 0; i < 9; i++) {
    bestModelParams_R[i] = rtNaN;
  }
  bestModelParams_t[0] = rtNaN;
  bestModelParams_t[1] = rtNaN;
  bestModelParams_t[2] = rtNaN;
  inliers.set_size(&eo_emlrtRTEI, &sp, allPoints.size(0));
  for (i = 0; i < numPts_tmp; i++) {
    inliers[i] = false;
  }
  loop_ub_tmp = allPoints.size(1);
  if (allPoints.size(1) < 3) {
    i = 0;
    i1 = 0;
  } else {
    i = 2;
    i1 = allPoints.size(1);
  }
  loop_ub = i1 - i;
  isFound = ((allPoints.size(0) != 0) && (loop_ub != 0));
  if (isFound) {
    result = allPoints.size(0);
  } else if (allPoints.size(0) != 0) {
    result = allPoints.size(0);
  } else {
    result = 0;
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || isFound) {
    input_sizes_idx_1 = static_cast<int8_T>(loop_ub);
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (allPoints.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  b_loop_ub = input_sizes_idx_1;
  c_loop_ub = sizes_idx_1;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  n_t = (ptrdiff_t)3;
  k_t = (ptrdiff_t)4;
  ldb_t = (ptrdiff_t)4;
  d_loop_ub = allPoints.size(0);
  allPoints_size[0] = 4;
  allPoints_size[1] = loop_ub_tmp;
  while (idxTrial <= numTrials) {
    real_T allPoints_data[20];
    real_T b_modelParams_R[12];
    real_T indices[4];
    real_T modelParams_t[3];
    real_T b_i;
    real_T newEntry;
    real_T selectedLoc;
    st.site = &cl_emlrtRSI;
    b_st.site = &ol_emlrtRSI;
    indices[1] = 0.0;
    indices[2] = 0.0;
    indices[3] = 0.0;
    if (static_cast<real_T>(numPts_tmp) / 4.0 <= 4.0) {
      real_T j;
      real_T t;
      t = 0.0;
      newEntry = numPts_tmp;
      selectedLoc = 4.0 / static_cast<real_T>(numPts_tmp);
      c_st.site = &ql_emlrtRSI;
      b_i = b_rand();
      while (b_i > selectedLoc) {
        t++;
        newEntry--;
        selectedLoc += (1.0 - selectedLoc) * (4.0 / newEntry);
      }
      t++;
      c_st.site = &rl_emlrtRSI;
      j = b_rand();
      j = muDoubleScalarFloor(j);
      indices[0] = 0.0;
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      newEntry = static_cast<real_T>(numPts_tmp) - t;
      selectedLoc = 3.0 / newEntry;
      c_st.site = &ql_emlrtRSI;
      b_i = b_rand();
      while (b_i > selectedLoc) {
        t++;
        newEntry--;
        selectedLoc += (1.0 - selectedLoc) * (3.0 / newEntry);
      }
      t++;
      c_st.site = &rl_emlrtRSI;
      j = b_rand() * 2.0;
      j = muDoubleScalarFloor(j);
      indices[1] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      newEntry = static_cast<real_T>(numPts_tmp) - t;
      selectedLoc = 2.0 / newEntry;
      c_st.site = &ql_emlrtRSI;
      b_i = b_rand();
      while (b_i > selectedLoc) {
        t++;
        newEntry--;
        selectedLoc += (1.0 - selectedLoc) * (2.0 / newEntry);
      }
      t++;
      c_st.site = &rl_emlrtRSI;
      j = b_rand() * 3.0;
      j = muDoubleScalarFloor(j);
      indices[2] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      newEntry = static_cast<real_T>(numPts_tmp) - t;
      selectedLoc = 1.0 / newEntry;
      c_st.site = &ql_emlrtRSI;
      b_i = b_rand();
      while (b_i > selectedLoc) {
        t++;
        newEntry--;
        selectedLoc += (1.0 - selectedLoc) * (1.0 / newEntry);
      }
      t++;
      c_st.site = &rl_emlrtRSI;
      j = b_rand() * 4.0;
      j = muDoubleScalarFloor(j);
      indices[3] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
    } else {
      real_T hashTbl[4];
      real_T link[4];
      real_T loc[4];
      int32_T val[4];
      hashTbl[0] = 0.0;
      link[0] = 0.0;
      val[0] = 0;
      loc[0] = 0.0;
      hashTbl[1] = 0.0;
      link[1] = 0.0;
      val[1] = 0;
      loc[1] = 0.0;
      hashTbl[2] = 0.0;
      link[2] = 0.0;
      val[2] = 0;
      loc[2] = 0.0;
      hashTbl[3] = 0.0;
      link[3] = 0.0;
      val[3] = 0;
      loc[3] = 0.0;
      newEntry = 1.0;
      for (int32_T m{0}; m < 4; m++) {
        real_T j;
        nz = (numPts_tmp - m) - 1;
        c_st.site = &sl_emlrtRSI;
        selectedLoc = b_rand() * (static_cast<real_T>(nz) + 1.0);
        selectedLoc = muDoubleScalarFloor(selectedLoc);
        b_i = b_mod(selectedLoc) + 1.0;
        j = hashTbl[static_cast<int32_T>(b_i) - 1];
        while ((j > 0.0) && (loc[static_cast<int32_T>(j) - 1] != selectedLoc)) {
          j = link[static_cast<int32_T>(j) - 1];
        }
        if (j > 0.0) {
          indices[m] =
              static_cast<real_T>(val[static_cast<int32_T>(j) - 1]) + 1.0;
        } else {
          indices[m] = selectedLoc + 1.0;
          j = newEntry;
          newEntry++;
          loc[static_cast<int32_T>(j) - 1] = selectedLoc;
          link[static_cast<int32_T>(j) - 1] =
              hashTbl[static_cast<int32_T>(b_i) - 1];
          hashTbl[static_cast<int32_T>(b_i) - 1] = j;
        }
        if (m + 1 < 4) {
          selectedLoc = hashTbl[static_cast<int32_T>(
                                    b_mod(static_cast<real_T>(nz)) + 1.0) -
                                1];
          while ((selectedLoc > 0.0) &&
                 (loc[static_cast<int32_T>(selectedLoc) - 1] != nz)) {
            selectedLoc = link[static_cast<int32_T>(selectedLoc) - 1];
          }
          if (selectedLoc > 0.0) {
            val[static_cast<int32_T>(j) - 1] =
                val[static_cast<int32_T>(selectedLoc) - 1];
          } else {
            val[static_cast<int32_T>(j) - 1] = nz;
          }
        }
      }
    }
    if (indices[0] != static_cast<int32_T>(indices[0])) {
      emlrtIntegerCheckR2012b(indices[0], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[0]) < 1) ||
        (static_cast<int32_T>(indices[0]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[0]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (indices[1] != static_cast<int32_T>(indices[1])) {
      emlrtIntegerCheckR2012b(indices[1], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[1]) < 1) ||
        (static_cast<int32_T>(indices[1]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[1]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (indices[2] != static_cast<int32_T>(indices[2])) {
      emlrtIntegerCheckR2012b(indices[2], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[2]) < 1) ||
        (static_cast<int32_T>(indices[2]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[2]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (indices[3] != static_cast<int32_T>(indices[3])) {
      emlrtIntegerCheckR2012b(indices[3], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[3]) < 1) ||
        (static_cast<int32_T>(indices[3]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[3]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      allPoints_data[4 * i1] = allPoints[(static_cast<int32_T>(indices[0]) +
                                          allPoints.size(0) * i1) -
                                         1];
      allPoints_data[4 * i1 + 1] = allPoints[(static_cast<int32_T>(indices[1]) +
                                              allPoints.size(0) * i1) -
                                             1];
      allPoints_data[4 * i1 + 2] = allPoints[(static_cast<int32_T>(indices[2]) +
                                              allPoints.size(0) * i1) -
                                             1];
      allPoints_data[4 * i1 + 3] = allPoints[(static_cast<int32_T>(indices[3]) +
                                              allPoints.size(0) * i1) -
                                             1];
    }
    st.site = &dl_emlrtRSI;
    calibration::solveCameraPose(st, allPoints_data, allPoints_size, varargin_1,
                                 modelParams_R, modelParams_t);
    st.site = &el_emlrtRSI;
    b_st.site = &dn_emlrtRSI;
    c_st.site = &bjc_emlrtRSI;
    if (loop_ub_tmp < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub_tmp, &yo_emlrtBCI, &c_st);
    }
    if (loop_ub_tmp < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, 1, &yo_emlrtBCI, &c_st);
    }
    for (i1 = 0; i1 < 3; i1++) {
      nz = i1 << 2;
      b_modelParams_R[nz] = modelParams_R[3 * i1];
      b_modelParams_R[nz + 1] = modelParams_R[3 * i1 + 1];
      b_modelParams_R[nz + 2] = modelParams_R[3 * i1 + 2];
      b_modelParams_R[nz + 3] = modelParams_t[i1];
    }
    for (i1 = 0; i1 < 4; i1++) {
      selectedLoc = b_modelParams_R[i1];
      b_i = b_modelParams_R[i1 + 4];
      newEntry = b_modelParams_R[i1 + 8];
      for (int32_T m{0}; m < 3; m++) {
        cameraMatrix[i1 + (m << 2)] =
            (selectedLoc * varargin_1[3 * m] + b_i * varargin_1[3 * m + 1]) +
            newEntry * varargin_1[3 * m + 2];
      }
    }
    c_st.site = &cjc_emlrtRSI;
    d_st.site = &kn_emlrtRSI;
    e_st.site = &jj_emlrtRSI;
    if ((allPoints.size(0) != result) &&
        ((allPoints.size(0) != 0) && (loop_ub != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((allPoints.size(0) != result) && (allPoints.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    b_allPoints.set_size(&whb_emlrtRTEI, &d_st, numPts_tmp, loop_ub);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (int32_T m{0}; m < numPts_tmp; m++) {
        b_allPoints[m + b_allPoints.size(0) * i1] =
            allPoints[m + allPoints.size(0) * (i + i1)];
      }
    }
    worldPointsHomog.set_size(&xhb_emlrtRTEI, &d_st, result,
                              input_sizes_idx_1 + sizes_idx_1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      for (int32_T m{0}; m < result; m++) {
        worldPointsHomog[m + worldPointsHomog.size(0) * i1] =
            b_allPoints[m + result * i1];
      }
    }
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      for (int32_T m{0}; m < result; m++) {
        worldPointsHomog[m + worldPointsHomog.size(0) * input_sizes_idx_1] =
            1.0;
      }
    }
    c_st.site = &djc_emlrtRSI;
    d_st.site = &mn_emlrtRSI;
    if (worldPointsHomog.size(1) != 4) {
      emlrtErrorWithMessageIdR2018a(&d_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
    d_st.site = &ln_emlrtRSI;
    e_st.site = &nn_emlrtRSI;
    f_st.site = &on_emlrtRSI;
    m_t = (ptrdiff_t)worldPointsHomog.size(0);
    lda_t = (ptrdiff_t)worldPointsHomog.size(0);
    ldc_t = (ptrdiff_t)worldPointsHomog.size(0);
    projectedPointsHomog.set_size(&tn_emlrtRTEI, &f_st,
                                  worldPointsHomog.size(0), 3);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
          &(worldPointsHomog.data())[0], &lda_t, &cameraMatrix[0], &ldb_t,
          &beta1, &(projectedPointsHomog.data())[0], &ldc_t);
    nz = projectedPointsHomog.size(0);
    b_projectedPointsHomog.set_size(&yhb_emlrtRTEI, &b_st,
                                    projectedPointsHomog.size(0), 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (int32_T m{0}; m < nz; m++) {
        b_projectedPointsHomog[m + b_projectedPointsHomog.size(0) * i1] =
            projectedPointsHomog[m + projectedPointsHomog.size(0) * i1];
      }
    }
    dis.set_size(&aib_emlrtRTEI, &b_st, projectedPointsHomog.size(0));
    for (i1 = 0; i1 < nz; i1++) {
      dis[i1] = projectedPointsHomog[i1 + projectedPointsHomog.size(0) * 2];
    }
    c_st.site = &ejc_emlrtRSI;
    bsxfun(c_st, b_projectedPointsHomog, dis, projectedPoints);
    if ((numPts_tmp != projectedPoints.size(0)) &&
        ((numPts_tmp != 1) && (projectedPoints.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(numPts_tmp, projectedPoints.size(0),
                                  &bd_emlrtECI, &b_st);
    }
    b_projectedPointsHomog.set_size(&ao_emlrtRTEI, &b_st, numPts_tmp, 2);
    for (i1 = 0; i1 < 2; i1++) {
      for (int32_T m{0}; m < d_loop_ub; m++) {
        selectedLoc = allPoints[m + allPoints.size(0) * i1] -
                      projectedPoints[m + projectedPoints.size(0) * i1];
        b_projectedPointsHomog[m + b_projectedPointsHomog.size(0) * i1] =
            selectedLoc * selectedLoc;
      }
    }
    c_st.site = &fjc_emlrtRSI;
    sum(c_st, b_projectedPointsHomog, dis);
    nz = dis.size(0);
    for (int32_T m{0}; m < nz; m++) {
      if (dis[m] > 9.0) {
        if (m > dis.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(m, 0, dis.size(0) - 1, &jd_emlrtBCI,
                                        &st);
        }
        dis[m] = 9.0;
      }
    }
    b_st.site = &en_emlrtRSI;
    selectedLoc = sum(b_st, dis);
    if (selectedLoc < bestDis) {
      bestDis = selectedLoc;
      nz = dis.size(0);
      inliers.set_size(&ko_emlrtRTEI, &sp, dis.size(0));
      for (i1 = 0; i1 < nz; i1++) {
        inliers[i1] = (dis[i1] < 9.0);
      }
      std::copy(&modelParams_R[0], &modelParams_R[9], &bestModelParams_R[0]);
      bestModelParams_t[0] = modelParams_t[0];
      bestModelParams_t[1] = modelParams_t[1];
      bestModelParams_t[2] = modelParams_t[2];
      st.site = &fl_emlrtRSI;
      b_st.site = &yn_emlrtRSI;
      c_st.site = &tj_emlrtRSI;
      nz = combineVectorElements(c_st, inliers);
      st.site = &gl_emlrtRSI;
      nz = computeLoopNumber(st, 4.0, 95.0, static_cast<real_T>(numPts_tmp),
                             static_cast<real_T>(nz));
      numTrials = muIntScalarMin_sint32(numTrials, nz);
    }
    idxTrial++;
  }
  if (inliers.size(0) != 0) {
    st.site = &il_emlrtRSI;
    b_st.site = &yn_emlrtRSI;
    c_st.site = &tj_emlrtRSI;
    nz = combineVectorElements(c_st, inliers);
    if (nz >= 4) {
      isFound = true;
    } else {
      isFound = false;
    }
  } else {
    isFound = false;
  }
  if (isFound) {
    if (numTrials >= 10000) {
      st.site = &nl_emlrtRSI;
      ::coder::internal::c_warning(st);
    }
  } else {
    inliers.set_size(&fo_emlrtRTEI, &sp, allPoints.size(0));
    for (i = 0; i < numPts_tmp; i++) {
      inliers[i] = false;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isFound;
}

boolean_T d_msac(const emlrtStack &sp, const array<real32_T, 3U> &allPoints,
                 real32_T bestModelParams_data[],
                 int32_T bestModelParams_size[2], array<boolean_T, 1U> &inliers)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<int32_T, 1U> b_r;
  array<real32_T, 2U> b_normPoints2;
  array<real32_T, 2U> normPoints1;
  array<real32_T, 1U> dis;
  array<boolean_T, 1U> b_tmp_data;
  array<boolean_T, 1U> bestInliers;
  array<boolean_T, 1U> c_tmp_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_i;
  int32_T end;
  int32_T idxTrial;
  int32_T numPts_tmp;
  int32_T numTrials;
  int32_T nz;
  int32_T skipTrials;
  real32_T modelParams[16];
  real32_T C[9];
  real32_T U[9];
  real32_T a__1[9];
  real32_T normPoints2[9];
  real32_T accumulatedData[3];
  real32_T b_accumulatedData[3];
  real32_T alpha1;
  real32_T bestDis;
  real32_T beta1;
  real32_T f;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T tmp_data[16];
  boolean_T isFound;
  boolean_T isValidModel;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  numPts_tmp = allPoints.size(0);
  idxTrial = 1;
  numTrials = 1000;
  bestDis = 0.1F * static_cast<real32_T>(allPoints.size(0));
  bestModelParams_size[0] = 0;
  bestModelParams_size[1] = 0;
  skipTrials = 0;
  bestInliers.set_size(&eo_emlrtRTEI, &sp, allPoints.size(0));
  for (int32_T i{0}; i < numPts_tmp; i++) {
    bestInliers[i] = false;
  }
  while ((idxTrial <= numTrials) && (skipTrials < 10000)) {
    real_T indices[3];
    real_T d;
    real_T d1;
    real_T d2;
    real32_T samplePoints[18];
    real32_T b_C[9];
    boolean_T b[16];
    boolean_T b_b[16];
    boolean_T exitg1;
    st.site = &cl_emlrtRSI;
    randperm(st, static_cast<real_T>(numPts_tmp), indices);
    d = indices[0];
    d1 = indices[1];
    d2 = indices[2];
    for (int32_T i{0}; i < 2; i++) {
      for (b_i = 0; b_i < 3; b_i++) {
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &k_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > numPts_tmp)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, numPts_tmp,
                                        &ld_emlrtBCI, (emlrtConstCTX)&sp);
        }
        nz = 3 * b_i + 9 * i;
        samplePoints[nz] =
            allPoints[((static_cast<int32_T>(d) + allPoints.size(0) * b_i) +
                       allPoints.size(0) * 3 * i) -
                      1];
        if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
          emlrtIntegerCheckR2012b(d1, &k_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d1) < 1) ||
            (static_cast<int32_T>(d1) > numPts_tmp)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, numPts_tmp,
                                        &ld_emlrtBCI, (emlrtConstCTX)&sp);
        }
        samplePoints[nz + 1] =
            allPoints[((static_cast<int32_T>(d1) + allPoints.size(0) * b_i) +
                       allPoints.size(0) * 3 * i) -
                      1];
        if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
          emlrtIntegerCheckR2012b(d2, &k_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d2) < 1) ||
            (static_cast<int32_T>(d2) > numPts_tmp)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, numPts_tmp,
                                        &ld_emlrtBCI, (emlrtConstCTX)&sp);
        }
        samplePoints[nz + 2] =
            allPoints[((static_cast<int32_T>(d2) + allPoints.size(0) * b_i) +
                       allPoints.size(0) * 3 * i) -
                      1];
      }
    }
    st.site = &dl_emlrtRSI;
    b_st.site = &add_emlrtRSI;
    for (end = 0; end < 3; end++) {
      alpha1 = b_sumColumnB(&samplePoints[0], end + 1) / 3.0F;
      accumulatedData[end] = alpha1;
      beta1 = b_sumColumnB(&samplePoints[9], end + 1) / 3.0F;
      b_accumulatedData[end] = beta1;
      C[3 * end] = samplePoints[3 * end] - alpha1;
      normPoints2[3 * end] = samplePoints[3 * end + 9] - beta1;
      nz = 3 * end + 1;
      C[nz] = samplePoints[nz] - alpha1;
      normPoints2[nz] = samplePoints[3 * end + 10] - beta1;
      nz = 3 * end + 2;
      C[nz] = samplePoints[nz] - alpha1;
      normPoints2[nz] = samplePoints[3 * end + 11] - beta1;
    }
    for (int32_T i{0}; i < 3; i++) {
      alpha1 = C[3 * i];
      beta1 = C[3 * i + 1];
      f = C[3 * i + 2];
      for (b_i = 0; b_i < 3; b_i++) {
        b_C[i + 3 * b_i] =
            (alpha1 * normPoints2[3 * b_i] + beta1 * normPoints2[3 * b_i + 1]) +
            f * normPoints2[3 * b_i + 2];
      }
    }
    c_st.site = &vic_emlrtRSI;
    svd(c_st, b_C, U, a__1, normPoints2);
    for (int32_T i{0}; i < 3; i++) {
      alpha1 = U[i];
      beta1 = U[i + 3];
      f = U[i + 6];
      for (b_i = 0; b_i < 3; b_i++) {
        a__1[i + 3 * b_i] =
            (alpha1 * normPoints2[b_i] + beta1 * normPoints2[b_i + 3]) +
            f * normPoints2[b_i + 6];
      }
    }
    c_st.site = &wic_emlrtRSI;
    alpha1 = det(c_st, a__1);
    alpha1 = muSingleScalarSign(alpha1);
    for (int32_T i{0}; i < 9; i++) {
      C[i] = 0.0F;
    }
    C[0] = 1.0F;
    C[4] = 1.0F;
    C[8] = alpha1;
    for (int32_T i{0}; i < 3; i++) {
      alpha1 = normPoints2[i];
      beta1 = normPoints2[i + 3];
      f = normPoints2[i + 6];
      for (b_i = 0; b_i < 3; b_i++) {
        a__1[i + 3 * b_i] =
            (alpha1 * C[3 * b_i] + beta1 * C[3 * b_i + 1]) + f * C[3 * b_i + 2];
      }
      alpha1 = a__1[i];
      beta1 = a__1[i + 3];
      f = a__1[i + 6];
      for (b_i = 0; b_i < 3; b_i++) {
        normPoints2[i + 3 * b_i] =
            (alpha1 * U[b_i] + beta1 * U[b_i + 3]) + f * U[b_i + 6];
      }
    }
    std::memset(&modelParams[0], 0, 16U * sizeof(real32_T));
    modelParams[0] = 1.0F;
    modelParams[5] = 1.0F;
    modelParams[10] = 1.0F;
    modelParams[15] = 1.0F;
    alpha1 = accumulatedData[0];
    beta1 = accumulatedData[1];
    f = accumulatedData[2];
    for (int32_T i{0}; i < 3; i++) {
      nz = i << 2;
      modelParams[nz] = normPoints2[3 * i];
      modelParams[nz + 1] = normPoints2[3 * i + 1];
      modelParams[nz + 2] = normPoints2[3 * i + 2];
      modelParams[i + 12] =
          b_accumulatedData[i] -
          ((normPoints2[i] * alpha1 + normPoints2[i + 3] * beta1) +
           normPoints2[i + 6] * f);
    }
    for (int32_T i{0}; i < 16; i++) {
      alpha1 = modelParams[i];
      b[i] = muSingleScalarIsInf(alpha1);
      b_b[i] = muSingleScalarIsNaN(alpha1);
    }
    isValidModel = true;
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= 15)) {
      if (b[b_i] || b_b[b_i]) {
        isValidModel = false;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
    if (isValidModel) {
      st.site = &el_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      geotrans::evaluateTform3d(b_st, modelParams, allPoints, dis);
      end = dis.size(0);
      for (b_i = 0; b_i < end; b_i++) {
        if (dis[b_i] > 0.1F) {
          if (b_i > dis.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dis.size(0) - 1, &jd_emlrtBCI,
                                          &st);
          }
          dis[b_i] = 0.1F;
        }
      }
      b_st.site = &en_emlrtRSI;
      alpha1 = sum(b_st, dis);
      if (alpha1 < bestDis) {
        bestDis = alpha1;
        nz = dis.size(0);
        bestInliers.set_size(&ko_emlrtRTEI, &sp, dis.size(0));
        for (int32_T i{0}; i < nz; i++) {
          bestInliers[i] = (dis[i] < 0.1F);
        }
        bestModelParams_size[0] = 4;
        bestModelParams_size[1] = 4;
        std::copy(&modelParams[0], &modelParams[16], &bestModelParams_data[0]);
        st.site = &fl_emlrtRSI;
        b_st.site = &yn_emlrtRSI;
        c_st.site = &tj_emlrtRSI;
        nz = combineVectorElements(c_st, bestInliers);
        st.site = &gl_emlrtRSI;
        b_st.site = &co_emlrtRSI;
        c_st.site = &eo_emlrtRSI;
        alpha1 = muSingleScalarPower(static_cast<real32_T>(nz) /
                                         static_cast<real32_T>(numPts_tmp),
                                     3.0F);
        if (alpha1 < 1.1920929E-7F) {
          nz = MAX_int32_T;
        } else {
          b_st.site = &do_emlrtRSI;
          if (1.0F - alpha1 < 0.0F) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &db_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 5, "log10");
          }
          alpha1 = muSingleScalarCeil(-1.99999785F /
                                      muSingleScalarLog10(1.0F - alpha1));
          if (alpha1 < 2.14748365E+9F) {
            nz = static_cast<int32_T>(alpha1);
          } else {
            nz = 0;
          }
        }
        numTrials = muIntScalarMin_sint32(numTrials, nz);
      }
      idxTrial++;
    } else {
      skipTrials++;
    }
  }
  st.site = &hl_emlrtRSI;
  nz = bestModelParams_size[0] * bestModelParams_size[1];
  for (int32_T i{0}; i < nz; i++) {
    alpha1 = bestModelParams_data[i];
    tmp_data[i] =
        ((!muSingleScalarIsInf(alpha1)) && (!muSingleScalarIsNaN(alpha1)));
  }
  b_tmp_data.set(&tmp_data[0], nz);
  b_st.site = &go_emlrtRSI;
  isValidModel = all(b_st, b_tmp_data);
  if (isValidModel && (bestInliers.size(0) != 0)) {
    st.site = &il_emlrtRSI;
    b_st.site = &yn_emlrtRSI;
    c_st.site = &tj_emlrtRSI;
    nz = combineVectorElements(c_st, bestInliers);
    if (nz >= 3) {
      isFound = true;
    } else {
      isFound = false;
    }
  } else {
    isFound = false;
  }
  if (isFound) {
    end = bestInliers.size(0);
    nz = 0;
    for (b_i = 0; b_i < end; b_i++) {
      if (bestInliers[b_i]) {
        nz++;
      }
    }
    b_r.set_size(&go_emlrtRTEI, &sp, nz);
    nz = 0;
    for (b_i = 0; b_i < end; b_i++) {
      if (bestInliers[b_i]) {
        b_r[nz] = b_i;
        nz++;
      }
    }
    st.site = &jl_emlrtRSI;
    end = b_r.size(0);
    for (int32_T i{0}; i < end; i++) {
      if (b_r[i] > allPoints.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[i], 0, allPoints.size(0) - 1,
                                      &kd_emlrtBCI, &st);
      }
    }
    b_st.site = &add_emlrtRSI;
    c_st.site = &sic_emlrtRSI;
    if (b_r.size(0) == 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ib_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    normPoints1.set_size(&xob_emlrtRTEI, &c_st, b_r.size(0), 3);
    for (int32_T i{0}; i < 3; i++) {
      for (b_i = 0; b_i < end; b_i++) {
        normPoints1[b_i + normPoints1.size(0) * i] =
            allPoints[b_r[b_i] + allPoints.size(0) * i];
      }
    }
    d_st.site = &mo_emlrtRSI;
    b_combineVectorElements(d_st, normPoints1, accumulatedData);
    accumulatedData[0] /= static_cast<real32_T>(b_r.size(0));
    accumulatedData[1] /= static_cast<real32_T>(b_r.size(0));
    accumulatedData[2] /= static_cast<real32_T>(b_r.size(0));
    c_st.site = &gdd_emlrtRSI;
    if (b_r.size(0) == 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ib_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    normPoints1.set_size(&yob_emlrtRTEI, &c_st, b_r.size(0), 3);
    for (int32_T i{0}; i < 3; i++) {
      for (b_i = 0; b_i < end; b_i++) {
        normPoints1[b_i + normPoints1.size(0) * i] =
            allPoints[(b_r[b_i] + allPoints.size(0) * i) +
                      allPoints.size(0) * 3];
      }
    }
    d_st.site = &mo_emlrtRSI;
    b_combineVectorElements(d_st, normPoints1, b_accumulatedData);
    b_accumulatedData[0] /= static_cast<real32_T>(b_r.size(0));
    b_accumulatedData[1] /= static_cast<real32_T>(b_r.size(0));
    b_accumulatedData[2] /= static_cast<real32_T>(b_r.size(0));
    normPoints1.set_size(&jp_emlrtRTEI, &b_st, b_r.size(0), 3);
    if (b_r.size(0) != 0) {
      nz = (b_r.size(0) != 1);
      for (b_i = 0; b_i < 3; b_i++) {
        for (idxTrial = 0; idxTrial < end; idxTrial++) {
          normPoints1[idxTrial + normPoints1.size(0) * b_i] =
              allPoints[b_r[nz * idxTrial] + allPoints.size(0) * b_i] -
              accumulatedData[b_i];
        }
      }
    }
    b_normPoints2.set_size(&jp_emlrtRTEI, &b_st, b_r.size(0), 3);
    if (b_r.size(0) != 0) {
      nz = (b_r.size(0) != 1);
      for (b_i = 0; b_i < 3; b_i++) {
        for (idxTrial = 0; idxTrial < end; idxTrial++) {
          b_normPoints2[idxTrial + b_normPoints2.size(0) * b_i] =
              allPoints[(b_r[nz * idxTrial] + allPoints.size(0) * b_i) +
                        allPoints.size(0) * 3] -
              b_accumulatedData[b_i];
        }
      }
    }
    c_st.site = &uic_emlrtRSI;
    d_st.site = &mn_emlrtRSI;
    if (normPoints1.size(0) != b_normPoints2.size(0)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
    if ((normPoints1.size(0) == 0) || (b_normPoints2.size(0) == 0)) {
      for (int32_T i{0}; i < 9; i++) {
        C[i] = 0.0F;
      }
    } else {
      TRANSB1 = 'N';
      TRANSA1 = 'T';
      alpha1 = 1.0F;
      beta1 = 0.0F;
      m_t = (ptrdiff_t)3;
      n_t = (ptrdiff_t)3;
      k_t = (ptrdiff_t)normPoints1.size(0);
      lda_t = (ptrdiff_t)normPoints1.size(0);
      ldb_t = (ptrdiff_t)b_normPoints2.size(0);
      ldc_t = (ptrdiff_t)3;
      sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
            &(normPoints1.data())[0], &lda_t, &(b_normPoints2.data())[0],
            &ldb_t, &beta1, &C[0], &ldc_t);
    }
    c_st.site = &vic_emlrtRSI;
    svd(c_st, C, U, a__1, normPoints2);
    for (int32_T i{0}; i < 3; i++) {
      alpha1 = U[i];
      beta1 = U[i + 3];
      f = U[i + 6];
      for (b_i = 0; b_i < 3; b_i++) {
        a__1[i + 3 * b_i] =
            (alpha1 * normPoints2[b_i] + beta1 * normPoints2[b_i + 3]) +
            f * normPoints2[b_i + 6];
      }
    }
    c_st.site = &wic_emlrtRSI;
    alpha1 = det(c_st, a__1);
    alpha1 = muSingleScalarSign(alpha1);
    for (int32_T i{0}; i < 9; i++) {
      C[i] = 0.0F;
    }
    C[0] = 1.0F;
    C[4] = 1.0F;
    C[8] = alpha1;
    for (int32_T i{0}; i < 3; i++) {
      alpha1 = normPoints2[i];
      beta1 = normPoints2[i + 3];
      f = normPoints2[i + 6];
      for (b_i = 0; b_i < 3; b_i++) {
        a__1[i + 3 * b_i] =
            (alpha1 * C[3 * b_i] + beta1 * C[3 * b_i + 1]) + f * C[3 * b_i + 2];
      }
      alpha1 = a__1[i];
      beta1 = a__1[i + 3];
      f = a__1[i + 6];
      for (b_i = 0; b_i < 3; b_i++) {
        normPoints2[i + 3 * b_i] =
            (alpha1 * U[b_i] + beta1 * U[b_i + 3]) + f * U[b_i + 6];
      }
    }
    std::memset(&modelParams[0], 0, 16U * sizeof(real32_T));
    modelParams[0] = 1.0F;
    modelParams[5] = 1.0F;
    modelParams[10] = 1.0F;
    modelParams[15] = 1.0F;
    alpha1 = accumulatedData[0];
    beta1 = accumulatedData[1];
    f = accumulatedData[2];
    for (int32_T i{0}; i < 3; i++) {
      nz = i << 2;
      modelParams[nz] = normPoints2[3 * i];
      modelParams[nz + 1] = normPoints2[3 * i + 1];
      modelParams[nz + 2] = normPoints2[3 * i + 2];
      modelParams[i + 12] =
          b_accumulatedData[i] -
          ((normPoints2[i] * alpha1 + normPoints2[i + 3] * beta1) +
           normPoints2[i + 6] * f);
    }
    st.site = &kl_emlrtRSI;
    b_st.site = &dn_emlrtRSI;
    geotrans::evaluateTform3d(b_st, modelParams, allPoints, dis);
    end = dis.size(0);
    for (b_i = 0; b_i < end; b_i++) {
      if (dis[b_i] > 0.1F) {
        if (b_i > dis.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, dis.size(0) - 1, &jd_emlrtBCI,
                                        &st);
        }
        dis[b_i] = 0.1F;
      }
    }
    b_st.site = &en_emlrtRSI;
    sum(b_st, dis);
    bestModelParams_size[0] = 4;
    bestModelParams_size[1] = 4;
    std::copy(&modelParams[0], &modelParams[16], &bestModelParams_data[0]);
    st.site = &ll_emlrtRSI;
    for (int32_T i{0}; i < 16; i++) {
      alpha1 = modelParams[i];
      tmp_data[i] =
          ((!muSingleScalarIsInf(alpha1)) && (!muSingleScalarIsNaN(alpha1)));
    }
    c_tmp_data.set(&tmp_data[0], 16);
    b_st.site = &go_emlrtRSI;
    isValidModel = all(b_st, c_tmp_data);
    nz = dis.size(0);
    inliers.set_size(&io_emlrtRTEI, &sp, dis.size(0));
    for (int32_T i{0}; i < nz; i++) {
      inliers[i] = (dis[i] < 0.1F);
    }
    st.site = &ml_emlrtRSI;
    if ((!isValidModel) || (!any(st, inliers))) {
      isFound = false;
      inliers.set_size(&jo_emlrtRTEI, &sp, allPoints.size(0));
      for (int32_T i{0}; i < numPts_tmp; i++) {
        inliers[i] = false;
      }
    } else if (numTrials >= 1000) {
      st.site = &nl_emlrtRSI;
      ::coder::internal::c_warning(st);
    }
  } else {
    inliers.set_size(&fo_emlrtRTEI, &sp, allPoints.size(0));
    for (int32_T i{0}; i < numPts_tmp; i++) {
      inliers[i] = false;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isFound;
}

boolean_T msac(const emlrtStack &sp, const array<real32_T, 3U> &allPoints,
               real32_T bestModelParams_data[], int32_T bestModelParams_size[2],
               array<boolean_T, 1U> &inliers)
{
  array<int32_T, 1U> b_r;
  array<real32_T, 3U> b_allPoints;
  array<real32_T, 1U> dis;
  array<boolean_T, 1U> b_tmp_data;
  array<boolean_T, 1U> bestInliers;
  array<boolean_T, 1U> c_tmp_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T end;
  int32_T idxTrial;
  int32_T numPts_tmp;
  int32_T numTrials;
  int32_T nz;
  int32_T skipTrials;
  real32_T modelParams[9];
  real32_T bestDis;
  real32_T inlierProbability;
  boolean_T tmp_data[16];
  boolean_T isFound;
  boolean_T isValidModel;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  numPts_tmp = allPoints.size(0);
  idxTrial = 1;
  numTrials = 1000;
  bestDis = 4.0F * static_cast<real32_T>(allPoints.size(0));
  bestModelParams_size[0] = 0;
  bestModelParams_size[1] = 0;
  skipTrials = 0;
  bestInliers.set_size(&eo_emlrtRTEI, &sp, allPoints.size(0));
  for (int32_T i{0}; i < numPts_tmp; i++) {
    bestInliers[i] = false;
  }
  while ((idxTrial <= numTrials) && (skipTrials < 10000)) {
    real_T indices[4];
    real_T newEntry;
    real_T pt;
    real_T selectedLoc;
    real_T t;
    real32_T c_allPoints[16];
    boolean_T b[9];
    boolean_T b_b[9];
    boolean_T exitg1;
    st.site = &cl_emlrtRSI;
    if (numPts_tmp < 4) {
      emlrtErrorWithMessageIdR2018a(&st, &cb_emlrtRTEI,
                                    "MATLAB:randperm:inputKTooLarge",
                                    "MATLAB:randperm:inputKTooLarge", 0);
    }
    b_st.site = &ol_emlrtRSI;
    indices[1] = 0.0;
    indices[2] = 0.0;
    indices[3] = 0.0;
    if (numPts_tmp <= 4) {
      real_T j;
      indices[0] = 1.0;
      j = b_rand() * 2.0;
      j = muDoubleScalarFloor(j);
      indices[1] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 2.0;
      j = b_rand() * 3.0;
      j = muDoubleScalarFloor(j);
      indices[2] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 3.0;
      j = b_rand() * 4.0;
      j = muDoubleScalarFloor(j);
      indices[3] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = 4.0;
    } else if (static_cast<real_T>(numPts_tmp) / 4.0 <= 4.0) {
      real_T j;
      t = 0.0;
      selectedLoc = numPts_tmp;
      pt = 4.0 / static_cast<real_T>(numPts_tmp);
      newEntry = b_rand();
      while (newEntry > pt) {
        t++;
        selectedLoc--;
        pt += (1.0 - pt) * (4.0 / selectedLoc);
      }
      t++;
      j = b_rand();
      j = muDoubleScalarFloor(j);
      indices[0] = 0.0;
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      selectedLoc = static_cast<real_T>(numPts_tmp) - t;
      pt = 3.0 / selectedLoc;
      newEntry = b_rand();
      while (newEntry > pt) {
        t++;
        selectedLoc--;
        pt += (1.0 - pt) * (3.0 / selectedLoc);
      }
      t++;
      j = b_rand() * 2.0;
      j = muDoubleScalarFloor(j);
      indices[1] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      selectedLoc = static_cast<real_T>(numPts_tmp) - t;
      pt = 2.0 / selectedLoc;
      newEntry = b_rand();
      while (newEntry > pt) {
        t++;
        selectedLoc--;
        pt += (1.0 - pt) * (2.0 / selectedLoc);
      }
      t++;
      j = b_rand() * 3.0;
      j = muDoubleScalarFloor(j);
      indices[2] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
      selectedLoc = static_cast<real_T>(numPts_tmp) - t;
      pt = 1.0 / selectedLoc;
      newEntry = b_rand();
      while (newEntry > pt) {
        t++;
        selectedLoc--;
        pt += (1.0 - pt) * (1.0 / selectedLoc);
      }
      t++;
      j = b_rand() * 4.0;
      j = muDoubleScalarFloor(j);
      indices[3] = indices[static_cast<int32_T>(j + 1.0) - 1];
      indices[static_cast<int32_T>(j + 1.0) - 1] = t;
    } else {
      real_T hashTbl[4];
      real_T link[4];
      real_T loc[4];
      int32_T val[4];
      hashTbl[0] = 0.0;
      link[0] = 0.0;
      val[0] = 0;
      loc[0] = 0.0;
      hashTbl[1] = 0.0;
      link[1] = 0.0;
      val[1] = 0;
      loc[1] = 0.0;
      hashTbl[2] = 0.0;
      link[2] = 0.0;
      val[2] = 0;
      loc[2] = 0.0;
      hashTbl[3] = 0.0;
      link[3] = 0.0;
      val[3] = 0;
      loc[3] = 0.0;
      newEntry = 1.0;
      for (end = 0; end < 4; end++) {
        real_T j;
        nz = (numPts_tmp - end) - 1;
        selectedLoc = b_rand() * (static_cast<real_T>(nz) + 1.0);
        selectedLoc = muDoubleScalarFloor(selectedLoc);
        if (muDoubleScalarIsNaN(selectedLoc) ||
            muDoubleScalarIsInf(selectedLoc)) {
          pt = rtNaN;
        } else if (selectedLoc == 0.0) {
          pt = 0.0;
        } else {
          pt = muDoubleScalarRem(selectedLoc, 4.0);
          if (pt == 0.0) {
            pt = 0.0;
          } else if (pt < 0.0) {
            pt += 4.0;
          }
        }
        j = hashTbl[static_cast<int32_T>(pt + 1.0) - 1];
        while ((j > 0.0) && (loc[static_cast<int32_T>(j) - 1] != selectedLoc)) {
          j = link[static_cast<int32_T>(j) - 1];
        }
        if (j > 0.0) {
          indices[end] =
              static_cast<real_T>(val[static_cast<int32_T>(j) - 1]) + 1.0;
        } else {
          indices[end] = selectedLoc + 1.0;
          j = newEntry;
          newEntry++;
          loc[static_cast<int32_T>(j) - 1] = selectedLoc;
          link[static_cast<int32_T>(j) - 1] =
              hashTbl[static_cast<int32_T>(pt + 1.0) - 1];
          hashTbl[static_cast<int32_T>(pt + 1.0) - 1] = j;
        }
        if (end + 1 < 4) {
          selectedLoc =
              hashTbl[static_cast<int32_T>(
                          muDoubleScalarRem(static_cast<real_T>(nz), 4.0) +
                          1.0) -
                      1];
          while ((selectedLoc > 0.0) &&
                 (loc[static_cast<int32_T>(selectedLoc) - 1] != nz)) {
            selectedLoc = link[static_cast<int32_T>(selectedLoc) - 1];
          }
          if (selectedLoc > 0.0) {
            val[static_cast<int32_T>(j) - 1] =
                val[static_cast<int32_T>(selectedLoc) - 1];
          } else {
            val[static_cast<int32_T>(j) - 1] = nz;
          }
        }
      }
    }
    if (indices[0] != static_cast<int32_T>(indices[0])) {
      emlrtIntegerCheckR2012b(indices[0], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[0]) < 1) ||
        (static_cast<int32_T>(indices[0]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[0]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (indices[1] != static_cast<int32_T>(indices[1])) {
      emlrtIntegerCheckR2012b(indices[1], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[1]) < 1) ||
        (static_cast<int32_T>(indices[1]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[1]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (indices[2] != static_cast<int32_T>(indices[2])) {
      emlrtIntegerCheckR2012b(indices[2], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[2]) < 1) ||
        (static_cast<int32_T>(indices[2]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[2]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (indices[3] != static_cast<int32_T>(indices[3])) {
      emlrtIntegerCheckR2012b(indices[3], &k_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(indices[3]) < 1) ||
        (static_cast<int32_T>(indices[3]) > numPts_tmp)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indices[3]), 1,
                                    numPts_tmp, &ld_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    selectedLoc = indices[0];
    pt = indices[1];
    newEntry = indices[2];
    t = indices[3];
    for (int32_T i{0}; i < 2; i++) {
      for (int32_T b_i{0}; b_i < 2; b_i++) {
        nz = (b_i << 2) + (i << 3);
        c_allPoints[nz] = allPoints[((static_cast<int32_T>(selectedLoc) +
                                      allPoints.size(0) * b_i) +
                                     allPoints.size(0) * 2 * i) -
                                    1];
        c_allPoints[nz + 1] =
            allPoints[((static_cast<int32_T>(pt) + allPoints.size(0) * b_i) +
                       allPoints.size(0) * 2 * i) -
                      1];
        c_allPoints[nz + 2] = allPoints[((static_cast<int32_T>(newEntry) +
                                          allPoints.size(0) * b_i) +
                                         allPoints.size(0) * 2 * i) -
                                        1];
        c_allPoints[nz + 3] =
            allPoints[((static_cast<int32_T>(t) + allPoints.size(0) * b_i) +
                       allPoints.size(0) * 2 * i) -
                      1];
      }
    }
    st.site = &dl_emlrtRSI;
    geotrans::computeProjective2d(st, c_allPoints, modelParams);
    for (int32_T i{0}; i < 9; i++) {
      inlierProbability = modelParams[i];
      b[i] = muSingleScalarIsInf(inlierProbability);
      b_b[i] = muSingleScalarIsNaN(inlierProbability);
    }
    isValidModel = true;
    nz = 0;
    exitg1 = false;
    while ((!exitg1) && (nz <= 8)) {
      if (b[nz] || b_b[nz]) {
        isValidModel = false;
        exitg1 = true;
      } else {
        nz++;
      }
    }
    if (isValidModel) {
      st.site = &el_emlrtRSI;
      b_st.site = &dn_emlrtRSI;
      geotrans::evaluateTform2d(b_st, modelParams, allPoints, dis);
      end = dis.size(0);
      for (int32_T b_i{0}; b_i < end; b_i++) {
        if (dis[b_i] > 4.0F) {
          if (b_i > dis.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, dis.size(0) - 1, &jd_emlrtBCI,
                                          &st);
          }
          dis[b_i] = 4.0F;
        }
      }
      b_st.site = &en_emlrtRSI;
      inlierProbability = sum(b_st, dis);
      if (inlierProbability < bestDis) {
        bestDis = inlierProbability;
        nz = dis.size(0);
        bestInliers.set_size(&ko_emlrtRTEI, &sp, dis.size(0));
        for (int32_T i{0}; i < nz; i++) {
          bestInliers[i] = (dis[i] < 4.0F);
        }
        bestModelParams_size[0] = 3;
        bestModelParams_size[1] = 3;
        for (int32_T i{0}; i < 9; i++) {
          bestModelParams_data[i] = modelParams[i];
        }
        st.site = &fl_emlrtRSI;
        b_st.site = &yn_emlrtRSI;
        c_st.site = &tj_emlrtRSI;
        nz = combineVectorElements(c_st, bestInliers);
        st.site = &gl_emlrtRSI;
        b_st.site = &co_emlrtRSI;
        inlierProbability = muSingleScalarPower(
            static_cast<real32_T>(nz) / static_cast<real32_T>(numPts_tmp),
            4.0F);
        if (inlierProbability < 1.1920929E-7F) {
          nz = MAX_int32_T;
        } else {
          b_st.site = &do_emlrtRSI;
          if (1.0F - inlierProbability < 0.0F) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &db_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 5, "log10");
          }
          inlierProbability = muSingleScalarCeil(
              -0.999999881F / muSingleScalarLog10(1.0F - inlierProbability));
          if (inlierProbability < 2.14748365E+9F) {
            nz = static_cast<int32_T>(inlierProbability);
          } else {
            nz = 0;
          }
        }
        numTrials = muIntScalarMin_sint32(numTrials, nz);
      }
      idxTrial++;
    } else {
      skipTrials++;
    }
  }
  st.site = &hl_emlrtRSI;
  nz = bestModelParams_size[0] * bestModelParams_size[1];
  for (int32_T i{0}; i < nz; i++) {
    inlierProbability = bestModelParams_data[i];
    tmp_data[i] = ((!muSingleScalarIsInf(inlierProbability)) &&
                   (!muSingleScalarIsNaN(inlierProbability)));
  }
  b_tmp_data.set(&tmp_data[0], nz);
  b_st.site = &go_emlrtRSI;
  isValidModel = all(b_st, b_tmp_data);
  if (isValidModel && (bestInliers.size(0) != 0)) {
    st.site = &il_emlrtRSI;
    b_st.site = &yn_emlrtRSI;
    c_st.site = &tj_emlrtRSI;
    nz = combineVectorElements(c_st, bestInliers);
    if (nz >= 4) {
      isFound = true;
    } else {
      isFound = false;
    }
  } else {
    isFound = false;
  }
  if (isFound) {
    end = bestInliers.size(0);
    nz = 0;
    for (int32_T b_i{0}; b_i < end; b_i++) {
      if (bestInliers[b_i]) {
        nz++;
      }
    }
    b_r.set_size(&go_emlrtRTEI, &sp, nz);
    nz = 0;
    for (int32_T b_i{0}; b_i < end; b_i++) {
      if (bestInliers[b_i]) {
        b_r[nz] = b_i;
        nz++;
      }
    }
    nz = b_r.size(0);
    b_allPoints.set_size(&ho_emlrtRTEI, &sp, b_r.size(0), 2, 2);
    for (int32_T i{0}; i < 2; i++) {
      for (int32_T b_i{0}; b_i < 2; b_i++) {
        for (end = 0; end < nz; end++) {
          if (b_r[end] > allPoints.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_r[end], 0, allPoints.size(0) - 1,
                                          &kd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          b_allPoints[(end + b_allPoints.size(0) * b_i) +
                      b_allPoints.size(0) * 2 * i] =
              allPoints[(b_r[end] + allPoints.size(0) * b_i) +
                        allPoints.size(0) * 2 * i];
        }
      }
    }
    st.site = &jl_emlrtRSI;
    geotrans::computeProjective2d(st, b_allPoints, modelParams);
    st.site = &kl_emlrtRSI;
    b_st.site = &dn_emlrtRSI;
    geotrans::evaluateTform2d(b_st, modelParams, allPoints, dis);
    end = dis.size(0);
    for (int32_T b_i{0}; b_i < end; b_i++) {
      if (dis[b_i] > 4.0F) {
        if (b_i > dis.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, dis.size(0) - 1, &jd_emlrtBCI,
                                        &st);
        }
        dis[b_i] = 4.0F;
      }
    }
    b_st.site = &en_emlrtRSI;
    sum(b_st, dis);
    bestModelParams_size[0] = 3;
    bestModelParams_size[1] = 3;
    for (int32_T i{0}; i < 9; i++) {
      bestModelParams_data[i] = modelParams[i];
    }
    st.site = &ll_emlrtRSI;
    for (int32_T i{0}; i < 9; i++) {
      inlierProbability = modelParams[i];
      tmp_data[i] = ((!muSingleScalarIsInf(inlierProbability)) &&
                     (!muSingleScalarIsNaN(inlierProbability)));
    }
    c_tmp_data.set(&tmp_data[0], 9);
    b_st.site = &go_emlrtRSI;
    isValidModel = all(b_st, c_tmp_data);
    nz = dis.size(0);
    inliers.set_size(&io_emlrtRTEI, &sp, dis.size(0));
    for (int32_T i{0}; i < nz; i++) {
      inliers[i] = (dis[i] < 4.0F);
    }
    st.site = &ml_emlrtRSI;
    if ((!isValidModel) || (!any(st, inliers))) {
      isFound = false;
      inliers.set_size(&jo_emlrtRTEI, &sp, allPoints.size(0));
      for (int32_T i{0}; i < numPts_tmp; i++) {
        inliers[i] = false;
      }
    } else if (numTrials >= 1000) {
      st.site = &nl_emlrtRSI;
      ::coder::internal::c_warning(st);
    }
  } else {
    inliers.set_size(&fo_emlrtRTEI, &sp, allPoints.size(0));
    for (int32_T i{0}; i < numPts_tmp; i++) {
      inliers[i] = false;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isFound;
}

} // namespace ransac
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (msac.cpp)
