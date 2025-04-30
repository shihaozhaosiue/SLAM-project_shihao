//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse1.h
//
// Code generation for function 'sparse1'
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

// Type Declarations
namespace coder {
class b_sparse;

class c_sparse;

class f_sparse;

class d_sparse;

class g_sparse;

} // namespace coder

// Type Definitions
namespace coder {
class sparse {
public:
  static void assertValidSize(const emlrtStack &sp, int32_T s);
  static void spallocLike(const emlrtStack &sp, int32_T b_m, int32_T b_n,
                          int32_T nzmax, sparse &s);
  void horzcat(const emlrtStack &sp, const b_sparse &varargin_2,
               sparse &c) const;
  void vertcat(const emlrtStack &sp, const c_sparse &varargin_2,
               sparse &c) const;
  void b_vertcat(const emlrtStack &sp, const c_sparse &varargin_2,
                 sparse &c) const;
  void c_vertcat(const emlrtStack &sp, const c_sparse &varargin_2,
                 sparse &c) const;
  void c_plus(const emlrtStack &sp, const c_sparse &b, sparse &s) const;
  void parenReference(const emlrtStack &sp, const array<real_T, 1U> &varargin_1,
                      const array<real_T, 1U> &varargin_2, sparse &s) const;
  void parenReference(const emlrtStack &sp, real_T varargin_1,
                      c_sparse &s) const;
  void parenReference(const emlrtStack &sp, const array<real_T, 1U> &varargin_2,
                      sparse &s) const;
  void parenReference(const emlrtStack &sp, real_T varargin_2,
                      b_sparse &s) const;
  void b_parenReference(const emlrtStack &sp,
                        const array<real_T, 1U> &varargin_1, sparse &s) const;
  static void spallocLike(const emlrtStack &sp, int32_T b_m, int32_T b_n,
                          int32_T nzmax, f_sparse &s);
  static void assertValidIndexArg(const emlrtStack &sp,
                                  const array<int32_T, 1U> &s,
                                  array<int32_T, 1U> &sint);
  void mtimes(const emlrtStack &sp, const sparse &b, sparse &c) const;
  static void zerosLike(const emlrtStack &sp, d_sparse &y);
  void mtimes(const emlrtStack &sp, const b_sparse &b, b_sparse &c) const;
  void fillIn();
  void parenAssign(const emlrtStack &sp, const array<uint32_T, 1U> &rhs,
                   const array<real_T, 1U> &varargin_1,
                   const real_T varargin_2_data[], int32_T varargin_2_size);
  static void b_realloc(const emlrtStack &sp, b_sparse *b_this,
                        int32_T numAllocRequested, int32_T ub1, int32_T lb2,
                        int32_T ub2, int32_T offs);
  void b_fillIn();
  void parenAssign(const emlrtStack &sp, const array<real_T, 1U> &varargin_1);
  void parenAssign(const emlrtStack &sp, real_T varargin_1);
  static void sparseSparseEqHeightBinOp(const emlrtStack &sp, const f_sparse *a,
                                        const f_sparse &b, f_sparse &s);
  static void b_sparseSparseEqHeightBinOp(const emlrtStack &sp,
                                          const f_sparse *a, const f_sparse &b,
                                          f_sparse &s);
  static void sparseSparseEqHeightBinOp(const emlrtStack &sp, const f_sparse &a,
                                        const f_sparse *b, f_sparse &s);
  static void sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                         const f_sparse *rowA,
                                         const f_sparse &b, f_sparse &s);
  static void sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                         const f_sparse &rowA,
                                         const f_sparse *b, f_sparse &s);
  static void sparseSparseEqHeightBinOp(const emlrtStack &sp, const b_sparse *a,
                                        const f_sparse &b, f_sparse &s);
  static void permuteVector(const emlrtStack &sp, const array<int32_T, 1U> &idx,
                            array<int32_T, 1U> &y);

private:
  static void allocEqsizeBinop(const emlrtStack &sp, const sparse *a,
                               const c_sparse &b, int32_T sn, int32_T sm,
                               sparse &s);
  static void b_realloc(const emlrtStack &sp, sparse *b_this,
                        int32_T numAllocRequested, int32_T ub1, int32_T lb2,
                        int32_T ub2, int32_T offs);
  static void incrColIdx(const emlrtStack &sp, sparse *b_this, int32_T col,
                         int32_T offs);
  static void decrColIdx(const emlrtStack &sp, sparse *b_this, int32_T col,
                         int32_T offs);
  static void sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                         const c_sparse &rowA, const sparse *b,
                                         sparse &s);
  static void sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                         const sparse *rowA, const c_sparse &b,
                                         sparse &s);
  static void b_sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                           const sparse *rowA,
                                           const c_sparse &b, sparse &s);
  static void b_sparseSparseRowExpandBinOp(const emlrtStack &sp,
                                           const c_sparse &rowA,
                                           const sparse *b, sparse &s);

public:
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
  int32_T m;
  int32_T n;
  int32_T maxnz;
};

class b_sparse {
public:
  void init(const emlrtStack &sp, int32_T b_m, int32_T nzmaxval);
  void parenReference(const emlrtStack &sp, b_sparse &s) const;
  void full(const emlrtStack &sp, array<real_T, 1U> &y) const;
  void h_and(const emlrtStack &sp, const f_sparse &b, f_sparse &s) const;
  void b_rdivide(const emlrtStack &sp, real_T b, b_sparse &s) const;
  void ge(const emlrtStack &sp, real_T b, g_sparse &s) const;
  void c_plus(const emlrtStack &sp, array<real_T, 1U> &s) const;
  void parenAssign(const emlrtStack &sp, const array<uint32_T, 1U> &rhs,
                   const array<real_T, 1U> &varargin_1);
  void fillIn();
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
  int32_T m;
  int32_T maxnz;
};

class c_sparse {
public:
  void spones(const emlrtStack &sp, c_sparse &y) const;
  void fillIn();
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
  int32_T n;
  int32_T maxnz;
};

class d_sparse {
public:
  void b_times(const emlrtStack &sp, const c_sparse &b, c_sparse &s) const;
  void fillIn();
  array<real_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
};

class e_sparse {
public:
  array<boolean_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
};

class f_sparse {
public:
  void h_and(const emlrtStack &sp, const f_sparse &b, f_sparse &s) const;
  void ctranspose(const emlrtStack &sp, f_sparse &y) const;
  void fillIn();
  void b_fillIn();
  array<boolean_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
  int32_T m;
  int32_T n;
};

class g_sparse {
public:
  array<boolean_T, 1U> d;
  array<int32_T, 1U> colidx;
  array<int32_T, 1U> rowidx;
  int32_T m;
};

} // namespace coder

// End of code generation (sparse1.h)
