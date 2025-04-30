//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// list1.cpp
//
// Code generation for function 'list1'
//

// Include files
#include "list1.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo xrb_emlrtRSI{
    762,                // lineNo
    "list/newNodeAddr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

static emlrtRSInfo yrb_emlrtRSI{
    735,                 // lineNo
    "list/expandIfFull", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

static emlrtRSInfo asb_emlrtRSI{
    736,                 // lineNo
    "list/expandIfFull", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pathName
};

static emlrtRTEInfo sh_emlrtRTEI{
    730,                 // lineNo
    17,                  // colNo
    "list/expandIfFull", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

static emlrtRTEInfo qwb_emlrtRTEI{
    735,    // lineNo
    29,     // colNo
    "list", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

static emlrtRTEInfo rwb_emlrtRTEI{
    735,    // lineNo
    13,     // colNo
    "list", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

static emlrtRTEInfo swb_emlrtRTEI{
    736,    // lineNo
    28,     // colNo
    "list", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

static emlrtRTEInfo twb_emlrtRTEI{
    736,    // lineNo
    13,     // colNo
    "list", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\list.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
int32_T b_list::newNodeAddr(const emlrtStack &sp)
{
  emlrtStack st;
  int32_T k;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xrb_emlrtRSI;
  if (unusedAddr == 0) {
    emlrtErrorWithMessageIdR2018a(&st, &sh_emlrtRTEI,
                                  "Coder:toolbox:ListCannotBeExpanded",
                                  "Coder:toolbox:ListCannotBeExpanded", 0);
  }
  k = unusedAddr;
  if (unusedAddr != 0) {
    len++;
    unusedAddr = nodePool[unusedAddr - 1].next;
    nodePool[k - 1].next = 0;
    if (unusedAddr != 0) {
      nodePool[unusedAddr - 1].prev = 0;
    }
  }
  return k;
}

void list::pushBack(const emlrtStack &sp, int32_T b_value)
{
  array<b_struct_T, 1U> r1;
  array<int32_T, 1U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &wrb_emlrtRSI;
  b_st.site = &xrb_emlrtRSI;
  if (unusedAddr == 0) {
    int32_T b_loop_ub;
    int32_T i;
    int32_T n;
    if (nodePool.size(0) > 1) {
      n = nodePool.size(0) - 1;
    } else {
      n = 0;
    }
    c_st.site = &yrb_emlrtRSI;
    d_st.site = &kn_emlrtRSI;
    loop_ub = valuePool.size(0) + 8;
    b_r.set_size(&qwb_emlrtRTEI, &d_st, loop_ub);
    b_loop_ub = valuePool.size(0);
    for (i = 0; i < b_loop_ub; i++) {
      b_r[i] = valuePool[i];
    }
    for (i = 0; i < 8; i++) {
      b_r[i + valuePool.size(0)] = 0;
    }
    valuePool.set_size(&rwb_emlrtRTEI, &b_st, loop_ub, 1);
    for (i = 0; i < loop_ub; i++) {
      valuePool[i] = b_r[i];
    }
    c_st.site = &asb_emlrtRSI;
    d_st.site = &kn_emlrtRSI;
    loop_ub = nodePool.size(0) + 8;
    r1.set_size(&swb_emlrtRTEI, &d_st, loop_ub);
    b_loop_ub = nodePool.size(0);
    for (i = 0; i < b_loop_ub; i++) {
      r1[i] = nodePool[i];
    }
    for (i = 0; i < 8; i++) {
      r1[i + nodePool.size(0)] = r;
    }
    nodePool.set_size(&twb_emlrtRTEI, &b_st, loop_ub, 1);
    for (i = 0; i < loop_ub; i++) {
      nodePool[i] = r1[i];
    }
    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      i = n + loop_ub;
      nodePool[i + 1].addr = i + 2;
      nodePool[i + 1].next = i + 3;
      nodePool[i + 1].prev = i + 1;
    }
    unusedAddr = n + 2;
    nodePool[n + 1].prev = 0;
    nodePool[nodePool.size(0) - 1].next = 0;
  }
  loop_ub = unusedAddr;
  if (unusedAddr != 0) {
    len++;
    unusedAddr = nodePool[unusedAddr - 1].next;
    nodePool[loop_ub - 1].next = 0;
    if (unusedAddr != 0) {
      nodePool[unusedAddr - 1].prev = 0;
    }
  }
  if (loop_ub != 0) {
    if (frontAddr == 0) {
      frontAddr = loop_ub;
      backAddr = loop_ub;
      nodePool[loop_ub - 1].next = 0;
    } else {
      nodePool[loop_ub - 1].prev = backAddr;
      nodePool[backAddr - 1].next = loop_ub;
      backAddr = loop_ub;
    }
    valuePool[loop_ub - 1] = b_value;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (list1.cpp)
