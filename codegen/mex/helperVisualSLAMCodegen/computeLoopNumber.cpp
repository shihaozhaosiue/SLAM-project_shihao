//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// computeLoopNumber.cpp
//
// Code generation for function 'computeLoopNumber'
//

// Include files
#include "computeLoopNumber.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo qt_emlrtRSI{
    18,                  // lineNo
    "computeLoopNumber", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "ransac\\computeLoopNumber.m" // pathName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace ransac {
int32_T computeLoopNumber(const emlrtStack &sp, real_T sampleSize,
                          real_T confidence, real_T pointNum, real_T inlierNum)
{
  emlrtStack st;
  real_T inlierProbability;
  int32_T N;
  st.prev = &sp;
  st.tls = sp.tls;
  inlierProbability = muDoubleScalarPower(inlierNum / pointNum, sampleSize);
  if (inlierProbability < 2.2204460492503131E-16) {
    N = MAX_int32_T;
  } else {
    real_T conf;
    conf = 0.01 * confidence;
    st.site = &qt_emlrtRSI;
    if (1.0 - conf < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &db_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 5, "log10");
    }
    st.site = &do_emlrtRSI;
    if (1.0 - inlierProbability < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &db_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 5, "log10");
    }
    inlierProbability =
        muDoubleScalarCeil(muDoubleScalarLog10(1.0 - conf) /
                           muDoubleScalarLog10(1.0 - inlierProbability));
    if (inlierProbability < 2.147483648E+9) {
      if (inlierProbability >= -2.147483648E+9) {
        N = static_cast<int32_T>(inlierProbability);
      } else {
        N = MIN_int32_T;
      }
    } else if (inlierProbability >= 2.147483648E+9) {
      N = MAX_int32_T;
    } else {
      N = 0;
    }
  }
  return N;
}

} // namespace ransac
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (computeLoopNumber.cpp)
