//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ismember.cpp
//
// Code generation for function 'ismember'
//

// Include files
#include "ismember.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "issorted.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "coder_array.h"
#include "omp.h"

// Variable Definitions
static emlrtRSInfo mgb_emlrtRSI{
    93,             // lineNo
    "isMemberRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo ngb_emlrtRSI{
    97,             // lineNo
    "isMemberRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo ogb_emlrtRSI{
    99,             // lineNo
    "isMemberRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo pgb_emlrtRSI{
    101,            // lineNo
    "isMemberRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo qgb_emlrtRSI{
    107,            // lineNo
    "isMemberRows", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo rgb_emlrtRSI{
    472,                        // lineNo
    "isMemberRowsLinearSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo sgb_emlrtRSI{
    484,                        // lineNo
    "isMemberRowsLinearSearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo
    tgb_emlrtRSI{
        21,             // lineNo
        "issortedrows", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\issortedrow"
        "s.m" // pathName
    };

static emlrtRSInfo ugb_emlrtRSI{
    339,                        // lineNo
    "isMemberRowsBinarySearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo vgb_emlrtRSI{
    347,                        // lineNo
    "isMemberRowsBinarySearch", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo ajb_emlrtRSI{
    162,        // lineNo
    "isMember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo gac_emlrtRSI{
    173,        // lineNo
    "isMember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo hac_emlrtRSI{
    180,        // lineNo
    "isMember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo iac_emlrtRSI{
    183,        // lineNo
    "isMember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo jac_emlrtRSI{
    202,        // lineNo
    "isMember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRTEInfo iv_emlrtRTEI{
    1,          // lineNo
    29,         // colNo
    "sortrows", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m" // pName
};

static emlrtRTEInfo lv_emlrtRTEI{
    467,        // lineNo
    1,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo mv_emlrtRTEI{
    468,        // lineNo
    1,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo nv_emlrtRTEI{
    333,        // lineNo
    5,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo ov_emlrtRTEI{
    351,        // lineNo
    5,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo pv_emlrtRTEI{
    333,        // lineNo
    11,         // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo leb_emlrtRTEI{
    120,        // lineNo
    1,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo gnb_emlrtRTEI{
    121,        // lineNo
    1,          // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

// Function Declarations
namespace coder {
static void b_isMemberRowsBinarySearch(const emlrtStack &sp,
                                       const array<uint32_T, 2U> &A,
                                       const array<uint32_T, 2U> &S,
                                       array<boolean_T, 1U> &tf,
                                       array<int32_T, 1U> &loc);

static int32_T bsearchni(int32_T k, const array<uint32_T, 1U> &x,
                         const array<uint32_T, 2U> &s);

static int32_T bsearchni(int32_T k, const array<uint32_T, 1U> &x,
                         const array<uint32_T, 1U> &s);

static int32_T findRowBinarySearch(const array<uint32_T, 2U> &A, int32_T iRowA,
                                   const array<uint32_T, 2U> &S);

static void isMemberRowsBinarySearch(const emlrtStack &sp,
                                     const array<uint32_T, 2U> &A,
                                     const array<uint32_T, 2U> &S,
                                     const array<int32_T, 1U> &sortOrder,
                                     array<boolean_T, 1U> &tf,
                                     array<int32_T, 1U> &loc);

} // namespace coder

// Function Definitions
namespace coder {
static void b_isMemberRowsBinarySearch(const emlrtStack &sp,
                                       const array<uint32_T, 2U> &A,
                                       const array<uint32_T, 2U> &S,
                                       array<boolean_T, 1U> &tf,
                                       array<int32_T, 1U> &loc)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_isMemberRowsBinarySearch_numThreads;
  int32_T loop_ub;
  int32_T ub_loop;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  loop_ub = A.size(0);
  loc.set_size(&pv_emlrtRTEI, &sp, A.size(0));
  st.site = &vgb_emlrtRSI;
  if (A.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  ub_loop = A.size(0);
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  b_isMemberRowsBinarySearch_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(b_isMemberRowsBinarySearch_numThreads)

  for (int32_T k = 0; k < ub_loop; k++) {
    loc[k] = findRowBinarySearch(A, k + 1, S);
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  tf.set_size(&ov_emlrtRTEI, &sp, loop_ub);
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    tf[ub_loop] = (loc[ub_loop] != 0);
  }
}

static int32_T bsearchni(int32_T k, const array<uint32_T, 1U> &x,
                         const array<uint32_T, 2U> &s)
{
  int32_T idx;
  int32_T ihi;
  int32_T ilo;
  uint32_T b_x;
  boolean_T exitg1;
  b_x = x[k - 1];
  ihi = s.size(1);
  idx = 0;
  ilo = 1;
  exitg1 = false;
  while ((!exitg1) && (ihi >= ilo)) {
    int32_T imid;
    imid = ((ilo >> 1) + (ihi >> 1)) - 1;
    if (((static_cast<uint32_T>(ilo) & 1U) == 1U) &&
        ((static_cast<uint32_T>(ihi) & 1U) == 1U)) {
      imid++;
    }
    if (b_x == s[imid]) {
      idx = imid + 1;
      exitg1 = true;
    } else if (b_x < s[imid]) {
      ihi = imid;
    } else {
      ilo = imid + 2;
    }
  }
  if (idx > 0) {
    idx--;
    while ((idx > 0) && (b_x == s[idx - 1])) {
      idx--;
    }
    idx++;
  }
  return idx;
}

static int32_T bsearchni(int32_T k, const array<uint32_T, 1U> &x,
                         const array<uint32_T, 1U> &s)
{
  int32_T idx;
  int32_T ihi;
  int32_T ilo;
  uint32_T b_x;
  boolean_T exitg1;
  b_x = x[k - 1];
  ihi = s.size(0);
  idx = 0;
  ilo = 1;
  exitg1 = false;
  while ((!exitg1) && (ihi >= ilo)) {
    int32_T imid;
    imid = ((ilo >> 1) + (ihi >> 1)) - 1;
    if (((static_cast<uint32_T>(ilo) & 1U) == 1U) &&
        ((static_cast<uint32_T>(ihi) & 1U) == 1U)) {
      imid++;
    }
    if (b_x == s[imid]) {
      idx = imid + 1;
      exitg1 = true;
    } else if (b_x < s[imid]) {
      ihi = imid;
    } else {
      ilo = imid + 2;
    }
  }
  if (idx > 0) {
    idx--;
    while ((idx > 0) && (b_x == s[idx - 1])) {
      idx--;
    }
    idx++;
  }
  return idx;
}

static int32_T findRowBinarySearch(const array<uint32_T, 2U> &A, int32_T iRowA,
                                   const array<uint32_T, 2U> &S)
{
  int32_T idx;
  int32_T ihi;
  int32_T ilo;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T isLT;
  ihi = S.size(0);
  idx = 0;
  ilo = 1;
  exitg1 = false;
  while ((!exitg1) && (ihi >= ilo)) {
    int32_T imid;
    int32_T k;
    boolean_T iseq;
    imid = ((ilo >> 1) + (ihi >> 1)) - 1;
    if (((static_cast<uint32_T>(ilo) & 1U) == 1U) &&
        ((static_cast<uint32_T>(ihi) & 1U) == 1U)) {
      imid++;
    }
    isLT = true;
    iseq = true;
    k = 0;
    exitg2 = false;
    while ((!exitg2) && (k < 2)) {
      uint32_T iseq_tmp;
      iseq_tmp = A[(iRowA + A.size(0) * k) - 1];
      iseq = (iseq_tmp == S[imid + S.size(0) * k]);
      if (!iseq) {
        isLT = (iseq_tmp < S[imid + S.size(0) * k]);
        exitg2 = true;
      } else {
        k++;
      }
    }
    if (iseq) {
      idx = imid + 1;
      exitg1 = true;
    } else if (isLT) {
      ihi = imid;
    } else {
      ilo = imid + 2;
    }
  }
  if (idx > 0) {
    idx--;
    exitg1 = false;
    while ((!exitg1) && (idx >= 1)) {
      isLT = true;
      ihi = 0;
      exitg2 = false;
      while ((!exitg2) && (ihi < 2)) {
        if (A[(iRowA + A.size(0) * ihi) - 1] !=
            S[(idx + S.size(0) * ihi) - 1]) {
          isLT = false;
          exitg2 = true;
        } else {
          ihi++;
        }
      }
      if (isLT) {
        idx--;
      } else {
        exitg1 = true;
      }
    }
    idx++;
  }
  return idx;
}

static void isMemberRowsBinarySearch(const emlrtStack &sp,
                                     const array<uint32_T, 2U> &A,
                                     const array<uint32_T, 2U> &S,
                                     const array<int32_T, 1U> &sortOrder,
                                     array<boolean_T, 1U> &tf,
                                     array<int32_T, 1U> &loc)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T idx;
  int32_T isMemberRowsBinarySearch_numThreads;
  int32_T loop_ub;
  int32_T ub_loop;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  loop_ub = A.size(0);
  loc.set_size(&nv_emlrtRTEI, &sp, A.size(0));
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    loc[ub_loop] = 0;
  }
  st.site = &ugb_emlrtRSI;
  if (A.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  ub_loop = A.size(0);
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  isMemberRowsBinarySearch_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(                                          \
        isMemberRowsBinarySearch_numThreads) private(idx)

  for (int32_T k = 0; k < ub_loop; k++) {
    idx = findRowBinarySearch(A, k + 1, S);
    if (idx > 0) {
      loc[k] = sortOrder[idx - 1];
    }
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  tf.set_size(&ov_emlrtRTEI, &sp, loop_ub);
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    tf[ub_loop] = (loc[ub_loop] != 0);
  }
}

void b_isMember(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 1U> &s, array<boolean_T, 1U> &tf)
{
  array<int32_T, 1U> mjd_emlrtRSI;
  array<uint32_T, 1U> ss;
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_isMember_numThreads;
  int32_T n;
  int32_T na_tmp;
  int32_T ns_tmp;
  int32_T pmax;
  int32_T pmin;
  boolean_T exitg1;
  boolean_T guard1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(0);
  ns_tmp = s.size(0);
  tf.set_size(&leb_emlrtRTEI, &sp, a.size(0));
  for (pmax = 0; pmax < na_tmp; pmax++) {
    tf[pmax] = false;
  }
  guard1 = false;
  if (s.size(0) <= 4) {
    guard1 = true;
  } else {
    pmax = 31;
    pmin = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax - pmin > 1)) {
      int32_T p;
      int32_T pow2p;
      p = (pmin + pmax) >> 1;
      pow2p = 1 << p;
      if (pow2p == ns_tmp) {
        pmax = p;
        exitg1 = true;
      } else if (pow2p > ns_tmp) {
        pmax = p;
      } else {
        pmin = p;
      }
    }
    if (a.size(0) <= pmax + 4) {
      guard1 = true;
    } else {
      st.site = &gac_emlrtRSI;
      if (!issorted(st, s)) {
        st.site = &hac_emlrtRSI;
        ss.set_size(&tr_emlrtRTEI, &st, s.size(0));
        for (pmax = 0; pmax < ns_tmp; pmax++) {
          ss[pmax] = s[pmax];
        }
        b_st.site = &li_emlrtRSI;
        internal::sort(b_st, ss, mjd_emlrtRSI);
        st.site = &iac_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        pmax = a.size(0);
        emlrtEnterParallelRegion((emlrtCTX)&sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        b_isMember_numThreads = emlrtAllocRegionTLSs(
            sp.tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(b_isMember_numThreads) private(n)

        for (int32_T k = 0; k < pmax; k++) {
          n = bsearchni(k + 1, a, ss);
          if (n > 0) {
            tf[k] = true;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)&sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      } else {
        st.site = &jac_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        pmax = a.size(0);
        emlrtEnterParallelRegion((emlrtCTX)&sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        b_isMember_numThreads = emlrtAllocRegionTLSs(
            sp.tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(b_isMember_numThreads) private(n)

        for (int32_T k = 0; k < pmax; k++) {
          n = bsearchni(k + 1, a, s);
          if (n > 0) {
            tf[k] = true;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)&sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      }
    }
  }
  if (guard1) {
    st.site = &ajb_emlrtRSI;
    if (a.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (pmin = 0; pmin < na_tmp; pmin++) {
      st.site = &cdb_emlrtRSI;
      if (ns_tmp > 2147483646) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      pmax = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax <= ns_tmp - 1)) {
        if (a[pmin] == s[pmax]) {
          tf[pmin] = true;
          exitg1 = true;
        } else {
          pmax++;
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void c_isMember(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 2U> &s, array<boolean_T, 1U> &tf)
{
  array<int32_T, 1U> mjd_emlrtRSI;
  array<uint32_T, 1U> b_s;
  array<uint32_T, 1U> ss;
  emlrtStack b_st;
  emlrtStack st;
  int32_T c_isMember_numThreads;
  int32_T n;
  int32_T na_tmp;
  int32_T ns_tmp;
  int32_T pmax;
  int32_T pmin;
  boolean_T exitg1;
  boolean_T guard1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(0);
  ns_tmp = s.size(1);
  tf.set_size(&leb_emlrtRTEI, &sp, a.size(0));
  for (pmax = 0; pmax < na_tmp; pmax++) {
    tf[pmax] = false;
  }
  guard1 = false;
  if (s.size(1) <= 4) {
    guard1 = true;
  } else {
    pmax = 31;
    pmin = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax - pmin > 1)) {
      int32_T p;
      int32_T pow2p;
      p = (pmin + pmax) >> 1;
      pow2p = 1 << p;
      if (pow2p == ns_tmp) {
        pmax = p;
        exitg1 = true;
      } else if (pow2p > ns_tmp) {
        pmax = p;
      } else {
        pmin = p;
      }
    }
    if (a.size(0) <= pmax + 4) {
      guard1 = true;
    } else {
      pmax = s.size(1);
      b_s = s.reshape(pmax);
      st.site = &gac_emlrtRSI;
      if (!issorted(st, b_s)) {
        st.site = &hac_emlrtRSI;
        ss.set_size(&tr_emlrtRTEI, &st, s.size(1));
        for (pmax = 0; pmax < ns_tmp; pmax++) {
          ss[pmax] = s[pmax];
        }
        b_st.site = &li_emlrtRSI;
        internal::sort(b_st, ss, mjd_emlrtRSI);
        st.site = &iac_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        pmax = a.size(0);
        emlrtEnterParallelRegion((emlrtCTX)&sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        c_isMember_numThreads = emlrtAllocRegionTLSs(
            sp.tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(c_isMember_numThreads) private(n)

        for (int32_T k = 0; k < pmax; k++) {
          n = bsearchni(k + 1, a, ss);
          if (n > 0) {
            tf[k] = true;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)&sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      } else {
        st.site = &jac_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        pmax = a.size(0);
        emlrtEnterParallelRegion((emlrtCTX)&sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        c_isMember_numThreads = emlrtAllocRegionTLSs(
            sp.tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(c_isMember_numThreads) private(n)

        for (int32_T k = 0; k < pmax; k++) {
          n = bsearchni(k + 1, a, s);
          if (n > 0) {
            tf[k] = true;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)&sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      }
    }
  }
  if (guard1) {
    boolean_T overflow;
    st.site = &ajb_emlrtRSI;
    if (a.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    overflow = (s.size(1) > 2147483646);
    for (pmin = 0; pmin < na_tmp; pmin++) {
      st.site = &cdb_emlrtRSI;
      if (overflow) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      pmax = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax <= ns_tmp - 1)) {
        if (a[pmin] == s[pmax]) {
          tf[pmin] = true;
          exitg1 = true;
        } else {
          pmax++;
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void d_isMember(const emlrtStack &sp, const array<uint32_T, 1U> &a,
                const array<uint32_T, 1U> &s, array<boolean_T, 1U> &tf,
                array<int32_T, 1U> &loc)
{
  array<int32_T, 1U> ssidx;
  array<uint32_T, 1U> ss;
  emlrtStack b_st;
  emlrtStack st;
  int32_T d_isMember_numThreads;
  int32_T n;
  int32_T na_tmp;
  int32_T ns_tmp;
  int32_T pmax;
  int32_T pmin;
  boolean_T exitg1;
  boolean_T guard1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  na_tmp = a.size(0);
  ns_tmp = s.size(0);
  tf.set_size(&leb_emlrtRTEI, &sp, a.size(0));
  for (pmax = 0; pmax < na_tmp; pmax++) {
    tf[pmax] = false;
  }
  loc.set_size(&gnb_emlrtRTEI, &sp, a.size(0));
  for (pmax = 0; pmax < na_tmp; pmax++) {
    loc[pmax] = 0;
  }
  guard1 = false;
  if (s.size(0) <= 4) {
    guard1 = true;
  } else {
    pmax = 31;
    pmin = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax - pmin > 1)) {
      int32_T p;
      int32_T pow2p;
      p = (pmin + pmax) >> 1;
      pow2p = 1 << p;
      if (pow2p == ns_tmp) {
        pmax = p;
        exitg1 = true;
      } else if (pow2p > ns_tmp) {
        pmax = p;
      } else {
        pmin = p;
      }
    }
    if (a.size(0) <= pmax + 4) {
      guard1 = true;
    } else {
      st.site = &gac_emlrtRSI;
      if (!issorted(st, s)) {
        st.site = &hac_emlrtRSI;
        ss.set_size(&tr_emlrtRTEI, &st, s.size(0));
        for (pmax = 0; pmax < ns_tmp; pmax++) {
          ss[pmax] = s[pmax];
        }
        b_st.site = &li_emlrtRSI;
        internal::sort(b_st, ss, ssidx);
        st.site = &iac_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        pmax = a.size(0);
        emlrtEnterParallelRegion((emlrtCTX)&sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        d_isMember_numThreads = emlrtAllocRegionTLSs(
            sp.tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(d_isMember_numThreads) private(n)

        for (int32_T k = 0; k < pmax; k++) {
          n = bsearchni(k + 1, a, ss);
          if (n > 0) {
            tf[k] = true;
            loc[k] = ssidx[n - 1];
          }
        }
        emlrtExitParallelRegion((emlrtCTX)&sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      } else {
        st.site = &jac_emlrtRSI;
        if (a.size(0) > 2147483646) {
          b_st.site = &qe_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        pmax = a.size(0);
        emlrtEnterParallelRegion((emlrtCTX)&sp,
                                 static_cast<boolean_T>(omp_in_parallel()));
        d_isMember_numThreads = emlrtAllocRegionTLSs(
            sp.tls, static_cast<boolean_T>(omp_in_parallel()),
            omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(d_isMember_numThreads) private(n)

        for (int32_T k = 0; k < pmax; k++) {
          n = bsearchni(k + 1, a, s);
          if (n > 0) {
            tf[k] = true;
            loc[k] = n;
          }
        }
        emlrtExitParallelRegion((emlrtCTX)&sp,
                                static_cast<boolean_T>(omp_in_parallel()));
      }
    }
  }
  if (guard1) {
    boolean_T overflow;
    st.site = &ajb_emlrtRSI;
    if (a.size(0) > 2147483646) {
      b_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    overflow = (s.size(0) > 2147483646);
    for (pmin = 0; pmin < na_tmp; pmin++) {
      st.site = &cdb_emlrtRSI;
      if (overflow) {
        b_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      pmax = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax <= ns_tmp - 1)) {
        if (a[pmin] == s[pmax]) {
          tf[pmin] = true;
          loc[pmin] = pmax + 1;
          exitg1 = true;
        } else {
          pmax++;
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

boolean_T isMember(const emlrtStack &sp, int32_T a, const array<real_T, 2U> &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  tf = false;
  st.site = &cdb_emlrtRSI;
  if (s.size(1) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= s.size(1) - 1)) {
    if (a == s[k]) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return tf;
}

boolean_T isMember(const uint32_T s_data[])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  tf = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (s_data[k] == 1U) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return tf;
}

boolean_T isMember(const emlrtStack &sp, uint32_T a,
                   const array<uint32_T, 1U> &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  tf = false;
  st.site = &cdb_emlrtRSI;
  if (s.size(0) > 2147483646) {
    b_st.site = &qe_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= s.size(0) - 1)) {
    if (a == s[k]) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return tf;
}

void isMemberRows(const emlrtStack &sp, const array<uint32_T, 2U> &A,
                  const array<uint32_T, 2U> &S, array<boolean_T, 1U> &tf,
                  array<int32_T, 1U> &loc)
{
  array<int32_T, 1U> idx;
  array<int32_T, 1U> iwork;
  array<uint32_T, 2U> SS;
  array<uint32_T, 1U> ycol;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T qEnd;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if ((A.size(0) < 64) || (S.size(0) < 64)) {
    int32_T p;
    int32_T pEnd;
    st.site = &mgb_emlrtRSI;
    pEnd = A.size(0);
    p = S.size(0);
    tf.set_size(&lv_emlrtRTEI, &st, A.size(0));
    loc.set_size(&mv_emlrtRTEI, &st, A.size(0));
    for (int32_T q{0}; q < pEnd; q++) {
      tf[q] = false;
      loc[q] = 0;
    }
    b_st.site = &rgb_emlrtRSI;
    if (A.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    for (int32_T q{0}; q < pEnd; q++) {
      int32_T i2;
      boolean_T exitg1;
      tf[q] = false;
      loc[q] = 0;
      b_st.site = &sgb_emlrtRSI;
      if (p > 2147483646) {
        c_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      i2 = 0;
      exitg1 = false;
      while ((!exitg1) && (i2 <= p - 1)) {
        int32_T j;
        boolean_T exitg2;
        boolean_T y;
        y = true;
        j = 0;
        exitg2 = false;
        while ((!exitg2) && (j < 2)) {
          if (A[q + A.size(0) * j] != S[i2 + S.size(0) * j]) {
            y = false;
            exitg2 = true;
          } else {
            j++;
          }
        }
        if (y) {
          tf[q] = true;
          loc[q] = i2 + 1;
          exitg1 = true;
        } else {
          i2++;
        }
      }
    }
  } else {
    int32_T b_k;
    int32_T i2;
    int32_T k;
    uint32_T v1;
    uint32_T v2;
    int8_T col[2];
    boolean_T exitg1;
    boolean_T y;
    st.site = &ngb_emlrtRSI;
    y = true;
    col[0] = 1;
    col[1] = 2;
    b_st.site = &tgb_emlrtRSI;
    if (S.size(0) > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(c_st);
    }
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k + 1 <= S.size(0))) {
      boolean_T exitg2;
      y = true;
      b_k = 0;
      exitg2 = false;
      while ((!exitg2) && (b_k < 2)) {
        i2 = col[b_k] - 1;
        v1 = S[(k + S.size(0) * i2) - 1];
        v2 = S[k + S.size(0) * i2];
        if (v1 == v2) {
          b_k++;
        } else {
          y = (v1 <= v2);
          exitg2 = true;
        }
      }
      if (!y) {
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!y) {
      int32_T i;
      int32_T j;
      int32_T loop_ub;
      int32_T n;
      int32_T q;
      st.site = &ogb_emlrtRSI;
      loop_ub = S.size(0);
      SS.set_size(&iv_emlrtRTEI, &st, S.size(0), 2);
      i2 = S.size(0) << 1;
      for (q = 0; q < i2; q++) {
        SS[q] = S[q];
      }
      b_st.site = &hcb_emlrtRSI;
      n = S.size(0) + 1;
      idx.set_size(&jv_emlrtRTEI, &b_st, S.size(0));
      for (q = 0; q < loop_ub; q++) {
        idx[q] = 0;
      }
      c_st.site = &kcb_emlrtRSI;
      iwork.set_size(&cv_emlrtRTEI, &c_st, S.size(0));
      i2 = S.size(0) - 1;
      for (k = 1; k <= i2; k += 2) {
        y = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 2)) {
          v1 = S[(k + S.size(0) * b_k) - 1];
          v2 = S[k + S.size(0) * b_k];
          if (v1 == v2) {
            b_k++;
          } else {
            y = (v1 <= v2);
            exitg1 = true;
          }
        }
        if (y) {
          idx[k - 1] = k;
          idx[k] = k + 1;
        } else {
          idx[k - 1] = k + 1;
          idx[k] = k;
        }
      }
      if ((static_cast<uint32_T>(S.size(0)) & 1U) != 0U) {
        idx[S.size(0) - 1] = S.size(0);
      }
      i = 2;
      while (i < n - 1) {
        i2 = i << 1;
        j = 1;
        for (int32_T pEnd{i + 1}; pEnd < n; pEnd = qEnd + i) {
          int32_T kEnd;
          int32_T p;
          p = j;
          q = pEnd;
          qEnd = j + i2;
          if (qEnd > n) {
            qEnd = n;
          }
          k = 0;
          kEnd = qEnd - j;
          while (k + 1 <= kEnd) {
            y = true;
            b_k = 0;
            exitg1 = false;
            while ((!exitg1) && (b_k < 2)) {
              v1 = S[(idx[p - 1] + S.size(0) * b_k) - 1];
              v2 = S[(idx[q - 1] + S.size(0) * b_k) - 1];
              if (v1 == v2) {
                b_k++;
              } else {
                y = (v1 <= v2);
                exitg1 = true;
              }
            }
            if (y) {
              iwork[k] = idx[p - 1];
              p++;
              if (p == pEnd) {
                while (q < qEnd) {
                  k++;
                  iwork[k] = idx[q - 1];
                  q++;
                }
              }
            } else {
              iwork[k] = idx[q - 1];
              q++;
              if (q == qEnd) {
                while (p < pEnd) {
                  k++;
                  iwork[k] = idx[p - 1];
                  p++;
                }
              }
            }
            k++;
          }
          for (k = 0; k < kEnd; k++) {
            idx[(j + k) - 1] = iwork[k];
          }
          j = qEnd;
        }
        i = i2;
      }
      b_st.site = &icb_emlrtRSI;
      ycol.set_size(&kv_emlrtRTEI, &b_st, S.size(0));
      for (j = 0; j < 2; j++) {
        for (i = 0; i < loop_ub; i++) {
          ycol[i] = SS[(idx[i] + SS.size(0) * j) - 1];
        }
        for (i = 0; i < loop_ub; i++) {
          SS[i + SS.size(0) * j] = ycol[i];
        }
      }
      st.site = &pgb_emlrtRSI;
      isMemberRowsBinarySearch(st, A, SS, idx, tf, loc);
    } else {
      st.site = &qgb_emlrtRSI;
      b_isMemberRowsBinarySearch(st, A, S, tf, loc);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (ismember.cpp)
