//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// constrainToRotationMatrix3D.cpp
//
// Code generation for function 'constrainToRotationMatrix3D'
//

// Include files
#include "constrainToRotationMatrix3D.h"
#include "det.h"
#include "helperVisualSLAMCodegen_data.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "xzgetrf.h"
#include "mwmathutil.h"
#include <algorithm>
#include <emmintrin.h>
#include <xmmintrin.h>

// Function Definitions
namespace coder {
namespace images {
namespace geotrans {
namespace internal {
void constrainToRotationMatrix3D(const emlrtStack &sp, const real32_T R[9],
                                 real32_T Rc[9])
{
  __m128 b_r;
  __m128 r1;
  emlrtStack st;
  int32_T k;
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T minval[9];
  real32_T x;
  st.prev = &sp;
  st.tls = sp.tls;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muSingleScalarMax(muSingleScalarMin(R[k], 1.0F), -1.0F);
  }
  st.site = &kv_emlrtRSI;
  svd(st, R_clamped, U, minval, V);
  for (int32_T i{0}; i < 3; i++) {
    real32_T f;
    real32_T f1;
    x = U[i];
    f = U[i + 3];
    f1 = U[i + 6];
    for (k = 0; k < 3; k++) {
      Rc[i + 3 * k] = (x * V[k] + f * V[k + 3]) + f1 * V[k + 6];
    }
  }
  st.site = &lv_emlrtRSI;
  if (det(st, Rc) < 0.0F) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      x = Rc[3 * i];
      Rc[3 * i] = Rc[k];
      Rc[k] = x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&Rc[0]);
  _mm_storeu_ps(&minval[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&Rc[4]);
  _mm_storeu_ps(&minval[4], _mm_sub_ps(b_r, r1));
  minval[8] = R_clamped[8] - Rc[8];
  st.site = &mv_emlrtRSI;
  x = b_norm(st, minval);
  if (x / 1.1920929E-7F < 10.0F) {
    for (int32_T i{0}; i < 9; i++) {
      Rc[i] = R_clamped[i];
    }
  }
}

void constrainToRotationMatrix3D(const emlrtStack &sp, const real_T R[9],
                                 real_T Rc[9])
{
  __m128d b_r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T R_clamped[9];
  real_T U[9];
  real_T V[9];
  real_T minval[9];
  real_T d;
  int32_T ipiv[3];
  int32_T k;
  boolean_T isodd;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (k = 0; k < 9; k++) {
    R_clamped[k] = muDoubleScalarMax(muDoubleScalarMin(R[k], 1.0), -1.0);
  }
  st.site = &kv_emlrtRSI;
  svd(st, R_clamped, U, minval, V);
  for (int32_T i{0}; i < 3; i++) {
    real_T b_d;
    real_T d1;
    d = U[i];
    b_d = U[i + 3];
    d1 = U[i + 6];
    for (k = 0; k < 3; k++) {
      Rc[i + 3 * k] = (d * V[k] + b_d * V[k + 3]) + d1 * V[k + 6];
    }
  }
  st.site = &lv_emlrtRSI;
  b_st.site = &uo_emlrtRSI;
  std::copy(&Rc[0], &Rc[9], &minval[0]);
  c_st.site = &yp_emlrtRSI;
  ::coder::internal::reflapack::xzgetrf(c_st, minval, ipiv);
  isodd = (ipiv[0] > 1);
  d = minval[0] * minval[4] * minval[8];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }
  if (isodd) {
    d = -d;
  }
  if (d < 0.0) {
    for (int32_T i{0}; i < 3; i++) {
      k = 3 * i + 1;
      d = Rc[3 * i];
      Rc[3 * i] = Rc[k];
      Rc[k] = d;
    }
  }
  b_r = _mm_loadu_pd(&R_clamped[0]);
  r1 = _mm_loadu_pd(&Rc[0]);
  _mm_storeu_pd(&minval[0], _mm_sub_pd(b_r, r1));
  b_r = _mm_loadu_pd(&R_clamped[2]);
  r1 = _mm_loadu_pd(&Rc[2]);
  _mm_storeu_pd(&minval[2], _mm_sub_pd(b_r, r1));
  b_r = _mm_loadu_pd(&R_clamped[4]);
  r1 = _mm_loadu_pd(&Rc[4]);
  _mm_storeu_pd(&minval[4], _mm_sub_pd(b_r, r1));
  b_r = _mm_loadu_pd(&R_clamped[6]);
  r1 = _mm_loadu_pd(&Rc[6]);
  _mm_storeu_pd(&minval[6], _mm_sub_pd(b_r, r1));
  minval[8] = R_clamped[8] - Rc[8];
  st.site = &mv_emlrtRSI;
  d = b_norm(st, minval) / 2.2204460492503131E-16;
  if (d < 10.0) {
    std::copy(&R_clamped[0], &R_clamped[9], &Rc[0]);
  }
}

} // namespace internal
} // namespace geotrans
} // namespace images
} // namespace coder

// End of code generation (constrainToRotationMatrix3D.cpp)
