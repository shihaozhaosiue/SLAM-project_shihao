//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// catCheck.h
//
// Code generation for function 'catCheck'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class sparse;

class c_sparse;

} // namespace coder

// Function Declarations
namespace coder {
int32_T sparse_catCheck(const emlrtStack &sp, const sparse *varargin_1,
                        const c_sparse &varargin_2, int32_T &cnrows,
                        int32_T &cncols);

}

// End of code generation (catCheck.h)
