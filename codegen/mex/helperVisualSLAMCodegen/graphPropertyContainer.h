//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// graphPropertyContainer.h
//
// Code generation for function 'graphPropertyContainer'
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

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
class graphPropertyContainer {
public:
  int32_T nrows;
};

class b_graphPropertyContainer {
public:
  cell_3 data;
  int32_T nrows;
};

class c_graphPropertyContainer {
public:
  void b_remove(const emlrtStack &sp, const array<real_T, 1U> &index_in);
  cell_233 data;
  int32_T nrows;
};

class d_graphPropertyContainer {
public:
  cell_20 data;
};

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (graphPropertyContainer.h)
