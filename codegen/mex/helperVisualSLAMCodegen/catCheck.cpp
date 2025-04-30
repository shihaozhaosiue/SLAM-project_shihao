//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// catCheck.cpp
//
// Code generation for function 'catCheck'
//

// Include files
#include "catCheck.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
int32_T sparse_catCheck(const emlrtStack &sp, const sparse *varargin_1,
                        const c_sparse &varargin_2, int32_T &cnrows,
                        int32_T &cncols)
{
  emlrtStack st;
  int32_T cnnz;
  boolean_T b;
  boolean_T foundSize;
  boolean_T isAcceptableEmpty;
  boolean_T isAcceptableEmpty_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  cncols = 0;
  if ((varargin_1->m == 0) || (varargin_1->n == 0)) {
    isAcceptableEmpty = true;
  } else {
    isAcceptableEmpty = false;
  }
  foundSize = !isAcceptableEmpty;
  isAcceptableEmpty_tmp = (varargin_2.n == 0);
  if ((!isAcceptableEmpty_tmp) && foundSize) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &wc_emlrtRTEI, "Coder:toolbox:ConcatenationDimensionMismatch",
        "Coder:toolbox:ConcatenationDimensionMismatch", 6, 12, 2, 12, 2, 12, 0);
  }
  b = !isAcceptableEmpty_tmp;
  if (b && (!foundSize)) {
    cncols = varargin_2.n;
  }
  cnnz = 0;
  cnrows = 0;
  if ((isAcceptableEmpty && isAcceptableEmpty_tmp) || b) {
    st.site = &thb_emlrtRSI;
    cnnz = varargin_2.colidx[varargin_2.colidx.size(0) - 1];
    if (MIN_int32_T - cnnz < 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &xc_emlrtRTEI, "Coder:toolbox:SparseCatTooBig",
          "Coder:toolbox:SparseCatTooBig", 3, 4, 8, "nonzeros");
    }
    cnnz--;
    cnrows = 1;
  }
  return cnnz;
}

} // namespace coder

// End of code generation (catCheck.cpp)
