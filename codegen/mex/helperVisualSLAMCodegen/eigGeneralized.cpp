//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eigGeneralized.cpp
//
// Code generation for function 'eigGeneralized'
//

// Include files
#include "eigGeneralized.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include <algorithm>
#include <cstddef>

// Variable Definitions
static emlrtRSInfo xs_emlrtRSI{
    24,               // lineNo
    "eigGeneralized", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigGene"
    "ralized.m" // pathName
};

static emlrtRSInfo ys_emlrtRSI{
    45,               // lineNo
    "eigGeneralized", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigGene"
    "ralized.m" // pathName
};

static emlrtRSInfo at_emlrtRSI{
    41,      // lineNo
    "xggev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xggev.m" // pathName
};

static emlrtRSInfo bt_emlrtRSI{
    112,            // lineNo
    "ceval_xdggev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xggev.m" // pathName
};

// Function Definitions
namespace coder {
void eigGeneralized(const emlrtStack &sp, const real_T A[900],
                    const real_T B[900], creal_T V[900], creal_T D[30])
{
  static const char_T fname[13]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'g', 'e', 'v'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_A[900];
  real_T b_B[900];
  real_T vright[900];
  real_T alphai[30];
  real_T alphar[30];
  real_T beta[30];
  real_T vleft;
  int32_T re_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xs_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &at_emlrtRSI;
  std::copy(&A[0], &A[900], &b_A[0]);
  std::copy(&B[0], &B[900], &b_B[0]);
  info_t =
      LAPACKE_dggev(102, 'N', 'V', (ptrdiff_t)30, &b_A[0], (ptrdiff_t)30,
                    &b_B[0], (ptrdiff_t)30, &alphar[0], &alphai[0], &beta[0],
                    &vleft, (ptrdiff_t)1, &vright[0], (ptrdiff_t)30);
  c_st.site = &bt_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&c_st, &fb_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    13, &fname[0], 12, (int32_T)info_t);
    }
  }
  for (int32_T i{0}; i < 30; i++) {
    vleft = alphai[i];
    if (!(vleft < 0.0)) {
      if ((i + 1 != 30) && (vleft > 0.0)) {
        real_T d;
        real_T realPart;
        real_T realPart_tmp;
        realPart_tmp = beta[i + 1];
        d = beta[i];
        realPart = 0.5 * (alphar[i] / d + alphar[i + 1] / realPart_tmp);
        vleft = 0.5 * (vleft / d - alphai[i + 1] / realPart_tmp);
        D[i].re = realPart;
        D[i].im = vleft;
        D[i + 1].re = realPart;
        D[i + 1].im = -vleft;
      } else {
        D[i].re = alphar[i] / beta[i];
        D[i].im = 0.0;
      }
    }
  }
  for (re_tmp = 0; re_tmp < 900; re_tmp++) {
    V[re_tmp].re = vright[re_tmp];
    V[re_tmp].im = 0.0;
  }
  for (int32_T j{0}; j < 29; j++) {
    if ((alphai[j] > 0.0) && (alphai[j + 1] < 0.0)) {
      for (int32_T i{0}; i < 30; i++) {
        int32_T im_tmp;
        re_tmp = i + 30 * j;
        im_tmp = i + 30 * (j + 1);
        vleft = V[im_tmp].re;
        V[re_tmp].im = vleft;
        V[im_tmp].re = V[re_tmp].re;
        V[im_tmp].im = -vleft;
      }
    }
  }
  if (((int32_T)info_t != 0) && (!emlrtSetWarningFlag((emlrtCTX)&sp))) {
    st.site = &ys_emlrtRSI;
    internal::e_warning(st);
  }
}

} // namespace coder

// End of code generation (eigGeneralized.cpp)
