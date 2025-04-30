//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ind2sub.cpp
//
// Code generation for function 'ind2sub'
//

// Include files
#include "ind2sub.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo
    ljd_emlrtRSI{
        19,            // lineNo
        "indexDivide", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\indexDivide.m" // pathName
    };

// Function Definitions
namespace coder {
namespace internal {
int32_T ind2sub(const emlrtStack &sp, const real_T siz[2], int32_T ndx,
                int32_T &varargout_2)
{
  emlrtStack st;
  int32_T varargout_1;
  st.prev = &sp;
  st.tls = sp.tls;
  if ((ndx < 1) ||
      (ndx > static_cast<int32_T>(siz[0]) * static_cast<int32_T>(siz[1]))) {
    emlrtErrorWithMessageIdR2018a(&sp, &ae_emlrtRTEI,
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange",
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
  }
  st.site = &ljd_emlrtRSI;
  varargout_1 = div_s32(st, ndx - 1, static_cast<int32_T>(siz[0]));
  varargout_2 = varargout_1 + 1;
  return ndx - varargout_1 * static_cast<int32_T>(siz[0]);
}

int32_T ind2sub(const emlrtStack &sp, const real_T siz[2], real_T ndx,
                int32_T &varargout_2)
{
  emlrtStack st;
  int32_T varargout_1;
  st.prev = &sp;
  st.tls = sp.tls;
  if ((static_cast<int32_T>(ndx) < 1) ||
      (static_cast<int32_T>(ndx) >
       static_cast<int32_T>(siz[0]) * static_cast<int32_T>(siz[1]))) {
    emlrtErrorWithMessageIdR2018a(&sp, &ae_emlrtRTEI,
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange",
                                  "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
  }
  st.site = &ljd_emlrtRSI;
  varargout_1 =
      div_s32(st, static_cast<int32_T>(ndx) - 1, static_cast<int32_T>(siz[0]));
  varargout_2 = varargout_1 + 1;
  return static_cast<int32_T>(ndx) - varargout_1 * static_cast<int32_T>(siz[0]);
}

} // namespace internal
} // namespace coder

// End of code generation (ind2sub.cpp)
