//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// computeRigidTransform.cpp
//
// Code generation for function 'computeRigidTransform'
//

// Include files
#include "computeRigidTransform.h"
#include "combineVectorElements.h"
#include "det.h"
#include "helperVisualSLAMCodegen_data.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "svd1.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo tic_emlrtRSI{
    31,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

static emlrtRSInfo xic_emlrtRSI{
    43,                      // lineNo
    "computeRigidTransform", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pathName
};

static emlrtDCInfo lb_emlrtDCI{
    40,                      // lineNo
    20,                      // colNo
    "computeRigidTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m", // pName
    4                                       // checkKind
};

static emlrtRTEInfo bib_emlrtRTEI{
    28,                      // lineNo
    1,                       // colNo
    "computeRigidTransform", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\computeRigidTransform.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
void computeRigidTransform(const emlrtStack &sp, const real_T p_data[],
                           const int32_T p_size[2], const real_T q[9],
                           real_T R_data[], int32_T R_size[2], real_T t[3])
{
  __m128d r1;
  __m128d r2;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  array<real_T, 2U> b_U1_data;
  array<real_T, 2U> b_p_data;
  array<real_T, 2U> b_r;
  array<real_T, 2U> y;
  emlrtStack b_st;
  emlrtStack st;
  real_T U1_data[25];
  real_T b_data[25];
  real_T C_data[15];
  real_T normPoints1_data[15];
  real_T normPoints2[9];
  real_T v_data[5];
  real_T s_data[3];
  real_T alpha1;
  real_T beta1;
  int32_T U1_size[2];
  int32_T b_iv[2];
  int32_T acoef;
  int32_T bcoef;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T csz_idx_1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &sic_emlrtRSI;
  b_p_data.set((real_T *)&p_data[0], p_size[0], p_size[1]);
  b_st.site = &mo_emlrtRSI;
  b_combineVectorElements(b_st, b_p_data, b_r);
  loop_ub = b_r.size(1) - 1;
  b_r.set_size(&bib_emlrtRTEI, &st, 1, b_r.size(1));
  for (bcoef = 0; bcoef <= loop_ub; bcoef++) {
    b_r[bcoef] = b_r[bcoef] / 3.0;
  }
  t[0] = b_sumColumnB(q, 1) / 3.0;
  t[1] = b_sumColumnB(q, 2) / 3.0;
  t[2] = b_sumColumnB(q, 3) / 3.0;
  st.site = &tic_emlrtRSI;
  if (b_r.size(1) == 1) {
    csz_idx_1 = static_cast<int8_T>(p_size[1]);
  } else if (p_size[1] == 1) {
    csz_idx_1 = static_cast<int8_T>(b_r.size(1));
  } else if (p_size[1] == b_r.size(1)) {
    csz_idx_1 = static_cast<int8_T>(p_size[1]);
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &wb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  loop_ub = csz_idx_1;
  if (csz_idx_1 != 0) {
    acoef = (p_size[1] != 1);
    bcoef = (b_r.size(1) != 1);
    for (int32_T k{0}; k < loop_ub; k++) {
      int32_T varargin_2;
      int32_T varargin_3;
      varargin_2 = acoef * k;
      varargin_3 = bcoef * k;
      _mm_storeu_pd(&normPoints1_data[3 * k],
                    _mm_sub_pd(_mm_loadu_pd(&p_data[3 * varargin_2]),
                               _mm_set1_pd(b_r[varargin_3])));
      normPoints1_data[3 * k + 2] =
          p_data[3 * varargin_2 + 2] - b_r[varargin_3];
    }
  }
  _mm_storeu_pd(&normPoints2[0],
                _mm_sub_pd(_mm_loadu_pd(&q[0]), _mm_set1_pd(t[0])));
  normPoints2[2] = q[2] - t[0];
  _mm_storeu_pd(&normPoints2[3],
                _mm_sub_pd(_mm_loadu_pd(&q[3]), _mm_set1_pd(t[1])));
  normPoints2[5] = q[5] - t[1];
  _mm_storeu_pd(&normPoints2[6],
                _mm_sub_pd(_mm_loadu_pd(&q[6]), _mm_set1_pd(t[2])));
  normPoints2[8] = q[8] - t[2];
  st.site = &uic_emlrtRSI;
  if (csz_idx_1 == 0) {
    b_iv[0] = 0;
    b_iv[1] = 3;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t) static_cast<int32_T>(csz_idx_1);
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t) static_cast<int32_T>(csz_idx_1);
    b_iv[0] = csz_idx_1;
    b_iv[1] = 3;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &normPoints1_data[0],
          &lda_t, &normPoints2[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
  st.site = &vic_emlrtRSI;
  bcoef = b_iv[0] * 3;
  p = true;
  for (int32_T k{0}; k < bcoef; k++) {
    if (p) {
      alpha1 = C_data[k];
      if (muDoubleScalarIsInf(alpha1) || muDoubleScalarIsNaN(alpha1)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (p) {
    b_st.site = &bm_emlrtRSI;
    ::coder::internal::b_svd(b_st, C_data, b_iv, U1_data, U1_size, s_data,
                             normPoints2);
  } else {
    csz_idx_1 = static_cast<int8_T>(b_iv[0]);
    b_iv[0] = static_cast<int8_T>(b_iv[0]);
    b_iv[1] = 3;
    loop_ub = csz_idx_1 * 3;
    if (loop_ub - 1 >= 0) {
      std::memset(&C_data[0], 0,
                  static_cast<uint32_T>(loop_ub) * sizeof(real_T));
    }
    b_st.site = &cm_emlrtRSI;
    ::coder::internal::b_svd(b_st, C_data, b_iv, U1_data, U1_size, s_data,
                             normPoints2);
    loop_ub = U1_size[0];
    acoef = U1_size[1];
    loop_ub *= acoef;
    for (bcoef = 0; bcoef < loop_ub; bcoef++) {
      U1_data[bcoef] = rtNaN;
    }
    for (bcoef = 0; bcoef < 9; bcoef++) {
      normPoints2[bcoef] = rtNaN;
    }
  }
  st.site = &wic_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (U1_size[1] != 3) {
    if ((U1_size[0] == 1) && (U1_size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  b_U1_data.set(&U1_data[0], U1_size[0], 3);
  b_st.site = &ln_emlrtRSI;
  ::coder::internal::blas::b_mtimes(b_st, b_U1_data, normPoints2, y);
  st.site = &wic_emlrtRSI;
  b_iv[0] = (*(int32_T(*)[2])y.size())[0];
  b_iv[1] = (*(int32_T(*)[2])y.size())[1];
  b_st.site = &wic_emlrtRSI;
  alpha1 = det(b_st, (const real_T *)y.data(), b_iv);
  alpha1 = muDoubleScalarSign(alpha1);
  b_st.site = &wic_emlrtRSI;
  if (p_size[1] - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &lb_emlrtDCI, &b_st);
  }
  bcoef = p_size[1];
  loop_ub = p_size[1] - 1;
  for (acoef = 0; acoef < loop_ub; acoef++) {
    v_data[acoef] = 1.0;
  }
  v_data[p_size[1] - 1] = alpha1;
  acoef = p_size[1];
  loop_ub = p_size[1] * p_size[1];
  if (loop_ub - 1 >= 0) {
    std::memset(&b_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  for (loop_ub = 0; loop_ub < bcoef; loop_ub++) {
    b_data[loop_ub + acoef * loop_ub] = v_data[loop_ub];
  }
  b_st.site = &mn_emlrtRSI;
  if (p_size[1] != 3) {
    if (p_size[1] == 1) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)3;
  n_t = (ptrdiff_t)p_size[1];
  k_t = (ptrdiff_t)3;
  lda_t = (ptrdiff_t)3;
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)3;
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &normPoints2[0], &lda_t,
        &b_data[0], &ldb_t, &beta1, &normPoints1_data[0], &ldc_t);
  st.site = &wic_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (p_size[1] != 3) {
    emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  if (U1_size[0] == 0) {
    R_size[0] = 3;
    R_size[1] = 0;
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)U1_size[0];
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)U1_size[0];
    ldc_t = (ptrdiff_t)3;
    R_size[0] = 3;
    R_size[1] = U1_size[0];
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &normPoints1_data[0],
          &lda_t, &U1_data[0], &ldb_t, &beta1, &R_data[0], &ldc_t);
  }
  st.site = &xic_emlrtRSI;
  b_st.site = &mn_emlrtRSI;
  if (R_size[1] != b_r.size(1)) {
    if (b_r.size(1) == 1) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &u_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if ((R_size[1] == 0) || (b_r.size(1) == 0)) {
    s_data[0] = 0.0;
    s_data[1] = 0.0;
    s_data[2] = 0.0;
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)R_size[1];
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)1;
    ldc_t = (ptrdiff_t)3;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &R_data[0], &lda_t,
          &b_r[0], &ldb_t, &beta1, &s_data[0], &ldc_t);
  }
  r1 = _mm_loadu_pd(&t[0]);
  r2 = _mm_loadu_pd(&s_data[0]);
  _mm_storeu_pd(&t[0], _mm_sub_pd(r1, r2));
  t[2] -= s_data[2];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (computeRigidTransform.cpp)
