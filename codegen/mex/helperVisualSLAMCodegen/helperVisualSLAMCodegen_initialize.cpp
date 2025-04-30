//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_initialize.cpp
//
// Code generation for function 'helperVisualSLAMCodegen_initialize'
//

// Include files
#include "helperVisualSLAMCodegen_initialize.h"
#include "_coder_helperVisualSLAMCodegen_mex.h"
#include "helperVisualSLAMCodegen_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void helperVisualSLAMCodegen_once();

// Function Definitions
static void helperVisualSLAMCodegen_once()
{
  mex_InitInfAndNan();
}

void helperVisualSLAMCodegen_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "video_and_image_blockset", 2);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "image_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    helperVisualSLAMCodegen_once();
  }
}

// End of code generation (helperVisualSLAMCodegen_initialize.cpp)
