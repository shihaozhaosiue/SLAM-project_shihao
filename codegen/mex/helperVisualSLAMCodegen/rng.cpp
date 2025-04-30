//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rng.cpp
//
// Code generation for function 'rng'
//

// Include files
#include "rng.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    51,    // lineNo
    9,     // colNo
    "rng", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m" // pName
};

static emlrtRSInfo bid_emlrtRSI{
    51,    // lineNo
    "rng", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m" // pathName
};

// Function Definitions
namespace coder {
void rng(const emlrtStack &sp)
{
  static const int32_T b_iv[2]{1, 3};
  static const char_T u[3]{'r', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = &sp;
  st.tls = sp.tls;
  y = nullptr;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 3, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&b_y, m);
  st.site = &bid_emlrtRSI;
  feval(st, y, b_y, emlrtMCI);
}

} // namespace coder

// End of code generation (rng.cpp)
