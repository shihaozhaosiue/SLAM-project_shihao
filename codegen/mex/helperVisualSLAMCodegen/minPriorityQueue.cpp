//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// minPriorityQueue.cpp
//
// Code generation for function 'minPriorityQueue'
//

// Include files
#include "minPriorityQueue.h"
#include "helperVisualSLAMCodegen_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo vmc_emlrtRSI{
    86,                        // lineNo
    "minPriorityQueue/percUp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtRSInfo wmc_emlrtRSI{
    88,                        // lineNo
    "minPriorityQueue/percUp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m" // pathName
};

static emlrtBCInfo dhb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    87,                        // lineNo
    50,                        // colNo
    "",                        // aName
    "minPriorityQueue/percUp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ehb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    87,                        // lineNo
    26,                        // colNo
    "",                        // aName
    "minPriorityQueue/percUp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo fhb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    88,                        // lineNo
    83,                        // colNo
    "",                        // aName
    "minPriorityQueue/percUp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ghb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    88,                        // lineNo
    42,                        // colNo
    "",                        // aName
    "minPriorityQueue/percUp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo hhb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    88,                        // lineNo
    17,                        // colNo
    "",                        // aName
    "minPriorityQueue/percUp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ihb_emlrtBCI{
    -1,                        // iFirst
    -1,                        // iLast
    88,                        // lineNo
    74,                        // colNo
    "",                        // aName
    "minPriorityQueue/percUp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+"
    "internal\\+coder\\minPriorityQueue.m", // pName
    0                                       // checkKind
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
void minPriorityQueue::percUp(const emlrtStack &sp, int32_T i,
                              const array<real_T, 1U> &dist)
{
  emlrtStack st;
  int32_T iparent;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  iparent = i / 2;
  exitg1 = false;
  while ((!exitg1) && (iparent > 0)) {
    real_T d;
    real_T d1;
    int32_T obj;
    int32_T obj_idx_1;
    int32_T obj_tmp;
    boolean_T tf;
    st.site = &vmc_emlrtRSI;
    obj = heap.size(0);
    if ((i < 1) || (i > obj)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, obj, &uab_emlrtBCI, &st);
    }
    if (iparent > obj) {
      emlrtDynamicBoundsCheckR2012b(iparent, 1, obj, &tab_emlrtBCI, &st);
    }
    obj_idx_1 = heap[i - 1];
    if ((obj_idx_1 < 1) || (obj_idx_1 > dist.size(0))) {
      emlrtDynamicBoundsCheckR2012b(heap[i - 1], 1, dist.size(0), &ubb_emlrtBCI,
                                    &st);
    }
    obj_tmp = heap[iparent - 1];
    if ((obj_tmp < 1) || (obj_tmp > dist.size(0))) {
      emlrtDynamicBoundsCheckR2012b(heap[iparent - 1], 1, dist.size(0),
                                    &vbb_emlrtBCI, &st);
    }
    d = dist[obj_idx_1 - 1];
    d1 = dist[obj_tmp - 1];
    if (d < d1) {
      tf = true;
    } else {
      if (obj_idx_1 > dist.size(0)) {
        emlrtDynamicBoundsCheckR2012b(heap[i - 1], 1, dist.size(0),
                                      &wbb_emlrtBCI, &st);
      }
      if (obj_tmp > dist.size(0)) {
        emlrtDynamicBoundsCheckR2012b(heap[iparent - 1], 1, dist.size(0),
                                      &xbb_emlrtBCI, &st);
      }
      if ((d == d1) && (obj_idx_1 <= obj_tmp)) {
        tf = true;
      } else {
        tf = false;
      }
    }
    if (tf) {
      if (iparent > obj) {
        emlrtDynamicBoundsCheckR2012b(iparent, 1, obj, &dhb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (i > obj) {
        emlrtDynamicBoundsCheckR2012b(i, 1, obj, &dhb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (i > obj) {
        emlrtDynamicBoundsCheckR2012b(i, 1, obj, &ehb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (iparent > obj) {
        emlrtDynamicBoundsCheckR2012b(iparent, 1, obj, &ehb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj_idx_1 = heap[i - 1];
      heap[i - 1] = heap[iparent - 1];
      heap[iparent - 1] = obj_idx_1;
      st.site = &wmc_emlrtRSI;
      ::coder::internal::indexShapeCheck(st, heap.size(0));
      if (iparent > obj) {
        emlrtDynamicBoundsCheckR2012b(iparent, 1, obj, &fhb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (i > obj) {
        emlrtDynamicBoundsCheckR2012b(i, 1, obj, &fhb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj_tmp = indexToHeap.size(0);
      if (i > obj) {
        emlrtDynamicBoundsCheckR2012b(i, 1, obj, &ghb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (iparent > obj) {
        emlrtDynamicBoundsCheckR2012b(iparent, 1, obj, &ghb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((heap[iparent - 1] < 1) || (heap[iparent - 1] > obj_tmp)) {
        emlrtDynamicBoundsCheckR2012b(heap[iparent - 1], 1, obj_tmp,
                                      &ihb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((heap[i - 1] < 1) || (heap[i - 1] > obj_tmp)) {
        emlrtDynamicBoundsCheckR2012b(heap[i - 1], 1, obj_tmp, &ihb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      obj_idx_1 = indexToHeap[heap[i - 1] - 1];
      if ((heap[i - 1] < 1) || (heap[i - 1] > obj_tmp)) {
        emlrtDynamicBoundsCheckR2012b(heap[i - 1], 1, obj_tmp, &hhb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      indexToHeap[heap[i - 1] - 1] = indexToHeap[heap[iparent - 1] - 1];
      if ((heap[iparent - 1] < 1) || (heap[iparent - 1] > obj_tmp)) {
        emlrtDynamicBoundsCheckR2012b(heap[iparent - 1], 1, obj_tmp,
                                      &hhb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      indexToHeap[heap[iparent - 1] - 1] = obj_idx_1;
      i = iparent;
      iparent /= 2;
    } else {
      exitg1 = true;
    }
  }
}

} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (minPriorityQueue.cpp)
