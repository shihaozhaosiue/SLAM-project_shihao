//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// validateAndParseInputs.h
//
// Code generation for function 'validateAndParseInputs'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class table;

class pointTrack;

class sparse;

} // namespace coder

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace bundleAdjust {
void c_convertToMeasurementsAndVisib(const emlrtStack &sp,
                                     const table &cameraPoses,
                                     const pointTrack &pointTracks,
                                     array<real_T, 2U> &measurements,
                                     sparse &visibilitySp);

}
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (validateAndParseInputs.h)
