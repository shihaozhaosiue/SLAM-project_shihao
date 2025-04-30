//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateAndParseInputs.cpp
//
// Code generation for function 'validateAndParseInputs'
//

// Include files
#include "validateAndParseInputs.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "indexShapeCheck.h"
#include "pointTrack.h"
#include "pointTrackImpl.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "sparse1.h"
#include "table.h"
#include "warning.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo otb_emlrtRSI{
    315,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ptb_emlrtRSI{
    316,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo qtb_emlrtRSI{
    319,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo rtb_emlrtRSI{
    332,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo stb_emlrtRSI{
    333,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo ttb_emlrtRSI{
    334,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo utb_emlrtRSI{
    336,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtRSInfo vtb_emlrtRSI{
    339,                                  // lineNo
    "convertToMeasurementsAndVisibility", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pathName
};

static emlrtBCInfo hj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    318,                                  // lineNo
    44,                                   // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtRTEInfo rd_emlrtRTEI{
    320,                                  // lineNo
    54,                                   // colNo
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtBCInfo ij_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    327,                                  // lineNo
    40,                                   // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo jj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    328,                                  // lineNo
    40,                                   // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo kj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    326,                                  // lineNo
    20,                                   // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo lj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    327,                                  // lineNo
    11,                                   // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo mj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    328,                                  // lineNo
    11,                                   // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo nj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    320,                                  // lineNo
    105,                                  // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo oj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    327,                                  // lineNo
    9,                                    // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo pj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    328,                                  // lineNo
    9,                                    // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo qj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    333,                                  // lineNo
    7,                                    // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtBCInfo rj_emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    334,                                  // lineNo
    7,                                    // colNo
    "",                                   // aName
    "convertToMeasurementsAndVisibility", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m", // pName
    0    // checkKind
};

static emlrtRTEInfo yab_emlrtRTEI{
    310,                      // lineNo
    1,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo abb_emlrtRTEI{
    312,                      // lineNo
    1,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo bbb_emlrtRTEI{
    313,                      // lineNo
    1,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo cbb_emlrtRTEI{
    315,                      // lineNo
    5,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo dbb_emlrtRTEI{
    322,                      // lineNo
    13,                       // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

static emlrtRTEInfo ebb_emlrtRTEI{
    339,                      // lineNo
    1,                        // colNo
    "validateAndParseInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+bundleAdjust\\validateAndParseInputs."
    "m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace bundleAdjust {
void c_convertToMeasurementsAndVisib(const emlrtStack &sp,
                                     const table &cameraPoses,
                                     const pointTrack &pointTracks,
                                     array<real_T, 2U> &measurements,
                                     sparse &visibilitySp)
{
  pointTrack b_r;
  array<real_T, 2U> visibility;
  array<real_T, 2U> x;
  array<real_T, 2U> y;
  array<int32_T, 1U> ii;
  array<uint32_T, 2U> trackViewIds;
  array<boolean_T, 1U> b_cameraPoses_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T b_ii;
  int32_T b_loop_ub;
  int32_T i;
  int32_T idx;
  int32_T loop_ub_tmp;
  int32_T numPoints_tmp;
  boolean_T cameraPoses_data[2];
  boolean_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  numPoints_tmp = pointTracks.Data.size(0) * pointTracks.Data.size(1);
  visibility.set_size(&yab_emlrtRTEI, &sp, numPoints_tmp, 2);
  loop_ub_tmp = numPoints_tmp << 1;
  for (i = 0; i < loop_ub_tmp; i++) {
    visibility[i] = 0.0;
  }
  x.set_size(&abb_emlrtRTEI, &sp, numPoints_tmp, 2);
  for (i = 0; i < loop_ub_tmp; i++) {
    x[i] = 0.0;
  }
  y.set_size(&bbb_emlrtRTEI, &sp, numPoints_tmp, 2);
  for (i = 0; i < loop_ub_tmp; i++) {
    y[i] = 0.0;
  }
  for (int32_T m{0}; m < numPoints_tmp; m++) {
    int32_T loop_ub;
    st.site = &otb_emlrtRSI;
    pointTracks.parenReference(st, static_cast<real_T>(m) + 1.0, b_r);
    loop_ub = b_r.ViewIds.size(1);
    trackViewIds.set_size(&cbb_emlrtRTEI, &sp, 1, b_r.ViewIds.size(1));
    for (i = 0; i < loop_ub; i++) {
      trackViewIds[i] = b_r.ViewIds[i];
    }
    st.site = &ptb_emlrtRSI;
    pointTracks.parenReference(st, static_cast<real_T>(m) + 1.0, b_r);
    if (trackViewIds.size(1) - 1 >= 0) {
      b_loop_ub = cameraPoses.data.f1.size(0);
    }
    for (int32_T n{0}; n < loop_ub; n++) {
      uint32_T b_trackViewIds;
      if (n + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &hj_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &qtb_emlrtRSI;
      b_trackViewIds = trackViewIds[n];
      idx = cameraPoses.data.f1.size(0);
      for (i = 0; i < b_loop_ub; i++) {
        cameraPoses_data[i] = (cameraPoses.data.f1[i] == b_trackViewIds);
      }
      b_cameraPoses_data.set(&cameraPoses_data[0], idx);
      b_st.site = &aq_emlrtRSI;
      b_eml_find(b_st, b_cameraPoses_data, ii);
      if (ii.size(0) == 0) {
        if (n + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &nj_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        emlrtErrorWithMessageIdR2018a(
            &sp, &rd_emlrtRTEI, "vision:absolutePoses:missingViewId",
            "vision:absolutePoses:missingViewId", 2, 13, trackViewIds[n]);
      }
      if (ii.size(0) != 1) {
        b_ii = ii[0];
        ii.set_size(&dbb_emlrtRTEI, &sp, 1);
        ii[0] = b_ii;
      }
      if (m + 1 > numPoints_tmp) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, numPoints_tmp, &kj_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      visibility[m + visibility.size(0) * (ii[0] - 1)] = 1.0;
      if (b_r.Points.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_r.Points.size(1), &ij_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (m + 1 > numPoints_tmp) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, numPoints_tmp, &lj_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (n + 1 > b_r.Points.size(0)) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, b_r.Points.size(0),
                                      &oj_emlrtBCI, (emlrtConstCTX)&sp);
      }
      x[m + x.size(0) * (ii[0] - 1)] = b_r.Points[n];
      if (b_r.Points.size(1) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, b_r.Points.size(1), &jj_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (m + 1 > numPoints_tmp) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, numPoints_tmp, &mj_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (n + 1 > b_r.Points.size(0)) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, b_r.Points.size(0),
                                      &pj_emlrtBCI, (emlrtConstCTX)&sp);
      }
      y[m + y.size(0) * (ii[0] - 1)] = b_r.Points[n + b_r.Points.size(0)];
    }
  }
  st.site = &rtb_emlrtRSI;
  b_st.site = &aq_emlrtRSI;
  c_st.site = &cq_emlrtRSI;
  idx = 0;
  ii.set_size(&wp_emlrtRTEI, &c_st, loop_ub_tmp);
  d_st.site = &dq_emlrtRSI;
  if (loop_ub_tmp > 2147483646) {
    e_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(e_st);
  }
  b_ii = 0;
  exitg1 = false;
  while ((!exitg1) && (b_ii <= loop_ub_tmp - 1)) {
    if (visibility[b_ii] != 0.0) {
      idx++;
      ii[idx - 1] = b_ii + 1;
      if (idx >= loop_ub_tmp) {
        exitg1 = true;
      } else {
        b_ii++;
      }
    } else {
      b_ii++;
    }
  }
  if (idx > loop_ub_tmp) {
    emlrtErrorWithMessageIdR2018a(&c_st, &lb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (loop_ub_tmp == 1) {
    if (idx == 0) {
      ii.set_size(&cs_emlrtRTEI, &c_st, 0);
    }
  } else {
    if (idx < 1) {
      i = 0;
    } else {
      i = idx;
    }
    b_iv[0] = 1;
    b_iv[1] = i;
    d_st.site = &eq_emlrtRSI;
    ::coder::internal::indexShapeCheck(d_st, ii.size(0), b_iv);
    ii.set_size(&cs_emlrtRTEI, &c_st, i);
  }
  if ((visibility.size(0) == 1) && (ii.size(0) != 1)) {
    c_st.site = &bq_emlrtRSI;
    ::coder::internal::d_warning(c_st);
  }
  b_iv[0] = (*(int32_T(*)[2])x.size())[0];
  b_iv[1] = (*(int32_T(*)[2])x.size())[1];
  st.site = &stb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, ii.size(0));
  idx = ii.size(0);
  for (i = 0; i < idx; i++) {
    b_ii = ii[i];
    if ((b_ii < 1) || (b_ii > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b(b_ii, 1, loop_ub_tmp, &qj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  b_iv[0] = (*(int32_T(*)[2])y.size())[0];
  b_iv[1] = (*(int32_T(*)[2])y.size())[1];
  st.site = &ttb_emlrtRSI;
  ::coder::internal::indexShapeCheck(st, b_iv, ii.size(0));
  for (i = 0; i < idx; i++) {
    b_ii = ii[i];
    if ((b_ii < 1) || (b_ii > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b(b_ii, 1, loop_ub_tmp, &rj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  st.site = &utb_emlrtRSI;
  h_sparse(st, visibility, visibilitySp);
  st.site = &vtb_emlrtRSI;
  b_st.site = &ij_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  measurements.set_size(&ebb_emlrtRTEI, &sp, 2, ii.size(0));
  for (i = 0; i < idx; i++) {
    measurements[2 * i] = x[ii[i] - 1];
    measurements[2 * i + 1] = y[ii[i] - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace bundleAdjust
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (validateAndParseInputs.cpp)
