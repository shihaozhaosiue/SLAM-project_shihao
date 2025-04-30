//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// introsort.cpp
//
// Code generation for function 'introsort'
//

// Include files
#include "introsort.h"
#include "anonymous_function.h"
#include "heapsort.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "insertionsort.h"
#include "rt_nonfinite.h"
#include "stack1.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Variable Definitions
static emlrtRSInfo knb_emlrtRSI{
    34,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRSInfo lnb_emlrtRSI{
    42,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRSInfo mnb_emlrtRSI{
    47,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRSInfo nnb_emlrtRSI{
    49,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRSInfo onb_emlrtRSI{
    55,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRSInfo pnb_emlrtRSI{
    58,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRSInfo qnb_emlrtRSI{
    41,          // lineNo
    "introsort", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\introsort.m" // pathName
};

static emlrtRTEInfo og_emlrtRTEI{
    62,           // lineNo
    39,           // colNo
    "stack/push", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\stack.m" // pName
};

static emlrtDCInfo vc_emlrtDCI{
    48,            // lineNo
    63,            // colNo
    "stack/stack", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\stack.m", // pName
    4                    // checkKind
};

// Function Definitions
namespace coder {
namespace internal {
void introsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xend,
               const c_anonymous_function &cmp)
{
  emlrtStack b_st;
  struct_T frame;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
  if (xend > 1) {
    if (xend <= 32) {
      b_st.site = &knb_emlrtRSI;
      insertionsort(b_st, x, xend, cmp);
    } else {
      stack st;
      int32_T MAXDEPTH;
      int32_T i;
      int32_T pmax;
      int32_T pmin;
      int32_T pow2p;
      int32_T t;
      boolean_T exitg1;
      pmax = 31;
      pmin = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax - pmin > 1)) {
        t = (pmin + pmax) >> 1;
        pow2p = 1 << t;
        if (pow2p == xend) {
          pmax = t;
          exitg1 = true;
        } else if (pow2p > xend) {
          pmax = t;
        } else {
          pmin = t;
        }
      }
      MAXDEPTH = (pmax - 1) << 1;
      frame.xstart = 1;
      frame.xend = xend;
      frame.depth = 0;
      b_st.site = &qnb_emlrtRSI;
      i = MAXDEPTH << 1;
      if (i < 0) {
        emlrtNonNegativeCheckR2012b(static_cast<real_T>(i), &vc_emlrtDCI,
                                    &b_st);
      }
      st.d.size[0] = i;
      b_st.site = &lnb_emlrtRSI;
      if (i <= 0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                      "Coder:toolbox:StackPushLimit",
                                      "Coder:toolbox:StackPushLimit", 0);
      }
      st.d.data[0] = frame;
      st.n = 1;
      while (st.n > 0) {
        int32_T frame_tmp_tmp;
        frame_tmp_tmp = st.n - 1;
        frame = st.d.data[st.n - 1];
        st.n--;
        i = frame.xend - frame.xstart;
        if (i + 1 <= 32) {
          b_st.site = &mnb_emlrtRSI;
          insertionsort(b_st, x, frame.xstart, frame.xend, cmp);
        } else if (frame.depth == MAXDEPTH) {
          b_st.site = &nnb_emlrtRSI;
          b_heapsort(b_st, x, frame.xstart, frame.xend, cmp);
        } else {
          int32_T xmid;
          boolean_T varargout_1;
          xmid = (frame.xstart + i / 2) - 1;
          i = cmp.workspace.a[x[xmid] - 1];
          pmax = x[frame.xstart - 1];
          pmin = cmp.workspace.a[pmax - 1];
          if (i < pmin) {
            varargout_1 = true;
          } else if (i == pmin) {
            varargout_1 =
                (cmp.workspace.b[x[xmid] - 1] < cmp.workspace.b[pmax - 1]);
          } else {
            varargout_1 = false;
          }
          if (varargout_1) {
            x[frame.xstart - 1] = x[xmid];
            x[xmid] = pmax;
          }
          i = x[frame.xend - 1];
          pmax = cmp.workspace.a[i - 1];
          pmin = x[frame.xstart - 1];
          t = cmp.workspace.a[pmin - 1];
          if (pmax < t) {
            varargout_1 = true;
          } else if (pmax == t) {
            varargout_1 = (cmp.workspace.b[i - 1] < cmp.workspace.b[pmin - 1]);
          } else {
            varargout_1 = false;
          }
          if (varargout_1) {
            x[frame.xstart - 1] = i;
            x[frame.xend - 1] = pmin;
          }
          i = x[frame.xend - 1];
          pmax = cmp.workspace.a[i - 1];
          pmin = cmp.workspace.a[x[xmid] - 1];
          if (pmax < pmin) {
            varargout_1 = true;
          } else if (pmax == pmin) {
            varargout_1 =
                (cmp.workspace.b[i - 1] < cmp.workspace.b[x[xmid] - 1]);
          } else {
            varargout_1 = false;
          }
          if (varargout_1) {
            t = x[xmid];
            x[xmid] = i;
            x[frame.xend - 1] = t;
          }
          pow2p = x[xmid] - 1;
          x[xmid] = x[frame.xend - 2];
          x[frame.xend - 2] = pow2p + 1;
          pmax = frame.xstart - 1;
          pmin = frame.xend - 2;
          int32_T exitg2;
          do {
            int32_T exitg3;
            exitg2 = 0;
            pmax++;
            do {
              exitg3 = 0;
              i = cmp.workspace.a[x[pmax] - 1];
              if (i < cmp.workspace.a[pow2p]) {
                varargout_1 = true;
              } else if (i == cmp.workspace.a[pow2p]) {
                varargout_1 =
                    (cmp.workspace.b[x[pmax] - 1] < cmp.workspace.b[pow2p]);
              } else {
                varargout_1 = false;
              }
              if (varargout_1) {
                pmax++;
              } else {
                exitg3 = 1;
              }
            } while (exitg3 == 0);
            pmin--;
            do {
              exitg3 = 0;
              i = cmp.workspace.a[x[pmin] - 1];
              if (cmp.workspace.a[pow2p] < i) {
                varargout_1 = true;
              } else if (cmp.workspace.a[pow2p] == i) {
                varargout_1 =
                    (cmp.workspace.b[pow2p] < cmp.workspace.b[x[pmin] - 1]);
              } else {
                varargout_1 = false;
              }
              if (varargout_1) {
                pmin--;
              } else {
                exitg3 = 1;
              }
            } while (exitg3 == 0);
            if (pmax + 1 >= pmin + 1) {
              exitg2 = 1;
            } else {
              t = x[pmax];
              x[pmax] = x[pmin];
              x[pmin] = t;
            }
          } while (exitg2 == 0);
          x[frame.xend - 2] = x[pmax];
          x[pmax] = pow2p + 1;
          if (pmax + 2 < frame.xend) {
            b_st.site = &onb_emlrtRSI;
            if (frame_tmp_tmp >= st.d.size[0]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st.d.data[frame_tmp_tmp].xstart = pmax + 2;
            st.d.data[frame_tmp_tmp].xend = frame.xend;
            st.d.data[frame_tmp_tmp].depth = frame.depth + 1;
            st.n = frame_tmp_tmp + 1;
          }
          if (frame.xstart < pmax + 1) {
            b_st.site = &pnb_emlrtRSI;
            if (st.n >= st.d.size[0]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st.d.data[st.n].xstart = frame.xstart;
            st.d.data[st.n].xend = pmax + 1;
            st.d.data[st.n].depth = frame.depth + 1;
            st.n++;
          }
        }
      }
    }
  }
}

void introsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xstart,
               int32_T xend)
{
  emlrtStack b_st;
  struct_T frame;
  int32_T nsort;
  int32_T pmax;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
  if (xstart < xend) {
    nsort = (xend - xstart) + 1;
    if (nsort <= 32) {
      b_st.site = &knb_emlrtRSI;
      insertionsort(b_st, x, xstart, xend);
    } else {
      stack st;
      int32_T MAXDEPTH;
      int32_T pivot;
      int32_T pmin;
      int32_T pow2p;
      boolean_T exitg1;
      pmax = 31;
      pmin = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax - pmin > 1)) {
        pivot = (pmin + pmax) >> 1;
        pow2p = 1 << pivot;
        if (pow2p == nsort) {
          pmax = pivot;
          exitg1 = true;
        } else if (pow2p > nsort) {
          pmax = pivot;
        } else {
          pmin = pivot;
        }
      }
      MAXDEPTH = (pmax - 1) << 1;
      frame.xstart = xstart;
      frame.xend = xend;
      frame.depth = 0;
      b_st.site = &qnb_emlrtRSI;
      pmax = MAXDEPTH << 1;
      if (pmax < 0) {
        emlrtNonNegativeCheckR2012b(static_cast<real_T>(pmax), &vc_emlrtDCI,
                                    &b_st);
      }
      st.d.size[0] = pmax;
      b_st.site = &lnb_emlrtRSI;
      if (pmax <= 0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                      "Coder:toolbox:StackPushLimit",
                                      "Coder:toolbox:StackPushLimit", 0);
      }
      st.d.data[0] = frame;
      st.n = 1;
      while (st.n > 0) {
        int32_T frame_tmp_tmp;
        frame_tmp_tmp = st.n - 1;
        frame = st.d.data[st.n - 1];
        st.n--;
        pmax = frame.xend - frame.xstart;
        if (pmax + 1 <= 32) {
          b_st.site = &mnb_emlrtRSI;
          insertionsort(b_st, x, frame.xstart, frame.xend);
        } else if (frame.depth == MAXDEPTH) {
          b_st.site = &nnb_emlrtRSI;
          b_heapsort(b_st, x, frame.xstart, frame.xend);
        } else {
          pmin = (frame.xstart + pmax / 2) - 1;
          pmax = x[frame.xstart - 1];
          if (x[pmin] < pmax) {
            x[frame.xstart - 1] = x[pmin];
            x[pmin] = pmax;
          }
          pmax = x[frame.xstart - 1];
          nsort = x[frame.xend - 1];
          if (nsort < pmax) {
            x[frame.xstart - 1] = nsort;
            x[frame.xend - 1] = pmax;
          }
          pmax = x[frame.xend - 1];
          if (pmax < x[pmin]) {
            pow2p = x[pmin];
            x[pmin] = pmax;
            x[frame.xend - 1] = pow2p;
          }
          pivot = x[pmin];
          x[pmin] = x[frame.xend - 2];
          x[frame.xend - 2] = pivot;
          nsort = frame.xstart - 1;
          pmax = frame.xend - 2;
          int32_T exitg2;
          do {
            exitg2 = 0;
            for (nsort++; x[nsort] < pivot; nsort++) {
            }
            for (pmax--; pivot < x[pmax]; pmax--) {
            }
            if (nsort + 1 >= pmax + 1) {
              exitg2 = 1;
            } else {
              pow2p = x[nsort];
              x[nsort] = x[pmax];
              x[pmax] = pow2p;
            }
          } while (exitg2 == 0);
          x[frame.xend - 2] = x[nsort];
          x[nsort] = pivot;
          if (nsort + 2 < frame.xend) {
            b_st.site = &onb_emlrtRSI;
            if (frame_tmp_tmp >= st.d.size[0]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st.d.data[frame_tmp_tmp].xstart = nsort + 2;
            st.d.data[frame_tmp_tmp].xend = frame.xend;
            st.d.data[frame_tmp_tmp].depth = frame.depth + 1;
            st.n = frame_tmp_tmp + 1;
          }
          if (frame.xstart < nsort + 1) {
            b_st.site = &pnb_emlrtRSI;
            if (st.n >= st.d.size[0]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st.d.data[st.n].xstart = frame.xstart;
            st.d.data[st.n].xend = nsort + 1;
            st.d.data[st.n].depth = frame.depth + 1;
            st.n++;
          }
        }
      }
    }
  }
}

void introsort(const emlrtStack &sp, array<int32_T, 1U> &x, int32_T xend,
               const anonymous_function &cmp)
{
  emlrtStack b_st;
  struct_T frame;
  int32_T pmax;
  int32_T pmin;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
  if (xend > 1) {
    if (xend <= 32) {
      b_st.site = &knb_emlrtRSI;
      insertionsort(b_st, x, xend, cmp);
    } else {
      stack st;
      int32_T MAXDEPTH;
      int32_T pow2p;
      int32_T xmid;
      boolean_T exitg1;
      pmax = 31;
      pmin = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax - pmin > 1)) {
        xmid = (pmin + pmax) >> 1;
        pow2p = 1 << xmid;
        if (pow2p == xend) {
          pmax = xmid;
          exitg1 = true;
        } else if (pow2p > xend) {
          pmax = xmid;
        } else {
          pmin = xmid;
        }
      }
      MAXDEPTH = (pmax - 1) << 1;
      frame.xstart = 1;
      frame.xend = xend;
      frame.depth = 0;
      b_st.site = &qnb_emlrtRSI;
      pmin = MAXDEPTH << 1;
      if (pmin < 0) {
        emlrtNonNegativeCheckR2012b(static_cast<real_T>(pmin), &vc_emlrtDCI,
                                    &b_st);
      }
      st.d.size[0] = pmin;
      b_st.site = &lnb_emlrtRSI;
      if (pmin <= 0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                      "Coder:toolbox:StackPushLimit",
                                      "Coder:toolbox:StackPushLimit", 0);
      }
      st.d.data[0] = frame;
      st.n = 1;
      while (st.n > 0) {
        int32_T frame_tmp_tmp;
        frame_tmp_tmp = st.n - 1;
        frame = st.d.data[st.n - 1];
        st.n--;
        pmin = frame.xend - frame.xstart;
        if (pmin + 1 <= 32) {
          b_st.site = &mnb_emlrtRSI;
          insertionsort(b_st, x, frame.xstart, frame.xend, cmp);
        } else if (frame.depth == MAXDEPTH) {
          b_st.site = &nnb_emlrtRSI;
          b_heapsort(b_st, x, frame.xstart, frame.xend, cmp);
        } else {
          int32_T t;
          xmid = (frame.xstart + pmin / 2) - 1;
          pmin = x[frame.xstart - 1];
          if (cmp.workspace.x[x[xmid] - 1] < cmp.workspace.x[pmin - 1]) {
            x[frame.xstart - 1] = x[xmid];
            x[xmid] = pmin;
          }
          pmin = x[frame.xstart - 1];
          pmax = x[frame.xend - 1];
          if (cmp.workspace.x[pmax - 1] < cmp.workspace.x[pmin - 1]) {
            x[frame.xstart - 1] = pmax;
            x[frame.xend - 1] = pmin;
          }
          pmin = x[frame.xend - 1];
          if (cmp.workspace.x[pmin - 1] < cmp.workspace.x[x[xmid] - 1]) {
            t = x[xmid];
            x[xmid] = pmin;
            x[frame.xend - 1] = t;
          }
          pow2p = x[xmid];
          x[xmid] = x[frame.xend - 2];
          x[frame.xend - 2] = pow2p;
          pmax = frame.xstart - 1;
          pmin = frame.xend - 2;
          int32_T exitg2;
          do {
            exitg2 = 0;
            for (pmax++;
                 cmp.workspace.x[x[pmax] - 1] < cmp.workspace.x[pow2p - 1];
                 pmax++) {
            }
            for (pmin--;
                 cmp.workspace.x[pow2p - 1] < cmp.workspace.x[x[pmin] - 1];
                 pmin--) {
            }
            if (pmax + 1 >= pmin + 1) {
              exitg2 = 1;
            } else {
              t = x[pmax];
              x[pmax] = x[pmin];
              x[pmin] = t;
            }
          } while (exitg2 == 0);
          x[frame.xend - 2] = x[pmax];
          x[pmax] = pow2p;
          if (pmax + 2 < frame.xend) {
            b_st.site = &onb_emlrtRSI;
            if (frame_tmp_tmp >= st.d.size[0]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st.d.data[frame_tmp_tmp].xstart = pmax + 2;
            st.d.data[frame_tmp_tmp].xend = frame.xend;
            st.d.data[frame_tmp_tmp].depth = frame.depth + 1;
            st.n = frame_tmp_tmp + 1;
          }
          if (frame.xstart < pmax + 1) {
            b_st.site = &pnb_emlrtRSI;
            if (st.n >= st.d.size[0]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &og_emlrtRTEI,
                                            "Coder:toolbox:StackPushLimit",
                                            "Coder:toolbox:StackPushLimit", 0);
            }
            st.d.data[st.n].xstart = frame.xstart;
            st.d.data[st.n].xend = pmax + 1;
            st.d.data[st.n].depth = frame.depth + 1;
            st.n++;
          }
        }
      }
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (introsort.cpp)
