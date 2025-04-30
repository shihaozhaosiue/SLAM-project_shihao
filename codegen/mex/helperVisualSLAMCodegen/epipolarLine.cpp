//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// epipolarLine.cpp
//
// Code generation for function 'epipolarLine'
//

// Include files
#include "epipolarLine.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo xt_emlrtRSI{
    30,             // lineNo
    "epipolarLine", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m" // pathName
};

static emlrtRSInfo yt_emlrtRSI{
    38,             // lineNo
    "epipolarLine", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m" // pathName
};

static emlrtRSInfo au_emlrtRSI{
    40,             // lineNo
    "epipolarLine", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m" // pathName
};

static emlrtRTEInfo tb_emlrtRTEI{
    72,            // lineNo
    18,            // colNo
    "checkInputs", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m" // pName
};

static emlrtBCInfo xd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    42,             // lineNo
    13,             // colNo
    "",             // aName
    "epipolarLine", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m", // pName
    0 // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    42,             // lineNo
    44,             // colNo
    "",             // aName
    "epipolarLine", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m", // pName
    0 // checkKind
};

static emlrtBCInfo qt_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    42,             // lineNo
    48,             // colNo
    "",             // aName
    "epipolarLine", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m", // pName
    0 // checkKind
};

static emlrtBCInfo rt_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    43,             // lineNo
    48,             // colNo
    "",             // aName
    "epipolarLine", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m", // pName
    0 // checkKind
};

static emlrtRTEInfo qr_emlrtRTEI{
    38,             // lineNo
    27,             // colNo
    "epipolarLine", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m" // pName
};

static emlrtRTEInfo sr_emlrtRTEI{
    38,             // lineNo
    26,             // colNo
    "epipolarLine", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\eml\\epipolarLine.m" // pName
};

// Function Definitions
namespace coder {
void epipolarLine(const emlrtStack &sp, const real_T f[9],
                  const array<real32_T, 2U> &points, array<real_T, 2U> &lines)
{
  array<real_T, 2U> b_r;
  array<real_T, 2U> result;
  array<real_T, 2U> varargin_1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T loop_ub_tmp;
  int32_T nPts_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &xt_emlrtRSI;
  if (points.size(0) <= 0) {
    emlrtErrMsgIdAndExplicitTxt(
        &st, &tb_emlrtRTEI, (char_T *)"vision:epipolarLine:invalidPtsSize", 35,
        (char_T *)"Expected PTS to be a M-by-2 matrix.");
  }
  nPts_tmp = points.size(0);
  st.site = &yt_emlrtRSI;
  varargin_1.set_size(&qr_emlrtRTEI, &st, points.size(0), 2);
  loop_ub_tmp = points.size(0) << 1;
  for (int32_T i{0}; i < loop_ub_tmp; i++) {
    varargin_1[i] = points[i];
  }
  b_st.site = &kn_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if (varargin_1.size(0) != points.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  loop_ub_tmp = points.size(0);
  result.set_size(&rr_emlrtRTEI, &b_st, points.size(0), 3);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < nPts_tmp; i1++) {
      result[i1 + result.size(0) * i] = varargin_1[i1 + loop_ub_tmp * i];
    }
  }
  for (int32_T i{0}; i < nPts_tmp; i++) {
    result[i + result.size(0) * 2] = 1.0;
  }
  st.site = &yt_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (result.size(1) != 3) {
    emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  b_st.site = &ln_emlrtRSI;
  internal::blas::b_mtimes(b_st, result, f, b_r);
  lines.set_size(&sr_emlrtRTEI, &st, b_r.size(0), 3);
  st.site = &au_emlrtRSI;
  if (points.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < nPts_tmp; loop_ub_tmp++) {
    real_T b_lines_tmp;
    real_T lines_tmp;
    if (loop_ub_tmp + 1 > lines.size(0)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, lines.size(0),
                                    &xd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (loop_ub_tmp + 1 > nPts_tmp) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, nPts_tmp, &yd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    lines_tmp = points[loop_ub_tmp];
    b_lines_tmp = points[loop_ub_tmp + points.size(0)];
    lines[loop_ub_tmp] = (f[0] * lines_tmp + f[3] * b_lines_tmp) + f[6];
    if (loop_ub_tmp + 1 > lines.size(0)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, lines.size(0),
                                    &xd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (loop_ub_tmp + 1 > nPts_tmp) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, nPts_tmp, &yd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    lines[loop_ub_tmp + lines.size(0)] =
        (f[1] * lines_tmp + f[4] * b_lines_tmp) + f[7];
    if (loop_ub_tmp + 1 > lines.size(0)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, lines.size(0),
                                    &xd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (loop_ub_tmp + 1 > nPts_tmp) {
      emlrtDynamicBoundsCheckR2012b(loop_ub_tmp + 1, 1, nPts_tmp, &yd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    lines[loop_ub_tmp + lines.size(0) * 2] =
        (f[2] * lines_tmp + f[5] * b_lines_tmp) + f[8];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void epipolarLine(const emlrtStack &sp, const real32_T f[9],
                  const array<real32_T, 2U> &points, array<real32_T, 2U> &lines)
{
  array<real32_T, 2U> b_r;
  array<real32_T, 2U> b_result;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T nPts_tmp;
  int32_T result;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T b;
  boolean_T empty_non_axis_sizes;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &xt_emlrtRSI;
  if ((points.size(0) <= 0) || (points.size(1) != 2)) {
    emlrtErrMsgIdAndExplicitTxt(
        &st, &tb_emlrtRTEI, (char_T *)"vision:epipolarLine:invalidPtsSize", 35,
        (char_T *)"Expected PTS to be a M-by-2 matrix.");
  }
  nPts_tmp = points.size(0);
  st.site = &yt_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  b = ((points.size(0) != 0) && (points.size(1) != 0));
  if (b) {
    result = points.size(0);
  } else if (points.size(0) != 0) {
    result = points.size(0);
  } else {
    result = 0;
  }
  c_st.site = &jj_emlrtRSI;
  if ((points.size(0) != result) &&
      ((points.size(0) != 0) && (points.size(1) != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((points.size(0) != result) && (points.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || b) {
    input_sizes_idx_1 = static_cast<int8_T>(points.size(1));
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (points.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  b_result.set_size(&rr_emlrtRTEI, &b_st, result,
                    input_sizes_idx_1 + sizes_idx_1);
  loop_ub = input_sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result; i1++) {
      b_result[i1 + b_result.size(0) * i] = points[i1 + result * i];
    }
  }
  loop_ub = sizes_idx_1;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < result; i1++) {
      b_result[i1 + b_result.size(0) * input_sizes_idx_1] = 1.0F;
    }
  }
  st.site = &yt_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (b_result.size(1) != 3) {
    if ((b_result.size(0) == 1) && (b_result.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_st.site = &ln_emlrtRSI;
  internal::blas::mtimes(b_st, b_result, f, b_r);
  lines.set_size(&sr_emlrtRTEI, &st, b_r.size(0), 3);
  st.site = &au_emlrtRSI;
  if (points.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (result = 0; result < nPts_tmp; result++) {
    real32_T b_lines_tmp;
    real32_T lines_tmp;
    if (points.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.size(1), &qt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (points.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, points.size(1), &rt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (result + 1 > lines.size(0)) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, lines.size(0), &xd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (result + 1 > nPts_tmp) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, nPts_tmp, &yd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    lines_tmp = points[result];
    b_lines_tmp = points[result + points.size(0)];
    lines[result] = (f[0] * lines_tmp + f[3] * b_lines_tmp) + f[6];
    if (points.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.size(1), &qt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (points.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, points.size(1), &rt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (result + 1 > lines.size(0)) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, lines.size(0), &xd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (result + 1 > nPts_tmp) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, nPts_tmp, &yd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    lines[result + lines.size(0)] =
        (f[1] * lines_tmp + f[4] * b_lines_tmp) + f[7];
    if (points.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, points.size(1), &qt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (points.size(1) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, points.size(1), &rt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (result + 1 > lines.size(0)) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, lines.size(0), &xd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (result + 1 > nPts_tmp) {
      emlrtDynamicBoundsCheckR2012b(result + 1, 1, nPts_tmp, &yd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    lines[result + lines.size(0) * 2] =
        (f[2] * lines_tmp + f[5] * b_lines_tmp) + f[8];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (epipolarLine.cpp)
