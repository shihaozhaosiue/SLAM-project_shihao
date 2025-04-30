//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// pointTrack.h
//
// Code generation for function 'pointTrack'
//

#pragma once

// Include files
#include "pointTrackImpl.h"
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
class pointTrack {
public:
  void init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
            const array<real32_T, 2U> &varargin_2,
            const array<real_T, 1U> &varargin_3);
  void parenReference(const emlrtStack &sp, real_T idx,
                      pointTrack &this1) const;
  array<uint32_T, 2U> ViewIds;
  array<real32_T, 2U> Points;
  array<vision::internal::pointTrackImpl, 2U> Data;
};

} // namespace coder

// End of code generation (pointTrack.h)
