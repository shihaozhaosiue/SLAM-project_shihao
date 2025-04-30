//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cameraProjection.cpp
//
// Code generation for function 'cameraProjection'
//

// Include files
#include "cameraProjection.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rigidtform3d.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void cameraProjection(const emlrtStack &sp, const cameraIntrinsics &intrinsics,
                      real_T camMatrix[12])
{
  static const int8_T b[12]{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &dv_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &ev_emlrtRSI;
  c_st.site = &fv_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  if (intrinsics.cameraIntrinsicsArrayData.size(0) *
          intrinsics.cameraIntrinsicsArrayData.size(1) !=
      1) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:cameraProjection:expectedScalar", 3, 4, 16, "cameraProjection");
  }
  for (int32_T i{0}; i < 3; i++) {
    real_T d;
    real_T d1;
    real_T d2;
    d = intrinsics.K[i];
    d1 = intrinsics.K[i + 3];
    d2 = intrinsics.K[i + 6];
    for (int32_T i1{0}; i1 < 4; i1++) {
      camMatrix[i + 3 * i1] = (d * static_cast<real_T>(b[3 * i1]) +
                               d1 * static_cast<real_T>(b[3 * i1 + 1])) +
                              d2 * static_cast<real_T>(b[3 * i1 + 2]);
    }
  }
}

void cameraProjection(const emlrtStack &sp, const cameraIntrinsics &intrinsics,
                      const b_rigidtform3d &tform, real32_T camMatrix[12])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T tform_tmp;
  real32_T b_tform[12];
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &dv_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &ev_emlrtRSI;
  c_st.site = &fv_emlrtRSI;
  d_st.site = &be_emlrtRSI;
  if (intrinsics.cameraIntrinsicsArrayData.size(0) *
          intrinsics.cameraIntrinsicsArrayData.size(1) !=
      1) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:cameraProjection:expectedScalar", 3, 4, 16, "cameraProjection");
  }
  for (int32_T i{0}; i < 3; i++) {
    b_tform[3 * i] = tform.R[3 * i];
    tform_tmp = 3 * i + 1;
    b_tform[tform_tmp] = tform.R[tform_tmp];
    tform_tmp = 3 * i + 2;
    b_tform[tform_tmp] = tform.R[tform_tmp];
    b_tform[i + 9] = tform.Translation[i];
  }
  for (int32_T i{0}; i < 3; i++) {
    real_T d;
    real_T d1;
    real_T d2;
    d = intrinsics.K[i];
    d1 = intrinsics.K[i + 3];
    d2 = intrinsics.K[i + 6];
    for (tform_tmp = 0; tform_tmp < 4; tform_tmp++) {
      camMatrix[i + 3 * tform_tmp] =
          (static_cast<real32_T>(d) * b_tform[3 * tform_tmp] +
           static_cast<real32_T>(d1) * b_tform[3 * tform_tmp + 1]) +
          static_cast<real32_T>(d2) * b_tform[3 * tform_tmp + 2];
    }
  }
}

} // namespace coder

// End of code generation (cameraProjection.cpp)
