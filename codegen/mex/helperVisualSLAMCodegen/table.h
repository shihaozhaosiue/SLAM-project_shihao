//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// table.h
//
// Code generation for function 'table'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rowNamesDim.h"
#include "rtwtypes.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class b_rigidtform3d;

class c_table;

} // namespace coder
struct cell_wrap_1;

// Type Definitions
namespace coder {
class table {
public:
  void init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
            const array<b_rigidtform3d, 1U> &varargin_2);
  void parenReference(const emlrtStack &sp, c_table &b) const;
  matlab::internal::coder::tabular::b_private::rowNamesDim rowDim;
  cell_20 data;

protected:
  matlab::internal::coder::tabular::b_private::varNamesDim varDim;
  f_struct_T arrayProps;
};

class b_table {
public:
  void init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
            const array<real_T, 1U> &varargin_2,
            const array<real32_T, 2U> &varargin_3);
  matlab::internal::coder::tabular::b_private::rowNamesDim rowDim;
  cell_3 data;

protected:
  matlab::internal::coder::tabular::b_private::b_varNamesDim varDim;
  f_struct_T arrayProps;
};

class c_table {
public:
  cell_173 data;
};

class d_table {
public:
  void parenReference(const emlrtStack &sp, const array<real_T, 1U> &varargin_1,
                      d_table &b) const;
  matlab::internal::coder::tabular::b_private::rowNamesDim rowDim;
  matlab::internal::coder::tabular::b_private::d_varNamesDim varDim;
  cell_233 data;
  f_struct_T arrayProps;
};

class e_table {
public:
  matlab::internal::coder::tabular::b_private::rowNamesDim rowDim;
  matlab::internal::coder::tabular::b_private::e_varNamesDim varDim;
  cell_245 data;
  f_struct_T arrayProps;
};

class f_table {
public:
  void init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
            const array<cell_wrap_1, 1U> &varargin_2,
            const array<real_T, 1U> &varargin_3);
  void init(const emlrtStack &sp, const array<uint32_T, 1U> &varargin_1,
            const array<cell_wrap_1, 1U> &varargin_2,
            const array<real_T, 2U> &varargin_3);
  cell_236 data;

protected:
  matlab::internal::coder::tabular::b_private::b_varNamesDim varDim;
  f_struct_T arrayProps;
};

} // namespace coder

// End of code generation (table.h)
