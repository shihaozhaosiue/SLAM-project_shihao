//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// roots.cpp
//
// Code generation for function 'roots'
//

// Include files
#include "roots.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo hic_emlrtRSI{
    74,      // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo iic_emlrtRSI{
    110,     // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo jic_emlrtRSI{
    105,     // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo kic_emlrtRSI{
    102,     // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo lic_emlrtRSI{
    100,     // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo mic_emlrtRSI{
    91,      // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo nic_emlrtRSI{
    85,      // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo oic_emlrtRSI{
    79,      // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo pic_emlrtRSI{
    23,      // lineNo
    "roots", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pathName
};

static emlrtRSInfo qic_emlrtRSI{
    42,      // lineNo
    "xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo ric_emlrtRSI{
    159,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRTEInfo se_emlrtRTEI{
    24,      // lineNo
    5,       // colNo
    "roots", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pName
};

static emlrtRTEInfo te_emlrtRTEI{
    109,     // lineNo
    5,       // colNo
    "roots", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\polyfun\\roots.m" // pName
};

// Function Definitions
namespace coder {
int32_T roots(const emlrtStack &sp, const real_T c[5], creal_T r_data[])
{
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T a_data[16];
  real_T scale_data[4];
  real_T wimag_data[4];
  real_T wreal_data[4];
  real_T abnrm;
  real_T rconde;
  real_T rcondv;
  real_T vleft;
  real_T vright;
  int32_T j;
  int32_T k1;
  int32_T nTrailingZeros_tmp_tmp;
  int32_T r_size;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &pic_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &dm_emlrtRSI;
  p = true;
  for (j = 0; j < 5; j++) {
    if (p) {
      vleft = c[j];
      if (muDoubleScalarIsInf(vleft) || muDoubleScalarIsNaN(vleft)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&sp, &se_emlrtRTEI,
                                  "MATLAB:roots:NonFiniteInput",
                                  "MATLAB:roots:NonFiniteInput", 0);
  }
  std::memset(&r_data[0], 0, 4U * sizeof(creal_T));
  k1 = 1;
  while ((k1 <= 5) && (!(c[k1 - 1] != 0.0))) {
    k1++;
  }
  r_size = 5;
  while ((r_size >= k1) && (!(c[r_size - 1] != 0.0))) {
    r_size--;
  }
  nTrailingZeros_tmp_tmp = 5 - r_size;
  if (k1 < r_size) {
    real_T ctmp[5];
    int32_T companDim;
    boolean_T exitg1;
    companDim = r_size - k1;
    exitg1 = false;
    while ((!exitg1) && (companDim > 0)) {
      boolean_T exitg2;
      j = 0;
      exitg2 = false;
      while ((!exitg2) && (j + 1 <= companDim)) {
        ctmp[j] = c[k1 + j] / c[k1 - 1];
        if (muDoubleScalarIsInf(muDoubleScalarAbs(ctmp[j]))) {
          exitg2 = true;
        } else {
          j++;
        }
      }
      if (j + 1 > companDim) {
        exitg1 = true;
      } else {
        k1++;
        companDim--;
      }
    }
    if (companDim < 1) {
      int32_T b_iv[2];
      b_iv[0] = 1;
      b_iv[1] = 5 - r_size;
      st.site = &oic_emlrtRSI;
      internal::indexShapeCheck(st, 4, b_iv);
      r_size = 5 - r_size;
    } else {
      creal_T eiga_data[4];
      int32_T b_iv[2];
      k1 = companDim * companDim;
      std::memset(&a_data[0], 0, static_cast<uint32_T>(k1) * sizeof(real_T));
      st.site = &nic_emlrtRSI;
      for (j = 0; j <= companDim - 2; j++) {
        k1 = companDim * j;
        a_data[k1] = -ctmp[j];
        a_data[(j + k1) + 1] = 1.0;
      }
      a_data[companDim * (companDim - 1)] = -ctmp[companDim - 1];
      st.site = &mic_emlrtRSI;
      if (nTrailingZeros_tmp_tmp - 1 >= 0) {
        std::memset(&r_data[0], 0,
                    static_cast<uint32_T>(nTrailingZeros_tmp_tmp) *
                        sizeof(creal_T));
      }
      if (companDim == 1) {
        for (k1 = 0; k1 < companDim; k1++) {
          eiga_data[k1].re = a_data[k1];
          eiga_data[k1].im = 0.0;
        }
      } else {
        ptrdiff_t info_t;
        st.site = &lic_emlrtRSI;
        b_st.site = &qic_emlrtRSI;
        info_t = LAPACKE_dgeevx(
            102, 'B', 'N', 'N', 'N', (ptrdiff_t)companDim, &a_data[0],
            (ptrdiff_t)companDim, &wreal_data[0], &wimag_data[0], &vleft,
            (ptrdiff_t)1, &vright, (ptrdiff_t)1, &ilo_t, &ihi_t, &scale_data[0],
            &abnrm, &rconde, &rcondv);
        c_st.site = &ric_emlrtRSI;
        if ((int32_T)info_t < 0) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &gb_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12,
                (int32_T)info_t);
          }
        }
        for (k1 = 0; k1 < companDim; k1++) {
          eiga_data[k1].re = wreal_data[k1];
          eiga_data[k1].im = wimag_data[k1];
        }
        if (((int32_T)info_t != 0) && (!emlrtSetWarningFlag((emlrtCTX)&sp))) {
          st.site = &kic_emlrtRSI;
          internal::e_warning(st);
        }
      }
      st.site = &jic_emlrtRSI;
      for (j = 0; j < companDim; j++) {
        r_data[(j - r_size) + 5] = eiga_data[j];
      }
      r_size = (companDim - r_size) + 5;
      if (r_size > 5) {
        emlrtErrorWithMessageIdR2018a(&sp, &te_emlrtRTEI,
                                      "Coder:builtins:AssertionFailed",
                                      "Coder:builtins:AssertionFailed", 0);
      }
      b_iv[0] = 1;
      b_iv[1] = r_size;
      st.site = &iic_emlrtRSI;
      internal::indexShapeCheck(st, 4, b_iv);
    }
  } else {
    int32_T b_iv[2];
    b_iv[0] = 1;
    b_iv[1] = 5 - r_size;
    st.site = &hic_emlrtRSI;
    internal::indexShapeCheck(st, 4, b_iv);
    r_size = 5 - r_size;
  }
  return r_size;
}

} // namespace coder

// End of code generation (roots.cpp)
