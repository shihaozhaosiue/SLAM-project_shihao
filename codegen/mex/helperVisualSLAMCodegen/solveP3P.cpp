//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solveP3P.cpp
//
// Code generation for function 'solveP3P'
//

// Include files
#include "solveP3P.h"
#include "abs.h"
#include "all.h"
#include "computeRigidTransform.h"
#include "helperVisualSLAMCodegen_data.h"
#include "mrdivide_helper.h"
#include "roots.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo hhc_emlrtRSI{
    34,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo ihc_emlrtRSI{
    37,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo jhc_emlrtRSI{
    57,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo khc_emlrtRSI{
    58,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo lhc_emlrtRSI{
    59,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo mhc_emlrtRSI{
    69,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo nhc_emlrtRSI{
    79,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo ohc_emlrtRSI{
    80,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo phc_emlrtRSI{
    81,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo qhc_emlrtRSI{
    82,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo rhc_emlrtRSI{
    83,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo shc_emlrtRSI{
    93,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo thc_emlrtRSI{
    96,         // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo uhc_emlrtRSI{
    105,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo vhc_emlrtRSI{
    110,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo whc_emlrtRSI{
    111,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo xhc_emlrtRSI{
    112,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo yhc_emlrtRSI{
    113,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo aic_emlrtRSI{
    114,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo bic_emlrtRSI{
    115,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo cic_emlrtRSI{
    116,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo dic_emlrtRSI{
    117,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo eic_emlrtRSI{
    120,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo fic_emlrtRSI{
    123,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtRSInfo gic_emlrtRSI{
    138,        // lineNo
    "solveP3P", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pathName
};

static emlrtBCInfo fp_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    141,        // lineNo
    12,         // colNo
    "",         // aName
    "solveP3P", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m", // pName
    0                          // checkKind
};

static emlrtECInfo cd_emlrtECI{
    -1,         // nDims
    140,        // lineNo
    9,          // colNo
    "solveP3P", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m" // pName
};

static emlrtBCInfo gp_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    140,        // lineNo
    16,         // colNo
    "",         // aName
    "solveP3P", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m", // pName
    0                          // checkKind
};

static emlrtBCInfo hp_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    109,        // lineNo
    11,         // colNo
    "",         // aName
    "solveP3P", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ip_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    96,         // lineNo
    12,         // colNo
    "",         // aName
    "solveP3P", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "calibration\\solveP3P.m", // pName
    0                          // checkKind
};

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
static boolean_T isTS7(real_T b, real_T p, real_T b_r, real_T q);

static real_T whichComponent(real_T a, real_T b, real_T p, real_T q,
                             real_T b_r);

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace calibration {
static boolean_T isTS7(real_T b, real_T p, real_T b_r, real_T q)
{
  real_T b_tf_tmp;
  real_T c_tf_tmp;
  real_T d_tf_tmp;
  real_T e_tf_tmp;
  real_T f_tf_tmp;
  real_T g_tf_tmp;
  real_T tf_tmp;
  tf_tmp = muDoubleScalarPower(b_r, 3.0);
  b_tf_tmp = p * p;
  c_tf_tmp = b_r * b_r;
  d_tf_tmp = muDoubleScalarPower(p, 3.0);
  e_tf_tmp = b_tf_tmp * (q * q);
  f_tf_tmp = muDoubleScalarPower(p, 4.0);
  g_tf_tmp = muDoubleScalarPower(b_r, 4.0);
  return (((((((((((4.0 * c_tf_tmp + e_tf_tmp) + f_tf_tmp) - g_tf_tmp) -
                 d_tf_tmp * q * b_r) +
                p * tf_tmp * q) -
               4.0 * q * p * b_r) *
                  b +
              2.0 * p * tf_tmp) -
             2.0 * b_tf_tmp * c_tf_tmp) +
            2.0 * d_tf_tmp * q * b_r) -
           e_tf_tmp * c_tf_tmp) -
          f_tf_tmp) -
             g_tf_tmp ==
         0.0;
}

static real_T whichComponent(real_T a, real_T b, real_T p, real_T q, real_T b_r)
{
  real_T c;
  c = b_r * b_r;
  if ((((a * a + ((2.0 * b - 2.0) - b * c) * a) - 2.0 * b) + b * b) + 1.0 ==
      0.0) {
    c = 2.0;
  } else {
    real_T F;
    real_T F_tmp;
    real_T b_F_tmp;
    real_T c_F_tmp;
    real_T d_F_tmp;
    real_T pqr;
    boolean_T tf;
    pqr = p * q * b_r;
    F_tmp = p * p;
    b_F_tmp = q * q;
    c_F_tmp = c * F_tmp;
    d_F_tmp = 4.0 * b_F_tmp;
    b_F_tmp *= c;
    F = ((((-4.0 * F_tmp + 4.0 * pqr) + c_F_tmp) + b_F_tmp) -
         muDoubleScalarPower(b_r, 3.0) * p * q) -
        d_F_tmp;
    if (((F * a + c_F_tmp) - 4.0 * pqr) + d_F_tmp == 0.0) {
      if (((F * b + b_F_tmp) + 4.0 * F_tmp) - 4.0 * pqr == 0.0) {
        tf = true;
      } else {
        tf = false;
      }
    } else {
      tf = false;
    }
    if (tf) {
      c = 3.0;
    } else if (((a + b) - 1.0 == 0.0) && (b_r == 0.0)) {
      c = 4.0;
    } else {
      b_F_tmp = F_tmp + c;
      if ((b_F_tmp * a - c == 0.0) && (b_F_tmp * b - F_tmp == 0.0) &&
          (q == 0.0)) {
        tf = true;
      } else {
        tf = false;
      }
      if (tf) {
        c = 5.0;
      } else {
        d_F_tmp = c * c;
        pqr = F_tmp * F_tmp;
        F = (pqr - 2.0 * F_tmp * c) + d_F_tmp;
        if ((F * a - c_F_tmp) - d_F_tmp == 0.0) {
          if (((F * b - c_F_tmp) - pqr == 0.0) &&
              (b_F_tmp * q - 4.0 * p * b_r == 0.0)) {
            tf = true;
          } else {
            tf = false;
          }
        } else {
          tf = false;
        }
        if (tf) {
          c = 6.0;
        } else if (isTS7(b, p, q, b_r)) {
          c = 7.0;
        } else {
          if ((p == 0.0) && (b_r == 0.0)) {
            tf = true;
          } else {
            tf = false;
          }
          if (tf) {
            c = 9.0;
          } else {
            c = 1.0;
          }
        }
      }
    }
  }
  return c;
}

void solveP3P(const emlrtStack &sp, const real_T imagePointsIn[8],
              const real_T worldPointsIn_data[],
              const int32_T worldPointsIn_size[2], const real_T K[9],
              real_T Rs_data[], int32_T Rs_size[3], real_T Ts_data[],
              int32_T Ts_size[2])
{
  __m128d b_r;
  array<real_T, 2U> r2;
  array<real_T, 1U> c_X_data;
  array<real_T, 1U> r3;
  emlrtStack b_st;
  emlrtStack st;
  creal_T X_data[4];
  real_T R_data[15];
  real_T U[12];
  real_T b_imagePointsIn[12];
  real_T b_X_data[4];
  real_T d_X_data[4];
  real_T uNorm[4];
  real_T AB2;
  real_T AC2;
  real_T BC2;
  real_T a;
  real_T b;
  real_T b_U;
  real_T c_r;
  real_T p;
  real_T q;
  int32_T R_size[2];
  int32_T b_iv[2];
  int32_T i;
  int32_T imagePointsIn_tmp;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &hhc_emlrtRSI;
  for (i = 0; i < 2; i++) {
    imagePointsIn_tmp = i << 2;
    b_imagePointsIn[imagePointsIn_tmp] = imagePointsIn[imagePointsIn_tmp];
    b_imagePointsIn[imagePointsIn_tmp + 1] =
        imagePointsIn[imagePointsIn_tmp + 1];
    b_imagePointsIn[imagePointsIn_tmp + 2] =
        imagePointsIn[imagePointsIn_tmp + 2];
    b_imagePointsIn[imagePointsIn_tmp + 3] =
        imagePointsIn[imagePointsIn_tmp + 3];
  }
  b_imagePointsIn[8] = 1.0;
  b_imagePointsIn[9] = 1.0;
  b_imagePointsIn[10] = 1.0;
  b_imagePointsIn[11] = 1.0;
  b_st.site = &oq_emlrtRSI;
  ::coder::internal::mrdiv(b_st, b_imagePointsIn, K, U);
  for (imagePointsIn_tmp = 0; imagePointsIn_tmp <= 10; imagePointsIn_tmp += 2) {
    b_r = _mm_loadu_pd(&U[imagePointsIn_tmp]);
    _mm_storeu_pd(&b_imagePointsIn[imagePointsIn_tmp], _mm_mul_pd(b_r, b_r));
  }
  sum(b_imagePointsIn, uNorm);
  st.site = &ihc_emlrtRSI;
  b_sqrt(st, uNorm);
  std::copy(&U[0], &U[12], &b_imagePointsIn[0]);
  b_U = 0.0;
  for (imagePointsIn_tmp = 0; imagePointsIn_tmp < 3; imagePointsIn_tmp++) {
    __m128d r1;
    i = imagePointsIn_tmp << 2;
    b_r = _mm_loadu_pd(&b_imagePointsIn[i]);
    r1 = _mm_loadu_pd(&uNorm[0]);
    _mm_storeu_pd(&U[i], _mm_div_pd(b_r, r1));
    b_r = _mm_loadu_pd(&b_imagePointsIn[i + 2]);
    r1 = _mm_loadu_pd(&uNorm[2]);
    _mm_storeu_pd(&U[i + 2], _mm_div_pd(b_r, r1));
    b_U += U[i] * U[i + 1];
  }
  loop_ub = worldPointsIn_size[1];
  st.site = &jhc_emlrtRSI;
  r2.set_size(&ao_emlrtRTEI, &sp, 1, worldPointsIn_size[1]);
  for (i = 0; i < loop_ub; i++) {
    AC2 = worldPointsIn_data[4 * i] - worldPointsIn_data[4 * i + 1];
    r2[i] = AC2 * AC2;
  }
  st.site = &jhc_emlrtRSI;
  AB2 = sum(st, r2);
  st.site = &khc_emlrtRSI;
  r2.set_size(&ao_emlrtRTEI, &sp, 1, worldPointsIn_size[1]);
  for (i = 0; i < loop_ub; i++) {
    AC2 = worldPointsIn_data[4 * i + 1] - worldPointsIn_data[4 * i + 2];
    r2[i] = AC2 * AC2;
  }
  st.site = &khc_emlrtRSI;
  BC2 = sum(st, r2);
  st.site = &lhc_emlrtRSI;
  r2.set_size(&ao_emlrtRTEI, &sp, 1, worldPointsIn_size[1]);
  for (i = 0; i < loop_ub; i++) {
    AC2 = worldPointsIn_data[4 * i] - worldPointsIn_data[4 * i + 2];
    r2[i] = AC2 * AC2;
  }
  st.site = &lhc_emlrtRSI;
  AC2 = sum(st, r2);
  a = BC2 / AB2;
  b = AC2 / AB2;
  p = 2.0 * ((U[1] * U[2] + U[5] * U[6]) + U[9] * U[10]);
  q = 2.0 * ((U[0] * U[2] + U[4] * U[6]) + U[8] * U[10]);
  c_r = 2.0 * b_U;
  st.site = &mhc_emlrtRSI;
  BC2 = whichComponent(a, b, p, q, c_r);
  if (BC2 != 1.0) {
    Rs_size[0] = 3;
    Rs_size[1] = 3;
    Rs_size[2] = 0;
    Ts_size[0] = 0;
    Ts_size[1] = 3;
  } else {
    real_T coeffs[5];
    real_T PC;
    real_T b_coeffs_tmp;
    real_T c_coeffs_tmp;
    real_T coeffs_tmp;
    real_T coeffs_tmp_tmp;
    real_T d;
    real_T d_coeffs_tmp;
    real_T e_coeffs_tmp;
    real_T f_coeffs_tmp;
    real_T g_coeffs_tmp;
    real_T h_coeffs_tmp;
    real_T i_coeffs_tmp;
    real_T j_coeffs_tmp;
    real_T k_coeffs_tmp;
    real_T l_coeffs_tmp;
    real_T m_coeffs_tmp;
    real_T n_coeffs_tmp;
    boolean_T b_bv[5];
    BC2 = p * b * c_r;
    st.site = &nhc_emlrtRSI;
    st.site = &nhc_emlrtRSI;
    st.site = &nhc_emlrtRSI;
    st.site = &ohc_emlrtRSI;
    st.site = &ohc_emlrtRSI;
    st.site = &ohc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &phc_emlrtRSI;
    st.site = &qhc_emlrtRSI;
    st.site = &qhc_emlrtRSI;
    st.site = &qhc_emlrtRSI;
    st.site = &rhc_emlrtRSI;
    st.site = &rhc_emlrtRSI;
    st.site = &rhc_emlrtRSI;
    coeffs_tmp = a * a;
    coeffs_tmp_tmp = c_r * c_r;
    b_coeffs_tmp = b * coeffs_tmp_tmp;
    c_coeffs_tmp = b * b;
    AC2 = b_coeffs_tmp * a;
    PC = 2.0 * b * a;
    coeffs[0] =
        (((((-2.0 * b + c_coeffs_tmp) + coeffs_tmp) + 1.0) - AC2) + PC) -
        2.0 * a;
    d_coeffs_tmp = BC2 * a;
    e_coeffs_tmp = 2.0 * coeffs_tmp;
    f_coeffs_tmp = e_coeffs_tmp * q;
    g_coeffs_tmp = 2.0 * b * q;
    h_coeffs_tmp = 4.0 * a * q;
    coeffs[1] =
        (((((((-2.0 * b * q * a - f_coeffs_tmp) + b_coeffs_tmp * q * a) -
             2.0 * q) +
            g_coeffs_tmp) +
           h_coeffs_tmp) +
          BC2) +
         d_coeffs_tmp) -
        c_coeffs_tmp * c_r * p;
    b_coeffs_tmp = p * p;
    i_coeffs_tmp = q * q;
    j_coeffs_tmp = b * b_coeffs_tmp;
    k_coeffs_tmp = 2.0 * i_coeffs_tmp * a;
    l_coeffs_tmp = i_coeffs_tmp * coeffs_tmp;
    m_coeffs_tmp = 2.0 * c_coeffs_tmp;
    n_coeffs_tmp = c_coeffs_tmp * b_coeffs_tmp;
    coeffs[2] = (((((((((((i_coeffs_tmp + c_coeffs_tmp * coeffs_tmp_tmp) -
                          j_coeffs_tmp) -
                         q * BC2) +
                        n_coeffs_tmp) -
                       AC2) +
                      2.0) -
                     m_coeffs_tmp) -
                    d_coeffs_tmp * q) +
                   e_coeffs_tmp) -
                  4.0 * a) -
                 k_coeffs_tmp) +
                l_coeffs_tmp;
    coeffs[3] = (((((((-c_coeffs_tmp * c_r * p + d_coeffs_tmp) - f_coeffs_tmp) +
                     q * b_coeffs_tmp * b) +
                    g_coeffs_tmp * a) +
                   h_coeffs_tmp) +
                  BC2) -
                 g_coeffs_tmp) -
                2.0 * q;
    coeffs[4] = (((((1.0 - 2.0 * a) + 2.0 * b) + c_coeffs_tmp) - j_coeffs_tmp) +
                 coeffs_tmp) -
                PC;
    for (i = 0; i < 5; i++) {
      d = coeffs[i];
      b_bv[i] = ((!muDoubleScalarIsInf(d)) && (!muDoubleScalarIsNaN(d)));
    }
    if (!c_all(b_bv)) {
      Rs_size[0] = 3;
      Rs_size[1] = 3;
      Rs_size[2] = 0;
      Ts_size[0] = 0;
      Ts_size[1] = 3;
    } else {
      real_T b1;
      int32_T X_size;
      int32_T partialTrueCount;
      int32_T trueCount;
      st.site = &shc_emlrtRSI;
      X_size = roots(st, coeffs, X_data);
      for (i = 0; i < X_size; i++) {
        b_X_data[i] = X_data[i].im;
      }
      c_X_data.set(&b_X_data[0], X_size);
      st.site = &thc_emlrtRSI;
      b_abs(st, c_X_data, r3);
      imagePointsIn_tmp = r3.size(0);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < imagePointsIn_tmp; b_i++) {
        if (r3[b_i] < 1.0E-8) {
          trueCount++;
        }
      }
      partialTrueCount = 0;
      for (int32_T b_i{0}; b_i < imagePointsIn_tmp; b_i++) {
        if (r3[b_i] < 1.0E-8) {
          if ((static_cast<int8_T>(b_i) < 0) ||
              (static_cast<int8_T>(b_i) > X_size - 1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<int8_T>(b_i)), 0, X_size - 1,
                &ip_emlrtBCI, (emlrtConstCTX)&sp);
          }
          d_X_data[partialTrueCount] = X_data[static_cast<int8_T>(b_i)].re;
          partialTrueCount++;
        }
      }
      Rs_size[0] = 3;
      Rs_size[1] = 3;
      Rs_size[2] = trueCount;
      imagePointsIn_tmp = 9 * trueCount;
      if (imagePointsIn_tmp - 1 >= 0) {
        std::memset(&Rs_data[0], 0,
                    static_cast<uint32_T>(imagePointsIn_tmp) * sizeof(real_T));
      }
      Ts_size[0] = trueCount;
      Ts_size[1] = 3;
      imagePointsIn_tmp = trueCount * 3;
      if (imagePointsIn_tmp - 1 >= 0) {
        std::memset(&Ts_data[0], 0,
                    static_cast<uint32_T>(imagePointsIn_tmp) * sizeof(real_T));
      }
      st.site = &uhc_emlrtRSI;
      st.site = &uhc_emlrtRSI;
      st.site = &uhc_emlrtRSI;
      st.site = &uhc_emlrtRSI;
      st.site = &uhc_emlrtRSI;
      st.site = &uhc_emlrtRSI;
      st.site = &uhc_emlrtRSI;
      BC2 = p * q * c_r;
      BC2 = (((((b_coeffs_tmp - BC2) + coeffs_tmp_tmp) * a +
               (b_coeffs_tmp - coeffs_tmp_tmp) * b) -
              b_coeffs_tmp) +
             BC2) -
            coeffs_tmp_tmp;
      b1 = b * (BC2 * BC2);
      for (int32_T b_i{0}; b_i < trueCount; b_i++) {
        real_T b_y_tmp;
        real_T c_y_tmp;
        real_T d_y_tmp;
        real_T e_y_tmp;
        real_T f_y_tmp;
        real_T g_y_tmp;
        real_T y_tmp;
        if (b_i + 1 > trueCount) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, trueCount, &hp_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        st.site = &vhc_emlrtRSI;
        st.site = &whc_emlrtRSI;
        st.site = &whc_emlrtRSI;
        st.site = &whc_emlrtRSI;
        st.site = &whc_emlrtRSI;
        st.site = &whc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &xhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &yhc_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &aic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &bic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &cic_emlrtRSI;
        st.site = &dic_emlrtRSI;
        st.site = &dic_emlrtRSI;
        st.site = &dic_emlrtRSI;
        st.site = &dic_emlrtRSI;
        st.site = &dic_emlrtRSI;
        st.site = &dic_emlrtRSI;
        BC2 = 2.0 * c_r * q;
        AC2 = muDoubleScalarPower(c_r, 3.0);
        PC = 2.0 * p * a;
        d_coeffs_tmp = p * coeffs_tmp_tmp;
        d = d_X_data[b_i];
        y_tmp = d * d;
        f_coeffs_tmp = 2.0 * p * q;
        g_coeffs_tmp = 2.0 * b_coeffs_tmp;
        h_coeffs_tmp = g_coeffs_tmp * a;
        j_coeffs_tmp = muDoubleScalarPower(p, 3.0);
        b_y_tmp = 2.0 * p * coeffs_tmp_tmp;
        c_y_tmp = muDoubleScalarPower(c_r, 4.0) * p;
        d_y_tmp = g_coeffs_tmp * q * c_r;
        e_y_tmp = 2.0 * j_coeffs_tmp;
        f_y_tmp = p * i_coeffs_tmp * coeffs_tmp_tmp;
        g_y_tmp = 2.0 * AC2 * q;
        BC2 =
            ((((((1.0 - a) - b) * y_tmp + (a - 1.0) * q * d) - a) + b) + 1.0) *
            ((((((((((((AC2 *
                            (((((coeffs_tmp + c_coeffs_tmp) - 2.0 * a) -
                               2.0 * b) +
                              (2.0 - coeffs_tmp_tmp) * a * b) +
                             1.0) *
                            muDoubleScalarPower(d, 3.0) +
                        coeffs_tmp_tmp *
                            (((((((((((((p + p * coeffs_tmp) - BC2 * a * b) +
                                       BC2 * b) -
                                      BC2) -
                                     PC) -
                                    2.0 * p * b) +
                                   d_coeffs_tmp * b) +
                                  4.0 * c_r * q * a) +
                                 q * AC2 * a * b) -
                                BC2 * coeffs_tmp) +
                               PC * b) +
                              p * c_coeffs_tmp) -
                             d_coeffs_tmp * c_coeffs_tmp) *
                            y_tmp) +
                       ((((muDoubleScalarPower(c_r, 5.0) *
                               (c_coeffs_tmp - a * b) -
                           c_y_tmp * q * b) +
                          AC2 * ((((((i_coeffs_tmp - 4.0 * a) - k_coeffs_tmp) +
                                    l_coeffs_tmp) +
                                   e_coeffs_tmp) -
                                  m_coeffs_tmp) +
                                 2.0)) +
                         coeffs_tmp_tmp *
                             ((((4.0 * p * q * a - f_coeffs_tmp * a * b) +
                                f_coeffs_tmp * b) -
                               f_coeffs_tmp) -
                              f_coeffs_tmp * coeffs_tmp)) +
                        c_r * (((((n_coeffs_tmp - g_coeffs_tmp * b) +
                                  h_coeffs_tmp * b) -
                                 h_coeffs_tmp) +
                                b_coeffs_tmp) +
                               b_coeffs_tmp * coeffs_tmp)) *
                           d) +
                      ((((b_y_tmp - g_y_tmp) + j_coeffs_tmp) - d_y_tmp) +
                       f_y_tmp) *
                          coeffs_tmp) +
                     (j_coeffs_tmp - b_y_tmp) * c_coeffs_tmp) +
                    ((((4.0 * q * AC2 - 4.0 * p * coeffs_tmp_tmp) - e_y_tmp) +
                      4.0 * b_coeffs_tmp * q * c_r) -
                     2.0 * p * i_coeffs_tmp * coeffs_tmp_tmp) *
                        a) +
                   (((-2.0 * q * AC2 + c_y_tmp) + d_y_tmp) - e_y_tmp) * b) +
                  ((e_y_tmp + 2.0 * q * AC2) - d_y_tmp) * a * b) +
                 f_y_tmp) -
                d_y_tmp) +
               b_y_tmp) +
              j_coeffs_tmp) -
             g_y_tmp) /
            b1;
        st.site = &eic_emlrtRSI;
        st.site = &eic_emlrtRSI;
        PC = AB2 / ((y_tmp + BC2 * BC2) - 2.0 * d * BC2 * b_U);
        st.site = &fic_emlrtRSI;
        if (PC < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        PC = muDoubleScalarSqrt(PC);
        AC2 = BC2 * PC;
        BC2 = d * PC;
        if ((PC > 0.0) && (AC2 > 0.0) && (BC2 > 0.0)) {
          real_T b_worldPointsIn_data[15];
          real_T t[3];
          b_iv[0] = 3;
          b_iv[1] = loop_ub;
          for (i = 0; i < loop_ub; i++) {
            b_worldPointsIn_data[3 * i] = worldPointsIn_data[4 * i];
            b_worldPointsIn_data[3 * i + 1] = worldPointsIn_data[4 * i + 1];
            b_worldPointsIn_data[3 * i + 2] = worldPointsIn_data[4 * i + 2];
          }
          real_T c_U[9];
          c_U[0] = U[0] * BC2;
          c_U[1] = U[1] * AC2;
          c_U[2] = U[2] * PC;
          c_U[3] = U[4] * BC2;
          c_U[4] = U[5] * AC2;
          c_U[5] = U[6] * PC;
          c_U[6] = U[8] * BC2;
          c_U[7] = U[9] * AC2;
          c_U[8] = U[10] * PC;
          st.site = &gic_emlrtRSI;
          computeRigidTransform(st, b_worldPointsIn_data, b_iv, c_U, R_data,
                                R_size, t);
          if (b_i + 1 > trueCount) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, trueCount, &gp_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          b_iv[0] = 3;
          b_iv[1] = 3;
          imagePointsIn_tmp = R_size[1];
          R_size[0] = R_size[1];
          R_size[1] = 3;
          emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &R_size[0], 2,
                                        &cd_emlrtECI, (emlrtCTX)&sp);
          for (i = 0; i < 3; i++) {
            for (partialTrueCount = 0; partialTrueCount < imagePointsIn_tmp;
                 partialTrueCount++) {
              b_worldPointsIn_data[partialTrueCount + imagePointsIn_tmp * i] =
                  R_data[i + 3 * partialTrueCount];
            }
          }
          for (i = 0; i < 3; i++) {
            imagePointsIn_tmp = 3 * i + 9 * b_i;
            Rs_data[imagePointsIn_tmp] = b_worldPointsIn_data[3 * i];
            Rs_data[imagePointsIn_tmp + 1] = b_worldPointsIn_data[3 * i + 1];
            Rs_data[imagePointsIn_tmp + 2] = b_worldPointsIn_data[3 * i + 2];
          }
          if (b_i + 1 > trueCount) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, trueCount, &fp_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          Ts_data[b_i] = t[0];
          Ts_data[b_i + trueCount] = t[1];
          Ts_data[b_i + trueCount * 2] = t[2];
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace calibration
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (solveP3P.cpp)
