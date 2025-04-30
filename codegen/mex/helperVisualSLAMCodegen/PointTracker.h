//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// PointTracker.h
//
// Code generation for function 'PointTracker'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct c_helperVisualSLAMCodegenStackD;

// Type Definitions
namespace coder {
namespace vision {
class PointTracker {
public:
  PointTracker *init();
  void initialize(c_helperVisualSLAMCodegenStackD *SD, const emlrtStack &sp,
                  const array<real32_T, 2U> &points, const uint8_T b_I[307200]);
  void setup(const emlrtStack &sp);
  void setPoints(const emlrtStack &sp, const array<real32_T, 2U> &points);
  void matlabCodegenDestructor();
  ~PointTracker();
  PointTracker();

protected:
  static void validatePoints(const emlrtStack &sp,
                             const array<real32_T, 2U> &points);

public:
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  cell_wrap_24 inputVarSize[1];
  void *pTracker;
  real_T FrameSize[2];
  real_T NumPoints;
  boolean_T IsRGB;
  real_T FrameClassID;

private:
  boolean_T isSetupComplete;
};

} // namespace vision
} // namespace coder

// Function Declarations
void c_or(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
          const coder::array<boolean_T, 1U> &in2,
          const coder::array<boolean_T, 1U> &in3);

// End of code generation (PointTracker.h)
