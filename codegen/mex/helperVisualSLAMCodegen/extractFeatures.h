//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// extractFeatures.h
//
// Code generation for function 'extractFeatures'
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
namespace coder {
class b_ORBPoints;

}
struct c_helperVisualSLAMCodegenStackD;

namespace coder {
class binaryFeatures;

class ORBPoints;

} // namespace coder

// Function Declarations
namespace coder {
void b_extractORBFeatures(c_helperVisualSLAMCodegenStackD *SD,
                          const emlrtStack &sp, const uint8_T b_I[307200],
                          const b_ORBPoints &points, binaryFeatures &features,
                          ORBPoints &valid_points);

void parseInputs(const emlrtStack &sp, const b_ORBPoints &points);

int32_T parseORBInputs(
    const emlrtStack &sp, const b_ORBPoints &points,
    real32_T ptsStruct_Location_data[], int32_T ptsStruct_Location_size[2],
    real32_T ptsStruct_Scale_data[], real32_T ptsStruct_Metric_data[],
    int32_T &ptsStruct_Metric_size, real32_T ptsStruct_Orientation_data[],
    int32_T &ptsStruct_Orientation_size, real32_T &ScaleFactor,
    uint8_T &NumLevels, int32_T &PatchSize);

} // namespace coder

// End of code generation (extractFeatures.h)
