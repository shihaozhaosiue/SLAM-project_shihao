//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// pose2extr.cpp
//
// Code generation for function 'pose2extr'
//

// Include files
#include "pose2extr.h"
#include "checkTransformationMatrixCondition.h"
#include "colon.h"
#include "constrainToRotationMatrix3D.h"
#include "det.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "inv.h"
#include "norm.h"
#include "repmat.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "warning.h"
#include "xzgetrf.h"
#include "blas.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo xo_emlrtRSI{
    58,             // lineNo
    "ceval_xgetrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" // pathName
};

static emlrtRSInfo vs_emlrtRSI{
    67,      // lineNo
    "xtrsm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" // pathName
};

static emlrtRSInfo ws_emlrtRSI{
    81,           // lineNo
    "xtrsm_blas", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" // pathName
};

static emlrtRSInfo
    hx_emlrtRSI{
        8,           // lineNo
        "pose2extr", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pose2extr.m" // pathName
    };

static emlrtRSInfo ix_emlrtRSI{
    21,    // lineNo
    "inv", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo jx_emlrtRSI{
    173,      // lineNo
    "invNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo kx_emlrtRSI{
    174,      // lineNo
    "invNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo lx_emlrtRSI{
    177,      // lineNo
    "invNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo mx_emlrtRSI{
    180,      // lineNo
    "invNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo nx_emlrtRSI{
    183,      // lineNo
    "invNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo ox_emlrtRSI{
    190,      // lineNo
    "invNxN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo px_emlrtRSI{
    14,              // lineNo
    "eml_ipiv2perm", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_"
    "ipiv2perm.m" // pathName
};

// Function Definitions
namespace coder {
void pose2extr(const emlrtStack &sp, rigidtform3d &camPose)
{
  static const int32_T b_iv1[2]{1, 6};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  static const int8_T b_iv[4]{0, 0, 0, 1};
  __m128 b_r;
  __m128 r1;
  ptrdiff_t ipiv_t_data[4];
  ptrdiff_t tmp_data[4];
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  array<int32_T, 2U> y;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T i;
  int32_T i1;
  int32_T pipk;
  real32_T A_in_data[16];
  real32_T A_out_data[16];
  real32_T x_data[16];
  real32_T result_data[12];
  real32_T varargin_2_data[12];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T n1x;
  real32_T n1xinv;
  real32_T rc;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  int8_T input_sizes_idx_1;
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
  st.site = &hx_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  if (camPose.Data.size[0] * camPose.Data.size[1] != 1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:pose2extr:expectedScalar", 3, 4, 7, "camPose");
  }
  st.site = &cx_emlrtRSI;
  b_st.site = &dx_emlrtRSI;
  c_st.site = &iw_emlrtRSI;
  d_st.site = &jw_emlrtRSI;
  pipk = camPose.Translation.size[1];
  if (pipk - 1 >= 0) {
    std::copy(&camPose.Translation.data[0], &camPose.Translation.data[pipk],
              &varargin_2_data[0]);
  }
  e_st.site = &kn_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if ((pipk != 3) && (pipk != 0)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  input_sizes_idx_1 = static_cast<int8_T>(pipk != 0);
  for (i = 0; i < 3; i++) {
    result_data[3 * i] = camPose.R[3 * i];
    pipk = 3 * i + 1;
    result_data[pipk] = camPose.R[pipk];
    pipk = 3 * i + 2;
    result_data[pipk] = camPose.R[pipk];
  }
  pipk = input_sizes_idx_1;
  if (pipk - 1 >= 0) {
    result_data[9] = varargin_2_data[0];
    result_data[10] = varargin_2_data[1];
    result_data[11] = varargin_2_data[2];
  }
  d_st.site = &jw_emlrtRSI;
  e_st.site = &kn_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if (input_sizes_idx_1 + 3 != 4) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  for (i = 0; i < 4; i++) {
    A_out_data[4 * i] = result_data[3 * i];
    A_out_data[4 * i + 1] = result_data[3 * i + 1];
    A_out_data[4 * i + 2] = result_data[3 * i + 2];
    A_out_data[4 * i + 3] = b_iv[i];
  }
  b_st.site = &dx_emlrtRSI;
  c_st.site = &dx_emlrtRSI;
  d_st.site = &ix_emlrtRSI;
  std::memset(&A_in_data[0], 0, 16U * sizeof(real32_T));
  e_st.site = &jx_emlrtRSI;
  std::copy(&A_out_data[0], &A_out_data[16], &x_data[0]);
  f_st.site = &vo_emlrtRSI;
  g_st.site = &xo_emlrtRSI;
  repmat((ptrdiff_t)0.0, tmp_data);
  info_t = LAPACKE_sgetrf_work(102, (ptrdiff_t)4, (ptrdiff_t)4, &x_data[0],
                               (ptrdiff_t)4, &ipiv_t_data[0]);
  g_st.site = &wo_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&g_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&g_st, &gb_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    19, &cv2[0], 12, (int32_T)info_t);
    }
  }
  e_st.site = &kx_emlrtRSI;
  f_st.site = &px_emlrtRSI;
  g_st.site = &pj_emlrtRSI;
  h_st.site = &yo_emlrtRSI;
  eml_integer_colon_dispatcher(h_st, 4, y);
  if ((int32_T)ipiv_t_data[0] > 1) {
    pipk = y[(int32_T)ipiv_t_data[0] - 1];
    y[(int32_T)ipiv_t_data[0] - 1] = y[0];
    y[0] = pipk;
  }
  if ((int32_T)ipiv_t_data[1] > 2) {
    pipk = y[(int32_T)ipiv_t_data[1] - 1];
    y[(int32_T)ipiv_t_data[1] - 1] = y[1];
    y[1] = pipk;
  }
  if ((int32_T)ipiv_t_data[2] > 3) {
    pipk = y[(int32_T)ipiv_t_data[2] - 1];
    y[(int32_T)ipiv_t_data[2] - 1] = y[2];
    y[2] = pipk;
  }
  if ((int32_T)ipiv_t_data[3] > 4) {
    pipk = y[(int32_T)ipiv_t_data[3] - 1];
    y[(int32_T)ipiv_t_data[3] - 1] = y[3];
    y[3] = pipk;
  }
  e_st.site = &lx_emlrtRSI;
  for (int32_T k{0}; k < 4; k++) {
    i = y[k];
    pipk = 4 * (i - 1);
    A_in_data[k + pipk] = 1.0F;
    e_st.site = &mx_emlrtRSI;
    for (int32_T j{k + 1}; j < 5; j++) {
      i = (j + pipk) - 1;
      if (A_in_data[i] != 0.0F) {
        i1 = j + 1;
        e_st.site = &nx_emlrtRSI;
        for (int32_T b_i{i1}; b_i < 5; b_i++) {
          int32_T A_in_data_tmp;
          A_in_data_tmp = (b_i + pipk) - 1;
          A_in_data[A_in_data_tmp] -=
              A_in_data[i] * x_data[(b_i + 4 * (j - 1)) - 1];
        }
      }
    }
  }
  e_st.site = &ox_emlrtRSI;
  f_st.site = &vs_emlrtRSI;
  g_st.site = &ws_emlrtRSI;
  n1x = 1.0F;
  DIAGA1 = 'N';
  TRANSA1 = 'N';
  UPLO1 = 'U';
  SIDE1 = 'L';
  info_t = (ptrdiff_t)4;
  n_t = (ptrdiff_t)4;
  lda_t = (ptrdiff_t)4;
  ldb_t = (ptrdiff_t)4;
  strsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &x_data[0],
        &lda_t, &A_in_data[0], &ldb_t);
  d_st.site = &ex_emlrtRSI;
  n1x = c_norm(A_out_data);
  n1xinv = c_norm(A_in_data);
  rc = 1.0F / (n1x * n1xinv);
  if ((n1x == 0.0F) || (n1xinv == 0.0F) || (rc == 0.0F)) {
    if (!emlrtSetWarningFlag(&d_st)) {
      e_st.site = &fx_emlrtRSI;
      internal::b_warning(e_st);
    }
  } else if ((muSingleScalarIsNaN(rc) || (rc < 1.1920929E-7F)) &&
             (!emlrtSetWarningFlag(&d_st))) {
    char_T str[14];
    e_st.site = &gx_emlrtRSI;
    b_y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv1[0]);
    emlrtInitCharArrayR2013a(&e_st, 6, m, &rfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = nullptr;
    m = emlrtCreateNumericMatrix(1, 1, mxSINGLE_CLASS, mxREAL);
    *static_cast<real32_T *>(emlrtMxGetData(m)) = rc;
    emlrtAssign(&c_y, m);
    f_st.site = &hid_emlrtRSI;
    emlrt_marshallIn(f_st, b_sprintf(f_st, b_y, c_y, e_emlrtMCI),
                     "<output of sprintf>", str);
    e_st.site = &gx_emlrtRSI;
    internal::warning(e_st, str);
  }
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (int32_T k{0}; k < 9; k++) {
    n1x = muSingleScalarMin(A_in_data[k % 3 + 4 * (k / 3)], 1.0F);
    camPose.R[k] = n1x;
    R_clamped[k] = muSingleScalarMax(n1x, -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, camPose.R, V);
  for (i = 0; i < 3; i++) {
    n1x = U[i];
    n1xinv = U[i + 3];
    rc = U[i + 6];
    for (i1 = 0; i1 < 3; i1++) {
      R2[i + 3 * i1] = (n1x * V[i1] + n1xinv * V[i1 + 3]) + rc * V[i1 + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (i = 0; i < 3; i++) {
      pipk = 3 * i + 1;
      n1x = R2[3 * i];
      R2[3 * i] = R2[pipk];
      R2[pipk] = n1x;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  n1x = b_norm(f_st, U);
  if (n1x / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (i = 0; i < 3; i++) {
    pipk = i << 2;
    A_out_data[pipk] = R2[3 * i];
    A_out_data[pipk + 1] = R2[3 * i + 1];
    A_out_data[pipk + 2] = R2[3 * i + 2];
    A_out_data[i + 12] = A_in_data[i + 12];
  }
  A_out_data[3] = 0.0F;
  A_out_data[7] = 0.0F;
  A_out_data[11] = 0.0F;
  A_out_data[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  n1x = c_norm(d_st, A_out_data);
  d_st.site = &fp_emlrtRSI;
  n1xinv = d_norm(d_st, A_in_data);
  b_r = _mm_loadu_ps(&A_out_data[0]);
  r1 = _mm_loadu_ps(&A_in_data[0]);
  _mm_storeu_ps(&x_data[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&A_out_data[4]);
  r1 = _mm_loadu_ps(&A_in_data[4]);
  _mm_storeu_ps(&x_data[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&A_out_data[8]);
  r1 = _mm_loadu_ps(&A_in_data[8]);
  _mm_storeu_ps(&x_data[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&A_out_data[12]);
  r1 = _mm_loadu_ps(&A_in_data[12]);
  _mm_storeu_ps(&x_data[12], _mm_sub_ps(b_r, r1));
  d_st.site = &gp_emlrtRSI;
  rc = c_norm(d_st, x_data);
  if (!(rc / muSingleScalarMax(muSingleScalarMax(n1x, n1xinv),
                               1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, A_out_data);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (int32_T k{0}; k < 9; k++) {
    n1x = muSingleScalarMin(R2[k], 1.0F);
    camPose.R[k] = n1x;
    R_clamped[k] = muSingleScalarMax(n1x, -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, camPose.R, V);
  for (i = 0; i < 3; i++) {
    n1x = U[i];
    n1xinv = U[i + 3];
    rc = U[i + 6];
    for (i1 = 0; i1 < 3; i1++) {
      camPose.R[i + 3 * i1] =
          (n1x * V[i1] + n1xinv * V[i1 + 3]) + rc * V[i1 + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, camPose.R) < 0.0F) {
    for (i = 0; i < 3; i++) {
      pipk = 3 * i + 1;
      n1x = camPose.R[3 * i];
      camPose.R[3 * i] = camPose.R[pipk];
      camPose.R[pipk] = n1x;
    }
  }
  for (i = 0; i <= 4; i += 4) {
    b_r = _mm_loadu_ps(&R_clamped[i]);
    r1 = _mm_loadu_ps(&camPose.R[i]);
    b_r = _mm_sub_ps(b_r, r1);
    _mm_storeu_ps(&U[i], b_r);
  }
  U[8] = R_clamped[8] - camPose.R[8];
  g_st.site = &mv_emlrtRSI;
  n1x = b_norm(g_st, U);
  if (n1x / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      camPose.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  n1x = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  n1xinv = b_norm(g_st, camPose.R);
  for (i = 0; i <= 4; i += 4) {
    b_r = _mm_loadu_ps(&R2[i]);
    r1 = _mm_loadu_ps(&camPose.R[i]);
    b_r = _mm_sub_ps(b_r, r1);
    _mm_storeu_ps(&R2[i], b_r);
  }
  R2[8] -= camPose.R[8];
  g_st.site = &gp_emlrtRSI;
  rc = b_norm(g_st, R2);
  if (!(rc / muSingleScalarMax(muSingleScalarMax(n1x, n1xinv),
                               1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  camPose.Translation.size[0] = 1;
  camPose.Translation.size[1] = 3;
  camPose.Translation.data[0] = A_in_data[12];
  camPose.Translation.data[1] = A_in_data[13];
  camPose.Translation.data[2] = A_in_data[14];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void pose2extr(const emlrtStack &sp, c_rigidtform3d &camPose)
{
  __m128d b_r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T A_in[16];
  real_T A_out[16];
  real_T x[16];
  real_T R[9];
  real_T b_A_in[9];
  real_T b_x;
  real_T y;
  int32_T ipiv[4];
  int32_T A_in_tmp;
  int32_T i;
  int32_T kAcol;
  int32_T pipk;
  int8_T p[4];
  boolean_T is_valid_for_this_class;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hx_emlrtRSI;
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
  b_st.site = &be_emlrtRSI;
  if (camPose.Data.size[0] * camPose.Data.size[1] != 1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &ob_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:pose2extr:expectedScalar", 3, 4, 7, "camPose");
  }
  st.site = &cx_emlrtRSI;
  for (i = 0; i < 3; i++) {
    pipk = i << 2;
    A_out[pipk] = camPose.R[3 * i];
    A_out[pipk + 1] = camPose.R[3 * i + 1];
    A_out[pipk + 2] = camPose.R[3 * i + 2];
    A_out[i + 12] = camPose.Translation[i];
  }
  A_out[3] = 0.0;
  A_out[7] = 0.0;
  A_out[11] = 0.0;
  A_out[15] = 1.0;
  b_st.site = &dx_emlrtRSI;
  c_st.site = &dx_emlrtRSI;
  d_st.site = &ix_emlrtRSI;
  std::memset(&A_in[0], 0, 16U * sizeof(real_T));
  e_st.site = &jx_emlrtRSI;
  std::copy(&A_out[0], &A_out[16], &x[0]);
  f_st.site = &yp_emlrtRSI;
  internal::reflapack::b_xzgetrf(f_st, x, ipiv);
  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    pipk = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = 1;
    p[0] = static_cast<int8_T>(pipk);
  }
  if (ipiv[1] > 2) {
    pipk = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = static_cast<int8_T>(pipk);
  }
  if (ipiv[2] > 3) {
    pipk = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = static_cast<int8_T>(pipk);
  }
  for (int32_T k{0}; k < 4; k++) {
    A_in_tmp = (p[k] - 1) << 2;
    A_in[k + A_in_tmp] = 1.0;
    for (int32_T j{k + 1}; j < 5; j++) {
      i = (j + A_in_tmp) - 1;
      if (A_in[i] != 0.0) {
        pipk = j + 1;
        for (int32_T b_i{pipk}; b_i < 5; b_i++) {
          kAcol = (b_i + A_in_tmp) - 1;
          A_in[kAcol] -= A_in[i] * x[(b_i + ((j - 1) << 2)) - 1];
        }
      }
    }
  }
  e_st.site = &ox_emlrtRSI;
  f_st.site = &nkc_emlrtRSI;
  for (int32_T j{0}; j < 4; j++) {
    pipk = j << 2;
    for (int32_T k{3}; k >= 0; k--) {
      kAcol = k << 2;
      i = k + pipk;
      b_x = A_in[i];
      if (b_x != 0.0) {
        A_in[i] = b_x / x[k + kAcol];
        for (int32_T b_i{0}; b_i < k; b_i++) {
          A_in_tmp = b_i + pipk;
          A_in[A_in_tmp] -= A_in[i] * x[b_i + kAcol];
        }
      }
    }
  }
  d_st.site = &ex_emlrtRSI;
  checkcond(d_st, A_out, A_in);
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  for (i = 0; i < 3; i++) {
    A_in_tmp = i << 2;
    b_A_in[3 * i] = A_in[A_in_tmp];
    b_A_in[3 * i + 1] = A_in[A_in_tmp + 1];
    b_A_in[3 * i + 2] = A_in[A_in_tmp + 2];
  }
  e_st.site = &sx_emlrtRSI;
  images::geotrans::internal::constrainToRotationMatrix3D(e_st, b_A_in, R);
  for (i = 0; i < 3; i++) {
    pipk = i << 2;
    A_out[pipk] = R[3 * i];
    A_out[pipk + 1] = R[3 * i + 1];
    A_out[pipk + 2] = R[3 * i + 2];
    A_out[i + 12] = A_in[i + 12];
  }
  A_out[3] = 0.0;
  A_out[7] = 0.0;
  A_out[11] = 0.0;
  A_out[15] = 1.0;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  b_x = c_norm(d_st, A_out);
  d_st.site = &fp_emlrtRSI;
  y = c_norm(d_st, A_in);
  for (i = 0; i <= 14; i += 2) {
    b_r = _mm_loadu_pd(&A_out[i]);
    r1 = _mm_loadu_pd(&A_in[i]);
    _mm_storeu_pd(&x[i], _mm_sub_pd(b_r, r1));
  }
  d_st.site = &gp_emlrtRSI;
  is_valid_for_this_class =
      (c_norm(d_st, x) / muDoubleScalarMax(muDoubleScalarMax(b_x, y),
                                           1.223247290044539E-294) <=
       1.8189894035458565E-12);
  if (!is_valid_for_this_class) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, A_out);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  images::geotrans::internal::constrainToRotationMatrix3D(f_st, R, camPose.R);
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  b_x = b_norm(g_st, R);
  g_st.site = &fp_emlrtRSI;
  y = b_norm(g_st, camPose.R);
  for (i = 0; i <= 6; i += 2) {
    b_r = _mm_loadu_pd(&R[i]);
    r1 = _mm_loadu_pd(&camPose.R[i]);
    b_r = _mm_sub_pd(b_r, r1);
    _mm_storeu_pd(&R[i], b_r);
  }
  R[8] -= camPose.R[8];
  g_st.site = &gp_emlrtRSI;
  is_valid_for_this_class =
      (b_norm(g_st, R) / muDoubleScalarMax(muDoubleScalarMax(b_x, y),
                                           1.223247290044539E-294) <=
       1.8189894035458565E-12);
  if (!is_valid_for_this_class) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  camPose.Translation[0] = A_in[12];
  camPose.Translation[1] = A_in[13];
  camPose.Translation[2] = A_in[14];
}

void pose2extr(const emlrtStack &sp, b_rigidtform3d &camPose)
{
  static const int32_T b_iv[2]{1, 6};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  __m128 b_r;
  __m128 r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T ipiv[4];
  int32_T A_in_tmp;
  int32_T i;
  int32_T j;
  int32_T kAcol;
  int32_T pipk;
  real32_T A_in[16];
  real32_T A_out[16];
  real32_T x[16];
  real32_T R2[9];
  real32_T R_clamped[9];
  real32_T U[9];
  real32_T V[9];
  real32_T n1x;
  real32_T n1xinv;
  real32_T s;
  int8_T p[4];
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &cx_emlrtRSI;
  for (i = 0; i < 3; i++) {
    pipk = i << 2;
    A_out[pipk] = camPose.R[3 * i];
    A_out[pipk + 1] = camPose.R[3 * i + 1];
    A_out[pipk + 2] = camPose.R[3 * i + 2];
    A_out[i + 12] = camPose.Translation[i];
  }
  A_out[3] = 0.0F;
  A_out[7] = 0.0F;
  A_out[11] = 0.0F;
  A_out[15] = 1.0F;
  b_st.site = &dx_emlrtRSI;
  c_st.site = &dx_emlrtRSI;
  d_st.site = &ix_emlrtRSI;
  std::memset(&A_in[0], 0, 16U * sizeof(real32_T));
  e_st.site = &jx_emlrtRSI;
  std::copy(&A_out[0], &A_out[16], &x[0]);
  f_st.site = &yp_emlrtRSI;
  internal::reflapack::b_xzgetrf(f_st, x, ipiv);
  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 4;
  if (ipiv[0] > 1) {
    pipk = p[ipiv[0] - 1];
    p[ipiv[0] - 1] = 1;
    p[0] = static_cast<int8_T>(pipk);
  }
  if (ipiv[1] > 2) {
    pipk = p[ipiv[1] - 1];
    p[ipiv[1] - 1] = p[1];
    p[1] = static_cast<int8_T>(pipk);
  }
  if (ipiv[2] > 3) {
    pipk = p[ipiv[2] - 1];
    p[ipiv[2] - 1] = p[2];
    p[2] = static_cast<int8_T>(pipk);
  }
  for (int32_T k{0}; k < 4; k++) {
    A_in_tmp = (p[k] - 1) << 2;
    A_in[k + A_in_tmp] = 1.0F;
    for (j = k + 1; j < 5; j++) {
      i = (j + A_in_tmp) - 1;
      if (A_in[i] != 0.0F) {
        kAcol = j + 1;
        for (int32_T b_i{kAcol}; b_i < 5; b_i++) {
          pipk = (b_i + A_in_tmp) - 1;
          A_in[pipk] -= A_in[i] * x[(b_i + ((j - 1) << 2)) - 1];
        }
      }
    }
  }
  e_st.site = &ox_emlrtRSI;
  f_st.site = &nkc_emlrtRSI;
  for (j = 0; j < 4; j++) {
    pipk = j << 2;
    for (int32_T k{3}; k >= 0; k--) {
      kAcol = k << 2;
      i = k + pipk;
      s = A_in[i];
      if (s != 0.0F) {
        A_in[i] = s / x[k + kAcol];
        for (int32_T b_i{0}; b_i < k; b_i++) {
          A_in_tmp = b_i + pipk;
          A_in[A_in_tmp] -= A_in[i] * x[b_i + kAcol];
        }
      }
    }
  }
  d_st.site = &ex_emlrtRSI;
  n1x = 0.0F;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    pipk = j << 2;
    s = ((muSingleScalarAbs(A_out[pipk]) + muSingleScalarAbs(A_out[pipk + 1])) +
         muSingleScalarAbs(A_out[pipk + 2])) +
        muSingleScalarAbs(A_out[pipk + 3]);
    if (muSingleScalarIsNaN(s)) {
      n1x = rtNaNF;
      exitg1 = true;
    } else {
      if (s > n1x) {
        n1x = s;
      }
      j++;
    }
  }
  n1xinv = 0.0F;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    pipk = j << 2;
    s = ((muSingleScalarAbs(A_in[pipk]) + muSingleScalarAbs(A_in[pipk + 1])) +
         muSingleScalarAbs(A_in[pipk + 2])) +
        muSingleScalarAbs(A_in[pipk + 3]);
    if (muSingleScalarIsNaN(s)) {
      n1xinv = rtNaNF;
      exitg1 = true;
    } else {
      if (s > n1xinv) {
        n1xinv = s;
      }
      j++;
    }
  }
  s = 1.0F / (n1x * n1xinv);
  if ((n1x == 0.0F) || (n1xinv == 0.0F) || (s == 0.0F)) {
    if (!emlrtSetWarningFlag(&d_st)) {
      e_st.site = &fx_emlrtRSI;
      internal::b_warning(e_st);
    }
  } else if ((muSingleScalarIsNaN(s) || (s < 1.1920929E-7F)) &&
             (!emlrtSetWarningFlag(&d_st))) {
    char_T str[14];
    e_st.site = &gx_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&e_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateNumericMatrix(1, 1, mxSINGLE_CLASS, mxREAL);
    *static_cast<real32_T *>(emlrtMxGetData(m)) = s;
    emlrtAssign(&b_y, m);
    f_st.site = &hid_emlrtRSI;
    emlrt_marshallIn(f_st, b_sprintf(f_st, y, b_y, e_emlrtMCI),
                     "<output of sprintf>", str);
    e_st.site = &gx_emlrtRSI;
    internal::warning(e_st, str);
  }
  c_st.site = &fg_emlrtRSI;
  d_st.site = &rx_emlrtRSI;
  e_st.site = &sx_emlrtRSI;
  for (int32_T k{0}; k < 9; k++) {
    s = muSingleScalarMin(A_in[k % 3 + ((k / 3) << 2)], 1.0F);
    camPose.R[k] = s;
    R_clamped[k] = muSingleScalarMax(s, -1.0F);
  }
  f_st.site = &kv_emlrtRSI;
  svd(f_st, R_clamped, U, camPose.R, V);
  for (i = 0; i < 3; i++) {
    s = U[i];
    n1x = U[i + 3];
    n1xinv = U[i + 6];
    for (kAcol = 0; kAcol < 3; kAcol++) {
      R2[i + 3 * kAcol] =
          (s * V[kAcol] + n1x * V[kAcol + 3]) + n1xinv * V[kAcol + 6];
    }
  }
  f_st.site = &lv_emlrtRSI;
  if (det(f_st, R2) < 0.0F) {
    for (i = 0; i < 3; i++) {
      pipk = 3 * i + 1;
      s = R2[3 * i];
      R2[3 * i] = R2[pipk];
      R2[pipk] = s;
    }
  }
  b_r = _mm_loadu_ps(&R_clamped[0]);
  r1 = _mm_loadu_ps(&R2[0]);
  _mm_storeu_ps(&U[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&R_clamped[4]);
  r1 = _mm_loadu_ps(&R2[4]);
  _mm_storeu_ps(&U[4], _mm_sub_ps(b_r, r1));
  U[8] = R_clamped[8] - R2[8];
  f_st.site = &mv_emlrtRSI;
  s = b_norm(f_st, U);
  if (s / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      R2[i] = R_clamped[i];
    }
  }
  for (i = 0; i < 3; i++) {
    pipk = i << 2;
    A_out[pipk] = R2[3 * i];
    A_out[pipk + 1] = R2[3 * i + 1];
    A_out[pipk + 2] = R2[3 * i + 2];
    A_out[i + 12] = A_in[i + 12];
  }
  A_out[3] = 0.0F;
  A_out[7] = 0.0F;
  A_out[11] = 0.0F;
  A_out[15] = 1.0F;
  c_st.site = &ep_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  s = c_norm(d_st, A_out);
  d_st.site = &fp_emlrtRSI;
  n1x = c_norm(d_st, A_in);
  b_r = _mm_loadu_ps(&A_out[0]);
  r1 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&x[0], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&A_out[4]);
  r1 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&x[4], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&A_out[8]);
  r1 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&x[8], _mm_sub_ps(b_r, r1));
  b_r = _mm_loadu_ps(&A_out[12]);
  r1 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&x[12], _mm_sub_ps(b_r, r1));
  d_st.site = &gp_emlrtRSI;
  n1xinv = c_norm(d_st, x);
  if (!(n1xinv /
            muSingleScalarMax(muSingleScalarMax(s, n1x), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "images:geotrans:invalidTransformationMatrix",
        "images:geotrans:invalidTransformationMatrix", 0);
  }
  c_st.site = &gg_emlrtRSI;
  images::geotrans::internal::c_checkTransformationMatrixCond(c_st, A_out);
  c_st.site = &qx_emlrtRSI;
  d_st.site = &tx_emlrtRSI;
  e_st.site = &hv_emlrtRSI;
  f_st.site = &iv_emlrtRSI;
  for (int32_T k{0}; k < 9; k++) {
    s = muSingleScalarMin(R2[k], 1.0F);
    camPose.R[k] = s;
    R_clamped[k] = muSingleScalarMax(s, -1.0F);
  }
  g_st.site = &kv_emlrtRSI;
  svd(g_st, R_clamped, U, camPose.R, V);
  for (i = 0; i < 3; i++) {
    s = U[i];
    n1x = U[i + 3];
    n1xinv = U[i + 6];
    for (kAcol = 0; kAcol < 3; kAcol++) {
      camPose.R[i + 3 * kAcol] =
          (s * V[kAcol] + n1x * V[kAcol + 3]) + n1xinv * V[kAcol + 6];
    }
  }
  g_st.site = &lv_emlrtRSI;
  if (det(g_st, camPose.R) < 0.0F) {
    for (i = 0; i < 3; i++) {
      pipk = 3 * i + 1;
      s = camPose.R[3 * i];
      camPose.R[3 * i] = camPose.R[pipk];
      camPose.R[pipk] = s;
    }
  }
  for (i = 0; i <= 4; i += 4) {
    b_r = _mm_loadu_ps(&R_clamped[i]);
    r1 = _mm_loadu_ps(&camPose.R[i]);
    b_r = _mm_sub_ps(b_r, r1);
    _mm_storeu_ps(&U[i], b_r);
  }
  U[8] = R_clamped[8] - camPose.R[8];
  g_st.site = &mv_emlrtRSI;
  s = b_norm(g_st, U);
  if (s / 1.1920929E-7F < 10.0F) {
    for (i = 0; i < 9; i++) {
      camPose.R[i] = R_clamped[i];
    }
  }
  f_st.site = &jv_emlrtRSI;
  g_st.site = &fp_emlrtRSI;
  s = b_norm(g_st, R2);
  g_st.site = &fp_emlrtRSI;
  n1x = b_norm(g_st, camPose.R);
  for (i = 0; i <= 4; i += 4) {
    b_r = _mm_loadu_ps(&R2[i]);
    r1 = _mm_loadu_ps(&camPose.R[i]);
    b_r = _mm_sub_ps(b_r, r1);
    _mm_storeu_ps(&R2[i], b_r);
  }
  R2[8] -= camPose.R[8];
  g_st.site = &gp_emlrtRSI;
  n1xinv = b_norm(g_st, R2);
  if (!(n1xinv /
            muSingleScalarMax(muSingleScalarMax(s, n1x), 1.83226362E-31F) <=
        6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "images:geotrans:invalidRotationMatrix",
                                  "images:geotrans:invalidRotationMatrix", 0);
  }
  camPose.Translation[0] = A_in[12];
  camPose.Translation[1] = A_in[13];
  camPose.Translation[2] = A_in[14];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (pose2extr.cpp)
