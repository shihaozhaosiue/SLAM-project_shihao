//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rowNamesDim.cpp
//
// Code generation for function 'rowNamesDim'
//

// Include files
#include "rowNamesDim.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace b_private {
real_T rowNamesDim::subs2inds(const emlrtStack &sp, real_T rawsubscripts,
                              real_T &maxIndex) const
{
  if (muDoubleScalarIsNaN(rawsubscripts)) {
    emlrtErrorWithMessageIdR2018a(&sp, &qd_emlrtRTEI,
                                  "MATLAB:badsubscriptTextRange",
                                  "MATLAB:badsubscript", 0);
  }
  maxIndex = rawsubscripts;
  if (rawsubscripts > length) {
    emlrtErrorWithMessageIdR2018a(&sp, &pd_emlrtRTEI,
                                  "MATLAB:table:RowIndexOutOfRange",
                                  "MATLAB:table:RowIndexOutOfRange", 0);
  }
  return rawsubscripts;
}

} // namespace b_private
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (rowNamesDim.cpp)
