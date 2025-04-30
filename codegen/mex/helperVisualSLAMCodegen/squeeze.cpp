//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// squeeze.cpp
//
// Code generation for function 'squeeze'
//

// Include files
#include "squeeze.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ivb_emlrtRSI{
    38,        // lineNo
    "squeeze", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m" // pathName
};

static emlrtRTEInfo sd_emlrtRTEI{
    87,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo xbb_emlrtRTEI{
    38,        // lineNo
    1,         // colNo
    "squeeze", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m" // pName
};

// Function Definitions
namespace coder {
void squeeze(const emlrtStack &sp, const array<real_T, 3U> &a,
             array<real_T, 3U> &b)
{
  emlrtStack st;
  int32_T n;
  int32_T nx;
  int32_T szb_idx_0;
  int32_T szb_idx_1;
  st.prev = &sp;
  st.tls = sp.tls;
  szb_idx_0 = 1;
  szb_idx_1 = 3;
  if (a.size(2) != 1) {
    szb_idx_0 = 3;
    if (a.size(2) != 1) {
      szb_idx_1 = a.size(2);
    }
  }
  st.site = &ivb_emlrtRSI;
  nx = 3 * a.size(2);
  n = 3;
  if (a.size(2) > 3) {
    n = a.size(2);
  }
  if (szb_idx_1 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &oc_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  n = szb_idx_0 * szb_idx_1;
  if (n != nx) {
    emlrtErrorWithMessageIdR2018a(
        &st, &sd_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b.set_size(&xbb_emlrtRTEI, &sp, szb_idx_0, szb_idx_1, 1);
  for (szb_idx_0 = 0; szb_idx_0 < n; szb_idx_0++) {
    b[szb_idx_0] = a[szb_idx_0];
  }
}

void squeeze(const emlrtStack &sp, const array<real_T, 3U> &a,
             array<real_T, 2U> &b)
{
  emlrtStack st;
  int32_T n;
  int32_T nx;
  int32_T szb_idx_0;
  st.prev = &sp;
  st.tls = sp.tls;
  szb_idx_0 = 1;
  if (a.size(2) != 1) {
    szb_idx_0 = a.size(2);
  }
  st.site = &ivb_emlrtRSI;
  nx = a.size(2);
  n = 1;
  if (a.size(2) > 1) {
    n = a.size(2);
  }
  if (szb_idx_0 > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &oc_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (szb_idx_0 != a.size(2)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &sd_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b.set_size(&xbb_emlrtRTEI, &sp, szb_idx_0, 1);
  for (nx = 0; nx < szb_idx_0; nx++) {
    b[nx] = a[nx];
  }
}

} // namespace coder

// End of code generation (squeeze.cpp)
