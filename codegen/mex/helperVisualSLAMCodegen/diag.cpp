//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// diag.cpp
//
// Code generation for function 'diag'
//

// Include files
#include "diag.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo vb_emlrtRTEI{
    102,    // lineNo
    19,     // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

static emlrtRTEInfo ds_emlrtRTEI{
    109,    // lineNo
    24,     // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

static emlrtRTEInfo es_emlrtRTEI{
    100,    // lineNo
    5,      // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

// Function Definitions
namespace coder {
void diag(const emlrtStack &sp, const array<real32_T, 2U> &v,
          array<real32_T, 1U> &d)
{
  if ((v.size(0) == 1) && (v.size(1) == 1)) {
    d.set_size(&es_emlrtRTEI, &sp, 1);
    d[0] = v[0];
  } else {
    int32_T m;
    int32_T n;
    if ((v.size(0) == 1) || (v.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &vb_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    m = v.size(0);
    n = v.size(1);
    if (v.size(1) > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }
    d.set_size(&ds_emlrtRTEI, &sp, m);
    for (n = 0; n < m; n++) {
      d[n] = v[n + v.size(0) * n];
    }
  }
}

} // namespace coder

// End of code generation (diag.cpp)
