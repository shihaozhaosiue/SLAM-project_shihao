//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_types.h
//
// Code generation for function 'helperVisualSLAMCodegen'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#define MAX_THREADS omp_get_max_threads()

// Type Definitions
struct b_struct_T {
  int32_T addr;
  int32_T next;
  int32_T prev;
};

struct cell_wrap_0 {
  uint8_T f1[307200];
};

struct cell_wrap_1 {
  real32_T f1[16];
};

struct struct0_T {
  coder::array<uint32_T, 1U> viewIds;
  coder::array<real32_T, 2U> xyzPoints;
  coder::array<cell_wrap_1, 1U> optimizedPoses;
  coder::array<cell_wrap_1, 1U> estimatedPoses;
  coder::array<uint32_T, 1U> vId;
  coder::array<real_T, 1U> addedFramesIdx;
};

struct extractORBFeatures {
  uint8_T Iu8[307200];
};

struct detectORBFeatures {
  uint8_T Iu8[307200];
};

struct helperTrackLastKeyFrameKLT {
  uint8_T Iu8_grayT[307200];
};

struct PointTracker_initialize {
  uint8_T Iu8_grayT[307200];
};

struct helperDetectAndExtractFeatures {
  uint8_T Iu8[307200];
};

struct b_helperVisualSLAMCodegen {
  uint8_T currI[307200];
};

struct helperVisualSLAMCodegen_api {
  cell_wrap_0 imagesCell[128];
};

struct c_helperVisualSLAMCodegenStackD {
  extractORBFeatures f0;
  detectORBFeatures f1;
  helperTrackLastKeyFrameKLT f2;
  PointTracker_initialize f3;
  helperDetectAndExtractFeatures f4;
  b_helperVisualSLAMCodegen f5;
  helperVisualSLAMCodegen_api f6;
};

// End of code generation (helperVisualSLAMCodegen_types.h)
