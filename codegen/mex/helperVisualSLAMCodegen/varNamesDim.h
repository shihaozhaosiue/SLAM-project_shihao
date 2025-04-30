//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// varNamesDim.h
//
// Code generation for function 'varNamesDim'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace b_private {
class d_varNamesDim;

}
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace b_private {
class varNamesDim {
public:
  cell_wrap_17 descrs[2];
  cell_wrap_17 units[2];
  Continuity continuity[2];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
};

class b_varNamesDim {
public:
  cell_wrap_17 descrs[3];
  cell_wrap_17 units[3];
  Continuity continuity[3];
};

class c_varNamesDim {
public:
  static void subs2inds(const emlrtStack &sp, varNamesDim &updatedObj);
  static void selectFrom(const emlrtStack &sp, d_varNamesDim &newObj);
};

class d_varNamesDim {
public:
  cell_wrap_17 descrs[3];
  cell_wrap_17 units[3];
  Continuity continuity[3];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
};

class e_varNamesDim {
public:
  cell_wrap_17 descrs[4];
  cell_wrap_17 units[4];
  Continuity continuity[4];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
};

} // namespace b_private
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (varNamesDim.h)
