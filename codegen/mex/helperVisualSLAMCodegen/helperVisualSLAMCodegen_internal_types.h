//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen_internal_types.h
//
// Code generation for function 'helperVisualSLAMCodegen'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_types.h"
#include "rigidtform3d.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
enum class Continuity : int32_T
{
  unset = 0, // Default value
  continuous,
  step,
  event
};

}
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder
struct struct_T {
  int32_T xstart;
  int32_T xend;
  int32_T depth;
};

struct cell_wrap_16 {
  uint8_T f1[320];
};

struct cell_wrap_24 {
  uint32_T f1[8];
};

struct cell_wrap_92 {
  real_T f1[9];
};

struct cell_wrap_17 {
  coder::array<char_T, 2U> f1;
};

struct cell_wrap_6 {
  coder::array<real32_T, 2U> f1;
};

struct cell_wrap_7 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_8 {
  coder::array<uint8_T, 2U> f1;
};

struct cell_wrap_11 {
  coder::array<uint32_T, 2U> f1;
};

struct cell_wrap_12 {
  coder::array<real32_T, 1U> f1;
};

struct cell_3 {
  coder::array<uint32_T, 1U> f1;
  coder::array<real_T, 1U> f2;
  coder::array<real32_T, 2U> f3;
};

struct cell_wrap_25 {
  coder::array<real_T, 1U> f1;
};

struct cell_wrap_75 {
  coder::array<uint32_T, 2U> f1;
};

struct cell_wrap_76 {
  coder::array<real32_T, 2U> f1;
};

struct c_struct_T {
  coder::array<int32_T, 1U> x;
};

struct cell_wrap_133 {
  coder::array<uint32_T, 1U> f1;
};

struct e_struct_T {
  coder::array<int32_T, 1U> a;
  coder::array<int32_T, 1U> b;
};

struct cell_236 {
  coder::array<uint32_T, 1U> f1;
  coder::array<cell_wrap_1, 1U> f2;
  coder::array<real_T, 2U> f3;
};

struct cell_wrap_188 {
  coder::bounded_array<char_T, 17U, 2U> f1;
};

struct f_struct_T {
  coder::empty_bounded_array<char_T, 2U> Description;
};

struct g_struct_T {
  real_T sb;
};

struct h_struct_T {
  real_T sa;
};

struct cell_20 {
  coder::array<uint32_T, 1U> f1;
  coder::array<coder::b_rigidtform3d, 1U> f2;
};

struct cell_173 {
  uint32_T f1;
  coder::b_rigidtform3d f2[1];
};

struct cell_233 {
  coder::array<coder::b_rigidtform3d, 1U> f1;
  coder::array<cell_wrap_7, 2U> f2;
  coder::array<real_T, 1U> f3;
};

struct cell_245 {
  coder::array<real_T, 2U> f1;
  coder::array<coder::b_rigidtform3d, 1U> f2;
  coder::array<cell_wrap_7, 2U> f3;
  coder::array<real_T, 1U> f4;
};

struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (helperVisualSLAMCodegen_internal_types.h)
