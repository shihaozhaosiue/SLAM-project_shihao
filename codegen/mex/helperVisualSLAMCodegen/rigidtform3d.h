//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rigidtform3d.h
//
// Code generation for function 'rigidtform3d'
//

#pragma once

// Include files
#include "rigidtform3dImpl.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
namespace coder {
class rigidtform3d {
public:
  void init(const emlrtStack &sp, const real32_T varargin_1[9],
            const real32_T varargin_2_data[], const int32_T varargin_2_size[2]);
  void init(const emlrtStack &sp);
  void repmat(const emlrtStack &sp, real_T varargin_1);
  void parenAssign(const emlrtStack &sp, const rigidtform3d &rhs, int32_T idx);
  bounded_array<real32_T, 12U, 2U> Translation;
  real32_T R[9];
  bounded_array<images::geotrans::internal::rigidtform3dImpl, 16U, 2U> Data;
};

class b_rigidtform3d {
public:
  void init(const emlrtStack &sp);
  void init(const emlrtStack &sp, const real32_T varargin_1[9],
            const real32_T varargin_2[3]);
  void init(const emlrtStack &sp, const real32_T varargin_1_data[]);
  void parenReference(const emlrtStack &sp, real_T idx,
                      b_rigidtform3d *this1) const;
  void b_init(const emlrtStack &sp, const real32_T varargin_1[16]);
  void parenReference(const emlrtStack &sp, b_rigidtform3d &this1) const;
  void parenReference(const emlrtStack &sp, const array<real_T, 1U> &idx,
                      b_rigidtform3d &this1) const;
  void c_init(const emlrtStack &sp, const real32_T varargin_1[16]);
  void parenReference(const emlrtStack &sp, uint32_T idx,
                      b_rigidtform3d &this1) const;
  void init(const emlrtStack &sp, const real32_T varargin_1_data[],
            const int32_T varargin_1_size[2]);
  void horzcat(const emlrtStack &sp, const b_rigidtform3d &varargin_1);
  void parenAssign(const emlrtStack &sp, const b_rigidtform3d &rhs,
                   const real_T idx_data[], int32_T idx_size);
  real32_T Translation[3];
  real32_T R[9];
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> Data;
};

class c_rigidtform3d {
public:
  void init();
  void init(const emlrtStack &sp, const real_T varargin_1[9],
            const real_T varargin_2[3]);
  real_T Translation[3];
  real_T R[9];
  bounded_array<images::geotrans::internal::rigidtform3dImpl, 1U, 2U> Data;
};

} // namespace coder

// End of code generation (rigidtform3d.h)
