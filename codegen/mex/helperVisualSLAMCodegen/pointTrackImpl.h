//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// pointTrackImpl.h
//
// Code generation for function 'pointTrackImpl'
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
namespace vision {
namespace internal {
class pointTrackImpl {
public:
  array<uint32_T, 2U> ViewIds;
  array<real32_T, 2U> Points;
  array<uint32_T, 2U> FeatureIndices;
};

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (pointTrackImpl.h)
