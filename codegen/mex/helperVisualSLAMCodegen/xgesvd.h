//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xgesvd.h
//
// Code generation for function 'xgesvd'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
namespace lapack {
int32_T ceval_xgesvd(const emlrtStack &sp, real32_T A[72], real32_T U[64],
                     real32_T S[8], real32_T V[81]);

}
} // namespace internal
} // namespace coder

// End of code generation (xgesvd.h)
