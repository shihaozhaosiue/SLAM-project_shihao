//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estWorldPoseImpl.cpp
//
// Code generation for function 'estWorldPoseImpl'
//

// Include files
#include "estWorldPoseImpl.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "solveP3P.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ehc_emlrtRSI{
    63,                // lineNo
    "solveCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo fhc_emlrtRSI{
    68,                // lineNo
    "solveCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo ghc_emlrtRSI{
    78,                // lineNo
    "solveCameraPose", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo yic_emlrtRSI{
    96,                   // lineNo
    "chooseBestSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtRSInfo ajc_emlrtRSI{
    102,                  // lineNo
    "chooseBestSolution", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m" // pathName
};

static emlrtBCInfo ap_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    105,                  // lineNo
    17,                   // colNo
    "",                   // aName
    "chooseBestSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo bp_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    104,                  // lineNo
    13,                   // colNo
    "",                   // aName
    "chooseBestSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo cp_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    95,                   // lineNo
    35,                   // colNo
    "",                   // aName
    "chooseBestSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo dp_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    95,                   // lineNo
    28,                   // colNo
    "",                   // aName
    "chooseBestSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo ep_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    99,                   // lineNo
    12,                   // colNo
    "",                   // aName
    "chooseBestSolution", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\estWorldPoseImpl.m", // pName
    0                                  // checkKind
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
void solveCameraPose(const emlrtStack &sp, const real_T points_data[],
                     const int32_T points_size[2], const real_T varargin_1[9],
                     real_T pose_R[9], real_T pose_t[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T Rs_data[36];
  real_T b_points_data[20];
  real_T Ts_data[12];
  real_T imagePoints[8];
  real_T p_data[6];
  real_T errors_data[4];
  int32_T Rs_size[3];
  int32_T Ts_size[2];
  int32_T b_points_size[2];
  int32_T i;
  int32_T i1;
  int32_T imagePoints_tmp;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ehc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  i = points_size[1];
  for (i1 = 0; i1 < 2; i1++) {
    if (i1 + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, i, &yo_emlrtBCI, &st);
    }
    imagePoints_tmp = i1 << 2;
    imagePoints[imagePoints_tmp] = points_data[4 * i1];
    if (i1 + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, 1, &yo_emlrtBCI, &st);
    }
    imagePoints[imagePoints_tmp + 1] = points_data[4 * i1 + 1];
    if (i1 + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, 1, &yo_emlrtBCI, &st);
    }
    imagePoints[imagePoints_tmp + 2] = points_data[4 * i1 + 2];
    if (i1 + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, 1, &yo_emlrtBCI, &st);
    }
    imagePoints[imagePoints_tmp + 3] = points_data[4 * i1 + 3];
  }
  if (points_size[1] < 3) {
    i = 0;
    i1 = 0;
  } else {
    i = 2;
    i1 = points_size[1];
  }
  b_points_size[0] = 4;
  loop_ub = i1 - i;
  b_points_size[1] = loop_ub;
  for (i1 = 0; i1 < loop_ub; i1++) {
    imagePoints_tmp = i + i1;
    b_points_data[4 * i1] = points_data[4 * imagePoints_tmp];
    b_points_data[4 * i1 + 1] = points_data[4 * imagePoints_tmp + 1];
    b_points_data[4 * i1 + 2] = points_data[4 * imagePoints_tmp + 2];
    b_points_data[4 * i1 + 3] = points_data[4 * imagePoints_tmp + 3];
  }
  st.site = &fhc_emlrtRSI;
  solveP3P(st, imagePoints, b_points_data, b_points_size, varargin_1, Rs_data,
           Rs_size, Ts_data, Ts_size);
  imagePoints_tmp = loop_ub - 1;
  for (i1 = 0; i1 <= imagePoints_tmp; i1++) {
    p_data[i1] = points_data[4 * (i + i1) + 3];
  }
  p_data[loop_ub] = 1.0;
  for (i = 0; i < 9; i++) {
    pose_R[i] = rtNaN;
  }
  pose_t[0] = rtNaN;
  pose_t[1] = rtNaN;
  pose_t[2] = rtNaN;
  if (Rs_size[2] != 0) {
    real_T b_d;
    real_T d;
    int32_T Rs_tmp;
    int32_T errors_size;
    st.site = &ghc_emlrtRSI;
    i = Ts_size[0];
    errors_size = Ts_size[0];
    for (int32_T b_i{0}; b_i < i; b_i++) {
      real_T Rs[12];
      real_T b_Rs[12];
      real_T projectedPoint[3];
      real_T d1;
      real_T d2;
      if (b_i + 1 > Rs_size[2]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Rs_size[2], &dp_emlrtBCI,
                                      &st);
      }
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &cp_emlrtBCI, &st);
      }
      b_st.site = &yic_emlrtRSI;
      c_st.site = &mn_emlrtRSI;
      if (loop_ub + 1 != 4) {
        if (loop_ub + 1 == 1) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &u_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (i1 = 0; i1 < 3; i1++) {
        imagePoints_tmp = i1 << 2;
        Rs_tmp = 3 * i1 + 9 * b_i;
        Rs[imagePoints_tmp] = Rs_data[Rs_tmp];
        Rs[imagePoints_tmp + 1] = Rs_data[Rs_tmp + 1];
        Rs[imagePoints_tmp + 2] = Rs_data[Rs_tmp + 2];
        Rs[imagePoints_tmp + 3] = Ts_data[b_i + Ts_size[0] * i1];
      }
      for (i1 = 0; i1 < 4; i1++) {
        d = Rs[i1];
        b_d = Rs[i1 + 4];
        d1 = Rs[i1 + 8];
        for (imagePoints_tmp = 0; imagePoints_tmp < 3; imagePoints_tmp++) {
          b_Rs[i1 + (imagePoints_tmp << 2)] =
              (d * varargin_1[3 * imagePoints_tmp] +
               b_d * varargin_1[3 * imagePoints_tmp + 1]) +
              d1 * varargin_1[3 * imagePoints_tmp + 2];
        }
      }
      d = p_data[0];
      b_d = p_data[1];
      d1 = p_data[2];
      d2 = p_data[3];
      for (i1 = 0; i1 < 3; i1++) {
        imagePoints_tmp = i1 << 2;
        projectedPoint[i1] =
            ((d * b_Rs[imagePoints_tmp] + b_d * b_Rs[imagePoints_tmp + 1]) +
             d1 * b_Rs[imagePoints_tmp + 2]) +
            d2 * b_Rs[imagePoints_tmp + 3];
      }
      d = imagePoints[3] - projectedPoint[0] / projectedPoint[2];
      b_d = d * d;
      d = imagePoints[7] - projectedPoint[1] / projectedPoint[2];
      b_d += d * d;
      if (b_i + 1 > errors_size) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, errors_size, &ep_emlrtBCI,
                                      &st);
      }
      errors_data[b_i] = b_d;
    }
    b_st.site = &ajc_emlrtRSI;
    c_st.site = &bi_emlrtRSI;
    d_st.site = &ci_emlrtRSI;
    e_st.site = &di_emlrtRSI;
    if (Ts_size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &e_st, &m_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    if (Ts_size[0] <= 2) {
      if (Ts_size[0] == 1) {
        Rs_tmp = 1;
      } else if ((errors_data[0] > errors_data[1]) ||
                 (muDoubleScalarIsNaN(errors_data[0]) &&
                  (!muDoubleScalarIsNaN(errors_data[1])))) {
        Rs_tmp = 2;
      } else {
        Rs_tmp = 1;
      }
    } else {
      if (!muDoubleScalarIsNaN(errors_data[0])) {
        Rs_tmp = 1;
      } else {
        boolean_T exitg1;
        Rs_tmp = 0;
        imagePoints_tmp = 2;
        exitg1 = false;
        while ((!exitg1) && (imagePoints_tmp <= errors_size)) {
          if (!muDoubleScalarIsNaN(errors_data[imagePoints_tmp - 1])) {
            Rs_tmp = imagePoints_tmp;
            exitg1 = true;
          } else {
            imagePoints_tmp++;
          }
        }
      }
      if (Rs_tmp == 0) {
        Rs_tmp = 1;
      } else {
        b_d = errors_data[Rs_tmp - 1];
        i = Rs_tmp + 1;
        for (imagePoints_tmp = i; imagePoints_tmp <= errors_size;
             imagePoints_tmp++) {
          d = errors_data[imagePoints_tmp - 1];
          if (b_d > d) {
            b_d = d;
            Rs_tmp = imagePoints_tmp;
          }
        }
      }
    }
    if (Rs_tmp > Ts_size[0]) {
      emlrtDynamicBoundsCheckR2012b(Rs_tmp, 1, Ts_size[0], &bp_emlrtBCI, &st);
    }
    pose_t[0] = Ts_data[Rs_tmp - 1];
    pose_t[1] = Ts_data[(Rs_tmp + Ts_size[0]) - 1];
    pose_t[2] = Ts_data[(Rs_tmp + Ts_size[0] * 2) - 1];
    if (Rs_tmp > Rs_size[2]) {
      emlrtDynamicBoundsCheckR2012b(Rs_tmp, 1, Rs_size[2], &ap_emlrtBCI, &st);
    }
    for (i = 0; i < 3; i++) {
      imagePoints_tmp = 3 * i + 9 * (Rs_tmp - 1);
      pose_R[3 * i] = Rs_data[imagePoints_tmp];
      pose_R[3 * i + 1] = Rs_data[imagePoints_tmp + 1];
      pose_R[3 * i + 2] = Rs_data[imagePoints_tmp + 2];
    }
  }
}

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (estWorldPoseImpl.cpp)
