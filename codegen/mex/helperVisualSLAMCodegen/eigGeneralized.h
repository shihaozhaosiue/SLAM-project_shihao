//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eigGeneralized.h
//
// Code generation for function 'eigGeneralized'
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
void eigGeneralized(const emlrtStack &sp, const real_T A[900],
                    const real_T B[900], creal_T V[900], creal_T D[30]);

}

// End of code generation (eigGeneralized.h)
