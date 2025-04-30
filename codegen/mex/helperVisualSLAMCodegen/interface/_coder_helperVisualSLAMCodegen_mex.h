//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_helperVisualSLAMCodegen_mex.h
//
// Code generation for function '_coder_helperVisualSLAMCodegen_mex'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void helperVisualSLAMCodegen_mexFunction(c_helperVisualSLAMCodegenStackD *SD,
                                         int32_T nlhs, mxArray *plhs[1],
                                         int32_T nrhs, const mxArray *prhs[1]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_helperVisualSLAMCodegen_mex.h)
