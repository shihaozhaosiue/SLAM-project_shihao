//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ORBPoints.h
//
// Code generation for function 'ORBPoints'
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

// Type Definitions
namespace coder {
class ORBPoints {
public:
  void init(const emlrtStack &sp);
  void init(const emlrtStack &sp, const array<real32_T, 2U> &varargin_1,
            const array<real32_T, 1U> &varargin_3,
            const array<real32_T, 1U> &varargin_5,
            const array<real32_T, 1U> &varargin_7);
  array<real32_T, 2U> pLocation;
  array<real32_T, 1U> pMetric;
  array<real32_T, 1U> pScale;
  array<real32_T, 1U> pOrientation;
};

class b_ORBPoints {
public:
  void selectUniform(const emlrtStack &sp, b_ORBPoints &that) const;
  void init(const emlrtStack &sp, const array<real32_T, 2U> &varargin_1,
            const array<real32_T, 1U> &varargin_3,
            const array<real32_T, 1U> &varargin_5,
            const array<real32_T, 1U> &varargin_7);
  array<real32_T, 2U> pLocation;
  array<real32_T, 1U> pMetric;
  uint8_T pNumLevels;
  real32_T pScaleFactor;
  int32_T pPatchSize;
  array<real32_T, 1U> pScale;
  array<real32_T, 1U> pOrientation;
};

} // namespace coder

// End of code generation (ORBPoints.h)
