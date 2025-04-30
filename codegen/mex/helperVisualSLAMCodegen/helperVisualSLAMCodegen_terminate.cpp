//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_terminate.cpp
//
// Code generation for function 'helperVisualSLAMCodegen_terminate'
//

// Include files
#include "helperVisualSLAMCodegen_terminate.h"
#include "_coder_helperVisualSLAMCodegen_mex.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

// Function Declarations
static void emlrtExitTimeCleanupDtorFcn(const void *b_r);

// Function Definitions
static void emlrtExitTimeCleanupDtorFcn(const void *b_r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void helperVisualSLAMCodegen_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  // Initialize the memory manager.
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&helperVisualSLAMCodegen_nestLockGlobal);
  st.tls = emlrtRootTLSGlobal;
  try {
    emlrtPushHeapReferenceStackR2021a(&st, false, nullptr,
                                      (void *)&emlrtExitTimeCleanupDtorFcn,
                                      nullptr, nullptr, nullptr);
    emlrtEnterRtStackR2012b(&st);
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtExitTimeCleanup(&emlrtContextGlobal);
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&helperVisualSLAMCodegen_nestLockGlobal);
  } catch (...) {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&helperVisualSLAMCodegen_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

void helperVisualSLAMCodegen_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (helperVisualSLAMCodegen_terminate.cpp)
