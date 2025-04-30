//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// detectORBFeatures.h
//
// Code generation for function 'detectORBFeatures'
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

// Type Declarations
struct c_helperVisualSLAMCodegenStackD;

namespace coder {
class b_ORBPoints;

}

// Function Declarations
namespace coder {
void b_detectORBFeatures(c_helperVisualSLAMCodegenStackD *SD,
                         const emlrtStack &sp, const uint8_T b_I[307200],
                         b_ORBPoints &points);

}

// End of code generation (detectORBFeatures.h)
