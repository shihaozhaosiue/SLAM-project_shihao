//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_helperVisualSLAMCodegen_mex.cpp
//
// Code generation for function '_coder_helperVisualSLAMCodegen_mex'
//

// Include files
#include "_coder_helperVisualSLAMCodegen_mex.h"
#include "_coder_helperVisualSLAMCodegen_api.h"
#include "helperVisualSLAMCodegen.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_initialize.h"
#include "helperVisualSLAMCodegen_terminate.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <cstddef>
#include <cstdlib>
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void helperVisualSLAMCodegen_mexFunction(c_helperVisualSLAMCodegenStackD *SD,
                                         int32_T nlhs, mxArray *plhs[1],
                                         int32_T nrhs, const mxArray *prhs[1])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        23, "helperVisualSLAMCodegen");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "helperVisualSLAMCodegen");
  }
  // Call the function.
  b_helperVisualSLAMCodegen_api(SD, prhs[0], &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  c_helperVisualSLAMCodegenStackD *d_helperVisualSLAMCodegenStackD{nullptr};
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  d_helperVisualSLAMCodegenStackD =
      static_cast<c_helperVisualSLAMCodegenStackD *>(
          new c_helperVisualSLAMCodegenStackD);
  mexAtExit(&helperVisualSLAMCodegen_atexit);
  // Initialize the memory manager.
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&helperVisualSLAMCodegen_nestLockGlobal);
  helperVisualSLAMCodegen_initialize();
  st.tls = emlrtRootTLSGlobal;
  try {
    helperVisualSLAMCodegen_mexFunction(d_helperVisualSLAMCodegenStackD, nlhs,
                                        plhs, nrhs, prhs);
    helperVisualSLAMCodegen_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&helperVisualSLAMCodegen_nestLockGlobal);
  } catch (...) {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&helperVisualSLAMCodegen_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete d_helperVisualSLAMCodegenStackD;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(),
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_helperVisualSLAMCodegen_mex.cpp)
