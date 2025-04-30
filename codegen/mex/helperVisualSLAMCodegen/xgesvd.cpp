//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xgesvd.cpp
//
// Code generation for function 'xgesvd'
//

// Include files
#include "xgesvd.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include <cstddef>

// Function Definitions
namespace coder {
namespace internal {
namespace lapack {
int32_T ceval_xgesvd(const emlrtStack &sp, real32_T A[72], real32_T U[64],
                     real32_T S[8], real32_T V[81])
{
  ptrdiff_t info_t;
  emlrtStack st;
  int32_T info;
  real32_T Vt[81];
  real32_T superb[7];
  st.prev = &sp;
  st.tls = sp.tls;
  info_t = LAPACKE_sgesvd(102, 'S', 'A', (ptrdiff_t)8, (ptrdiff_t)9, &A[0],
                          (ptrdiff_t)8, &S[0], &U[0], (ptrdiff_t)8, &Vt[0],
                          (ptrdiff_t)9, &superb[0]);
  info = (int32_T)info_t;
  for (int32_T i{0}; i < 9; i++) {
    for (int32_T i1{0}; i1 < 9; i1++) {
      V[i1 + 9 * i] = Vt[i + 9 * i1];
    }
  }
  st.site = &lm_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&st, &fb_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&st, &gb_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    14, &cv1[0], 12, (int32_T)info_t);
    }
  }
  return info;
}

} // namespace lapack
} // namespace internal
} // namespace coder

// End of code generation (xgesvd.cpp)
