//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// estimateEssentialMatrix.cpp
//
// Code generation for function 'estimateEssentialMatrix'
//

// Include files
#include "estimateEssentialMatrix.h"
#include "assertValidSizeArg.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "combineVectorElements.h"
#include "div.h"
#include "eigGeneralized.h"
#include "eml_int_forloop_overflow_check.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "ishermitian.h"
#include "mrdivide_helper.h"
#include "msac.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "sumprod.h"
#include "svd1.h"
#include "warning.h"
#include "xzsvdc.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo mr_emlrtRSI{ 142,   // lineNo
  "estimateEssentialMatrix",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo nr_emlrtRSI{ 154,   // lineNo
  "estimateEssentialMatrix",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo or_emlrtRSI{ 164,   // lineNo
  "estimateEssentialMatrix",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo pr_emlrtRSI{ 163,   // lineNo
  "estimateEssentialMatrix",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo qr_emlrtRSI{ 168,   // lineNo
  "estimateEssentialMatrix",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo rr_emlrtRSI{ 178,   // lineNo
  "estimateEssentialMatrix",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo sr_emlrtRSI{ 249,   // lineNo
  "parseInputs",                       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo tr_emlrtRSI{ 259,   // lineNo
  "parseInputs",                       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo ur_emlrtRSI{ 316,   // lineNo
  "parseCameraIntrinsics",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo vr_emlrtRSI{ 318,   // lineNo
  "parseCameraIntrinsics",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo xr_emlrtRSI{ 226,   // lineNo
  "pixelsToNormalizedCoords",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo yr_emlrtRSI{ 227,   // lineNo
  "pixelsToNormalizedCoords",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo as_emlrtRSI{ 229,   // lineNo
  "pixelsToNormalizedCoords",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo bs_emlrtRSI{ 230,   // lineNo
  "pixelsToNormalizedCoords",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo ks_emlrtRSI{ 769,   // lineNo
  "polyeig4",                          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo ls_emlrtRSI{ 793,   // lineNo
  "polyeig4",                          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo ms_emlrtRSI{ 804,   // lineNo
  "polyeig4",                          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo ns_emlrtRSI{ 81,    // lineNo
  "eig",                               // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"// pathName
};

static emlrtRSInfo os_emlrtRSI{ 82,    // lineNo
  "eig",                               // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"// pathName
};

static emlrtRSInfo ps_emlrtRSI{ 109,   // lineNo
  "eig",                               // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"// pathName
};

static emlrtRSInfo qs_emlrtRSI{ 117,   // lineNo
  "eig",                               // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m"// pathName
};

static emlrtRSInfo rs_emlrtRSI{ 15,    // lineNo
  "eigHermitianGeneralized",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHermitianGeneralized.m"// pathName
};

static emlrtRSInfo ss_emlrtRSI{ 33,    // lineNo
  "eigHermitianGeneralized",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHermitianGeneralized.m"// pathName
};

static emlrtRSInfo ts_emlrtRSI{ 27,    // lineNo
  "xsyhegvd",                          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xsyhegvd.m"// pathName
};

static emlrtRSInfo us_emlrtRSI{ 98,    // lineNo
  "ceval_xsyhegvd",                    // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xsyhegvd.m"// pathName
};

static emlrtRSInfo ct_emlrtRSI{ 11,    // lineNo
  "rank",                              // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m"// pathName
};

static emlrtRSInfo dt_emlrtRSI{ 20,    // lineNo
  "local_rank",                        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m"// pathName
};

static emlrtRSInfo ft_emlrtRSI{ 145,   // lineNo
  "repmat",                            // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"// pathName
};

static emlrtRSInfo ht_emlrtRSI{ 201,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo it_emlrtRSI{ 202,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo jt_emlrtRSI{ 208,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo kt_emlrtRSI{ 209,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo lt_emlrtRSI{ 210,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo mt_emlrtRSI{ 211,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo nt_emlrtRSI{ 214,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo ot_emlrtRSI{ 215,   // lineNo
  "evalEssential",                     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo rt_emlrtRSI{ 367,   // lineNo
  "fivePointAlgorithm",                // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRSInfo tt_emlrtRSI{ 239,   // lineNo
  "normalizeEssentialMatrix",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pathName
};

static emlrtRTEInfo mb_emlrtRTEI{ 188, // lineNo
  5,                                   // colNo
  "checkRuntimeStatus",                // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo nb_emlrtRTEI{ 191, // lineNo
  45,                                  // colNo
  "checkRuntimeStatus",                // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtBCInfo td_emlrtBCI{ 1,     // iFirst
  30,                                  // iLast
  795,                                 // lineNo
  20,                                  // colNo
  "",                                  // aName
  "polyeig4",                          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m",// pName
  3                                    // checkKind
};

static emlrtBCInfo ud_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  806,                                 // lineNo
  9,                                   // colNo
  "",                                  // aName
  "polyeig4",                          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ab_emlrtECI{ 2,     // nDims
  210,                                 // lineNo
  25,                                  // colNo
  "evalEssential",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtECInfo bb_emlrtECI{ 2,     // nDims
  215,                                 // lineNo
  10,                                  // colNo
  "evalEssential",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtBCInfo vd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  214,                                 // lineNo
  18,                                  // colNo
  "",                                  // aName
  "evalEssential",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m",// pName
  0                                    // checkKind
};

static emlrtECInfo cb_emlrtECI{ -1,    // nDims
  214,                                 // lineNo
  5,                                   // colNo
  "evalEssential",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtBCInfo wd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  17,                                  // colNo
  "",                                  // aName
  "evalEssential",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ddb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  240,                                 // lineNo
  6,                                   // colNo
  "",                                  // aName
  "normalizeEssentialMatrix",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo oq_emlrtRTEI{ 254, // lineNo
  1,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo pq_emlrtRTEI{ 255, // lineNo
  11,                                  // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo qq_emlrtRTEI{ 172, // lineNo
  9,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo rq_emlrtRTEI{ 151, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo sq_emlrtRTEI{ 201, // lineNo
  7,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo tq_emlrtRTEI{ 201, // lineNo
  1,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo uq_emlrtRTEI{ 202, // lineNo
  7,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo vq_emlrtRTEI{ 202, // lineNo
  1,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo wq_emlrtRTEI{ 205, // lineNo
  1,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo xq_emlrtRTEI{ 209, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo ar_emlrtRTEI{ 211, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo br_emlrtRTEI{ 214, // lineNo
  24,                                  // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo cr_emlrtRTEI{ 215, // lineNo
  10,                                  // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo dr_emlrtRTEI{ 367, // lineNo
  6,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo er_emlrtRTEI{ 368, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo fr_emlrtRTEI{ 369, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo gr_emlrtRTEI{ 370, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo hr_emlrtRTEI{ 371, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo ir_emlrtRTEI{ 372, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo jr_emlrtRTEI{ 373, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo kr_emlrtRTEI{ 374, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo lr_emlrtRTEI{ 375, // lineNo
  5,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

static emlrtRTEInfo mr_emlrtRTEI{ 367, // lineNo
  1,                                   // colNo
  "estimateEssentialMatrix",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\estimateEssentialMatrix.m"// pName
};

// Function Declarations
namespace coder
{
  static void normalizeEssentialMatrix(const emlrtStack &sp, real_T E_data[],
    const int32_T E_size[2]);
  static void pixelsToNormalizedCoords(const emlrtStack &sp, const array<real_T,
    2U> &points1, const array<real_T, 2U> &points2, const real_T K1[9], const
    real_T K2[9], array<real_T, 2U> &pts1norm, array<real_T, 2U> &pts2norm);
}

static void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                 coder::array<real_T, 2U> &in2);

// Function Definitions
namespace coder
{
  static void normalizeEssentialMatrix(const emlrtStack &sp, real_T E_data[],
    const int32_T E_size[2])
  {
    __m128d b_r;
    ptrdiff_t incx_t;
    ptrdiff_t n_t;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
    real_T A_data[9];
    real_T s_data[3];
    real_T superb_data[2];
    real_T y;
    int32_T b_i;
    int32_T i;
    int32_T i2;
    int32_T m_tmp;
    int32_T n_tmp;
    int32_T vectorUB;
    boolean_T MATRIX_INPUT_AND_P_IS_TWO;
    boolean_T VECTOR_INPUT_AND_P_IS_NUMERIC;
    st.prev = &sp;
    st.tls = sp.tls;
    st.site = &tt_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    f_st.prev = &e_st;
    f_st.tls = e_st.tls;
    g_st.prev = &f_st;
    g_st.tls = f_st.tls;
    VECTOR_INPUT_AND_P_IS_NUMERIC = false;
    MATRIX_INPUT_AND_P_IS_TWO = false;
    if ((E_size[0] == 1) || (E_size[1] == 1)) {
      VECTOR_INPUT_AND_P_IS_NUMERIC = true;
    } else {
      MATRIX_INPUT_AND_P_IS_TWO = true;
    }

    if ((E_size[0] == 0) || (E_size[1] == 0)) {
      y = 0.0;
    } else if (MATRIX_INPUT_AND_P_IS_TWO) {
      b_st.site = &hp_emlrtRSI;
      m_tmp = E_size[0];
      i = E_size[1];
      y = 0.0;
      c_st.site = &ut_emlrtRSI;
      for (n_tmp = 0; n_tmp < i; n_tmp++) {
        c_st.site = &vt_emlrtRSI;
        for (b_i = 0; b_i < m_tmp; b_i++) {
          real_T absx;
          absx = muDoubleScalarAbs(E_data[b_i + E_size[0] * n_tmp]);
          if (muDoubleScalarIsNaN(absx) || (absx > y)) {
            y = absx;
          }
        }
      }

      if ((!muDoubleScalarIsInf(y)) && (!muDoubleScalarIsNaN(y))) {
        c_st.site = &ip_emlrtRSI;
        d_st.site = &jp_emlrtRSI;
        e_st.site = &kp_emlrtRSI;
        f_st.site = &km_emlrtRSI;
        n_tmp = E_size[0] * E_size[1];
        if (n_tmp - 1 >= 0) {
          std::copy(&E_data[0], &E_data[n_tmp], &A_data[0]);
        }

        if ((E_size[0] != 0) && (E_size[1] != 0)) {
          n_t = LAPACKE_dgesvd(102, 'N', 'N', (ptrdiff_t)E_size[0], (ptrdiff_t)
                               E_size[1], &A_data[0], (ptrdiff_t)E_size[0],
                               &s_data[0], nullptr, (ptrdiff_t)1, nullptr,
                               (ptrdiff_t)1, &superb_data[0]);
          n_tmp = (int32_T)n_t;
        } else {
          n_tmp = 0;
        }

        g_st.site = &lm_emlrtRSI;
        if (n_tmp < 0) {
          if (n_tmp == -1010) {
            emlrtErrorWithMessageIdR2018a(&g_st, &fb_emlrtRTEI, "MATLAB:nomem",
              "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&g_st, &gb_emlrtRTEI,
              "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &cv3[0], 12, n_tmp);
          }
        }

        if (n_tmp > 0) {
          emlrtErrorWithMessageIdR2018a(&d_st, &eb_emlrtRTEI,
            "Coder:MATLAB:svd_NoConvergence", "Coder:MATLAB:svd_NoConvergence",
            0);
        }

        y = s_data[0];
      }
    } else if (VECTOR_INPUT_AND_P_IS_NUMERIC) {
      n_tmp = E_size[0] * E_size[1];
      if (n_tmp < 1) {
        y = 0.0;
      } else {
        n_t = (ptrdiff_t)n_tmp;
        incx_t = (ptrdiff_t)1;
        y = dnrm2(&n_t, &E_data[0], &incx_t);
      }
    } else {
      y = rtNaN;
    }

    n_tmp = E_size[1];
    for (i = 0; i < n_tmp; i++) {
      m_tmp = E_size[0];
      b_i = (m_tmp / 2) << 1;
      vectorUB = b_i - 2;
      for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
        i2 = E_size[0] * i;
        b_r = _mm_loadu_pd(&E_data[i2]);
        _mm_storeu_pd(&E_data[i2], _mm_div_pd(b_r, _mm_set1_pd(y)));
      }

      for (int32_T i1{b_i}; i1 < m_tmp; i1++) {
        i2 = i1 + E_size[0] * i;
        E_data[i2] /= y;
      }
    }

    i = E_size[0] * E_size[1];
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i, &ddb_emlrtBCI, (emlrtConstCTX)&sp);
    }

    if (E_data[i - 1] < 0.0) {
      for (i = 0; i < n_tmp; i++) {
        m_tmp = E_size[0];
        b_i = (m_tmp / 2) << 1;
        vectorUB = b_i - 2;
        for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
          i2 = E_size[0] * i;
          b_r = _mm_loadu_pd(&E_data[i2]);
          _mm_storeu_pd(&E_data[i2], _mm_mul_pd(b_r, _mm_set1_pd(-1.0)));
        }

        for (int32_T i1{b_i}; i1 < m_tmp; i1++) {
          i2 = i1 + E_size[0] * i;
          E_data[i2] = -E_data[i2];
        }
      }
    }
  }

  static void pixelsToNormalizedCoords(const emlrtStack &sp, const array<real_T,
    2U> &points1, const array<real_T, 2U> &points2, const real_T K1[9], const
    real_T K2[9], array<real_T, 2U> &pts1norm, array<real_T, 2U> &pts2norm)
  {
    array<real_T, 2U> b_result;
    array<real_T, 2U> c_result;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack st;
    int32_T loop_ub;
    int32_T result;
    int8_T input_sizes_idx_1;
    int8_T sizes_idx_1;
    boolean_T empty_non_axis_sizes;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &xr_emlrtRSI;
    b_st.site = &kn_emlrtRSI;
    if (points1.size(0) != 0) {
      result = points1.size(0);
    } else {
      result = 0;
    }

    c_st.site = &jj_emlrtRSI;
    if ((points1.size(0) != result) && (points1.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((points1.size(0) != result) && (points1.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || (points1.size(0) != 0)) {
      input_sizes_idx_1 = 2;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (points1.size(0) != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    b_result.set_size(&pn_emlrtRTEI, &b_st, result, input_sizes_idx_1 +
                      sizes_idx_1);
    loop_ub = input_sizes_idx_1;
    for (int32_T i{0}; i < loop_ub; i++) {
      for (int32_T i1{0}; i1 < result; i1++) {
        b_result[i1 + b_result.size(0) * i] = points1[i1 + result * i];
      }
    }

    loop_ub = sizes_idx_1;
    for (int32_T i{0}; i < loop_ub; i++) {
      for (int32_T i1{0}; i1 < result; i1++) {
        b_result[i1 + b_result.size(0) * input_sizes_idx_1] = 1.0;
      }
    }

    st.site = &yr_emlrtRSI;
    b_st.site = &kn_emlrtRSI;
    if (points2.size(0) != 0) {
      result = points2.size(0);
    } else if (points1.size(0) != 0) {
      result = points1.size(0);
    } else {
      result = 0;
    }

    c_st.site = &jj_emlrtRSI;
    if ((points2.size(0) != result) && (points2.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((points1.size(0) != result) && (points1.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || (points2.size(0) != 0)) {
      input_sizes_idx_1 = 2;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (points1.size(0) != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }

    c_result.set_size(&pn_emlrtRTEI, &b_st, result, input_sizes_idx_1 +
                      sizes_idx_1);
    loop_ub = input_sizes_idx_1;
    for (int32_T i{0}; i < loop_ub; i++) {
      for (int32_T i1{0}; i1 < result; i1++) {
        c_result[i1 + c_result.size(0) * i] = points2[i1 + result * i];
      }
    }

    loop_ub = sizes_idx_1;
    for (int32_T i{0}; i < loop_ub; i++) {
      for (int32_T i1{0}; i1 < result; i1++) {
        c_result[i1 + c_result.size(0) * input_sizes_idx_1] = 1.0;
      }
    }

    st.site = &as_emlrtRSI;
    if (b_result.size(1) != 3) {
      emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    b_st.site = &oq_emlrtRSI;
    internal::mrdiv(b_st, b_result, K1, pts1norm);
    st.site = &bs_emlrtRSI;
    if (c_result.size(1) != 3) {
      emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    b_st.site = &oq_emlrtRSI;
    internal::mrdiv(b_st, c_result, K2, pts2norm);
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }
}

static void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                 coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(1);
  }

  b_in1.set_size(&cr_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] + in2[i * stride_1_1];
  }

  in1.set_size(&cr_emlrtRTEI, &sp, 1, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder
{
  void computeCoefficients(const real_T E1[9], const real_T E2[9], const real_T
    E3[9], const real_T E4[9], real_T C1[100], real_T C2[100], real_T C3[100],
    real_T C4[100])
  {
    real_T b_E1[60];
    real_T E1_tmp;
    real_T ab_E1_tmp;
    real_T ac_E1_tmp;
    real_T ad_E1_tmp;
    real_T ae_E1_tmp;
    real_T af_E1_tmp;
    real_T ag_E1_tmp;
    real_T b_E1_tmp;
    real_T bb_E1_tmp;
    real_T bc_E1_tmp;
    real_T bd_E1_tmp;
    real_T be_E1_tmp;
    real_T bf_E1_tmp;
    real_T bg_E1_tmp;
    real_T c_E1_tmp;
    real_T cb_E1_tmp;
    real_T cc_E1_tmp;
    real_T cd_E1_tmp;
    real_T ce_E1_tmp;
    real_T cf_E1_tmp;
    real_T cg_E1_tmp;
    real_T d_E1_tmp;
    real_T db_E1_tmp;
    real_T dc_E1_tmp;
    real_T dd_E1_tmp;
    real_T de_E1_tmp;
    real_T df_E1_tmp;
    real_T dg_E1_tmp;
    real_T e_E1_tmp;
    real_T eb_E1_tmp;
    real_T ec_E1_tmp;
    real_T ed_E1_tmp;
    real_T ee_E1_tmp;
    real_T ef_E1_tmp;
    real_T eg_E1_tmp;
    real_T f_E1_tmp;
    real_T fb_E1_tmp;
    real_T fc_E1_tmp;
    real_T fd_E1_tmp;
    real_T fe_E1_tmp;
    real_T ff_E1_tmp;
    real_T fg_E1_tmp;
    real_T g_E1_tmp;
    real_T gb_E1_tmp;
    real_T gc_E1_tmp;
    real_T gd_E1_tmp;
    real_T ge_E1_tmp;
    real_T gf_E1_tmp;
    real_T gg_E1_tmp;
    real_T h_E1_tmp;
    real_T hb_E1_tmp;
    real_T hc_E1_tmp;
    real_T hd_E1_tmp;
    real_T he_E1_tmp;
    real_T hf_E1_tmp;
    real_T hg_E1_tmp;
    real_T i_E1_tmp;
    real_T ib_E1_tmp;
    real_T ic_E1_tmp;
    real_T id_E1_tmp;
    real_T ie_E1_tmp;
    real_T if_E1_tmp;
    real_T j_E1_tmp;
    real_T jb_E1_tmp;
    real_T jc_E1_tmp;
    real_T jd_E1_tmp;
    real_T je_E1_tmp;
    real_T jf_E1_tmp;
    real_T k_E1_tmp;
    real_T kb_E1_tmp;
    real_T kc_E1_tmp;
    real_T kd_E1_tmp;
    real_T ke_E1_tmp;
    real_T kf_E1_tmp;
    real_T l_E1_tmp;
    real_T lb_E1_tmp;
    real_T lc_E1_tmp;
    real_T ld_E1_tmp;
    real_T le_E1_tmp;
    real_T lf_E1_tmp;
    real_T m_E1_tmp;
    real_T mb_E1_tmp;
    real_T mc_E1_tmp;
    real_T md_E1_tmp;
    real_T me_E1_tmp;
    real_T mf_E1_tmp;
    real_T n_E1_tmp;
    real_T nb_E1_tmp;
    real_T nc_E1_tmp;
    real_T nd_E1_tmp;
    real_T ne_E1_tmp;
    real_T nf_E1_tmp;
    real_T o_E1_tmp;
    real_T ob_E1_tmp;
    real_T oc_E1_tmp;
    real_T od_E1_tmp;
    real_T oe_E1_tmp;
    real_T of_E1_tmp;
    real_T p_E1_tmp;
    real_T pb_E1_tmp;
    real_T pc_E1_tmp;
    real_T pd_E1_tmp;
    real_T pe_E1_tmp;
    real_T pf_E1_tmp;
    real_T q_E1_tmp;
    real_T qb_E1_tmp;
    real_T qc_E1_tmp;
    real_T qd_E1_tmp;
    real_T qe_E1_tmp;
    real_T qf_E1_tmp;
    real_T r_E1_tmp;
    real_T rb_E1_tmp;
    real_T rc_E1_tmp;
    real_T rd_E1_tmp;
    real_T re_E1_tmp;
    real_T rf_E1_tmp;
    real_T s_E1_tmp;
    real_T sb_E1_tmp;
    real_T sc_E1_tmp;
    real_T sd_E1_tmp;
    real_T se_E1_tmp;
    real_T sf_E1_tmp;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13;
    real_T t14;
    real_T t15;
    real_T t16;
    real_T t17;
    real_T t18;
    real_T t19;
    real_T t2;
    real_T t20;
    real_T t21;
    real_T t22;
    real_T t23;
    real_T t24;
    real_T t25;
    real_T t26;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t3;
    real_T t30;
    real_T t31;
    real_T t32;
    real_T t33;
    real_T t34;
    real_T t35;
    real_T t36;
    real_T t37;
    real_T t4;
    real_T t5;
    real_T t6;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t_E1_tmp;
    real_T tb_E1_tmp;
    real_T tc_E1_tmp;
    real_T td_E1_tmp;
    real_T te_E1_tmp;
    real_T tf_E1_tmp;
    real_T u_E1_tmp;
    real_T ub_E1_tmp;
    real_T uc_E1_tmp;
    real_T ud_E1_tmp;
    real_T ue_E1_tmp;
    real_T uf_E1_tmp;
    real_T v_E1_tmp;
    real_T vb_E1_tmp;
    real_T vc_E1_tmp;
    real_T vd_E1_tmp;
    real_T ve_E1_tmp;
    real_T vf_E1_tmp;
    real_T w_E1_tmp;
    real_T wb_E1_tmp;
    real_T wc_E1_tmp;
    real_T wd_E1_tmp;
    real_T we_E1_tmp;
    real_T wf_E1_tmp;
    real_T x_E1_tmp;
    real_T xb_E1_tmp;
    real_T xc_E1_tmp;
    real_T xd_E1_tmp;
    real_T xe_E1_tmp;
    real_T xf_E1_tmp;
    real_T y_E1_tmp;
    real_T yb_E1_tmp;
    real_T yc_E1_tmp;
    real_T yd_E1_tmp;
    real_T ye_E1_tmp;
    real_T yf_E1_tmp;
    t2 = E1[0] * E1[0];
    t3 = E1[3] * E1[3];
    t4 = E1[6] * E1[6];
    t5 = E1[1] * E1[1];
    t6 = E1[4] * E1[4];
    t7 = E1[7] * E1[7];
    t8 = E1[2] * E1[2];
    t9 = E1[5] * E1[5];
    t10 = E1[8] * E1[8];
    t11 = E2[0] * E2[0];
    t12 = E2[3] * E2[3];
    t13 = E2[6] * E2[6];
    t14 = E2[1] * E2[1];
    t15 = E2[4] * E2[4];
    t16 = E2[7] * E2[7];
    t17 = E2[2] * E2[2];
    t18 = E2[5] * E2[5];
    t19 = E2[8] * E2[8];
    t20 = E3[0] * E3[0];
    t21 = E3[3] * E3[3];
    t22 = E3[6] * E3[6];
    t23 = E3[1] * E3[1];
    t24 = E3[4] * E3[4];
    t25 = E3[7] * E3[7];
    t26 = E3[2] * E3[2];
    t27 = E3[5] * E3[5];
    t28 = E3[8] * E3[8];
    t29 = E4[0] * E4[0];
    t30 = E4[3] * E4[3];
    t31 = E4[6] * E4[6];
    t32 = E4[1] * E4[1];
    t33 = E4[4] * E4[4];
    t34 = E4[7] * E4[7];
    t35 = E4[2] * E4[2];
    t36 = E4[5] * E4[5];
    t37 = E4[8] * E4[8];
    E1_tmp = E1[1] * E1[3];
    b_E1_tmp = E1[1] * E1[6];
    c_E1_tmp = E1[4] * E1[6];
    d_E1_tmp = E1[0] * E1[4];
    e_E1_tmp = E1[0] * E1[7];
    f_E1_tmp = E1[3] * E1[7];
    C1[0] = ((((d_E1_tmp * E1[8] - e_E1_tmp * E1[5]) - E1_tmp * E1[8]) +
              f_E1_tmp * E1[2]) + b_E1_tmp * E1[5]) - c_E1_tmp * E1[2];
    g_E1_tmp = E1[2] * E1[3];
    h_E1_tmp = E1[2] * E1[6];
    C1[1] = (((((((((((E1[0] * t3 + E1[0] * t4) + E1[0] * t5) - E1[0] * t6) -
                    E1[0] * t7) + E1[0] * t8) - E1[0] * t9) - E1[0] * t10) +
                muDoubleScalarPower(E1[0], 3.0)) + E1_tmp * E1[4] * 2.0) +
              b_E1_tmp * E1[7] * 2.0) + g_E1_tmp * E1[5] * 2.0) + h_E1_tmp * E1
      [8] * 2.0;
    i_E1_tmp = E1[0] * E1[3];
    j_E1_tmp = E1[0] * E1[6];
    k_E1_tmp = E1[2] * E1[4];
    l_E1_tmp = E1[2] * E1[7];
    C1[2] = (((((((((((E1[1] * t2 - E1[1] * t3) - E1[1] * t4) + E1[1] * t6) +
                    E1[1] * t7) + E1[1] * t8) - E1[1] * t9) - E1[1] * t10) +
                muDoubleScalarPower(E1[1], 3.0)) + i_E1_tmp * E1[4] * 2.0) +
              j_E1_tmp * E1[7] * 2.0) + k_E1_tmp * E1[5] * 2.0) + l_E1_tmp * E1
      [8] * 2.0;
    m_E1_tmp = E1[1] * E1[4];
    n_E1_tmp = E1[1] * E1[7];
    C1[3] = (((((((((((E1[2] * t2 - E1[2] * t3) - E1[2] * t4) + E1[2] * t5) -
                    E1[2] * t6) - E1[2] * t7) + E1[2] * t9) + E1[2] * t10) +
                muDoubleScalarPower(E1[2], 3.0)) + i_E1_tmp * E1[5] * 2.0) +
              j_E1_tmp * E1[8] * 2.0) + m_E1_tmp * E1[5] * 2.0) + n_E1_tmp * E1
      [8] * 2.0;
    o_E1_tmp = E1[0] * E1[1];
    p_E1_tmp = E1[0] * E1[2];
    q_E1_tmp = E1[5] * E1[6];
    C1[4] = (((((((((((E1[3] * t2 + E1[3] * t4) - E1[3] * t5) + E1[3] * t6) -
                    E1[3] * t7) - E1[3] * t8) + E1[3] * t9) - E1[3] * t10) +
                muDoubleScalarPower(E1[3], 3.0)) + o_E1_tmp * E1[4] * 2.0) +
              c_E1_tmp * E1[7] * 2.0) + p_E1_tmp * E1[5] * 2.0) + q_E1_tmp * E1
      [8] * 2.0;
    r_E1_tmp = E1[3] * E1[6];
    s_E1_tmp = E1[1] * E1[2];
    t_E1_tmp = E1[5] * E1[7];
    C1[5] = (((((((((((-E1[4] * t2 + E1[4] * t3) - E1[4] * t4) + E1[4] * t5) +
                    E1[4] * t7) - E1[4] * t8) + E1[4] * t9) - E1[4] * t10) +
                muDoubleScalarPower(E1[4], 3.0)) + i_E1_tmp * E1[1] * 2.0) +
              r_E1_tmp * E1[7] * 2.0) + s_E1_tmp * E1[5] * 2.0) + t_E1_tmp * E1
      [8] * 2.0;
    u_E1_tmp = E1[4] * E1[7];
    C1[6] = (((((((((((-E1[5] * t2 + E1[5] * t3) - E1[5] * t4) - E1[5] * t5) +
                    E1[5] * t6) - E1[5] * t7) + E1[5] * t8) + E1[5] * t10) +
                muDoubleScalarPower(E1[5], 3.0)) + i_E1_tmp * E1[2] * 2.0) +
              r_E1_tmp * E1[8] * 2.0) + m_E1_tmp * E1[2] * 2.0) + u_E1_tmp * E1
      [8] * 2.0;
    C1[7] = (((((((((((E1[6] * t2 + E1[6] * t3) - E1[6] * t5) - E1[6] * t6) +
                    E1[6] * t7) - E1[6] * t8) - E1[6] * t9) + E1[6] * t10) +
                muDoubleScalarPower(E1[6], 3.0)) + o_E1_tmp * E1[7] * 2.0) + E1
              [3] * E1[4] * E1[7] * 2.0) + p_E1_tmp * E1[8] * 2.0) + E1[3] * E1
      [5] * E1[8] * 2.0;
    C1[8] = (((((((((((-E1[7] * t2 - E1[7] * t3) + E1[7] * t4) + E1[7] * t5) +
                    E1[7] * t6) - E1[7] * t8) - E1[7] * t9) + E1[7] * t10) +
                muDoubleScalarPower(E1[7], 3.0)) + j_E1_tmp * E1[1] * 2.0) +
              r_E1_tmp * E1[4] * 2.0) + s_E1_tmp * E1[8] * 2.0) + E1[4] * E1[5] *
      E1[8] * 2.0;
    C1[9] = (((((((((((-E1[8] * t2 - E1[8] * t3) + E1[8] * t4) - E1[8] * t5) -
                    E1[8] * t6) + E1[8] * t7) + E1[8] * t8) + E1[8] * t9) +
                muDoubleScalarPower(E1[8], 3.0)) + j_E1_tmp * E1[2] * 2.0) +
              r_E1_tmp * E1[5] * 2.0) + n_E1_tmp * E1[2] * 2.0) + u_E1_tmp * E1
      [5] * 2.0;
    i_E1_tmp = E1[0] * E1[5];
    j_E1_tmp = E1[0] * E1[8];
    m_E1_tmp = E1[3] * E1[8];
    n_E1_tmp = E1[1] * E1[5];
    o_E1_tmp = E1[1] * E1[8];
    p_E1_tmp = E1[4] * E1[8];
    C1[10] = ((((((((((((((((d_E1_tmp * E2[8] - e_E1_tmp * E2[5]) - i_E1_tmp *
      E2[7]) + j_E1_tmp * E2[4]) - E1_tmp * E2[8]) + f_E1_tmp * E2[2]) +
                        g_E1_tmp * E2[7]) - m_E1_tmp * E2[1]) + b_E1_tmp * E2[5])
                     - c_E1_tmp * E2[2]) - h_E1_tmp * E2[4]) + q_E1_tmp * E2[1])
                  + n_E1_tmp * E2[6]) - o_E1_tmp * E2[3]) - k_E1_tmp * E2[6]) +
               p_E1_tmp * E2[0]) + l_E1_tmp * E2[3]) - t_E1_tmp * E2[0];
    r_E1_tmp = 2.0 * E2[3] * E1[0];
    s_E1_tmp = 2.0 * E2[6] * E1[0];
    u_E1_tmp = 2.0 * E2[1] * E1[0];
    v_E1_tmp = 2.0 * E2[4] * E1[3];
    w_E1_tmp = 2.0 * E2[7] * E1[6];
    x_E1_tmp = 2.0 * E2[2] * E1[0];
    y_E1_tmp = 2.0 * E2[5] * E1[3];
    ab_E1_tmp = 2.0 * E2[8] * E1[6];
    C1[11] = (((((((((((((((((((((((((((E2[0] * t2 * 3.0 + E2[0] * t3) + E2[0] *
      t4) + E2[0] * t5) - E2[0] * t6) - E2[0] * t7) + E2[0] * t8) - E2[0] * t9)
      - E2[0] * t10) + r_E1_tmp * E1[3]) + s_E1_tmp * E1[6]) + u_E1_tmp * E1[1])
      + 2.0 * E2[3] * E1[1] * E1[4]) + 2.0 * E2[1] * E1[3] * E1[4]) + -2.0 * E2
      [4] * E1[0] * E1[4]) + v_E1_tmp * E1[1]) + 2.0 * E2[6] * E1[1] * E1[7]) +
                        2.0 * E2[1] * E1[6] * E1[7]) + -2.0 * E2[7] * E1[0] *
                       E1[7]) + w_E1_tmp * E1[1]) + x_E1_tmp * E1[2]) + 2.0 *
                    E2[3] * E1[2] * E1[5]) + 2.0 * E2[2] * E1[3] * E1[5]) + -2.0
                  * E2[5] * E1[0] * E1[5]) + y_E1_tmp * E1[2]) + 2.0 * E2[6] *
                E1[2] * E1[8]) + 2.0 * E2[2] * E1[6] * E1[8]) + -2.0 * E2[8] *
              E1[0] * E1[8]) + ab_E1_tmp * E1[2];
    bb_E1_tmp = 2.0 * E2[0] * E1[0];
    cb_E1_tmp = 2.0 * E2[0] * E1[3];
    db_E1_tmp = -2.0 * E2[3] * E1[3];
    eb_E1_tmp = 2.0 * E2[0] * E1[6];
    fb_E1_tmp = -2.0 * E2[6] * E1[6];
    gb_E1_tmp = 2.0 * E2[4] * E1[1];
    hb_E1_tmp = 2.0 * E2[7] * E1[1];
    ib_E1_tmp = 2.0 * E2[4] * E1[0];
    jb_E1_tmp = 2.0 * E2[2] * E1[1];
    kb_E1_tmp = 2.0 * E2[5] * E1[4];
    lb_E1_tmp = 2.0 * E2[8] * E1[7];
    mb_E1_tmp = 2.0 * E2[7] * E1[0];
    C1[12] = (((((((((((((((((((((((((((E2[1] * t2 - E2[1] * t3) - E2[1] * t4) +
      E2[1] * t5 * 3.0) + E2[1] * t6) + E2[1] * t7) + E2[1] * t8) - E2[1] * t9)
      - E2[1] * t10) + bb_E1_tmp * E1[1]) + cb_E1_tmp * E1[4]) + r_E1_tmp * E1[4])
      + db_E1_tmp * E1[1]) + ib_E1_tmp * E1[3]) + eb_E1_tmp * E1[7]) + s_E1_tmp *
                          E1[7]) + fb_E1_tmp * E1[1]) + mb_E1_tmp * E1[6]) +
                       gb_E1_tmp * E1[4]) + hb_E1_tmp * E1[7]) + jb_E1_tmp * E1
                     [2]) + 2.0 * E2[4] * E1[2] * E1[5]) + 2.0 * E2[2] * E1[4] *
                   E1[5]) + -2.0 * E2[5] * E1[1] * E1[5]) + kb_E1_tmp * E1[2]) +
                2.0 * E2[7] * E1[2] * E1[8]) + 2.0 * E2[2] * E1[7] * E1[8]) +
              -2.0 * E2[8] * E1[1] * E1[8]) + lb_E1_tmp * E1[2];
    nb_E1_tmp = 2.0 * E2[5] * E1[0];
    ob_E1_tmp = 2.0 * E2[1] * E1[1];
    pb_E1_tmp = 2.0 * E2[5] * E1[1];
    qb_E1_tmp = 2.0 * E2[1] * E1[4];
    rb_E1_tmp = -2.0 * E2[7] * E1[7];
    sb_E1_tmp = 2.0 * E2[8] * E1[0];
    tb_E1_tmp = 2.0 * E2[8] * E1[1];
    ub_E1_tmp = 2.0 * E2[1] * E1[7];
    vb_E1_tmp = -2.0 * E2[4] * E1[4];
    C1[13] = (((((((((((((((((((((((((((E2[2] * t2 - E2[2] * t3) - E2[2] * t4) +
      E2[2] * t5) - E2[2] * t6) - E2[2] * t7) + E2[2] * t8 * 3.0) + E2[2] * t9)
      + E2[2] * t10) + bb_E1_tmp * E1[2]) + cb_E1_tmp * E1[5]) + r_E1_tmp * E1[5])
      + db_E1_tmp * E1[2]) + nb_E1_tmp * E1[3]) + eb_E1_tmp * E1[8]) + s_E1_tmp *
                          E1[8]) + fb_E1_tmp * E1[2]) + sb_E1_tmp * E1[6]) +
                       ob_E1_tmp * E1[2]) + qb_E1_tmp * E1[5]) + gb_E1_tmp * E1
                     [5]) + vb_E1_tmp * E1[2]) + pb_E1_tmp * E1[4]) + ub_E1_tmp *
                  E1[8]) + hb_E1_tmp * E1[8]) + rb_E1_tmp * E1[2]) + tb_E1_tmp *
               E1[7]) + 2.0 * E2[5] * E1[2] * E1[5]) + 2.0 * E2[8] * E1[2] * E1
      [8];
    wb_E1_tmp = 2.0 * E2[6] * E1[3];
    xb_E1_tmp = 2.0 * E2[0] * E1[1];
    yb_E1_tmp = 2.0 * E2[0] * E1[2];
    C1[14] = (((((((((((((((((((((((((((E2[3] * t2 + E2[3] * t3 * 3.0) + E2[3] *
      t4) - E2[3] * t5) + E2[3] * t6) - E2[3] * t7) - E2[3] * t8) + E2[3] * t9)
      - E2[3] * t10) + bb_E1_tmp * E1[3]) + wb_E1_tmp * E1[6]) + xb_E1_tmp * E1
      [4]) + u_E1_tmp * E1[4]) + -2.0 * E2[1] * E1[3] * E1[1]) + ib_E1_tmp * E1
      [1]) + v_E1_tmp * E1[4]) + 2.0 * E2[6] * E1[4] * E1[7]) + 2.0 * E2[4] *
                        E1[6] * E1[7]) + -2.0 * E2[7] * E1[3] * E1[7]) +
                      w_E1_tmp * E1[4]) + yb_E1_tmp * E1[5]) + x_E1_tmp * E1[5])
                   + -2.0 * E2[2] * E1[3] * E1[2]) + nb_E1_tmp * E1[2]) +
                 y_E1_tmp * E1[5]) + 2.0 * E2[6] * E1[5] * E1[8]) + 2.0 * E2[5] *
               E1[6] * E1[8]) + -2.0 * E2[8] * E1[3] * E1[8]) + ab_E1_tmp * E1[5];
    ib_E1_tmp = -2.0 * E2[0] * E1[0];
    nb_E1_tmp = 2.0 * E2[3] * E1[3];
    ac_E1_tmp = 2.0 * E2[3] * E1[6];
    bc_E1_tmp = 2.0 * E2[7] * E1[4];
    cc_E1_tmp = 2.0 * E2[7] * E1[3];
    dc_E1_tmp = 2.0 * E2[1] * E1[2];
    C1[15] = (((((((((((((((((((((((((((-E2[4] * t2 + E2[4] * t3) - E2[4] * t4)
      + E2[4] * t5) + E2[4] * t6 * 3.0) + E2[4] * t7) - E2[4] * t8) + E2[4] * t9)
      - E2[4] * t10) + ib_E1_tmp * E1[4]) + cb_E1_tmp * E1[1]) + r_E1_tmp * E1[1])
      + u_E1_tmp * E1[3]) + nb_E1_tmp * E1[4]) + ac_E1_tmp * E1[7]) + wb_E1_tmp *
                          E1[7]) + fb_E1_tmp * E1[4]) + cc_E1_tmp * E1[6]) +
                       ob_E1_tmp * E1[4]) + bc_E1_tmp * E1[7]) + dc_E1_tmp * E1
                     [5]) + jb_E1_tmp * E1[5]) + -2.0 * E2[2] * E1[4] * E1[2]) +
                  pb_E1_tmp * E1[2]) + kb_E1_tmp * E1[5]) + 2.0 * E2[7] * E1[5] *
                E1[8]) + 2.0 * E2[5] * E1[7] * E1[8]) + -2.0 * E2[8] * E1[4] *
              E1[8]) + lb_E1_tmp * E1[5];
    pb_E1_tmp = 2.0 * E2[8] * E1[3];
    ec_E1_tmp = 2.0 * E2[4] * E1[4];
    fc_E1_tmp = 2.0 * E2[8] * E1[4];
    gc_E1_tmp = -2.0 * E2[1] * E1[1];
    hc_E1_tmp = 2.0 * E2[4] * E1[7];
    ic_E1_tmp = 2.0 * E2[2] * E1[2];
    C1[16] = (((((((((((((((((((((((((((-E2[5] * t2 + E2[5] * t3) - E2[5] * t4)
      - E2[5] * t5) + E2[5] * t6) - E2[5] * t7) + E2[5] * t8) + E2[5] * t9 * 3.0)
      + E2[5] * t10) + ib_E1_tmp * E1[5]) + cb_E1_tmp * E1[2]) + r_E1_tmp * E1[2])
      + x_E1_tmp * E1[3]) + nb_E1_tmp * E1[5]) + ac_E1_tmp * E1[8]) + wb_E1_tmp *
                          E1[8]) + fb_E1_tmp * E1[5]) + pb_E1_tmp * E1[6]) +
                       gc_E1_tmp * E1[5]) + qb_E1_tmp * E1[2]) + gb_E1_tmp * E1
                     [2]) + jb_E1_tmp * E1[4]) + ec_E1_tmp * E1[5]) + hc_E1_tmp *
                  E1[8]) + bc_E1_tmp * E1[8]) + rb_E1_tmp * E1[5]) + fc_E1_tmp *
               E1[7]) + ic_E1_tmp * E1[5]) + 2.0 * E2[8] * E1[5] * E1[8];
    C1[17] = (((((((((((((((((((((((((((E2[6] * t2 + E2[6] * t3) + E2[6] * t4 *
      3.0) - E2[6] * t5) - E2[6] * t6) + E2[6] * t7) - E2[6] * t8) - E2[6] * t9)
      + E2[6] * t10) + bb_E1_tmp * E1[6]) + nb_E1_tmp * E1[6]) + xb_E1_tmp * E1
      [7]) + u_E1_tmp * E1[7]) + -2.0 * E2[1] * E1[6] * E1[1]) + mb_E1_tmp * E1
      [1]) + 2.0 * E2[3] * E1[4] * E1[7]) + v_E1_tmp * E1[7]) + -2.0 * E2[4] *
                        E1[6] * E1[4]) + cc_E1_tmp * E1[4]) + w_E1_tmp * E1[7])
                     + yb_E1_tmp * E1[8]) + x_E1_tmp * E1[8]) + -2.0 * E2[2] *
                   E1[6] * E1[2]) + sb_E1_tmp * E1[2]) + 2.0 * E2[3] * E1[5] *
                 E1[8]) + y_E1_tmp * E1[8]) + -2.0 * E2[5] * E1[6] * E1[5]) +
              pb_E1_tmp * E1[5]) + ab_E1_tmp * E1[8];
    r_E1_tmp = 2.0 * E2[6] * E1[6];
    C1[18] = (((((((((((((((((((((((((((-E2[7] * t2 - E2[7] * t3) + E2[7] * t4)
      + E2[7] * t5) + E2[7] * t6) + E2[7] * t7 * 3.0) - E2[7] * t8) - E2[7] * t9)
      + E2[7] * t10) + ib_E1_tmp * E1[7]) + eb_E1_tmp * E1[1]) + s_E1_tmp * E1[1])
      + u_E1_tmp * E1[6]) + db_E1_tmp * E1[7]) + ac_E1_tmp * E1[4]) + wb_E1_tmp *
                          E1[4]) + v_E1_tmp * E1[6]) + r_E1_tmp * E1[7]) +
                       ob_E1_tmp * E1[7]) + ec_E1_tmp * E1[7]) + dc_E1_tmp * E1
                     [8]) + jb_E1_tmp * E1[8]) + -2.0 * E2[2] * E1[7] * E1[2]) +
                  tb_E1_tmp * E1[2]) + 2.0 * E2[4] * E1[5] * E1[8]) + kb_E1_tmp *
                E1[8]) + -2.0 * E2[5] * E1[7] * E1[5]) + fc_E1_tmp * E1[5]) +
      lb_E1_tmp * E1[8];
    C1[19] = (((((((((((((((((((((((((((-E2[8] * t2 - E2[8] * t3) + E2[8] * t4)
      - E2[8] * t5) - E2[8] * t6) + E2[8] * t7) + E2[8] * t8) + E2[8] * t9) +
      E2[8] * t10 * 3.0) + ib_E1_tmp * E1[8]) + eb_E1_tmp * E1[2]) + s_E1_tmp *
      E1[2]) + x_E1_tmp * E1[6]) + db_E1_tmp * E1[8]) + ac_E1_tmp * E1[5]) +
                          wb_E1_tmp * E1[5]) + y_E1_tmp * E1[6]) + r_E1_tmp *
                        E1[8]) + gc_E1_tmp * E1[8]) + ub_E1_tmp * E1[2]) +
                     hb_E1_tmp * E1[2]) + jb_E1_tmp * E1[7]) + vb_E1_tmp * E1[8])
                  + hc_E1_tmp * E1[5]) + bc_E1_tmp * E1[5]) + kb_E1_tmp * E1[7])
               + 2.0 * E2[7] * E1[7] * E1[8]) + ic_E1_tmp * E1[8]) + 2.0 * E2[5]
      * E1[5] * E1[8];
    r_E1_tmp = E1[0] * E2[4];
    s_E1_tmp = E1[0] * E2[7];
    u_E1_tmp = E2[1] * E1[3];
    v_E1_tmp = E1[3] * E2[7];
    w_E1_tmp = E2[1] * E1[6];
    x_E1_tmp = E2[4] * E1[6];
    y_E1_tmp = E1[1] * E2[3];
    ab_E1_tmp = E1[1] * E2[6];
    bb_E1_tmp = E2[0] * E1[4];
    cb_E1_tmp = E1[4] * E2[6];
    db_E1_tmp = E2[0] * E1[7];
    eb_E1_tmp = E2[3] * E1[7];
    fb_E1_tmp = E1[2] * E2[3];
    gb_E1_tmp = E1[2] * E2[6];
    hb_E1_tmp = E2[0] * E1[5];
    ib_E1_tmp = E1[5] * E2[6];
    jb_E1_tmp = E2[0] * E1[8];
    kb_E1_tmp = E2[3] * E1[8];
    C1[20] = ((((((((((((((((r_E1_tmp * E2[8] - s_E1_tmp * E2[5]) - u_E1_tmp *
      E2[8]) + v_E1_tmp * E2[2]) + w_E1_tmp * E2[5]) - x_E1_tmp * E2[2]) -
                        y_E1_tmp * E2[8]) + ab_E1_tmp * E2[5]) + bb_E1_tmp * E2
                      [8]) - cb_E1_tmp * E2[2]) - db_E1_tmp * E2[5]) + eb_E1_tmp
                   * E2[2]) + fb_E1_tmp * E2[7]) - gb_E1_tmp * E2[4]) -
                hb_E1_tmp * E2[7]) + ib_E1_tmp * E2[1]) + jb_E1_tmp * E2[4]) -
      kb_E1_tmp * E2[1];
    lb_E1_tmp = 2.0 * E1[3] * E2[0];
    mb_E1_tmp = 2.0 * E1[6] * E2[0];
    nb_E1_tmp = 2.0 * E1[1] * E2[0];
    ob_E1_tmp = 2.0 * E1[4] * E2[3];
    pb_E1_tmp = 2.0 * E1[7] * E2[6];
    qb_E1_tmp = 2.0 * E1[2] * E2[0];
    rb_E1_tmp = 2.0 * E1[5] * E2[3];
    sb_E1_tmp = 2.0 * E1[8] * E2[6];
    C1[21] = (((((((((((((((((((((((((((E1[0] * t11 * 3.0 + E1[0] * t12) + E1[0]
      * t13) + E1[0] * t14) - E1[0] * t15) - E1[0] * t16) + E1[0] * t17) - E1[0]
      * t18) - E1[0] * t19) + lb_E1_tmp * E2[3]) + mb_E1_tmp * E2[6]) +
      nb_E1_tmp * E2[1]) + 2.0 * E1[3] * E2[1] * E2[4]) + 2.0 * E1[1] * E2[3] *
      E2[4]) + -2.0 * E1[4] * E2[0] * E2[4]) + ob_E1_tmp * E2[1]) + 2.0 * E1[6] *
                         E2[1] * E2[7]) + 2.0 * E1[1] * E2[6] * E2[7]) + -2.0 *
                       E1[7] * E2[0] * E2[7]) + pb_E1_tmp * E2[1]) + qb_E1_tmp *
                     E2[2]) + 2.0 * E1[3] * E2[2] * E2[5]) + 2.0 * E1[2] * E2[3]
                   * E2[5]) + -2.0 * E1[5] * E2[0] * E2[5]) + rb_E1_tmp * E2[2])
                + 2.0 * E1[6] * E2[2] * E2[8]) + 2.0 * E1[2] * E2[6] * E2[8]) +
              -2.0 * E1[8] * E2[0] * E2[8]) + sb_E1_tmp * E2[2];
    tb_E1_tmp = 2.0 * E1[0] * E2[0];
    ub_E1_tmp = 2.0 * E1[0] * E2[3];
    vb_E1_tmp = -2.0 * E1[3] * E2[3];
    wb_E1_tmp = 2.0 * E1[0] * E2[6];
    xb_E1_tmp = -2.0 * E1[6] * E2[6];
    yb_E1_tmp = 2.0 * E1[4] * E2[1];
    ac_E1_tmp = 2.0 * E1[7] * E2[1];
    bc_E1_tmp = 2.0 * E1[4] * E2[0];
    cc_E1_tmp = 2.0 * E1[2] * E2[1];
    dc_E1_tmp = 2.0 * E1[5] * E2[4];
    ec_E1_tmp = 2.0 * E1[8] * E2[7];
    fc_E1_tmp = 2.0 * E1[7] * E2[0];
    C1[22] = (((((((((((((((((((((((((((E1[1] * t11 - E1[1] * t12) - E1[1] * t13)
      + E1[1] * t14 * 3.0) + E1[1] * t15) + E1[1] * t16) + E1[1] * t17) - E1[1] *
      t18) - E1[1] * t19) + tb_E1_tmp * E2[1]) + ub_E1_tmp * E2[4]) + lb_E1_tmp *
      E2[4]) + vb_E1_tmp * E2[1]) + bc_E1_tmp * E2[3]) + wb_E1_tmp * E2[7]) +
                          mb_E1_tmp * E2[7]) + xb_E1_tmp * E2[1]) + fc_E1_tmp *
                        E2[6]) + yb_E1_tmp * E2[4]) + ac_E1_tmp * E2[7]) +
                     cc_E1_tmp * E2[2]) + 2.0 * E1[4] * E2[2] * E2[5]) + 2.0 *
                   E1[2] * E2[4] * E2[5]) + -2.0 * E1[5] * E2[1] * E2[5]) +
                 dc_E1_tmp * E2[2]) + 2.0 * E1[7] * E2[2] * E2[8]) + 2.0 * E1[2]
               * E2[7] * E2[8]) + -2.0 * E1[8] * E2[1] * E2[8]) + ec_E1_tmp *
      E2[2];
    gc_E1_tmp = 2.0 * E1[5] * E2[0];
    hc_E1_tmp = 2.0 * E1[1] * E2[1];
    ic_E1_tmp = 2.0 * E1[5] * E2[1];
    jc_E1_tmp = 2.0 * E1[1] * E2[4];
    kc_E1_tmp = -2.0 * E1[7] * E2[7];
    lc_E1_tmp = 2.0 * E1[8] * E2[0];
    mc_E1_tmp = 2.0 * E1[8] * E2[1];
    nc_E1_tmp = 2.0 * E1[1] * E2[7];
    oc_E1_tmp = -2.0 * E1[4] * E2[4];
    C1[23] = (((((((((((((((((((((((((((E1[2] * t11 - E1[2] * t12) - E1[2] * t13)
      + E1[2] * t14) - E1[2] * t15) - E1[2] * t16) + E1[2] * t17 * 3.0) + E1[2] *
      t18) + E1[2] * t19) + tb_E1_tmp * E2[2]) + ub_E1_tmp * E2[5]) + lb_E1_tmp *
      E2[5]) + vb_E1_tmp * E2[2]) + gc_E1_tmp * E2[3]) + wb_E1_tmp * E2[8]) +
                          mb_E1_tmp * E2[8]) + xb_E1_tmp * E2[2]) + lc_E1_tmp *
                        E2[6]) + hc_E1_tmp * E2[2]) + jc_E1_tmp * E2[5]) +
                     yb_E1_tmp * E2[5]) + oc_E1_tmp * E2[2]) + ic_E1_tmp * E2[4])
                  + nc_E1_tmp * E2[8]) + ac_E1_tmp * E2[8]) + kc_E1_tmp * E2[2])
               + mc_E1_tmp * E2[7]) + 2.0 * E1[5] * E2[2] * E2[5]) + 2.0 * E1[8]
      * E2[2] * E2[8];
    pc_E1_tmp = 2.0 * E1[6] * E2[3];
    qc_E1_tmp = 2.0 * E1[0] * E2[1];
    rc_E1_tmp = 2.0 * E1[0] * E2[2];
    C1[24] = (((((((((((((((((((((((((((E1[3] * t11 + E1[3] * t12 * 3.0) + E1[3]
      * t13) - E1[3] * t14) + E1[3] * t15) - E1[3] * t16) - E1[3] * t17) + E1[3]
      * t18) - E1[3] * t19) + tb_E1_tmp * E2[3]) + pc_E1_tmp * E2[6]) +
      qc_E1_tmp * E2[4]) + nb_E1_tmp * E2[4]) + -2.0 * E1[1] * E2[3] * E2[1]) +
      bc_E1_tmp * E2[1]) + ob_E1_tmp * E2[4]) + 2.0 * E1[6] * E2[4] * E2[7]) +
                        2.0 * E1[4] * E2[6] * E2[7]) + -2.0 * E1[7] * E2[3] *
                       E2[7]) + pb_E1_tmp * E2[4]) + rc_E1_tmp * E2[5]) +
                    qb_E1_tmp * E2[5]) + -2.0 * E1[2] * E2[3] * E2[2]) +
                  gc_E1_tmp * E2[2]) + rb_E1_tmp * E2[5]) + 2.0 * E1[6] * E2[5] *
                E2[8]) + 2.0 * E1[5] * E2[6] * E2[8]) + -2.0 * E1[8] * E2[3] *
              E2[8]) + sb_E1_tmp * E2[5];
    bc_E1_tmp = -2.0 * E1[0] * E2[0];
    gc_E1_tmp = 2.0 * E1[3] * E2[3];
    sc_E1_tmp = 2.0 * E1[3] * E2[6];
    tc_E1_tmp = 2.0 * E1[7] * E2[4];
    uc_E1_tmp = 2.0 * E1[7] * E2[3];
    vc_E1_tmp = 2.0 * E1[1] * E2[2];
    C1[25] = (((((((((((((((((((((((((((-E1[4] * t11 + E1[4] * t12) - E1[4] *
      t13) + E1[4] * t14) + E1[4] * t15 * 3.0) + E1[4] * t16) - E1[4] * t17) +
      E1[4] * t18) - E1[4] * t19) + bc_E1_tmp * E2[4]) + ub_E1_tmp * E2[1]) +
      lb_E1_tmp * E2[1]) + nb_E1_tmp * E2[3]) + gc_E1_tmp * E2[4]) + sc_E1_tmp *
      E2[7]) + pc_E1_tmp * E2[7]) + xb_E1_tmp * E2[4]) + uc_E1_tmp * E2[6]) +
                       hc_E1_tmp * E2[4]) + tc_E1_tmp * E2[7]) + vc_E1_tmp * E2
                     [5]) + cc_E1_tmp * E2[5]) + -2.0 * E1[2] * E2[4] * E2[2]) +
                  ic_E1_tmp * E2[2]) + dc_E1_tmp * E2[5]) + 2.0 * E1[7] * E2[5] *
                E2[8]) + 2.0 * E1[5] * E2[7] * E2[8]) + -2.0 * E1[8] * E2[4] *
              E2[8]) + ec_E1_tmp * E2[5];
    ic_E1_tmp = 2.0 * E1[8] * E2[3];
    wc_E1_tmp = 2.0 * E1[4] * E2[4];
    xc_E1_tmp = 2.0 * E1[8] * E2[4];
    yc_E1_tmp = -2.0 * E1[1] * E2[1];
    ad_E1_tmp = 2.0 * E1[4] * E2[7];
    bd_E1_tmp = 2.0 * E1[2] * E2[2];
    C1[26] = (((((((((((((((((((((((((((-E1[5] * t11 + E1[5] * t12) - E1[5] *
      t13) - E1[5] * t14) + E1[5] * t15) - E1[5] * t16) + E1[5] * t17) + E1[5] *
      t18 * 3.0) + E1[5] * t19) + bc_E1_tmp * E2[5]) + ub_E1_tmp * E2[2]) +
      lb_E1_tmp * E2[2]) + qb_E1_tmp * E2[3]) + gc_E1_tmp * E2[5]) + sc_E1_tmp *
      E2[8]) + pc_E1_tmp * E2[8]) + xb_E1_tmp * E2[5]) + ic_E1_tmp * E2[6]) +
                       yc_E1_tmp * E2[5]) + jc_E1_tmp * E2[2]) + yb_E1_tmp * E2
                     [2]) + cc_E1_tmp * E2[4]) + wc_E1_tmp * E2[5]) + ad_E1_tmp *
                  E2[8]) + tc_E1_tmp * E2[8]) + kc_E1_tmp * E2[5]) + xc_E1_tmp *
               E2[7]) + bd_E1_tmp * E2[5]) + 2.0 * E1[8] * E2[5] * E2[8];
    C1[27] = (((((((((((((((((((((((((((E1[6] * t11 + E1[6] * t12) + E1[6] * t13
      * 3.0) - E1[6] * t14) - E1[6] * t15) + E1[6] * t16) - E1[6] * t17) - E1[6]
      * t18) + E1[6] * t19) + tb_E1_tmp * E2[6]) + gc_E1_tmp * E2[6]) +
      qc_E1_tmp * E2[7]) + nb_E1_tmp * E2[7]) + -2.0 * E1[1] * E2[6] * E2[1]) +
      fc_E1_tmp * E2[1]) + 2.0 * E1[3] * E2[4] * E2[7]) + ob_E1_tmp * E2[7]) +
                        -2.0 * E1[4] * E2[6] * E2[4]) + uc_E1_tmp * E2[4]) +
                      pb_E1_tmp * E2[7]) + rc_E1_tmp * E2[8]) + qb_E1_tmp * E2[8])
                   + -2.0 * E1[2] * E2[6] * E2[2]) + lc_E1_tmp * E2[2]) + 2.0 *
                 E1[3] * E2[5] * E2[8]) + rb_E1_tmp * E2[8]) + -2.0 * E1[5] *
               E2[6] * E2[5]) + ic_E1_tmp * E2[5]) + sb_E1_tmp * E2[8];
    lb_E1_tmp = 2.0 * E1[6] * E2[6];
    C1[28] = (((((((((((((((((((((((((((-E1[7] * t11 - E1[7] * t12) + E1[7] *
      t13) + E1[7] * t14) + E1[7] * t15) + E1[7] * t16 * 3.0) - E1[7] * t17) -
      E1[7] * t18) + E1[7] * t19) + bc_E1_tmp * E2[7]) + wb_E1_tmp * E2[1]) +
      mb_E1_tmp * E2[1]) + nb_E1_tmp * E2[6]) + vb_E1_tmp * E2[7]) + sc_E1_tmp *
      E2[4]) + pc_E1_tmp * E2[4]) + ob_E1_tmp * E2[6]) + lb_E1_tmp * E2[7]) +
                       hc_E1_tmp * E2[7]) + wc_E1_tmp * E2[7]) + vc_E1_tmp * E2
                     [8]) + cc_E1_tmp * E2[8]) + -2.0 * E1[2] * E2[7] * E2[2]) +
                  mc_E1_tmp * E2[2]) + 2.0 * E1[4] * E2[5] * E2[8]) + dc_E1_tmp *
                E2[8]) + -2.0 * E1[5] * E2[7] * E2[5]) + xc_E1_tmp * E2[5]) +
      ec_E1_tmp * E2[8];
    C1[29] = (((((((((((((((((((((((((((-E1[8] * t11 - E1[8] * t12) + E1[8] *
      t13) - E1[8] * t14) - E1[8] * t15) + E1[8] * t16) + E1[8] * t17) + E1[8] *
      t18) + E1[8] * t19 * 3.0) + bc_E1_tmp * E2[8]) + wb_E1_tmp * E2[2]) +
      mb_E1_tmp * E2[2]) + qb_E1_tmp * E2[6]) + vb_E1_tmp * E2[8]) + sc_E1_tmp *
      E2[5]) + pc_E1_tmp * E2[5]) + rb_E1_tmp * E2[6]) + lb_E1_tmp * E2[8]) +
                       yc_E1_tmp * E2[8]) + nc_E1_tmp * E2[2]) + ac_E1_tmp * E2
                     [2]) + cc_E1_tmp * E2[7]) + oc_E1_tmp * E2[8]) + ad_E1_tmp *
                  E2[5]) + tc_E1_tmp * E2[5]) + dc_E1_tmp * E2[7]) + 2.0 * E1[7]
               * E2[7] * E2[8]) + bd_E1_tmp * E2[8]) + 2.0 * E1[5] * E2[5] * E2
      [8];
    lb_E1_tmp = E2[1] * E2[3];
    mb_E1_tmp = E2[1] * E2[6];
    nb_E1_tmp = E2[4] * E2[6];
    ob_E1_tmp = E2[0] * E2[4];
    pb_E1_tmp = E2[0] * E2[7];
    qb_E1_tmp = E2[3] * E2[7];
    C1[30] = ((((ob_E1_tmp * E2[8] - pb_E1_tmp * E2[5]) - lb_E1_tmp * E2[8]) +
               qb_E1_tmp * E2[2]) + mb_E1_tmp * E2[5]) - nb_E1_tmp * E2[2];
    rb_E1_tmp = E2[2] * E2[3];
    sb_E1_tmp = E2[2] * E2[6];
    C1[31] = (((((((((((E2[0] * t12 + E2[0] * t13) + E2[0] * t14) - E2[0] * t15)
                     - E2[0] * t16) + E2[0] * t17) - E2[0] * t18) - E2[0] * t19)
                 + muDoubleScalarPower(E2[0], 3.0)) + lb_E1_tmp * E2[4] * 2.0) +
               mb_E1_tmp * E2[7] * 2.0) + rb_E1_tmp * E2[5] * 2.0) + sb_E1_tmp *
      E2[8] * 2.0;
    tb_E1_tmp = E2[0] * E2[3];
    ub_E1_tmp = E2[0] * E2[6];
    vb_E1_tmp = E2[2] * E2[4];
    wb_E1_tmp = E2[2] * E2[7];
    C1[32] = (((((((((((E2[1] * t11 - E2[1] * t12) - E2[1] * t13) + E2[1] * t15)
                     + E2[1] * t16) + E2[1] * t17) - E2[1] * t18) - E2[1] * t19)
                 + muDoubleScalarPower(E2[1], 3.0)) + tb_E1_tmp * E2[4] * 2.0) +
               ub_E1_tmp * E2[7] * 2.0) + vb_E1_tmp * E2[5] * 2.0) + wb_E1_tmp *
      E2[8] * 2.0;
    xb_E1_tmp = E2[1] * E2[4];
    yb_E1_tmp = E2[1] * E2[7];
    C1[33] = (((((((((((E2[2] * t11 - E2[2] * t12) - E2[2] * t13) + E2[2] * t14)
                     - E2[2] * t15) - E2[2] * t16) + E2[2] * t18) + E2[2] * t19)
                 + muDoubleScalarPower(E2[2], 3.0)) + tb_E1_tmp * E2[5] * 2.0) +
               ub_E1_tmp * E2[8] * 2.0) + xb_E1_tmp * E2[5] * 2.0) + yb_E1_tmp *
      E2[8] * 2.0;
    ac_E1_tmp = E2[0] * E2[1];
    bc_E1_tmp = E2[0] * E2[2];
    cc_E1_tmp = E2[5] * E2[6];
    C1[34] = (((((((((((E2[3] * t11 + E2[3] * t13) - E2[3] * t14) + E2[3] * t15)
                     - E2[3] * t16) - E2[3] * t17) + E2[3] * t18) - E2[3] * t19)
                 + muDoubleScalarPower(E2[3], 3.0)) + ac_E1_tmp * E2[4] * 2.0) +
               nb_E1_tmp * E2[7] * 2.0) + bc_E1_tmp * E2[5] * 2.0) + cc_E1_tmp *
      E2[8] * 2.0;
    dc_E1_tmp = E2[3] * E2[6];
    ec_E1_tmp = E2[1] * E2[2];
    fc_E1_tmp = E2[5] * E2[7];
    C1[35] = (((((((((((-E2[4] * t11 + E2[4] * t12) - E2[4] * t13) + E2[4] * t14)
                     + E2[4] * t16) - E2[4] * t17) + E2[4] * t18) - E2[4] * t19)
                 + muDoubleScalarPower(E2[4], 3.0)) + tb_E1_tmp * E2[1] * 2.0) +
               dc_E1_tmp * E2[7] * 2.0) + ec_E1_tmp * E2[5] * 2.0) + fc_E1_tmp *
      E2[8] * 2.0;
    gc_E1_tmp = E2[4] * E2[7];
    C1[36] = (((((((((((-E2[5] * t11 + E2[5] * t12) - E2[5] * t13) - E2[5] * t14)
                     + E2[5] * t15) - E2[5] * t16) + E2[5] * t17) + E2[5] * t19)
                 + muDoubleScalarPower(E2[5], 3.0)) + tb_E1_tmp * E2[2] * 2.0) +
               dc_E1_tmp * E2[8] * 2.0) + xb_E1_tmp * E2[2] * 2.0) + gc_E1_tmp *
      E2[8] * 2.0;
    C1[37] = (((((((((((E2[6] * t11 + E2[6] * t12) - E2[6] * t14) - E2[6] * t15)
                     + E2[6] * t16) - E2[6] * t17) - E2[6] * t18) + E2[6] * t19)
                 + muDoubleScalarPower(E2[6], 3.0)) + ac_E1_tmp * E2[7] * 2.0) +
               E2[3] * E2[4] * E2[7] * 2.0) + bc_E1_tmp * E2[8] * 2.0) + E2[3] *
      E2[5] * E2[8] * 2.0;
    C1[38] = (((((((((((-E2[7] * t11 - E2[7] * t12) + E2[7] * t13) + E2[7] * t14)
                     + E2[7] * t15) - E2[7] * t17) - E2[7] * t18) + E2[7] * t19)
                 + muDoubleScalarPower(E2[7], 3.0)) + ub_E1_tmp * E2[1] * 2.0) +
               dc_E1_tmp * E2[4] * 2.0) + ec_E1_tmp * E2[8] * 2.0) + E2[4] * E2
      [5] * E2[8] * 2.0;
    C1[39] = (((((((((((-E2[8] * t11 - E2[8] * t12) + E2[8] * t13) - E2[8] * t14)
                     - E2[8] * t15) + E2[8] * t16) + E2[8] * t17) + E2[8] * t18)
                 + muDoubleScalarPower(E2[8], 3.0)) + ub_E1_tmp * E2[2] * 2.0) +
               dc_E1_tmp * E2[5] * 2.0) + yb_E1_tmp * E2[2] * 2.0) + gc_E1_tmp *
      E2[5] * 2.0;
    C1[40] = ((((((((((((((((d_E1_tmp * E4[8] - e_E1_tmp * E4[5]) - i_E1_tmp *
      E4[7]) + j_E1_tmp * E4[4]) - E1_tmp * E4[8]) + f_E1_tmp * E4[2]) +
                        g_E1_tmp * E4[7]) - m_E1_tmp * E4[1]) + b_E1_tmp * E4[5])
                     - c_E1_tmp * E4[2]) - h_E1_tmp * E4[4]) + q_E1_tmp * E4[1])
                  + n_E1_tmp * E4[6]) - o_E1_tmp * E4[3]) - k_E1_tmp * E4[6]) +
               p_E1_tmp * E4[0]) + l_E1_tmp * E4[3]) - t_E1_tmp * E4[0];
    tb_E1_tmp = 2.0 * E4[3] * E1[0];
    ub_E1_tmp = 2.0 * E4[6] * E1[0];
    xb_E1_tmp = 2.0 * E4[1] * E1[0];
    yb_E1_tmp = 2.0 * E4[4] * E1[3];
    ac_E1_tmp = 2.0 * E4[7] * E1[6];
    bc_E1_tmp = 2.0 * E4[2] * E1[0];
    dc_E1_tmp = 2.0 * E4[5] * E1[3];
    ec_E1_tmp = 2.0 * E4[8] * E1[6];
    C1[41] = (((((((((((((((((((((((((((E4[0] * t2 * 3.0 + E4[0] * t3) + E4[0] *
      t4) + E4[0] * t5) - E4[0] * t6) - E4[0] * t7) + E4[0] * t8) - E4[0] * t9)
      - E4[0] * t10) + tb_E1_tmp * E1[3]) + ub_E1_tmp * E1[6]) + xb_E1_tmp * E1
      [1]) + 2.0 * E4[3] * E1[1] * E1[4]) + 2.0 * E4[1] * E1[3] * E1[4]) + -2.0 *
      E4[4] * E1[0] * E1[4]) + yb_E1_tmp * E1[1]) + 2.0 * E4[6] * E1[1] * E1[7])
                        + 2.0 * E4[1] * E1[6] * E1[7]) + -2.0 * E4[7] * E1[0] *
                       E1[7]) + ac_E1_tmp * E1[1]) + bc_E1_tmp * E1[2]) + 2.0 *
                    E4[3] * E1[2] * E1[5]) + 2.0 * E4[2] * E1[3] * E1[5]) + -2.0
                  * E4[5] * E1[0] * E1[5]) + dc_E1_tmp * E1[2]) + 2.0 * E4[6] *
                E1[2] * E1[8]) + 2.0 * E4[2] * E1[6] * E1[8]) + -2.0 * E4[8] *
              E1[0] * E1[8]) + ec_E1_tmp * E1[2];
    gc_E1_tmp = 2.0 * E4[0] * E1[0];
    hc_E1_tmp = 2.0 * E4[0] * E1[3];
    ic_E1_tmp = -2.0 * E4[3] * E1[3];
    jc_E1_tmp = 2.0 * E4[0] * E1[6];
    kc_E1_tmp = -2.0 * E4[6] * E1[6];
    lc_E1_tmp = 2.0 * E4[4] * E1[1];
    mc_E1_tmp = 2.0 * E4[7] * E1[1];
    nc_E1_tmp = 2.0 * E4[4] * E1[0];
    oc_E1_tmp = 2.0 * E4[2] * E1[1];
    pc_E1_tmp = 2.0 * E4[5] * E1[4];
    qc_E1_tmp = 2.0 * E4[8] * E1[7];
    rc_E1_tmp = 2.0 * E4[7] * E1[0];
    C1[42] = (((((((((((((((((((((((((((E4[1] * t2 - E4[1] * t3) - E4[1] * t4) +
      E4[1] * t5 * 3.0) + E4[1] * t6) + E4[1] * t7) + E4[1] * t8) - E4[1] * t9)
      - E4[1] * t10) + gc_E1_tmp * E1[1]) + hc_E1_tmp * E1[4]) + tb_E1_tmp * E1
      [4]) + ic_E1_tmp * E1[1]) + nc_E1_tmp * E1[3]) + jc_E1_tmp * E1[7]) +
                          ub_E1_tmp * E1[7]) + kc_E1_tmp * E1[1]) + rc_E1_tmp *
                        E1[6]) + lc_E1_tmp * E1[4]) + mc_E1_tmp * E1[7]) +
                     oc_E1_tmp * E1[2]) + 2.0 * E4[4] * E1[2] * E1[5]) + 2.0 *
                   E4[2] * E1[4] * E1[5]) + -2.0 * E4[5] * E1[1] * E1[5]) +
                 pc_E1_tmp * E1[2]) + 2.0 * E4[7] * E1[2] * E1[8]) + 2.0 * E4[2]
               * E1[7] * E1[8]) + -2.0 * E4[8] * E1[1] * E1[8]) + qc_E1_tmp *
      E1[2];
    sc_E1_tmp = 2.0 * E4[5] * E1[0];
    tc_E1_tmp = 2.0 * E4[1] * E1[1];
    uc_E1_tmp = 2.0 * E4[5] * E1[1];
    vc_E1_tmp = 2.0 * E4[1] * E1[4];
    wc_E1_tmp = -2.0 * E4[7] * E1[7];
    xc_E1_tmp = 2.0 * E4[8] * E1[0];
    yc_E1_tmp = 2.0 * E4[8] * E1[1];
    ad_E1_tmp = 2.0 * E4[1] * E1[7];
    bd_E1_tmp = -2.0 * E4[4] * E1[4];
    C1[43] = (((((((((((((((((((((((((((E4[2] * t2 - E4[2] * t3) - E4[2] * t4) +
      E4[2] * t5) - E4[2] * t6) - E4[2] * t7) + E4[2] * t8 * 3.0) + E4[2] * t9)
      + E4[2] * t10) + gc_E1_tmp * E1[2]) + hc_E1_tmp * E1[5]) + tb_E1_tmp * E1
      [5]) + ic_E1_tmp * E1[2]) + sc_E1_tmp * E1[3]) + jc_E1_tmp * E1[8]) +
                          ub_E1_tmp * E1[8]) + kc_E1_tmp * E1[2]) + xc_E1_tmp *
                        E1[6]) + tc_E1_tmp * E1[2]) + vc_E1_tmp * E1[5]) +
                     lc_E1_tmp * E1[5]) + bd_E1_tmp * E1[2]) + uc_E1_tmp * E1[4])
                  + ad_E1_tmp * E1[8]) + mc_E1_tmp * E1[8]) + wc_E1_tmp * E1[2])
               + yc_E1_tmp * E1[7]) + 2.0 * E4[5] * E1[2] * E1[5]) + 2.0 * E4[8]
      * E1[2] * E1[8];
    cd_E1_tmp = 2.0 * E4[6] * E1[3];
    dd_E1_tmp = 2.0 * E4[0] * E1[1];
    ed_E1_tmp = 2.0 * E4[0] * E1[2];
    C1[44] = (((((((((((((((((((((((((((E4[3] * t2 + E4[3] * t3 * 3.0) + E4[3] *
      t4) - E4[3] * t5) + E4[3] * t6) - E4[3] * t7) - E4[3] * t8) + E4[3] * t9)
      - E4[3] * t10) + gc_E1_tmp * E1[3]) + cd_E1_tmp * E1[6]) + dd_E1_tmp * E1
      [4]) + xb_E1_tmp * E1[4]) + -2.0 * E4[1] * E1[3] * E1[1]) + nc_E1_tmp *
      E1[1]) + yb_E1_tmp * E1[4]) + 2.0 * E4[6] * E1[4] * E1[7]) + 2.0 * E4[4] *
                        E1[6] * E1[7]) + -2.0 * E4[7] * E1[3] * E1[7]) +
                      ac_E1_tmp * E1[4]) + ed_E1_tmp * E1[5]) + bc_E1_tmp * E1[5])
                   + -2.0 * E4[2] * E1[3] * E1[2]) + sc_E1_tmp * E1[2]) +
                 dc_E1_tmp * E1[5]) + 2.0 * E4[6] * E1[5] * E1[8]) + 2.0 * E4[5]
               * E1[6] * E1[8]) + -2.0 * E4[8] * E1[3] * E1[8]) + ec_E1_tmp *
      E1[5];
    nc_E1_tmp = -2.0 * E4[0] * E1[0];
    sc_E1_tmp = 2.0 * E4[3] * E1[3];
    fd_E1_tmp = 2.0 * E4[3] * E1[6];
    gd_E1_tmp = 2.0 * E4[7] * E1[4];
    hd_E1_tmp = 2.0 * E4[7] * E1[3];
    id_E1_tmp = 2.0 * E4[1] * E1[2];
    C1[45] = (((((((((((((((((((((((((((-E4[4] * t2 + E4[4] * t3) - E4[4] * t4)
      + E4[4] * t5) + E4[4] * t6 * 3.0) + E4[4] * t7) - E4[4] * t8) + E4[4] * t9)
      - E4[4] * t10) + nc_E1_tmp * E1[4]) + hc_E1_tmp * E1[1]) + tb_E1_tmp * E1
      [1]) + xb_E1_tmp * E1[3]) + sc_E1_tmp * E1[4]) + fd_E1_tmp * E1[7]) +
                          cd_E1_tmp * E1[7]) + kc_E1_tmp * E1[4]) + hd_E1_tmp *
                        E1[6]) + tc_E1_tmp * E1[4]) + gd_E1_tmp * E1[7]) +
                     id_E1_tmp * E1[5]) + oc_E1_tmp * E1[5]) + -2.0 * E4[2] *
                   E1[4] * E1[2]) + uc_E1_tmp * E1[2]) + pc_E1_tmp * E1[5]) +
                2.0 * E4[7] * E1[5] * E1[8]) + 2.0 * E4[5] * E1[7] * E1[8]) +
              -2.0 * E4[8] * E1[4] * E1[8]) + qc_E1_tmp * E1[5];
    uc_E1_tmp = 2.0 * E4[8] * E1[3];
    jd_E1_tmp = 2.0 * E4[4] * E1[4];
    kd_E1_tmp = 2.0 * E4[8] * E1[4];
    ld_E1_tmp = -2.0 * E4[1] * E1[1];
    md_E1_tmp = 2.0 * E4[4] * E1[7];
    nd_E1_tmp = 2.0 * E4[2] * E1[2];
    C1[46] = (((((((((((((((((((((((((((-E4[5] * t2 + E4[5] * t3) - E4[5] * t4)
      - E4[5] * t5) + E4[5] * t6) - E4[5] * t7) + E4[5] * t8) + E4[5] * t9 * 3.0)
      + E4[5] * t10) + nc_E1_tmp * E1[5]) + hc_E1_tmp * E1[2]) + tb_E1_tmp * E1
      [2]) + bc_E1_tmp * E1[3]) + sc_E1_tmp * E1[5]) + fd_E1_tmp * E1[8]) +
                          cd_E1_tmp * E1[8]) + kc_E1_tmp * E1[5]) + uc_E1_tmp *
                        E1[6]) + ld_E1_tmp * E1[5]) + vc_E1_tmp * E1[2]) +
                     lc_E1_tmp * E1[2]) + oc_E1_tmp * E1[4]) + jd_E1_tmp * E1[5])
                  + md_E1_tmp * E1[8]) + gd_E1_tmp * E1[8]) + wc_E1_tmp * E1[5])
               + kd_E1_tmp * E1[7]) + nd_E1_tmp * E1[5]) + 2.0 * E4[8] * E1[5] *
      E1[8];
    C1[47] = (((((((((((((((((((((((((((E4[6] * t2 + E4[6] * t3) + E4[6] * t4 *
      3.0) - E4[6] * t5) - E4[6] * t6) + E4[6] * t7) - E4[6] * t8) - E4[6] * t9)
      + E4[6] * t10) + gc_E1_tmp * E1[6]) + sc_E1_tmp * E1[6]) + dd_E1_tmp * E1
      [7]) + xb_E1_tmp * E1[7]) + -2.0 * E4[1] * E1[6] * E1[1]) + rc_E1_tmp *
      E1[1]) + 2.0 * E4[3] * E1[4] * E1[7]) + yb_E1_tmp * E1[7]) + -2.0 * E4[4] *
                        E1[6] * E1[4]) + hd_E1_tmp * E1[4]) + ac_E1_tmp * E1[7])
                     + ed_E1_tmp * E1[8]) + bc_E1_tmp * E1[8]) + -2.0 * E4[2] *
                   E1[6] * E1[2]) + xc_E1_tmp * E1[2]) + 2.0 * E4[3] * E1[5] *
                 E1[8]) + dc_E1_tmp * E1[8]) + -2.0 * E4[5] * E1[6] * E1[5]) +
              uc_E1_tmp * E1[5]) + ec_E1_tmp * E1[8];
    tb_E1_tmp = 2.0 * E4[6] * E1[6];
    C1[48] = (((((((((((((((((((((((((((-E4[7] * t2 - E4[7] * t3) + E4[7] * t4)
      + E4[7] * t5) + E4[7] * t6) + E4[7] * t7 * 3.0) - E4[7] * t8) - E4[7] * t9)
      + E4[7] * t10) + nc_E1_tmp * E1[7]) + jc_E1_tmp * E1[1]) + ub_E1_tmp * E1
      [1]) + xb_E1_tmp * E1[6]) + ic_E1_tmp * E1[7]) + fd_E1_tmp * E1[4]) +
                          cd_E1_tmp * E1[4]) + yb_E1_tmp * E1[6]) + tb_E1_tmp *
                        E1[7]) + tc_E1_tmp * E1[7]) + jd_E1_tmp * E1[7]) +
                     id_E1_tmp * E1[8]) + oc_E1_tmp * E1[8]) + -2.0 * E4[2] *
                   E1[7] * E1[2]) + yc_E1_tmp * E1[2]) + 2.0 * E4[4] * E1[5] *
                 E1[8]) + pc_E1_tmp * E1[8]) + -2.0 * E4[5] * E1[7] * E1[5]) +
              kd_E1_tmp * E1[5]) + qc_E1_tmp * E1[8];
    C1[49] = (((((((((((((((((((((((((((-E4[8] * t2 - E4[8] * t3) + E4[8] * t4)
      - E4[8] * t5) - E4[8] * t6) + E4[8] * t7) + E4[8] * t8) + E4[8] * t9) +
      E4[8] * t10 * 3.0) + nc_E1_tmp * E1[8]) + jc_E1_tmp * E1[2]) + ub_E1_tmp *
      E1[2]) + bc_E1_tmp * E1[6]) + ic_E1_tmp * E1[8]) + fd_E1_tmp * E1[5]) +
                          cd_E1_tmp * E1[5]) + dc_E1_tmp * E1[6]) + tb_E1_tmp *
                        E1[8]) + ld_E1_tmp * E1[8]) + ad_E1_tmp * E1[2]) +
                     mc_E1_tmp * E1[2]) + oc_E1_tmp * E1[7]) + bd_E1_tmp * E1[8])
                  + md_E1_tmp * E1[5]) + gd_E1_tmp * E1[5]) + pc_E1_tmp * E1[7])
               + 2.0 * E4[7] * E1[7] * E1[8]) + nd_E1_tmp * E1[8]) + 2.0 * E4[5]
      * E1[5] * E1[8];
    tb_E1_tmp = E1[0] * E2[5];
    ub_E1_tmp = E2[2] * E1[3];
    xb_E1_tmp = E1[0] * E2[8];
    yb_E1_tmp = E2[2] * E1[6];
    ac_E1_tmp = E1[1] * E2[5];
    bc_E1_tmp = E2[2] * E1[4];
    dc_E1_tmp = E1[2] * E2[4];
    ec_E1_tmp = E2[1] * E1[5];
    gc_E1_tmp = E1[1] * E2[8];
    hc_E1_tmp = E2[2] * E1[7];
    ic_E1_tmp = E1[2] * E2[7];
    jc_E1_tmp = E2[1] * E1[8];
    kc_E1_tmp = E1[3] * E2[8];
    lc_E1_tmp = E2[5] * E1[6];
    mc_E1_tmp = E1[4] * E2[8];
    nc_E1_tmp = E2[5] * E1[7];
    oc_E1_tmp = E1[5] * E2[7];
    pc_E1_tmp = E2[4] * E1[8];
    C1[50] = ((((((((((((((((((((((((((((((((((r_E1_tmp * E4[8] - s_E1_tmp * E4
      [5]) - tb_E1_tmp * E4[7]) + xb_E1_tmp * E4[4]) - u_E1_tmp * E4[8]) +
      v_E1_tmp * E4[2]) + ub_E1_tmp * E4[7]) - kc_E1_tmp * E4[1]) + w_E1_tmp *
      E4[5]) - x_E1_tmp * E4[2]) - yb_E1_tmp * E4[4]) + lc_E1_tmp * E4[1]) -
      y_E1_tmp * E4[8]) + ab_E1_tmp * E4[5]) + ac_E1_tmp * E4[6]) - gc_E1_tmp *
      E4[3]) + bb_E1_tmp * E4[8]) - cb_E1_tmp * E4[2]) - bc_E1_tmp * E4[6]) +
      mc_E1_tmp * E4[0]) - db_E1_tmp * E4[5]) + eb_E1_tmp * E4[2]) + hc_E1_tmp *
                          E4[3]) - nc_E1_tmp * E4[0]) + fb_E1_tmp * E4[7]) -
                       gb_E1_tmp * E4[4]) - dc_E1_tmp * E4[6]) + ic_E1_tmp * E4
                     [3]) - hb_E1_tmp * E4[7]) + ib_E1_tmp * E4[1]) + ec_E1_tmp *
                  E4[6]) - oc_E1_tmp * E4[0]) + jb_E1_tmp * E4[4]) - kb_E1_tmp *
               E4[1]) - jc_E1_tmp * E4[3]) + pc_E1_tmp * E4[0];
    qc_E1_tmp = E1[0] * E2[0];
    rc_E1_tmp = E1[0] * E2[1];
    sc_E1_tmp = E2[0] * E1[1];
    tc_E1_tmp = E1[0] * E2[3];
    uc_E1_tmp = E2[0] * E1[3];
    vc_E1_tmp = E1[3] * E2[3];
    wc_E1_tmp = E1[3] * E2[4];
    xc_E1_tmp = E2[3] * E1[4];
    yc_E1_tmp = E1[0] * E2[6];
    ad_E1_tmp = E2[0] * E1[6];
    bd_E1_tmp = E1[6] * E2[6];
    cd_E1_tmp = E1[6] * E2[7];
    dd_E1_tmp = E2[6] * E1[7];
    ed_E1_tmp = E1[1] * E2[1];
    fd_E1_tmp = E1[1] * E2[4];
    gd_E1_tmp = E2[1] * E1[4];
    hd_E1_tmp = E1[4] * E2[4];
    id_E1_tmp = E1[1] * E2[7];
    jd_E1_tmp = E2[1] * E1[7];
    kd_E1_tmp = E1[7] * E2[7];
    ld_E1_tmp = E1[2] * E2[2];
    md_E1_tmp = E1[2] * E2[5];
    nd_E1_tmp = E2[2] * E1[5];
    od_E1_tmp = E1[5] * E2[5];
    pd_E1_tmp = E1[2] * E2[8];
    qd_E1_tmp = E2[2] * E1[8];
    rd_E1_tmp = E1[8] * E2[8];
    sd_E1_tmp = E1[0] * E2[2];
    td_E1_tmp = E2[0] * E1[2];
    ud_E1_tmp = E1[3] * E2[5];
    vd_E1_tmp = E2[3] * E1[5];
    wd_E1_tmp = E1[6] * E2[8];
    xd_E1_tmp = E2[6] * E1[8];
    C1[51] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E4[0] * 6.0 +
      tc_E1_tmp * E4[3] * 2.0) + uc_E1_tmp * E4[3] * 2.0) + vc_E1_tmp * E4[0] *
      2.0) + yc_E1_tmp * E4[6] * 2.0) + ad_E1_tmp * E4[6] * 2.0) + bd_E1_tmp *
      E4[0] * 2.0) + rc_E1_tmp * E4[1] * 2.0) + sc_E1_tmp * E4[1] * 2.0) +
      ed_E1_tmp * E4[0] * 2.0) - r_E1_tmp * E4[4] * 2.0) + u_E1_tmp * E4[4] *
      2.0) + wc_E1_tmp * E4[1] * 2.0) + y_E1_tmp * E4[4] * 2.0) + fd_E1_tmp *
      E4[3] * 2.0) - bb_E1_tmp * E4[4] * 2.0) + xc_E1_tmp * E4[1] * 2.0) +
      gd_E1_tmp * E4[3] * 2.0) - hd_E1_tmp * E4[0] * 2.0) - s_E1_tmp * E4[7] *
      2.0) + w_E1_tmp * E4[7] * 2.0) + cd_E1_tmp * E4[1] * 2.0) + ab_E1_tmp *
      E4[7] * 2.0) + id_E1_tmp * E4[6] * 2.0) - db_E1_tmp * E4[7] * 2.0) +
                          dd_E1_tmp * E4[1] * 2.0) + jd_E1_tmp * E4[6] * 2.0) -
                        kd_E1_tmp * E4[0] * 2.0) + sd_E1_tmp * E4[2] * 2.0) +
                      td_E1_tmp * E4[2] * 2.0) + ld_E1_tmp * E4[0] * 2.0) -
                    tb_E1_tmp * E4[5] * 2.0) + ub_E1_tmp * E4[5] * 2.0) +
                  ud_E1_tmp * E4[2] * 2.0) + fb_E1_tmp * E4[5] * 2.0) +
                md_E1_tmp * E4[3] * 2.0) - hb_E1_tmp * E4[5] * 2.0) + vd_E1_tmp *
              E4[2] * 2.0) + ((((((((((nd_E1_tmp * E4[3] * 2.0 - od_E1_tmp * E4
      [0] * 2.0) - xb_E1_tmp * E4[8] * 2.0) + yb_E1_tmp * E4[8] * 2.0) +
      wd_E1_tmp * E4[2] * 2.0) + gb_E1_tmp * E4[8] * 2.0) + pd_E1_tmp * E4[6] *
      2.0) - jb_E1_tmp * E4[8] * 2.0) + xd_E1_tmp * E4[2] * 2.0) + qd_E1_tmp *
      E4[6] * 2.0) - rd_E1_tmp * E4[0] * 2.0);
    yd_E1_tmp = E1[1] * E2[2];
    ae_E1_tmp = E2[1] * E1[2];
    be_E1_tmp = E1[4] * E2[5];
    ce_E1_tmp = E2[4] * E1[5];
    de_E1_tmp = E1[7] * E2[8];
    ee_E1_tmp = E2[7] * E1[8];
    C1[52] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E4[1] * 2.0 +
      rc_E1_tmp * E4[0] * 2.0) + sc_E1_tmp * E4[0] * 2.0) + tc_E1_tmp * E4[4] *
      2.0) + r_E1_tmp * E4[3] * 2.0) + uc_E1_tmp * E4[4] * 2.0) - vc_E1_tmp *
      E4[1] * 2.0) - u_E1_tmp * E4[3] * 2.0) + wc_E1_tmp * E4[0] * 2.0) -
      y_E1_tmp * E4[3] * 2.0) + bb_E1_tmp * E4[3] * 2.0) + xc_E1_tmp * E4[0] *
      2.0) + yc_E1_tmp * E4[7] * 2.0) + s_E1_tmp * E4[6] * 2.0) + ad_E1_tmp *
      E4[7] * 2.0) - bd_E1_tmp * E4[1] * 2.0) - w_E1_tmp * E4[6] * 2.0) +
      cd_E1_tmp * E4[0] * 2.0) - ab_E1_tmp * E4[6] * 2.0) + db_E1_tmp * E4[6] *
      2.0) + dd_E1_tmp * E4[0] * 2.0) + ed_E1_tmp * E4[1] * 6.0) + fd_E1_tmp *
      E4[4] * 2.0) + gd_E1_tmp * E4[4] * 2.0) + hd_E1_tmp * E4[1] * 2.0) +
                          id_E1_tmp * E4[7] * 2.0) + jd_E1_tmp * E4[7] * 2.0) +
                        kd_E1_tmp * E4[1] * 2.0) + yd_E1_tmp * E4[2] * 2.0) +
                      ae_E1_tmp * E4[2] * 2.0) + ld_E1_tmp * E4[1] * 2.0) -
                    ac_E1_tmp * E4[5] * 2.0) + bc_E1_tmp * E4[5] * 2.0) +
                  be_E1_tmp * E4[2] * 2.0) + dc_E1_tmp * E4[5] * 2.0) +
                md_E1_tmp * E4[4] * 2.0) - ec_E1_tmp * E4[5] * 2.0) + ce_E1_tmp *
              E4[2] * 2.0) + ((((((((((nd_E1_tmp * E4[4] * 2.0 - od_E1_tmp * E4
      [1] * 2.0) - gc_E1_tmp * E4[8] * 2.0) + hc_E1_tmp * E4[8] * 2.0) +
      de_E1_tmp * E4[2] * 2.0) + ic_E1_tmp * E4[8] * 2.0) + pd_E1_tmp * E4[7] *
      2.0) - jc_E1_tmp * E4[8] * 2.0) + ee_E1_tmp * E4[2] * 2.0) + qd_E1_tmp *
      E4[7] * 2.0) - rd_E1_tmp * E4[1] * 2.0);
    C1[53] = ((((((((((((((((((((((((((((((((((((qc_E1_tmp * E4[2] * 2.0 +
      sd_E1_tmp * E4[0] * 2.0) + td_E1_tmp * E4[0] * 2.0) + tc_E1_tmp * E4[5] *
      2.0) + tb_E1_tmp * E4[3] * 2.0) + uc_E1_tmp * E4[5] * 2.0) - vc_E1_tmp *
      E4[2] * 2.0) - ub_E1_tmp * E4[3] * 2.0) + ud_E1_tmp * E4[0] * 2.0) -
      fb_E1_tmp * E4[3] * 2.0) + hb_E1_tmp * E4[3] * 2.0) + vd_E1_tmp * E4[0] *
      2.0) + yc_E1_tmp * E4[8] * 2.0) + xb_E1_tmp * E4[6] * 2.0) + ad_E1_tmp *
      E4[8] * 2.0) - bd_E1_tmp * E4[2] * 2.0) - yb_E1_tmp * E4[6] * 2.0) +
      wd_E1_tmp * E4[0] * 2.0) - gb_E1_tmp * E4[6] * 2.0) + jb_E1_tmp * E4[6] *
      2.0) + xd_E1_tmp * E4[0] * 2.0) + ed_E1_tmp * E4[2] * 2.0) + yd_E1_tmp *
      E4[1] * 2.0) + ae_E1_tmp * E4[1] * 2.0) + fd_E1_tmp * E4[5] * 2.0) +
                         ac_E1_tmp * E4[4] * 2.0) + gd_E1_tmp * E4[5] * 2.0) -
                       hd_E1_tmp * E4[2] * 2.0) - bc_E1_tmp * E4[4] * 2.0) +
                     be_E1_tmp * E4[1] * 2.0) - dc_E1_tmp * E4[4] * 2.0) +
                   ec_E1_tmp * E4[4] * 2.0) + ce_E1_tmp * E4[1] * 2.0) +
                 id_E1_tmp * E4[8] * 2.0) + gc_E1_tmp * E4[7] * 2.0) + jd_E1_tmp
               * E4[8] * 2.0) - kd_E1_tmp * E4[2] * 2.0) + (((((((((((hc_E1_tmp *
      E4[7] * -2.0 + de_E1_tmp * E4[1] * 2.0) - ic_E1_tmp * E4[7] * 2.0) +
      jc_E1_tmp * E4[7] * 2.0) + ee_E1_tmp * E4[1] * 2.0) + ld_E1_tmp * E4[2] *
      6.0) + md_E1_tmp * E4[5] * 2.0) + nd_E1_tmp * E4[5] * 2.0) + od_E1_tmp *
      E4[2] * 2.0) + pd_E1_tmp * E4[8] * 2.0) + qd_E1_tmp * E4[8] * 2.0) +
      rd_E1_tmp * E4[2] * 2.0);
    fe_E1_tmp = E1[3] * E2[6];
    ge_E1_tmp = E2[3] * E1[6];
    he_E1_tmp = E1[4] * E2[7];
    ie_E1_tmp = E2[4] * E1[7];
    je_E1_tmp = E1[5] * E2[8];
    ke_E1_tmp = E2[5] * E1[8];
    C1[54] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E4[3] * 2.0 +
      tc_E1_tmp * E4[0] * 2.0) + uc_E1_tmp * E4[0] * 2.0) + vc_E1_tmp * E4[3] *
      6.0) + fe_E1_tmp * E4[6] * 2.0) + ge_E1_tmp * E4[6] * 2.0) + bd_E1_tmp *
      E4[3] * 2.0) + rc_E1_tmp * E4[4] * 2.0) + r_E1_tmp * E4[1] * 2.0) -
      u_E1_tmp * E4[1] * 2.0) + sc_E1_tmp * E4[4] * 2.0) - y_E1_tmp * E4[1] *
      2.0) - ed_E1_tmp * E4[3] * 2.0) + fd_E1_tmp * E4[0] * 2.0) + bb_E1_tmp *
      E4[1] * 2.0) + gd_E1_tmp * E4[0] * 2.0) + wc_E1_tmp * E4[4] * 2.0) +
      xc_E1_tmp * E4[4] * 2.0) + hd_E1_tmp * E4[3] * 2.0) - v_E1_tmp * E4[7] *
      2.0) + x_E1_tmp * E4[7] * 2.0) + cd_E1_tmp * E4[4] * 2.0) + cb_E1_tmp *
      E4[7] * 2.0) + he_E1_tmp * E4[6] * 2.0) - eb_E1_tmp * E4[7] * 2.0) +
                          dd_E1_tmp * E4[4] * 2.0) + ie_E1_tmp * E4[6] * 2.0) -
                        kd_E1_tmp * E4[3] * 2.0) + sd_E1_tmp * E4[5] * 2.0) +
                      tb_E1_tmp * E4[2] * 2.0) - ub_E1_tmp * E4[2] * 2.0) +
                    td_E1_tmp * E4[5] * 2.0) - fb_E1_tmp * E4[2] * 2.0) -
                  ld_E1_tmp * E4[3] * 2.0) + md_E1_tmp * E4[0] * 2.0) +
                hb_E1_tmp * E4[2] * 2.0) + nd_E1_tmp * E4[0] * 2.0) + ud_E1_tmp *
              E4[5] * 2.0) + ((((((((((vd_E1_tmp * E4[5] * 2.0 + od_E1_tmp * E4
      [3] * 2.0) - kc_E1_tmp * E4[8] * 2.0) + lc_E1_tmp * E4[8] * 2.0) +
      wd_E1_tmp * E4[5] * 2.0) + ib_E1_tmp * E4[8] * 2.0) + je_E1_tmp * E4[6] *
      2.0) - kb_E1_tmp * E4[8] * 2.0) + xd_E1_tmp * E4[5] * 2.0) + ke_E1_tmp *
      E4[6] * 2.0) - rd_E1_tmp * E4[3] * 2.0);
    C1[55] = (((((((((((((((((((((((((((((((((((((tc_E1_tmp * E4[1] * 2.0 -
      qc_E1_tmp * E4[4] * 2.0) + rc_E1_tmp * E4[3] * 2.0) - r_E1_tmp * E4[0] *
      2.0) + uc_E1_tmp * E4[1] * 2.0) + u_E1_tmp * E4[0] * 2.0) + sc_E1_tmp *
      E4[3] * 2.0) + y_E1_tmp * E4[0] * 2.0) - bb_E1_tmp * E4[0] * 2.0) +
      vc_E1_tmp * E4[4] * 2.0) + wc_E1_tmp * E4[3] * 2.0) + xc_E1_tmp * E4[3] *
      2.0) + fe_E1_tmp * E4[7] * 2.0) + v_E1_tmp * E4[6] * 2.0) + ge_E1_tmp *
      E4[7] * 2.0) - bd_E1_tmp * E4[4] * 2.0) - x_E1_tmp * E4[6] * 2.0) +
      cd_E1_tmp * E4[3] * 2.0) - cb_E1_tmp * E4[6] * 2.0) + eb_E1_tmp * E4[6] *
      2.0) + dd_E1_tmp * E4[3] * 2.0) + ed_E1_tmp * E4[4] * 2.0) + fd_E1_tmp *
      E4[1] * 2.0) + gd_E1_tmp * E4[1] * 2.0) + hd_E1_tmp * E4[4] * 6.0) +
                          he_E1_tmp * E4[7] * 2.0) + ie_E1_tmp * E4[7] * 2.0) +
                        kd_E1_tmp * E4[4] * 2.0) + yd_E1_tmp * E4[5] * 2.0) +
                      ac_E1_tmp * E4[2] * 2.0) - bc_E1_tmp * E4[2] * 2.0) +
                    ae_E1_tmp * E4[5] * 2.0) - dc_E1_tmp * E4[2] * 2.0) -
                  ld_E1_tmp * E4[4] * 2.0) + md_E1_tmp * E4[1] * 2.0) +
                ec_E1_tmp * E4[2] * 2.0) + nd_E1_tmp * E4[1] * 2.0) + be_E1_tmp *
              E4[5] * 2.0) + ((((((((((ce_E1_tmp * E4[5] * 2.0 + od_E1_tmp * E4
      [4] * 2.0) - mc_E1_tmp * E4[8] * 2.0) + nc_E1_tmp * E4[8] * 2.0) +
      de_E1_tmp * E4[5] * 2.0) + oc_E1_tmp * E4[8] * 2.0) + je_E1_tmp * E4[7] *
      2.0) - pc_E1_tmp * E4[8] * 2.0) + ee_E1_tmp * E4[5] * 2.0) + ke_E1_tmp *
      E4[7] * 2.0) - rd_E1_tmp * E4[4] * 2.0);
    C1[56] = ((((((((((((((((((((((((((((((((((((tc_E1_tmp * E4[2] * 2.0 -
      qc_E1_tmp * E4[5] * 2.0) + sd_E1_tmp * E4[3] * 2.0) - tb_E1_tmp * E4[0] *
      2.0) + uc_E1_tmp * E4[2] * 2.0) + ub_E1_tmp * E4[0] * 2.0) + td_E1_tmp *
      E4[3] * 2.0) + fb_E1_tmp * E4[0] * 2.0) - hb_E1_tmp * E4[0] * 2.0) +
      vc_E1_tmp * E4[5] * 2.0) + ud_E1_tmp * E4[3] * 2.0) + vd_E1_tmp * E4[3] *
      2.0) + fe_E1_tmp * E4[8] * 2.0) + kc_E1_tmp * E4[6] * 2.0) + ge_E1_tmp *
      E4[8] * 2.0) - bd_E1_tmp * E4[5] * 2.0) - lc_E1_tmp * E4[6] * 2.0) +
      wd_E1_tmp * E4[3] * 2.0) - ib_E1_tmp * E4[6] * 2.0) + kb_E1_tmp * E4[6] *
      2.0) + xd_E1_tmp * E4[3] * 2.0) - ed_E1_tmp * E4[5] * 2.0) + fd_E1_tmp *
      E4[2] * 2.0) + yd_E1_tmp * E4[4] * 2.0) - ac_E1_tmp * E4[1] * 2.0) +
                         gd_E1_tmp * E4[2] * 2.0) + bc_E1_tmp * E4[1] * 2.0) +
                       ae_E1_tmp * E4[4] * 2.0) + dc_E1_tmp * E4[1] * 2.0) -
                     ec_E1_tmp * E4[1] * 2.0) + hd_E1_tmp * E4[5] * 2.0) +
                   be_E1_tmp * E4[4] * 2.0) + ce_E1_tmp * E4[4] * 2.0) +
                 he_E1_tmp * E4[8] * 2.0) + mc_E1_tmp * E4[7] * 2.0) + ie_E1_tmp
               * E4[8] * 2.0) - kd_E1_tmp * E4[5] * 2.0) + (((((((((((nc_E1_tmp *
      E4[7] * -2.0 + de_E1_tmp * E4[4] * 2.0) - oc_E1_tmp * E4[7] * 2.0) +
      pc_E1_tmp * E4[7] * 2.0) + ee_E1_tmp * E4[4] * 2.0) + ld_E1_tmp * E4[5] *
      2.0) + md_E1_tmp * E4[2] * 2.0) + nd_E1_tmp * E4[2] * 2.0) + od_E1_tmp *
      E4[5] * 6.0) + je_E1_tmp * E4[8] * 2.0) + ke_E1_tmp * E4[8] * 2.0) +
      rd_E1_tmp * E4[5] * 2.0);
    C1[57] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E4[6] * 2.0 +
      yc_E1_tmp * E4[0] * 2.0) + ad_E1_tmp * E4[0] * 2.0) + vc_E1_tmp * E4[6] *
      2.0) + fe_E1_tmp * E4[3] * 2.0) + ge_E1_tmp * E4[3] * 2.0) + bd_E1_tmp *
      E4[6] * 6.0) + rc_E1_tmp * E4[7] * 2.0) + s_E1_tmp * E4[1] * 2.0) -
      w_E1_tmp * E4[1] * 2.0) + sc_E1_tmp * E4[7] * 2.0) - ab_E1_tmp * E4[1] *
      2.0) - ed_E1_tmp * E4[6] * 2.0) + id_E1_tmp * E4[0] * 2.0) + db_E1_tmp *
      E4[1] * 2.0) + jd_E1_tmp * E4[0] * 2.0) + wc_E1_tmp * E4[7] * 2.0) +
      v_E1_tmp * E4[4] * 2.0) - x_E1_tmp * E4[4] * 2.0) + xc_E1_tmp * E4[7] *
      2.0) - cb_E1_tmp * E4[4] * 2.0) - hd_E1_tmp * E4[6] * 2.0) + he_E1_tmp *
      E4[3] * 2.0) + eb_E1_tmp * E4[4] * 2.0) + ie_E1_tmp * E4[3] * 2.0) +
                          cd_E1_tmp * E4[7] * 2.0) + dd_E1_tmp * E4[7] * 2.0) +
                        kd_E1_tmp * E4[6] * 2.0) + sd_E1_tmp * E4[8] * 2.0) +
                      xb_E1_tmp * E4[2] * 2.0) - yb_E1_tmp * E4[2] * 2.0) +
                    td_E1_tmp * E4[8] * 2.0) - gb_E1_tmp * E4[2] * 2.0) -
                  ld_E1_tmp * E4[6] * 2.0) + pd_E1_tmp * E4[0] * 2.0) +
                jb_E1_tmp * E4[2] * 2.0) + qd_E1_tmp * E4[0] * 2.0) + ud_E1_tmp *
              E4[8] * 2.0) + ((((((((((kc_E1_tmp * E4[5] * 2.0 - lc_E1_tmp * E4
      [5] * 2.0) + vd_E1_tmp * E4[8] * 2.0) - ib_E1_tmp * E4[5] * 2.0) -
      od_E1_tmp * E4[6] * 2.0) + je_E1_tmp * E4[3] * 2.0) + kb_E1_tmp * E4[5] *
      2.0) + ke_E1_tmp * E4[3] * 2.0) + wd_E1_tmp * E4[8] * 2.0) + xd_E1_tmp *
      E4[8] * 2.0) + rd_E1_tmp * E4[6] * 2.0);
    C1[58] = (((((((((((((((((((((((((((((((((((((yc_E1_tmp * E4[1] * 2.0 -
      qc_E1_tmp * E4[7] * 2.0) + rc_E1_tmp * E4[6] * 2.0) - s_E1_tmp * E4[0] *
      2.0) + ad_E1_tmp * E4[1] * 2.0) + w_E1_tmp * E4[0] * 2.0) + sc_E1_tmp *
      E4[6] * 2.0) + ab_E1_tmp * E4[0] * 2.0) - db_E1_tmp * E4[0] * 2.0) -
      vc_E1_tmp * E4[7] * 2.0) + fe_E1_tmp * E4[4] * 2.0) + wc_E1_tmp * E4[6] *
      2.0) - v_E1_tmp * E4[3] * 2.0) + ge_E1_tmp * E4[4] * 2.0) + x_E1_tmp * E4
      [3] * 2.0) + xc_E1_tmp * E4[6] * 2.0) + cb_E1_tmp * E4[3] * 2.0) -
      eb_E1_tmp * E4[3] * 2.0) + bd_E1_tmp * E4[7] * 2.0) + cd_E1_tmp * E4[6] *
      2.0) + dd_E1_tmp * E4[6] * 2.0) + ed_E1_tmp * E4[7] * 2.0) + id_E1_tmp *
      E4[1] * 2.0) + jd_E1_tmp * E4[1] * 2.0) + hd_E1_tmp * E4[7] * 2.0) +
                          he_E1_tmp * E4[4] * 2.0) + ie_E1_tmp * E4[4] * 2.0) +
                        kd_E1_tmp * E4[7] * 6.0) + yd_E1_tmp * E4[8] * 2.0) +
                      gc_E1_tmp * E4[2] * 2.0) - hc_E1_tmp * E4[2] * 2.0) +
                    ae_E1_tmp * E4[8] * 2.0) - ic_E1_tmp * E4[2] * 2.0) -
                  ld_E1_tmp * E4[7] * 2.0) + pd_E1_tmp * E4[1] * 2.0) +
                jc_E1_tmp * E4[2] * 2.0) + qd_E1_tmp * E4[1] * 2.0) + be_E1_tmp *
              E4[8] * 2.0) + ((((((((((mc_E1_tmp * E4[5] * 2.0 - nc_E1_tmp * E4
      [5] * 2.0) + ce_E1_tmp * E4[8] * 2.0) - oc_E1_tmp * E4[5] * 2.0) -
      od_E1_tmp * E4[7] * 2.0) + je_E1_tmp * E4[4] * 2.0) + pc_E1_tmp * E4[5] *
      2.0) + ke_E1_tmp * E4[4] * 2.0) + de_E1_tmp * E4[8] * 2.0) + ee_E1_tmp *
      E4[8] * 2.0) + rd_E1_tmp * E4[7] * 2.0);
    C1[59] = ((((((((((((((((((((((((((((((((((((yc_E1_tmp * E4[2] * 2.0 -
      qc_E1_tmp * E4[8] * 2.0) + sd_E1_tmp * E4[6] * 2.0) - xb_E1_tmp * E4[0] *
      2.0) + ad_E1_tmp * E4[2] * 2.0) + yb_E1_tmp * E4[0] * 2.0) + td_E1_tmp *
      E4[6] * 2.0) + gb_E1_tmp * E4[0] * 2.0) - jb_E1_tmp * E4[0] * 2.0) -
      vc_E1_tmp * E4[8] * 2.0) + fe_E1_tmp * E4[5] * 2.0) + ud_E1_tmp * E4[6] *
      2.0) - kc_E1_tmp * E4[3] * 2.0) + ge_E1_tmp * E4[5] * 2.0) + lc_E1_tmp *
      E4[3] * 2.0) + vd_E1_tmp * E4[6] * 2.0) + ib_E1_tmp * E4[3] * 2.0) -
      kb_E1_tmp * E4[3] * 2.0) + bd_E1_tmp * E4[8] * 2.0) + wd_E1_tmp * E4[6] *
      2.0) + xd_E1_tmp * E4[6] * 2.0) - ed_E1_tmp * E4[8] * 2.0) + id_E1_tmp *
      E4[2] * 2.0) + yd_E1_tmp * E4[7] * 2.0) - gc_E1_tmp * E4[1] * 2.0) +
                         jd_E1_tmp * E4[2] * 2.0) + hc_E1_tmp * E4[1] * 2.0) +
                       ae_E1_tmp * E4[7] * 2.0) + ic_E1_tmp * E4[1] * 2.0) -
                     jc_E1_tmp * E4[1] * 2.0) - hd_E1_tmp * E4[8] * 2.0) +
                   he_E1_tmp * E4[5] * 2.0) + be_E1_tmp * E4[7] * 2.0) -
                 mc_E1_tmp * E4[4] * 2.0) + ie_E1_tmp * E4[5] * 2.0) + nc_E1_tmp
               * E4[4] * 2.0) + ce_E1_tmp * E4[7] * 2.0) + (((((((((((oc_E1_tmp *
      E4[4] * 2.0 - pc_E1_tmp * E4[4] * 2.0) + kd_E1_tmp * E4[8] * 2.0) +
      de_E1_tmp * E4[7] * 2.0) + ee_E1_tmp * E4[7] * 2.0) + ld_E1_tmp * E4[8] *
      2.0) + pd_E1_tmp * E4[2] * 2.0) + qd_E1_tmp * E4[2] * 2.0) + od_E1_tmp *
      E4[8] * 2.0) + je_E1_tmp * E4[5] * 2.0) + ke_E1_tmp * E4[5] * 2.0) +
      rd_E1_tmp * E4[8] * 6.0);
    le_E1_tmp = E2[0] * E2[5];
    me_E1_tmp = E2[0] * E2[8];
    ne_E1_tmp = E2[3] * E2[8];
    oe_E1_tmp = E2[1] * E2[5];
    pe_E1_tmp = E2[1] * E2[8];
    qe_E1_tmp = E2[4] * E2[8];
    C1[60] = ((((((((((((((((ob_E1_tmp * E4[8] - pb_E1_tmp * E4[5]) - le_E1_tmp *
      E4[7]) + me_E1_tmp * E4[4]) - lb_E1_tmp * E4[8]) + qb_E1_tmp * E4[2]) +
                        rb_E1_tmp * E4[7]) - ne_E1_tmp * E4[1]) + mb_E1_tmp *
                      E4[5]) - nb_E1_tmp * E4[2]) - sb_E1_tmp * E4[4]) +
                   cc_E1_tmp * E4[1]) + oe_E1_tmp * E4[6]) - pe_E1_tmp * E4[3])
                - vb_E1_tmp * E4[6]) + qe_E1_tmp * E4[0]) + wb_E1_tmp * E4[3]) -
      fc_E1_tmp * E4[0];
    re_E1_tmp = 2.0 * E4[3] * E2[0];
    se_E1_tmp = 2.0 * E4[6] * E2[0];
    te_E1_tmp = 2.0 * E4[1] * E2[0];
    ue_E1_tmp = 2.0 * E4[4] * E2[3];
    ve_E1_tmp = 2.0 * E4[7] * E2[6];
    we_E1_tmp = 2.0 * E4[2] * E2[0];
    xe_E1_tmp = 2.0 * E4[5] * E2[3];
    ye_E1_tmp = 2.0 * E4[8] * E2[6];
    C1[61] = (((((((((((((((((((((((((((E4[0] * t11 * 3.0 + E4[0] * t12) + E4[0]
      * t13) + E4[0] * t14) - E4[0] * t15) - E4[0] * t16) + E4[0] * t17) - E4[0]
      * t18) - E4[0] * t19) + re_E1_tmp * E2[3]) + se_E1_tmp * E2[6]) +
      te_E1_tmp * E2[1]) + 2.0 * E4[3] * E2[1] * E2[4]) + 2.0 * E4[1] * E2[3] *
      E2[4]) + -2.0 * E4[4] * E2[0] * E2[4]) + ue_E1_tmp * E2[1]) + 2.0 * E4[6] *
                         E2[1] * E2[7]) + 2.0 * E4[1] * E2[6] * E2[7]) + -2.0 *
                       E4[7] * E2[0] * E2[7]) + ve_E1_tmp * E2[1]) + we_E1_tmp *
                     E2[2]) + 2.0 * E4[3] * E2[2] * E2[5]) + 2.0 * E4[2] * E2[3]
                   * E2[5]) + -2.0 * E4[5] * E2[0] * E2[5]) + xe_E1_tmp * E2[2])
                + 2.0 * E4[6] * E2[2] * E2[8]) + 2.0 * E4[2] * E2[6] * E2[8]) +
              -2.0 * E4[8] * E2[0] * E2[8]) + ye_E1_tmp * E2[2];
    af_E1_tmp = 2.0 * E4[0] * E2[0];
    bf_E1_tmp = 2.0 * E4[0] * E2[3];
    cf_E1_tmp = -2.0 * E4[3] * E2[3];
    df_E1_tmp = 2.0 * E4[0] * E2[6];
    ef_E1_tmp = -2.0 * E4[6] * E2[6];
    ff_E1_tmp = 2.0 * E4[4] * E2[1];
    gf_E1_tmp = 2.0 * E4[7] * E2[1];
    hf_E1_tmp = 2.0 * E4[4] * E2[0];
    if_E1_tmp = 2.0 * E4[2] * E2[1];
    jf_E1_tmp = 2.0 * E4[5] * E2[4];
    kf_E1_tmp = 2.0 * E4[8] * E2[7];
    lf_E1_tmp = 2.0 * E4[7] * E2[0];
    C1[62] = (((((((((((((((((((((((((((E4[1] * t11 - E4[1] * t12) - E4[1] * t13)
      + E4[1] * t14 * 3.0) + E4[1] * t15) + E4[1] * t16) + E4[1] * t17) - E4[1] *
      t18) - E4[1] * t19) + af_E1_tmp * E2[1]) + bf_E1_tmp * E2[4]) + re_E1_tmp *
      E2[4]) + cf_E1_tmp * E2[1]) + hf_E1_tmp * E2[3]) + df_E1_tmp * E2[7]) +
                          se_E1_tmp * E2[7]) + ef_E1_tmp * E2[1]) + lf_E1_tmp *
                        E2[6]) + ff_E1_tmp * E2[4]) + gf_E1_tmp * E2[7]) +
                     if_E1_tmp * E2[2]) + 2.0 * E4[4] * E2[2] * E2[5]) + 2.0 *
                   E4[2] * E2[4] * E2[5]) + -2.0 * E4[5] * E2[1] * E2[5]) +
                 jf_E1_tmp * E2[2]) + 2.0 * E4[7] * E2[2] * E2[8]) + 2.0 * E4[2]
               * E2[7] * E2[8]) + -2.0 * E4[8] * E2[1] * E2[8]) + kf_E1_tmp *
      E2[2];
    mf_E1_tmp = 2.0 * E4[5] * E2[0];
    nf_E1_tmp = 2.0 * E4[1] * E2[1];
    of_E1_tmp = 2.0 * E4[5] * E2[1];
    pf_E1_tmp = 2.0 * E4[1] * E2[4];
    qf_E1_tmp = -2.0 * E4[7] * E2[7];
    rf_E1_tmp = 2.0 * E4[8] * E2[0];
    sf_E1_tmp = 2.0 * E4[8] * E2[1];
    tf_E1_tmp = 2.0 * E4[1] * E2[7];
    uf_E1_tmp = -2.0 * E4[4] * E2[4];
    C1[63] = (((((((((((((((((((((((((((E4[2] * t11 - E4[2] * t12) - E4[2] * t13)
      + E4[2] * t14) - E4[2] * t15) - E4[2] * t16) + E4[2] * t17 * 3.0) + E4[2] *
      t18) + E4[2] * t19) + af_E1_tmp * E2[2]) + bf_E1_tmp * E2[5]) + re_E1_tmp *
      E2[5]) + cf_E1_tmp * E2[2]) + mf_E1_tmp * E2[3]) + df_E1_tmp * E2[8]) +
                          se_E1_tmp * E2[8]) + ef_E1_tmp * E2[2]) + rf_E1_tmp *
                        E2[6]) + nf_E1_tmp * E2[2]) + pf_E1_tmp * E2[5]) +
                     ff_E1_tmp * E2[5]) + uf_E1_tmp * E2[2]) + of_E1_tmp * E2[4])
                  + tf_E1_tmp * E2[8]) + gf_E1_tmp * E2[8]) + qf_E1_tmp * E2[2])
               + sf_E1_tmp * E2[7]) + 2.0 * E4[5] * E2[2] * E2[5]) + 2.0 * E4[8]
      * E2[2] * E2[8];
    vf_E1_tmp = 2.0 * E4[6] * E2[3];
    wf_E1_tmp = 2.0 * E4[0] * E2[1];
    xf_E1_tmp = 2.0 * E4[0] * E2[2];
    C1[64] = (((((((((((((((((((((((((((E4[3] * t11 + E4[3] * t12 * 3.0) + E4[3]
      * t13) - E4[3] * t14) + E4[3] * t15) - E4[3] * t16) - E4[3] * t17) + E4[3]
      * t18) - E4[3] * t19) + af_E1_tmp * E2[3]) + vf_E1_tmp * E2[6]) +
      wf_E1_tmp * E2[4]) + te_E1_tmp * E2[4]) + -2.0 * E4[1] * E2[3] * E2[1]) +
      hf_E1_tmp * E2[1]) + ue_E1_tmp * E2[4]) + 2.0 * E4[6] * E2[4] * E2[7]) +
                        2.0 * E4[4] * E2[6] * E2[7]) + -2.0 * E4[7] * E2[3] *
                       E2[7]) + ve_E1_tmp * E2[4]) + xf_E1_tmp * E2[5]) +
                    we_E1_tmp * E2[5]) + -2.0 * E4[2] * E2[3] * E2[2]) +
                  mf_E1_tmp * E2[2]) + xe_E1_tmp * E2[5]) + 2.0 * E4[6] * E2[5] *
                E2[8]) + 2.0 * E4[5] * E2[6] * E2[8]) + -2.0 * E4[8] * E2[3] *
              E2[8]) + ye_E1_tmp * E2[5];
    hf_E1_tmp = -2.0 * E4[0] * E2[0];
    mf_E1_tmp = 2.0 * E4[3] * E2[3];
    yf_E1_tmp = 2.0 * E4[3] * E2[6];
    ag_E1_tmp = 2.0 * E4[7] * E2[4];
    bg_E1_tmp = 2.0 * E4[7] * E2[3];
    cg_E1_tmp = 2.0 * E4[1] * E2[2];
    C1[65] = (((((((((((((((((((((((((((-E4[4] * t11 + E4[4] * t12) - E4[4] *
      t13) + E4[4] * t14) + E4[4] * t15 * 3.0) + E4[4] * t16) - E4[4] * t17) +
      E4[4] * t18) - E4[4] * t19) + hf_E1_tmp * E2[4]) + bf_E1_tmp * E2[1]) +
      re_E1_tmp * E2[1]) + te_E1_tmp * E2[3]) + mf_E1_tmp * E2[4]) + yf_E1_tmp *
      E2[7]) + vf_E1_tmp * E2[7]) + ef_E1_tmp * E2[4]) + bg_E1_tmp * E2[6]) +
                       nf_E1_tmp * E2[4]) + ag_E1_tmp * E2[7]) + cg_E1_tmp * E2
                     [5]) + if_E1_tmp * E2[5]) + -2.0 * E4[2] * E2[4] * E2[2]) +
                  of_E1_tmp * E2[2]) + jf_E1_tmp * E2[5]) + 2.0 * E4[7] * E2[5] *
                E2[8]) + 2.0 * E4[5] * E2[7] * E2[8]) + -2.0 * E4[8] * E2[4] *
              E2[8]) + kf_E1_tmp * E2[5];
    of_E1_tmp = 2.0 * E4[8] * E2[3];
    dg_E1_tmp = 2.0 * E4[4] * E2[4];
    eg_E1_tmp = 2.0 * E4[8] * E2[4];
    fg_E1_tmp = -2.0 * E4[1] * E2[1];
    gg_E1_tmp = 2.0 * E4[4] * E2[7];
    hg_E1_tmp = 2.0 * E4[2] * E2[2];
    C1[66] = (((((((((((((((((((((((((((-E4[5] * t11 + E4[5] * t12) - E4[5] *
      t13) - E4[5] * t14) + E4[5] * t15) - E4[5] * t16) + E4[5] * t17) + E4[5] *
      t18 * 3.0) + E4[5] * t19) + hf_E1_tmp * E2[5]) + bf_E1_tmp * E2[2]) +
      re_E1_tmp * E2[2]) + we_E1_tmp * E2[3]) + mf_E1_tmp * E2[5]) + yf_E1_tmp *
      E2[8]) + vf_E1_tmp * E2[8]) + ef_E1_tmp * E2[5]) + of_E1_tmp * E2[6]) +
                       fg_E1_tmp * E2[5]) + pf_E1_tmp * E2[2]) + ff_E1_tmp * E2
                     [2]) + if_E1_tmp * E2[4]) + dg_E1_tmp * E2[5]) + gg_E1_tmp *
                  E2[8]) + ag_E1_tmp * E2[8]) + qf_E1_tmp * E2[5]) + eg_E1_tmp *
               E2[7]) + hg_E1_tmp * E2[5]) + 2.0 * E4[8] * E2[5] * E2[8];
    C1[67] = (((((((((((((((((((((((((((E4[6] * t11 + E4[6] * t12) + E4[6] * t13
      * 3.0) - E4[6] * t14) - E4[6] * t15) + E4[6] * t16) - E4[6] * t17) - E4[6]
      * t18) + E4[6] * t19) + af_E1_tmp * E2[6]) + mf_E1_tmp * E2[6]) +
      wf_E1_tmp * E2[7]) + te_E1_tmp * E2[7]) + -2.0 * E4[1] * E2[6] * E2[1]) +
      lf_E1_tmp * E2[1]) + 2.0 * E4[3] * E2[4] * E2[7]) + ue_E1_tmp * E2[7]) +
                        -2.0 * E4[4] * E2[6] * E2[4]) + bg_E1_tmp * E2[4]) +
                      ve_E1_tmp * E2[7]) + xf_E1_tmp * E2[8]) + we_E1_tmp * E2[8])
                   + -2.0 * E4[2] * E2[6] * E2[2]) + rf_E1_tmp * E2[2]) + 2.0 *
                 E4[3] * E2[5] * E2[8]) + xe_E1_tmp * E2[8]) + -2.0 * E4[5] *
               E2[6] * E2[5]) + of_E1_tmp * E2[5]) + ye_E1_tmp * E2[8];
    re_E1_tmp = 2.0 * E4[6] * E2[6];
    C1[68] = (((((((((((((((((((((((((((-E4[7] * t11 - E4[7] * t12) + E4[7] *
      t13) + E4[7] * t14) + E4[7] * t15) + E4[7] * t16 * 3.0) - E4[7] * t17) -
      E4[7] * t18) + E4[7] * t19) + hf_E1_tmp * E2[7]) + df_E1_tmp * E2[1]) +
      se_E1_tmp * E2[1]) + te_E1_tmp * E2[6]) + cf_E1_tmp * E2[7]) + yf_E1_tmp *
      E2[4]) + vf_E1_tmp * E2[4]) + ue_E1_tmp * E2[6]) + re_E1_tmp * E2[7]) +
                       nf_E1_tmp * E2[7]) + dg_E1_tmp * E2[7]) + cg_E1_tmp * E2
                     [8]) + if_E1_tmp * E2[8]) + -2.0 * E4[2] * E2[7] * E2[2]) +
                  sf_E1_tmp * E2[2]) + 2.0 * E4[4] * E2[5] * E2[8]) + jf_E1_tmp *
                E2[8]) + -2.0 * E4[5] * E2[7] * E2[5]) + eg_E1_tmp * E2[5]) +
      kf_E1_tmp * E2[8];
    C1[69] = (((((((((((((((((((((((((((-E4[8] * t11 - E4[8] * t12) + E4[8] *
      t13) - E4[8] * t14) - E4[8] * t15) + E4[8] * t16) + E4[8] * t17) + E4[8] *
      t18) + E4[8] * t19 * 3.0) + hf_E1_tmp * E2[8]) + df_E1_tmp * E2[2]) +
      se_E1_tmp * E2[2]) + we_E1_tmp * E2[6]) + cf_E1_tmp * E2[8]) + yf_E1_tmp *
      E2[5]) + vf_E1_tmp * E2[5]) + xe_E1_tmp * E2[6]) + re_E1_tmp * E2[8]) +
                       fg_E1_tmp * E2[8]) + tf_E1_tmp * E2[2]) + gf_E1_tmp * E2
                     [2]) + if_E1_tmp * E2[7]) + uf_E1_tmp * E2[8]) + gg_E1_tmp *
                  E2[5]) + ag_E1_tmp * E2[5]) + jf_E1_tmp * E2[7]) + 2.0 * E4[7]
               * E2[7] * E2[8]) + hg_E1_tmp * E2[8]) + 2.0 * E4[5] * E2[5] * E2
      [8];
    C1[70] = ((((((((((((((((E1[0] * E4[4] * E4[8] - E1[0] * E4[7] * E4[5]) -
      E4[1] * E1[3] * E4[8]) + E1[3] * E4[7] * E4[2]) + E4[1] * E1[6] * E4[5]) -
                         E4[4] * E1[6] * E4[2]) - E1[1] * E4[3] * E4[8]) + E1[1]
                       * E4[6] * E4[5]) + E4[0] * E1[4] * E4[8]) - E1[4] * E4[6]
                     * E4[2]) - E4[0] * E1[7] * E4[5]) + E4[3] * E1[7] * E4[2])
                  + E1[2] * E4[3] * E4[7]) - E1[2] * E4[6] * E4[4]) - E4[0] *
                E1[5] * E4[7]) + E1[5] * E4[6] * E4[1]) + E4[0] * E1[8] * E4[4])
      - E4[3] * E1[8] * E4[1];
    re_E1_tmp = 2.0 * E1[3] * E4[0];
    se_E1_tmp = 2.0 * E1[6] * E4[0];
    te_E1_tmp = 2.0 * E1[1] * E4[0];
    ue_E1_tmp = 2.0 * E1[4] * E4[3];
    ve_E1_tmp = 2.0 * E1[7] * E4[6];
    we_E1_tmp = 2.0 * E1[2] * E4[0];
    xe_E1_tmp = 2.0 * E1[5] * E4[3];
    ye_E1_tmp = 2.0 * E1[8] * E4[6];
    C1[71] = (((((((((((((((((((((((((((E1[0] * t29 * 3.0 + E1[0] * t30) + E1[0]
      * t31) + E1[0] * t32) - E1[0] * t33) - E1[0] * t34) + E1[0] * t35) - E1[0]
      * t36) - E1[0] * t37) + re_E1_tmp * E4[3]) + se_E1_tmp * E4[6]) +
      te_E1_tmp * E4[1]) + 2.0 * E1[3] * E4[1] * E4[4]) + 2.0 * E1[1] * E4[3] *
      E4[4]) + -2.0 * E1[4] * E4[0] * E4[4]) + ue_E1_tmp * E4[1]) + 2.0 * E1[6] *
                         E4[1] * E4[7]) + 2.0 * E1[1] * E4[6] * E4[7]) + -2.0 *
                       E1[7] * E4[0] * E4[7]) + ve_E1_tmp * E4[1]) + we_E1_tmp *
                     E4[2]) + 2.0 * E1[3] * E4[2] * E4[5]) + 2.0 * E1[2] * E4[3]
                   * E4[5]) + -2.0 * E1[5] * E4[0] * E4[5]) + xe_E1_tmp * E4[2])
                + 2.0 * E1[6] * E4[2] * E4[8]) + 2.0 * E1[2] * E4[6] * E4[8]) +
              -2.0 * E1[8] * E4[0] * E4[8]) + ye_E1_tmp * E4[2];
    af_E1_tmp = 2.0 * E1[0] * E4[0];
    bf_E1_tmp = 2.0 * E1[0] * E4[3];
    cf_E1_tmp = -2.0 * E1[3] * E4[3];
    df_E1_tmp = 2.0 * E1[0] * E4[6];
    ef_E1_tmp = -2.0 * E1[6] * E4[6];
    ff_E1_tmp = 2.0 * E1[4] * E4[1];
    gf_E1_tmp = 2.0 * E1[7] * E4[1];
    hf_E1_tmp = 2.0 * E1[4] * E4[0];
    if_E1_tmp = 2.0 * E1[2] * E4[1];
    jf_E1_tmp = 2.0 * E1[5] * E4[4];
    kf_E1_tmp = 2.0 * E1[8] * E4[7];
    lf_E1_tmp = 2.0 * E1[7] * E4[0];
    C1[72] = (((((((((((((((((((((((((((E1[1] * t29 - E1[1] * t30) - E1[1] * t31)
      + E1[1] * t32 * 3.0) + E1[1] * t33) + E1[1] * t34) + E1[1] * t35) - E1[1] *
      t36) - E1[1] * t37) + af_E1_tmp * E4[1]) + bf_E1_tmp * E4[4]) + re_E1_tmp *
      E4[4]) + cf_E1_tmp * E4[1]) + hf_E1_tmp * E4[3]) + df_E1_tmp * E4[7]) +
                          se_E1_tmp * E4[7]) + ef_E1_tmp * E4[1]) + lf_E1_tmp *
                        E4[6]) + ff_E1_tmp * E4[4]) + gf_E1_tmp * E4[7]) +
                     if_E1_tmp * E4[2]) + 2.0 * E1[4] * E4[2] * E4[5]) + 2.0 *
                   E1[2] * E4[4] * E4[5]) + -2.0 * E1[5] * E4[1] * E4[5]) +
                 jf_E1_tmp * E4[2]) + 2.0 * E1[7] * E4[2] * E4[8]) + 2.0 * E1[2]
               * E4[7] * E4[8]) + -2.0 * E1[8] * E4[1] * E4[8]) + kf_E1_tmp *
      E4[2];
    mf_E1_tmp = 2.0 * E1[5] * E4[0];
    nf_E1_tmp = 2.0 * E1[1] * E4[1];
    of_E1_tmp = 2.0 * E1[5] * E4[1];
    pf_E1_tmp = 2.0 * E1[1] * E4[4];
    qf_E1_tmp = -2.0 * E1[7] * E4[7];
    rf_E1_tmp = 2.0 * E1[8] * E4[0];
    sf_E1_tmp = 2.0 * E1[8] * E4[1];
    tf_E1_tmp = 2.0 * E1[1] * E4[7];
    uf_E1_tmp = -2.0 * E1[4] * E4[4];
    C1[73] = (((((((((((((((((((((((((((E1[2] * t29 - E1[2] * t30) - E1[2] * t31)
      + E1[2] * t32) - E1[2] * t33) - E1[2] * t34) + E1[2] * t35 * 3.0) + E1[2] *
      t36) + E1[2] * t37) + af_E1_tmp * E4[2]) + bf_E1_tmp * E4[5]) + re_E1_tmp *
      E4[5]) + cf_E1_tmp * E4[2]) + mf_E1_tmp * E4[3]) + df_E1_tmp * E4[8]) +
                          se_E1_tmp * E4[8]) + ef_E1_tmp * E4[2]) + rf_E1_tmp *
                        E4[6]) + nf_E1_tmp * E4[2]) + pf_E1_tmp * E4[5]) +
                     ff_E1_tmp * E4[5]) + uf_E1_tmp * E4[2]) + of_E1_tmp * E4[4])
                  + tf_E1_tmp * E4[8]) + gf_E1_tmp * E4[8]) + qf_E1_tmp * E4[2])
               + sf_E1_tmp * E4[7]) + 2.0 * E1[5] * E4[2] * E4[5]) + 2.0 * E1[8]
      * E4[2] * E4[8];
    vf_E1_tmp = 2.0 * E1[6] * E4[3];
    wf_E1_tmp = 2.0 * E1[0] * E4[1];
    xf_E1_tmp = 2.0 * E1[0] * E4[2];
    C1[74] = (((((((((((((((((((((((((((E1[3] * t29 + E1[3] * t30 * 3.0) + E1[3]
      * t31) - E1[3] * t32) + E1[3] * t33) - E1[3] * t34) - E1[3] * t35) + E1[3]
      * t36) - E1[3] * t37) + af_E1_tmp * E4[3]) + vf_E1_tmp * E4[6]) +
      wf_E1_tmp * E4[4]) + te_E1_tmp * E4[4]) + -2.0 * E1[1] * E4[3] * E4[1]) +
      hf_E1_tmp * E4[1]) + ue_E1_tmp * E4[4]) + 2.0 * E1[6] * E4[4] * E4[7]) +
                        2.0 * E1[4] * E4[6] * E4[7]) + -2.0 * E1[7] * E4[3] *
                       E4[7]) + ve_E1_tmp * E4[4]) + xf_E1_tmp * E4[5]) +
                    we_E1_tmp * E4[5]) + -2.0 * E1[2] * E4[3] * E4[2]) +
                  mf_E1_tmp * E4[2]) + xe_E1_tmp * E4[5]) + 2.0 * E1[6] * E4[5] *
                E4[8]) + 2.0 * E1[5] * E4[6] * E4[8]) + -2.0 * E1[8] * E4[3] *
              E4[8]) + ye_E1_tmp * E4[5];
    hf_E1_tmp = -2.0 * E1[0] * E4[0];
    mf_E1_tmp = 2.0 * E1[3] * E4[3];
    yf_E1_tmp = 2.0 * E1[3] * E4[6];
    ag_E1_tmp = 2.0 * E1[7] * E4[4];
    bg_E1_tmp = 2.0 * E1[7] * E4[3];
    cg_E1_tmp = 2.0 * E1[1] * E4[2];
    C1[75] = (((((((((((((((((((((((((((-E1[4] * t29 + E1[4] * t30) - E1[4] *
      t31) + E1[4] * t32) + E1[4] * t33 * 3.0) + E1[4] * t34) - E1[4] * t35) +
      E1[4] * t36) - E1[4] * t37) + hf_E1_tmp * E4[4]) + bf_E1_tmp * E4[1]) +
      re_E1_tmp * E4[1]) + te_E1_tmp * E4[3]) + mf_E1_tmp * E4[4]) + yf_E1_tmp *
      E4[7]) + vf_E1_tmp * E4[7]) + ef_E1_tmp * E4[4]) + bg_E1_tmp * E4[6]) +
                       nf_E1_tmp * E4[4]) + ag_E1_tmp * E4[7]) + cg_E1_tmp * E4
                     [5]) + if_E1_tmp * E4[5]) + -2.0 * E1[2] * E4[4] * E4[2]) +
                  of_E1_tmp * E4[2]) + jf_E1_tmp * E4[5]) + 2.0 * E1[7] * E4[5] *
                E4[8]) + 2.0 * E1[5] * E4[7] * E4[8]) + -2.0 * E1[8] * E4[4] *
              E4[8]) + kf_E1_tmp * E4[5];
    of_E1_tmp = 2.0 * E1[8] * E4[3];
    dg_E1_tmp = 2.0 * E1[4] * E4[4];
    eg_E1_tmp = 2.0 * E1[8] * E4[4];
    fg_E1_tmp = -2.0 * E1[1] * E4[1];
    gg_E1_tmp = 2.0 * E1[4] * E4[7];
    hg_E1_tmp = 2.0 * E1[2] * E4[2];
    C1[76] = (((((((((((((((((((((((((((-E1[5] * t29 + E1[5] * t30) - E1[5] *
      t31) - E1[5] * t32) + E1[5] * t33) - E1[5] * t34) + E1[5] * t35) + E1[5] *
      t36 * 3.0) + E1[5] * t37) + hf_E1_tmp * E4[5]) + bf_E1_tmp * E4[2]) +
      re_E1_tmp * E4[2]) + we_E1_tmp * E4[3]) + mf_E1_tmp * E4[5]) + yf_E1_tmp *
      E4[8]) + vf_E1_tmp * E4[8]) + ef_E1_tmp * E4[5]) + of_E1_tmp * E4[6]) +
                       fg_E1_tmp * E4[5]) + pf_E1_tmp * E4[2]) + ff_E1_tmp * E4
                     [2]) + if_E1_tmp * E4[4]) + dg_E1_tmp * E4[5]) + gg_E1_tmp *
                  E4[8]) + ag_E1_tmp * E4[8]) + qf_E1_tmp * E4[5]) + eg_E1_tmp *
               E4[7]) + hg_E1_tmp * E4[5]) + 2.0 * E1[8] * E4[5] * E4[8];
    C1[77] = (((((((((((((((((((((((((((E1[6] * t29 + E1[6] * t30) + E1[6] * t31
      * 3.0) - E1[6] * t32) - E1[6] * t33) + E1[6] * t34) - E1[6] * t35) - E1[6]
      * t36) + E1[6] * t37) + af_E1_tmp * E4[6]) + mf_E1_tmp * E4[6]) +
      wf_E1_tmp * E4[7]) + te_E1_tmp * E4[7]) + -2.0 * E1[1] * E4[6] * E4[1]) +
      lf_E1_tmp * E4[1]) + 2.0 * E1[3] * E4[4] * E4[7]) + ue_E1_tmp * E4[7]) +
                        -2.0 * E1[4] * E4[6] * E4[4]) + bg_E1_tmp * E4[4]) +
                      ve_E1_tmp * E4[7]) + xf_E1_tmp * E4[8]) + we_E1_tmp * E4[8])
                   + -2.0 * E1[2] * E4[6] * E4[2]) + rf_E1_tmp * E4[2]) + 2.0 *
                 E1[3] * E4[5] * E4[8]) + xe_E1_tmp * E4[8]) + -2.0 * E1[5] *
               E4[6] * E4[5]) + of_E1_tmp * E4[5]) + ye_E1_tmp * E4[8];
    re_E1_tmp = 2.0 * E1[6] * E4[6];
    C1[78] = (((((((((((((((((((((((((((-E1[7] * t29 - E1[7] * t30) + E1[7] *
      t31) + E1[7] * t32) + E1[7] * t33) + E1[7] * t34 * 3.0) - E1[7] * t35) -
      E1[7] * t36) + E1[7] * t37) + hf_E1_tmp * E4[7]) + df_E1_tmp * E4[1]) +
      se_E1_tmp * E4[1]) + te_E1_tmp * E4[6]) + cf_E1_tmp * E4[7]) + yf_E1_tmp *
      E4[4]) + vf_E1_tmp * E4[4]) + ue_E1_tmp * E4[6]) + re_E1_tmp * E4[7]) +
                       nf_E1_tmp * E4[7]) + dg_E1_tmp * E4[7]) + cg_E1_tmp * E4
                     [8]) + if_E1_tmp * E4[8]) + -2.0 * E1[2] * E4[7] * E4[2]) +
                  sf_E1_tmp * E4[2]) + 2.0 * E1[4] * E4[5] * E4[8]) + jf_E1_tmp *
                E4[8]) + -2.0 * E1[5] * E4[7] * E4[5]) + eg_E1_tmp * E4[5]) +
      kf_E1_tmp * E4[8];
    C1[79] = (((((((((((((((((((((((((((-E1[8] * t29 - E1[8] * t30) + E1[8] *
      t31) - E1[8] * t32) - E1[8] * t33) + E1[8] * t34) + E1[8] * t35) + E1[8] *
      t36) + E1[8] * t37 * 3.0) + hf_E1_tmp * E4[8]) + df_E1_tmp * E4[2]) +
      se_E1_tmp * E4[2]) + we_E1_tmp * E4[6]) + cf_E1_tmp * E4[8]) + yf_E1_tmp *
      E4[5]) + vf_E1_tmp * E4[5]) + xe_E1_tmp * E4[6]) + re_E1_tmp * E4[8]) +
                       fg_E1_tmp * E4[8]) + tf_E1_tmp * E4[2]) + gf_E1_tmp * E4
                     [2]) + if_E1_tmp * E4[7]) + uf_E1_tmp * E4[8]) + gg_E1_tmp *
                  E4[5]) + ag_E1_tmp * E4[5]) + jf_E1_tmp * E4[7]) + 2.0 * E1[7]
               * E4[7] * E4[8]) + hg_E1_tmp * E4[8]) + 2.0 * E1[5] * E4[5] * E4
      [8];
    C1[80] = ((((((((((((((((E2[0] * E4[4] * E4[8] - E2[0] * E4[7] * E4[5]) -
      E4[1] * E2[3] * E4[8]) + E2[3] * E4[7] * E4[2]) + E4[1] * E2[6] * E4[5]) -
                         E4[4] * E2[6] * E4[2]) - E2[1] * E4[3] * E4[8]) + E2[1]
                       * E4[6] * E4[5]) + E4[0] * E2[4] * E4[8]) - E2[4] * E4[6]
                     * E4[2]) - E4[0] * E2[7] * E4[5]) + E4[3] * E2[7] * E4[2])
                  + E2[2] * E4[3] * E4[7]) - E2[2] * E4[6] * E4[4]) - E4[0] *
                E2[5] * E4[7]) + E2[5] * E4[6] * E4[1]) + E4[0] * E2[8] * E4[4])
      - E4[3] * E2[8] * E4[1];
    re_E1_tmp = 2.0 * E2[3] * E4[0];
    se_E1_tmp = 2.0 * E2[6] * E4[0];
    te_E1_tmp = 2.0 * E2[1] * E4[0];
    ue_E1_tmp = 2.0 * E2[4] * E4[3];
    ve_E1_tmp = 2.0 * E2[7] * E4[6];
    we_E1_tmp = 2.0 * E2[2] * E4[0];
    xe_E1_tmp = 2.0 * E2[5] * E4[3];
    ye_E1_tmp = 2.0 * E2[8] * E4[6];
    C1[81] = (((((((((((((((((((((((((((E2[0] * t29 * 3.0 + E2[0] * t30) + E2[0]
      * t31) + E2[0] * t32) - E2[0] * t33) - E2[0] * t34) + E2[0] * t35) - E2[0]
      * t36) - E2[0] * t37) + re_E1_tmp * E4[3]) + se_E1_tmp * E4[6]) +
      te_E1_tmp * E4[1]) + 2.0 * E2[3] * E4[1] * E4[4]) + 2.0 * E2[1] * E4[3] *
      E4[4]) + -2.0 * E2[4] * E4[0] * E4[4]) + ue_E1_tmp * E4[1]) + 2.0 * E2[6] *
                         E4[1] * E4[7]) + 2.0 * E2[1] * E4[6] * E4[7]) + -2.0 *
                       E2[7] * E4[0] * E4[7]) + ve_E1_tmp * E4[1]) + we_E1_tmp *
                     E4[2]) + 2.0 * E2[3] * E4[2] * E4[5]) + 2.0 * E2[2] * E4[3]
                   * E4[5]) + -2.0 * E2[5] * E4[0] * E4[5]) + xe_E1_tmp * E4[2])
                + 2.0 * E2[6] * E4[2] * E4[8]) + 2.0 * E2[2] * E4[6] * E4[8]) +
              -2.0 * E2[8] * E4[0] * E4[8]) + ye_E1_tmp * E4[2];
    af_E1_tmp = 2.0 * E2[0] * E4[0];
    bf_E1_tmp = 2.0 * E2[0] * E4[3];
    cf_E1_tmp = -2.0 * E2[3] * E4[3];
    df_E1_tmp = 2.0 * E2[0] * E4[6];
    ef_E1_tmp = -2.0 * E2[6] * E4[6];
    ff_E1_tmp = 2.0 * E2[4] * E4[1];
    gf_E1_tmp = 2.0 * E2[7] * E4[1];
    hf_E1_tmp = 2.0 * E2[4] * E4[0];
    if_E1_tmp = 2.0 * E2[2] * E4[1];
    jf_E1_tmp = 2.0 * E2[5] * E4[4];
    kf_E1_tmp = 2.0 * E2[8] * E4[7];
    lf_E1_tmp = 2.0 * E2[7] * E4[0];
    C1[82] = (((((((((((((((((((((((((((E2[1] * t29 - E2[1] * t30) - E2[1] * t31)
      + E2[1] * t32 * 3.0) + E2[1] * t33) + E2[1] * t34) + E2[1] * t35) - E2[1] *
      t36) - E2[1] * t37) + af_E1_tmp * E4[1]) + bf_E1_tmp * E4[4]) + re_E1_tmp *
      E4[4]) + cf_E1_tmp * E4[1]) + hf_E1_tmp * E4[3]) + df_E1_tmp * E4[7]) +
                          se_E1_tmp * E4[7]) + ef_E1_tmp * E4[1]) + lf_E1_tmp *
                        E4[6]) + ff_E1_tmp * E4[4]) + gf_E1_tmp * E4[7]) +
                     if_E1_tmp * E4[2]) + 2.0 * E2[4] * E4[2] * E4[5]) + 2.0 *
                   E2[2] * E4[4] * E4[5]) + -2.0 * E2[5] * E4[1] * E4[5]) +
                 jf_E1_tmp * E4[2]) + 2.0 * E2[7] * E4[2] * E4[8]) + 2.0 * E2[2]
               * E4[7] * E4[8]) + -2.0 * E2[8] * E4[1] * E4[8]) + kf_E1_tmp *
      E4[2];
    mf_E1_tmp = 2.0 * E2[5] * E4[0];
    nf_E1_tmp = 2.0 * E2[1] * E4[1];
    of_E1_tmp = 2.0 * E2[5] * E4[1];
    pf_E1_tmp = 2.0 * E2[1] * E4[4];
    qf_E1_tmp = -2.0 * E2[7] * E4[7];
    rf_E1_tmp = 2.0 * E2[8] * E4[0];
    sf_E1_tmp = 2.0 * E2[8] * E4[1];
    tf_E1_tmp = 2.0 * E2[1] * E4[7];
    uf_E1_tmp = -2.0 * E2[4] * E4[4];
    C1[83] = (((((((((((((((((((((((((((E2[2] * t29 - E2[2] * t30) - E2[2] * t31)
      + E2[2] * t32) - E2[2] * t33) - E2[2] * t34) + E2[2] * t35 * 3.0) + E2[2] *
      t36) + E2[2] * t37) + af_E1_tmp * E4[2]) + bf_E1_tmp * E4[5]) + re_E1_tmp *
      E4[5]) + cf_E1_tmp * E4[2]) + mf_E1_tmp * E4[3]) + df_E1_tmp * E4[8]) +
                          se_E1_tmp * E4[8]) + ef_E1_tmp * E4[2]) + rf_E1_tmp *
                        E4[6]) + nf_E1_tmp * E4[2]) + pf_E1_tmp * E4[5]) +
                     ff_E1_tmp * E4[5]) + uf_E1_tmp * E4[2]) + of_E1_tmp * E4[4])
                  + tf_E1_tmp * E4[8]) + gf_E1_tmp * E4[8]) + qf_E1_tmp * E4[2])
               + sf_E1_tmp * E4[7]) + 2.0 * E2[5] * E4[2] * E4[5]) + 2.0 * E2[8]
      * E4[2] * E4[8];
    vf_E1_tmp = 2.0 * E2[6] * E4[3];
    wf_E1_tmp = 2.0 * E2[0] * E4[1];
    xf_E1_tmp = 2.0 * E2[0] * E4[2];
    C1[84] = (((((((((((((((((((((((((((E2[3] * t29 + E2[3] * t30 * 3.0) + E2[3]
      * t31) - E2[3] * t32) + E2[3] * t33) - E2[3] * t34) - E2[3] * t35) + E2[3]
      * t36) - E2[3] * t37) + af_E1_tmp * E4[3]) + vf_E1_tmp * E4[6]) +
      wf_E1_tmp * E4[4]) + te_E1_tmp * E4[4]) + -2.0 * E2[1] * E4[3] * E4[1]) +
      hf_E1_tmp * E4[1]) + ue_E1_tmp * E4[4]) + 2.0 * E2[6] * E4[4] * E4[7]) +
                        2.0 * E2[4] * E4[6] * E4[7]) + -2.0 * E2[7] * E4[3] *
                       E4[7]) + ve_E1_tmp * E4[4]) + xf_E1_tmp * E4[5]) +
                    we_E1_tmp * E4[5]) + -2.0 * E2[2] * E4[3] * E4[2]) +
                  mf_E1_tmp * E4[2]) + xe_E1_tmp * E4[5]) + 2.0 * E2[6] * E4[5] *
                E4[8]) + 2.0 * E2[5] * E4[6] * E4[8]) + -2.0 * E2[8] * E4[3] *
              E4[8]) + ye_E1_tmp * E4[5];
    hf_E1_tmp = -2.0 * E2[0] * E4[0];
    mf_E1_tmp = 2.0 * E2[3] * E4[3];
    yf_E1_tmp = 2.0 * E2[3] * E4[6];
    ag_E1_tmp = 2.0 * E2[7] * E4[4];
    bg_E1_tmp = 2.0 * E2[7] * E4[3];
    cg_E1_tmp = 2.0 * E2[1] * E4[2];
    C1[85] = (((((((((((((((((((((((((((-E2[4] * t29 + E2[4] * t30) - E2[4] *
      t31) + E2[4] * t32) + E2[4] * t33 * 3.0) + E2[4] * t34) - E2[4] * t35) +
      E2[4] * t36) - E2[4] * t37) + hf_E1_tmp * E4[4]) + bf_E1_tmp * E4[1]) +
      re_E1_tmp * E4[1]) + te_E1_tmp * E4[3]) + mf_E1_tmp * E4[4]) + yf_E1_tmp *
      E4[7]) + vf_E1_tmp * E4[7]) + ef_E1_tmp * E4[4]) + bg_E1_tmp * E4[6]) +
                       nf_E1_tmp * E4[4]) + ag_E1_tmp * E4[7]) + cg_E1_tmp * E4
                     [5]) + if_E1_tmp * E4[5]) + -2.0 * E2[2] * E4[4] * E4[2]) +
                  of_E1_tmp * E4[2]) + jf_E1_tmp * E4[5]) + 2.0 * E2[7] * E4[5] *
                E4[8]) + 2.0 * E2[5] * E4[7] * E4[8]) + -2.0 * E2[8] * E4[4] *
              E4[8]) + kf_E1_tmp * E4[5];
    of_E1_tmp = 2.0 * E2[8] * E4[3];
    dg_E1_tmp = 2.0 * E2[4] * E4[4];
    eg_E1_tmp = 2.0 * E2[8] * E4[4];
    fg_E1_tmp = -2.0 * E2[1] * E4[1];
    gg_E1_tmp = 2.0 * E2[4] * E4[7];
    hg_E1_tmp = 2.0 * E2[2] * E4[2];
    C1[86] = (((((((((((((((((((((((((((-E2[5] * t29 + E2[5] * t30) - E2[5] *
      t31) - E2[5] * t32) + E2[5] * t33) - E2[5] * t34) + E2[5] * t35) + E2[5] *
      t36 * 3.0) + E2[5] * t37) + hf_E1_tmp * E4[5]) + bf_E1_tmp * E4[2]) +
      re_E1_tmp * E4[2]) + we_E1_tmp * E4[3]) + mf_E1_tmp * E4[5]) + yf_E1_tmp *
      E4[8]) + vf_E1_tmp * E4[8]) + ef_E1_tmp * E4[5]) + of_E1_tmp * E4[6]) +
                       fg_E1_tmp * E4[5]) + pf_E1_tmp * E4[2]) + ff_E1_tmp * E4
                     [2]) + if_E1_tmp * E4[4]) + dg_E1_tmp * E4[5]) + gg_E1_tmp *
                  E4[8]) + ag_E1_tmp * E4[8]) + qf_E1_tmp * E4[5]) + eg_E1_tmp *
               E4[7]) + hg_E1_tmp * E4[5]) + 2.0 * E2[8] * E4[5] * E4[8];
    C1[87] = (((((((((((((((((((((((((((E2[6] * t29 + E2[6] * t30) + E2[6] * t31
      * 3.0) - E2[6] * t32) - E2[6] * t33) + E2[6] * t34) - E2[6] * t35) - E2[6]
      * t36) + E2[6] * t37) + af_E1_tmp * E4[6]) + mf_E1_tmp * E4[6]) +
      wf_E1_tmp * E4[7]) + te_E1_tmp * E4[7]) + -2.0 * E2[1] * E4[6] * E4[1]) +
      lf_E1_tmp * E4[1]) + 2.0 * E2[3] * E4[4] * E4[7]) + ue_E1_tmp * E4[7]) +
                        -2.0 * E2[4] * E4[6] * E4[4]) + bg_E1_tmp * E4[4]) +
                      ve_E1_tmp * E4[7]) + xf_E1_tmp * E4[8]) + we_E1_tmp * E4[8])
                   + -2.0 * E2[2] * E4[6] * E4[2]) + rf_E1_tmp * E4[2]) + 2.0 *
                 E2[3] * E4[5] * E4[8]) + xe_E1_tmp * E4[8]) + -2.0 * E2[5] *
               E4[6] * E4[5]) + of_E1_tmp * E4[5]) + ye_E1_tmp * E4[8];
    re_E1_tmp = 2.0 * E2[6] * E4[6];
    C1[88] = (((((((((((((((((((((((((((-E2[7] * t29 - E2[7] * t30) + E2[7] *
      t31) + E2[7] * t32) + E2[7] * t33) + E2[7] * t34 * 3.0) - E2[7] * t35) -
      E2[7] * t36) + E2[7] * t37) + hf_E1_tmp * E4[7]) + df_E1_tmp * E4[1]) +
      se_E1_tmp * E4[1]) + te_E1_tmp * E4[6]) + cf_E1_tmp * E4[7]) + yf_E1_tmp *
      E4[4]) + vf_E1_tmp * E4[4]) + ue_E1_tmp * E4[6]) + re_E1_tmp * E4[7]) +
                       nf_E1_tmp * E4[7]) + dg_E1_tmp * E4[7]) + cg_E1_tmp * E4
                     [8]) + if_E1_tmp * E4[8]) + -2.0 * E2[2] * E4[7] * E4[2]) +
                  sf_E1_tmp * E4[2]) + 2.0 * E2[4] * E4[5] * E4[8]) + jf_E1_tmp *
                E4[8]) + -2.0 * E2[5] * E4[7] * E4[5]) + eg_E1_tmp * E4[5]) +
      kf_E1_tmp * E4[8];
    C1[89] = (((((((((((((((((((((((((((-E2[8] * t29 - E2[8] * t30) + E2[8] *
      t31) - E2[8] * t32) - E2[8] * t33) + E2[8] * t34) + E2[8] * t35) + E2[8] *
      t36) + E2[8] * t37 * 3.0) + hf_E1_tmp * E4[8]) + df_E1_tmp * E4[2]) +
      se_E1_tmp * E4[2]) + we_E1_tmp * E4[6]) + cf_E1_tmp * E4[8]) + yf_E1_tmp *
      E4[5]) + vf_E1_tmp * E4[5]) + xe_E1_tmp * E4[6]) + re_E1_tmp * E4[8]) +
                       fg_E1_tmp * E4[8]) + tf_E1_tmp * E4[2]) + gf_E1_tmp * E4
                     [2]) + if_E1_tmp * E4[7]) + uf_E1_tmp * E4[8]) + gg_E1_tmp *
                  E4[5]) + ag_E1_tmp * E4[5]) + jf_E1_tmp * E4[7]) + 2.0 * E2[7]
               * E4[7] * E4[8]) + hg_E1_tmp * E4[8]) + 2.0 * E2[5] * E4[5] * E4
      [8];
    re_E1_tmp = E4[1] * E4[3];
    se_E1_tmp = E4[1] * E4[6];
    te_E1_tmp = E4[4] * E4[6];
    C1[90] = ((((E4[0] * E4[4] * E4[8] - E4[0] * E4[7] * E4[5]) - re_E1_tmp *
                E4[8]) + E4[3] * E4[7] * E4[2]) + se_E1_tmp * E4[5]) - te_E1_tmp
      * E4[2];
    C1[91] = (((((((((((E4[0] * t30 + E4[0] * t31) + E4[0] * t32) - E4[0] * t33)
                     - E4[0] * t34) + E4[0] * t35) - E4[0] * t36) - E4[0] * t37)
                 + muDoubleScalarPower(E4[0], 3.0)) + re_E1_tmp * E4[4] * 2.0) +
               se_E1_tmp * E4[7] * 2.0) + E4[2] * E4[3] * E4[5] * 2.0) + E4[2] *
      E4[6] * E4[8] * 2.0;
    re_E1_tmp = E4[0] * E4[3];
    se_E1_tmp = E4[0] * E4[6];
    C1[92] = (((((((((((E4[1] * t29 - E4[1] * t30) - E4[1] * t31) + E4[1] * t33)
                     + E4[1] * t34) + E4[1] * t35) - E4[1] * t36) - E4[1] * t37)
                 + muDoubleScalarPower(E4[1], 3.0)) + re_E1_tmp * E4[4] * 2.0) +
               se_E1_tmp * E4[7] * 2.0) + E4[2] * E4[4] * E4[5] * 2.0) + E4[2] *
      E4[7] * E4[8] * 2.0;
    ue_E1_tmp = E4[1] * E4[4];
    ve_E1_tmp = E4[1] * E4[7];
    C1[93] = (((((((((((E4[2] * t29 - E4[2] * t30) - E4[2] * t31) + E4[2] * t32)
                     - E4[2] * t33) - E4[2] * t34) + E4[2] * t36) + E4[2] * t37)
                 + muDoubleScalarPower(E4[2], 3.0)) + re_E1_tmp * E4[5] * 2.0) +
               se_E1_tmp * E4[8] * 2.0) + ue_E1_tmp * E4[5] * 2.0) + ve_E1_tmp *
      E4[8] * 2.0;
    we_E1_tmp = E4[0] * E4[1];
    xe_E1_tmp = E4[0] * E4[2];
    C1[94] = (((((((((((E4[3] * t29 + E4[3] * t31) - E4[3] * t32) + E4[3] * t33)
                     - E4[3] * t34) - E4[3] * t35) + E4[3] * t36) - E4[3] * t37)
                 + muDoubleScalarPower(E4[3], 3.0)) + we_E1_tmp * E4[4] * 2.0) +
               te_E1_tmp * E4[7] * 2.0) + xe_E1_tmp * E4[5] * 2.0) + E4[5] * E4
      [6] * E4[8] * 2.0;
    te_E1_tmp = E4[3] * E4[6];
    ye_E1_tmp = E4[1] * E4[2];
    C1[95] = (((((((((((-E4[4] * t29 + E4[4] * t30) - E4[4] * t31) + E4[4] * t32)
                     + E4[4] * t34) - E4[4] * t35) + E4[4] * t36) - E4[4] * t37)
                 + muDoubleScalarPower(E4[4], 3.0)) + re_E1_tmp * E4[1] * 2.0) +
               te_E1_tmp * E4[7] * 2.0) + ye_E1_tmp * E4[5] * 2.0) + E4[5] * E4
      [7] * E4[8] * 2.0;
    af_E1_tmp = E4[4] * E4[7];
    C1[96] = (((((((((((-E4[5] * t29 + E4[5] * t30) - E4[5] * t31) - E4[5] * t32)
                     + E4[5] * t33) - E4[5] * t34) + E4[5] * t35) + E4[5] * t37)
                 + muDoubleScalarPower(E4[5], 3.0)) + re_E1_tmp * E4[2] * 2.0) +
               te_E1_tmp * E4[8] * 2.0) + ue_E1_tmp * E4[2] * 2.0) + af_E1_tmp *
      E4[8] * 2.0;
    C1[97] = (((((((((((E4[6] * t29 + E4[6] * t30) - E4[6] * t32) - E4[6] * t33)
                     + E4[6] * t34) - E4[6] * t35) - E4[6] * t36) + E4[6] * t37)
                 + muDoubleScalarPower(E4[6], 3.0)) + we_E1_tmp * E4[7] * 2.0) +
               E4[3] * E4[4] * E4[7] * 2.0) + xe_E1_tmp * E4[8] * 2.0) + E4[3] *
      E4[5] * E4[8] * 2.0;
    C1[98] = (((((((((((-E4[7] * t29 - E4[7] * t30) + E4[7] * t31) + E4[7] * t32)
                     + E4[7] * t33) - E4[7] * t35) - E4[7] * t36) + E4[7] * t37)
                 + muDoubleScalarPower(E4[7], 3.0)) + se_E1_tmp * E4[1] * 2.0) +
               te_E1_tmp * E4[4] * 2.0) + ye_E1_tmp * E4[8] * 2.0) + E4[4] * E4
      [5] * E4[8] * 2.0;
    C1[99] = (((((((((((-E4[8] * t29 - E4[8] * t30) + E4[8] * t31) - E4[8] * t32)
                     - E4[8] * t33) + E4[8] * t34) + E4[8] * t35) + E4[8] * t36)
                 + muDoubleScalarPower(E4[8], 3.0)) + se_E1_tmp * E4[2] * 2.0) +
               te_E1_tmp * E4[5] * 2.0) + ve_E1_tmp * E4[2] * 2.0) + af_E1_tmp *
      E4[5] * 2.0;
    b_E1[0] = ((((((((((((((((d_E1_tmp * E3[8] - e_E1_tmp * E3[5]) - i_E1_tmp *
      E3[7]) + j_E1_tmp * E3[4]) - E1_tmp * E3[8]) + f_E1_tmp * E3[2]) +
                         g_E1_tmp * E3[7]) - m_E1_tmp * E3[1]) + b_E1_tmp * E3[5])
                      - c_E1_tmp * E3[2]) - h_E1_tmp * E3[4]) + q_E1_tmp * E3[1])
                   + n_E1_tmp * E3[6]) - o_E1_tmp * E3[3]) - k_E1_tmp * E3[6]) +
                p_E1_tmp * E3[0]) + l_E1_tmp * E3[3]) - t_E1_tmp * E3[0];
    E1_tmp = 2.0 * E3[3] * E1[0];
    b_E1_tmp = 2.0 * E3[6] * E1[0];
    c_E1_tmp = 2.0 * E3[1] * E1[0];
    d_E1_tmp = 2.0 * E3[4] * E1[3];
    e_E1_tmp = 2.0 * E3[7] * E1[6];
    f_E1_tmp = 2.0 * E3[2] * E1[0];
    g_E1_tmp = 2.0 * E3[5] * E1[3];
    h_E1_tmp = 2.0 * E3[8] * E1[6];
    b_E1[1] = (((((((((((((((((((((((((((E3[0] * t2 * 3.0 + E3[0] * t3) + E3[0] *
      t4) + E3[0] * t5) - E3[0] * t6) - E3[0] * t7) + E3[0] * t8) - E3[0] * t9)
      - E3[0] * t10) + E1_tmp * E1[3]) + b_E1_tmp * E1[6]) + c_E1_tmp * E1[1]) +
      2.0 * E3[3] * E1[1] * E1[4]) + 2.0 * E3[1] * E1[3] * E1[4]) + -2.0 * E3[4]
      * E1[0] * E1[4]) + d_E1_tmp * E1[1]) + 2.0 * E3[6] * E1[1] * E1[7]) + 2.0 *
                         E3[1] * E1[6] * E1[7]) + -2.0 * E3[7] * E1[0] * E1[7])
                       + e_E1_tmp * E1[1]) + f_E1_tmp * E1[2]) + 2.0 * E3[3] *
                     E1[2] * E1[5]) + 2.0 * E3[2] * E1[3] * E1[5]) + -2.0 * E3[5]
                   * E1[0] * E1[5]) + g_E1_tmp * E1[2]) + 2.0 * E3[6] * E1[2] *
                 E1[8]) + 2.0 * E3[2] * E1[6] * E1[8]) + -2.0 * E3[8] * E1[0] *
               E1[8]) + h_E1_tmp * E1[2];
    i_E1_tmp = 2.0 * E3[0] * E1[0];
    j_E1_tmp = 2.0 * E3[0] * E1[3];
    k_E1_tmp = -2.0 * E3[3] * E1[3];
    l_E1_tmp = 2.0 * E3[0] * E1[6];
    m_E1_tmp = -2.0 * E3[6] * E1[6];
    n_E1_tmp = 2.0 * E3[4] * E1[1];
    o_E1_tmp = 2.0 * E3[7] * E1[1];
    p_E1_tmp = 2.0 * E3[4] * E1[0];
    q_E1_tmp = 2.0 * E3[2] * E1[1];
    t_E1_tmp = 2.0 * E3[5] * E1[4];
    re_E1_tmp = 2.0 * E3[8] * E1[7];
    se_E1_tmp = 2.0 * E3[7] * E1[0];
    b_E1[2] = (((((((((((((((((((((((((((E3[1] * t2 - E3[1] * t3) - E3[1] * t4)
      + E3[1] * t5 * 3.0) + E3[1] * t6) + E3[1] * t7) + E3[1] * t8) - E3[1] * t9)
      - E3[1] * t10) + i_E1_tmp * E1[1]) + j_E1_tmp * E1[4]) + E1_tmp * E1[4]) +
      k_E1_tmp * E1[1]) + p_E1_tmp * E1[3]) + l_E1_tmp * E1[7]) + b_E1_tmp * E1
      [7]) + m_E1_tmp * E1[1]) + se_E1_tmp * E1[6]) + n_E1_tmp * E1[4]) +
                       o_E1_tmp * E1[7]) + q_E1_tmp * E1[2]) + 2.0 * E3[4] * E1
                     [2] * E1[5]) + 2.0 * E3[2] * E1[4] * E1[5]) + -2.0 * E3[5] *
                   E1[1] * E1[5]) + t_E1_tmp * E1[2]) + 2.0 * E3[7] * E1[2] *
                 E1[8]) + 2.0 * E3[2] * E1[7] * E1[8]) + -2.0 * E3[8] * E1[1] *
               E1[8]) + re_E1_tmp * E1[2];
    te_E1_tmp = 2.0 * E3[5] * E1[0];
    ue_E1_tmp = 2.0 * E3[1] * E1[1];
    ve_E1_tmp = 2.0 * E3[5] * E1[1];
    we_E1_tmp = 2.0 * E3[1] * E1[4];
    xe_E1_tmp = -2.0 * E3[7] * E1[7];
    ye_E1_tmp = 2.0 * E3[8] * E1[0];
    af_E1_tmp = 2.0 * E3[8] * E1[1];
    bf_E1_tmp = 2.0 * E3[1] * E1[7];
    cf_E1_tmp = -2.0 * E3[4] * E1[4];
    b_E1[3] = (((((((((((((((((((((((((((E3[2] * t2 - E3[2] * t3) - E3[2] * t4)
      + E3[2] * t5) - E3[2] * t6) - E3[2] * t7) + E3[2] * t8 * 3.0) + E3[2] * t9)
      + E3[2] * t10) + i_E1_tmp * E1[2]) + j_E1_tmp * E1[5]) + E1_tmp * E1[5]) +
      k_E1_tmp * E1[2]) + te_E1_tmp * E1[3]) + l_E1_tmp * E1[8]) + b_E1_tmp *
      E1[8]) + m_E1_tmp * E1[2]) + ye_E1_tmp * E1[6]) + ue_E1_tmp * E1[2]) +
                       we_E1_tmp * E1[5]) + n_E1_tmp * E1[5]) + cf_E1_tmp * E1[2])
                    + ve_E1_tmp * E1[4]) + bf_E1_tmp * E1[8]) + o_E1_tmp * E1[8])
                 + xe_E1_tmp * E1[2]) + af_E1_tmp * E1[7]) + 2.0 * E3[5] * E1[2]
               * E1[5]) + 2.0 * E3[8] * E1[2] * E1[8];
    df_E1_tmp = 2.0 * E3[6] * E1[3];
    ef_E1_tmp = 2.0 * E3[0] * E1[1];
    ff_E1_tmp = 2.0 * E3[0] * E1[2];
    b_E1[4] = (((((((((((((((((((((((((((E3[3] * t2 + E3[3] * t3 * 3.0) + E3[3] *
      t4) - E3[3] * t5) + E3[3] * t6) - E3[3] * t7) - E3[3] * t8) + E3[3] * t9)
      - E3[3] * t10) + i_E1_tmp * E1[3]) + df_E1_tmp * E1[6]) + ef_E1_tmp * E1[4])
      + c_E1_tmp * E1[4]) + -2.0 * E3[1] * E1[3] * E1[1]) + p_E1_tmp * E1[1]) +
      d_E1_tmp * E1[4]) + 2.0 * E3[6] * E1[4] * E1[7]) + 2.0 * E3[4] * E1[6] *
                         E1[7]) + -2.0 * E3[7] * E1[3] * E1[7]) + e_E1_tmp * E1
                       [4]) + ff_E1_tmp * E1[5]) + f_E1_tmp * E1[5]) + -2.0 *
                    E3[2] * E1[3] * E1[2]) + te_E1_tmp * E1[2]) + g_E1_tmp * E1
                  [5]) + 2.0 * E3[6] * E1[5] * E1[8]) + 2.0 * E3[5] * E1[6] *
                E1[8]) + -2.0 * E3[8] * E1[3] * E1[8]) + h_E1_tmp * E1[5];
    p_E1_tmp = -2.0 * E3[0] * E1[0];
    te_E1_tmp = 2.0 * E3[3] * E1[3];
    gf_E1_tmp = 2.0 * E3[3] * E1[6];
    hf_E1_tmp = 2.0 * E3[7] * E1[4];
    if_E1_tmp = 2.0 * E3[7] * E1[3];
    jf_E1_tmp = 2.0 * E3[1] * E1[2];
    b_E1[5] = (((((((((((((((((((((((((((-E3[4] * t2 + E3[4] * t3) - E3[4] * t4)
      + E3[4] * t5) + E3[4] * t6 * 3.0) + E3[4] * t7) - E3[4] * t8) + E3[4] * t9)
      - E3[4] * t10) + p_E1_tmp * E1[4]) + j_E1_tmp * E1[1]) + E1_tmp * E1[1]) +
      c_E1_tmp * E1[3]) + te_E1_tmp * E1[4]) + gf_E1_tmp * E1[7]) + df_E1_tmp *
      E1[7]) + m_E1_tmp * E1[4]) + if_E1_tmp * E1[6]) + ue_E1_tmp * E1[4]) +
                       hf_E1_tmp * E1[7]) + jf_E1_tmp * E1[5]) + q_E1_tmp * E1[5])
                    + -2.0 * E3[2] * E1[4] * E1[2]) + ve_E1_tmp * E1[2]) +
                  t_E1_tmp * E1[5]) + 2.0 * E3[7] * E1[5] * E1[8]) + 2.0 * E3[5]
                * E1[7] * E1[8]) + -2.0 * E3[8] * E1[4] * E1[8]) + re_E1_tmp *
      E1[5];
    ve_E1_tmp = 2.0 * E3[8] * E1[3];
    kf_E1_tmp = 2.0 * E3[4] * E1[4];
    lf_E1_tmp = 2.0 * E3[8] * E1[4];
    mf_E1_tmp = -2.0 * E3[1] * E1[1];
    nf_E1_tmp = 2.0 * E3[4] * E1[7];
    of_E1_tmp = 2.0 * E3[2] * E1[2];
    b_E1[6] = (((((((((((((((((((((((((((-E3[5] * t2 + E3[5] * t3) - E3[5] * t4)
      - E3[5] * t5) + E3[5] * t6) - E3[5] * t7) + E3[5] * t8) + E3[5] * t9 * 3.0)
      + E3[5] * t10) + p_E1_tmp * E1[5]) + j_E1_tmp * E1[2]) + E1_tmp * E1[2]) +
      f_E1_tmp * E1[3]) + te_E1_tmp * E1[5]) + gf_E1_tmp * E1[8]) + df_E1_tmp *
      E1[8]) + m_E1_tmp * E1[5]) + ve_E1_tmp * E1[6]) + mf_E1_tmp * E1[5]) +
                       we_E1_tmp * E1[2]) + n_E1_tmp * E1[2]) + q_E1_tmp * E1[4])
                    + kf_E1_tmp * E1[5]) + nf_E1_tmp * E1[8]) + hf_E1_tmp * E1[8])
                 + xe_E1_tmp * E1[5]) + lf_E1_tmp * E1[7]) + of_E1_tmp * E1[5])
      + 2.0 * E3[8] * E1[5] * E1[8];
    b_E1[7] = (((((((((((((((((((((((((((E3[6] * t2 + E3[6] * t3) + E3[6] * t4 *
      3.0) - E3[6] * t5) - E3[6] * t6) + E3[6] * t7) - E3[6] * t8) - E3[6] * t9)
      + E3[6] * t10) + i_E1_tmp * E1[6]) + te_E1_tmp * E1[6]) + ef_E1_tmp * E1[7])
      + c_E1_tmp * E1[7]) + -2.0 * E3[1] * E1[6] * E1[1]) + se_E1_tmp * E1[1]) +
      2.0 * E3[3] * E1[4] * E1[7]) + d_E1_tmp * E1[7]) + -2.0 * E3[4] * E1[6] *
                         E1[4]) + if_E1_tmp * E1[4]) + e_E1_tmp * E1[7]) +
                      ff_E1_tmp * E1[8]) + f_E1_tmp * E1[8]) + -2.0 * E3[2] *
                    E1[6] * E1[2]) + ye_E1_tmp * E1[2]) + 2.0 * E3[3] * E1[5] *
                  E1[8]) + g_E1_tmp * E1[8]) + -2.0 * E3[5] * E1[6] * E1[5]) +
               ve_E1_tmp * E1[5]) + h_E1_tmp * E1[8];
    E1_tmp = 2.0 * E3[6] * E1[6];
    b_E1[8] = (((((((((((((((((((((((((((-E3[7] * t2 - E3[7] * t3) + E3[7] * t4)
      + E3[7] * t5) + E3[7] * t6) + E3[7] * t7 * 3.0) - E3[7] * t8) - E3[7] * t9)
      + E3[7] * t10) + p_E1_tmp * E1[7]) + l_E1_tmp * E1[1]) + b_E1_tmp * E1[1])
      + c_E1_tmp * E1[6]) + k_E1_tmp * E1[7]) + gf_E1_tmp * E1[4]) + df_E1_tmp *
      E1[4]) + d_E1_tmp * E1[6]) + E1_tmp * E1[7]) + ue_E1_tmp * E1[7]) +
                       kf_E1_tmp * E1[7]) + jf_E1_tmp * E1[8]) + q_E1_tmp * E1[8])
                    + -2.0 * E3[2] * E1[7] * E1[2]) + af_E1_tmp * E1[2]) + 2.0 *
                  E3[4] * E1[5] * E1[8]) + t_E1_tmp * E1[8]) + -2.0 * E3[5] *
                E1[7] * E1[5]) + lf_E1_tmp * E1[5]) + re_E1_tmp * E1[8];
    b_E1[9] = (((((((((((((((((((((((((((-E3[8] * t2 - E3[8] * t3) + E3[8] * t4)
      - E3[8] * t5) - E3[8] * t6) + E3[8] * t7) + E3[8] * t8) + E3[8] * t9) +
      E3[8] * t10 * 3.0) + p_E1_tmp * E1[8]) + l_E1_tmp * E1[2]) + b_E1_tmp *
      E1[2]) + f_E1_tmp * E1[6]) + k_E1_tmp * E1[8]) + gf_E1_tmp * E1[5]) +
      df_E1_tmp * E1[5]) + g_E1_tmp * E1[6]) + E1_tmp * E1[8]) + mf_E1_tmp * E1
                        [8]) + bf_E1_tmp * E1[2]) + o_E1_tmp * E1[2]) + q_E1_tmp
                     * E1[7]) + cf_E1_tmp * E1[8]) + nf_E1_tmp * E1[5]) +
                  hf_E1_tmp * E1[5]) + t_E1_tmp * E1[7]) + 2.0 * E3[7] * E1[7] *
                E1[8]) + of_E1_tmp * E1[8]) + 2.0 * E3[5] * E1[5] * E1[8];
    b_E1[10] = ((((((((((((((((((((((((((((((((((r_E1_tmp * E3[8] - s_E1_tmp *
      E3[5]) - tb_E1_tmp * E3[7]) + xb_E1_tmp * E3[4]) - u_E1_tmp * E3[8]) +
      v_E1_tmp * E3[2]) + ub_E1_tmp * E3[7]) - kc_E1_tmp * E3[1]) + w_E1_tmp *
      E3[5]) - x_E1_tmp * E3[2]) - yb_E1_tmp * E3[4]) + lc_E1_tmp * E3[1]) -
      y_E1_tmp * E3[8]) + ab_E1_tmp * E3[5]) + ac_E1_tmp * E3[6]) - gc_E1_tmp *
      E3[3]) + bb_E1_tmp * E3[8]) - cb_E1_tmp * E3[2]) - bc_E1_tmp * E3[6]) +
      mc_E1_tmp * E3[0]) - db_E1_tmp * E3[5]) + eb_E1_tmp * E3[2]) + hc_E1_tmp *
      E3[3]) - nc_E1_tmp * E3[0]) + fb_E1_tmp * E3[7]) - gb_E1_tmp * E3[4]) -
                        dc_E1_tmp * E3[6]) + ic_E1_tmp * E3[3]) - hb_E1_tmp *
                      E3[7]) + ib_E1_tmp * E3[1]) + ec_E1_tmp * E3[6]) -
                   oc_E1_tmp * E3[0]) + jb_E1_tmp * E3[4]) - kb_E1_tmp * E3[1])
                - jc_E1_tmp * E3[3]) + pc_E1_tmp * E3[0];
    b_E1[11] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E3[0] * 6.0 +
      tc_E1_tmp * E3[3] * 2.0) + uc_E1_tmp * E3[3] * 2.0) + vc_E1_tmp * E3[0] *
      2.0) + yc_E1_tmp * E3[6] * 2.0) + ad_E1_tmp * E3[6] * 2.0) + bd_E1_tmp *
      E3[0] * 2.0) + rc_E1_tmp * E3[1] * 2.0) + sc_E1_tmp * E3[1] * 2.0) +
      ed_E1_tmp * E3[0] * 2.0) - r_E1_tmp * E3[4] * 2.0) + u_E1_tmp * E3[4] *
      2.0) + wc_E1_tmp * E3[1] * 2.0) + y_E1_tmp * E3[4] * 2.0) + fd_E1_tmp *
      E3[3] * 2.0) - bb_E1_tmp * E3[4] * 2.0) + xc_E1_tmp * E3[1] * 2.0) +
      gd_E1_tmp * E3[3] * 2.0) - hd_E1_tmp * E3[0] * 2.0) - s_E1_tmp * E3[7] *
      2.0) + w_E1_tmp * E3[7] * 2.0) + cd_E1_tmp * E3[1] * 2.0) + ab_E1_tmp *
      E3[7] * 2.0) + id_E1_tmp * E3[6] * 2.0) - db_E1_tmp * E3[7] * 2.0) +
      dd_E1_tmp * E3[1] * 2.0) + jd_E1_tmp * E3[6] * 2.0) - kd_E1_tmp * E3[0] *
                          2.0) + sd_E1_tmp * E3[2] * 2.0) + td_E1_tmp * E3[2] *
                        2.0) + ld_E1_tmp * E3[0] * 2.0) - tb_E1_tmp * E3[5] *
                      2.0) + ub_E1_tmp * E3[5] * 2.0) + ud_E1_tmp * E3[2] * 2.0)
                   + fb_E1_tmp * E3[5] * 2.0) + md_E1_tmp * E3[3] * 2.0) -
                 hb_E1_tmp * E3[5] * 2.0) + vd_E1_tmp * E3[2] * 2.0) +
      ((((((((((nd_E1_tmp * E3[3] * 2.0 - od_E1_tmp * E3[0] * 2.0) - xb_E1_tmp *
               E3[8] * 2.0) + yb_E1_tmp * E3[8] * 2.0) + wd_E1_tmp * E3[2] * 2.0)
            + gb_E1_tmp * E3[8] * 2.0) + pd_E1_tmp * E3[6] * 2.0) - jb_E1_tmp *
          E3[8] * 2.0) + xd_E1_tmp * E3[2] * 2.0) + qd_E1_tmp * E3[6] * 2.0) -
       rd_E1_tmp * E3[0] * 2.0);
    b_E1[12] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E3[1] * 2.0 +
      rc_E1_tmp * E3[0] * 2.0) + sc_E1_tmp * E3[0] * 2.0) + tc_E1_tmp * E3[4] *
      2.0) + r_E1_tmp * E3[3] * 2.0) + uc_E1_tmp * E3[4] * 2.0) - vc_E1_tmp *
      E3[1] * 2.0) - u_E1_tmp * E3[3] * 2.0) + wc_E1_tmp * E3[0] * 2.0) -
      y_E1_tmp * E3[3] * 2.0) + bb_E1_tmp * E3[3] * 2.0) + xc_E1_tmp * E3[0] *
      2.0) + yc_E1_tmp * E3[7] * 2.0) + s_E1_tmp * E3[6] * 2.0) + ad_E1_tmp *
      E3[7] * 2.0) - bd_E1_tmp * E3[1] * 2.0) - w_E1_tmp * E3[6] * 2.0) +
      cd_E1_tmp * E3[0] * 2.0) - ab_E1_tmp * E3[6] * 2.0) + db_E1_tmp * E3[6] *
      2.0) + dd_E1_tmp * E3[0] * 2.0) + ed_E1_tmp * E3[1] * 6.0) + fd_E1_tmp *
      E3[4] * 2.0) + gd_E1_tmp * E3[4] * 2.0) + hd_E1_tmp * E3[1] * 2.0) +
      id_E1_tmp * E3[7] * 2.0) + jd_E1_tmp * E3[7] * 2.0) + kd_E1_tmp * E3[1] *
                          2.0) + yd_E1_tmp * E3[2] * 2.0) + ae_E1_tmp * E3[2] *
                        2.0) + ld_E1_tmp * E3[1] * 2.0) - ac_E1_tmp * E3[5] *
                      2.0) + bc_E1_tmp * E3[5] * 2.0) + be_E1_tmp * E3[2] * 2.0)
                   + dc_E1_tmp * E3[5] * 2.0) + md_E1_tmp * E3[4] * 2.0) -
                 ec_E1_tmp * E3[5] * 2.0) + ce_E1_tmp * E3[2] * 2.0) +
      ((((((((((nd_E1_tmp * E3[4] * 2.0 - od_E1_tmp * E3[1] * 2.0) - gc_E1_tmp *
               E3[8] * 2.0) + hc_E1_tmp * E3[8] * 2.0) + de_E1_tmp * E3[2] * 2.0)
            + ic_E1_tmp * E3[8] * 2.0) + pd_E1_tmp * E3[7] * 2.0) - jc_E1_tmp *
          E3[8] * 2.0) + ee_E1_tmp * E3[2] * 2.0) + qd_E1_tmp * E3[7] * 2.0) -
       rd_E1_tmp * E3[1] * 2.0);
    b_E1[13] = ((((((((((((((((((((((((((((((((((((qc_E1_tmp * E3[2] * 2.0 +
      sd_E1_tmp * E3[0] * 2.0) + td_E1_tmp * E3[0] * 2.0) + tc_E1_tmp * E3[5] *
      2.0) + tb_E1_tmp * E3[3] * 2.0) + uc_E1_tmp * E3[5] * 2.0) - vc_E1_tmp *
      E3[2] * 2.0) - ub_E1_tmp * E3[3] * 2.0) + ud_E1_tmp * E3[0] * 2.0) -
      fb_E1_tmp * E3[3] * 2.0) + hb_E1_tmp * E3[3] * 2.0) + vd_E1_tmp * E3[0] *
      2.0) + yc_E1_tmp * E3[8] * 2.0) + xb_E1_tmp * E3[6] * 2.0) + ad_E1_tmp *
      E3[8] * 2.0) - bd_E1_tmp * E3[2] * 2.0) - yb_E1_tmp * E3[6] * 2.0) +
      wd_E1_tmp * E3[0] * 2.0) - gb_E1_tmp * E3[6] * 2.0) + jb_E1_tmp * E3[6] *
      2.0) + xd_E1_tmp * E3[0] * 2.0) + ed_E1_tmp * E3[2] * 2.0) + yd_E1_tmp *
      E3[1] * 2.0) + ae_E1_tmp * E3[1] * 2.0) + fd_E1_tmp * E3[5] * 2.0) +
      ac_E1_tmp * E3[4] * 2.0) + gd_E1_tmp * E3[5] * 2.0) - hd_E1_tmp * E3[2] *
                         2.0) - bc_E1_tmp * E3[4] * 2.0) + be_E1_tmp * E3[1] *
                       2.0) - dc_E1_tmp * E3[4] * 2.0) + ec_E1_tmp * E3[4] * 2.0)
                    + ce_E1_tmp * E3[1] * 2.0) + id_E1_tmp * E3[8] * 2.0) +
                  gc_E1_tmp * E3[7] * 2.0) + jd_E1_tmp * E3[8] * 2.0) -
                kd_E1_tmp * E3[2] * 2.0) + (((((((((((hc_E1_tmp * E3[7] * -2.0 +
      de_E1_tmp * E3[1] * 2.0) - ic_E1_tmp * E3[7] * 2.0) + jc_E1_tmp * E3[7] *
      2.0) + ee_E1_tmp * E3[1] * 2.0) + ld_E1_tmp * E3[2] * 6.0) + md_E1_tmp *
      E3[5] * 2.0) + nd_E1_tmp * E3[5] * 2.0) + od_E1_tmp * E3[2] * 2.0) +
      pd_E1_tmp * E3[8] * 2.0) + qd_E1_tmp * E3[8] * 2.0) + rd_E1_tmp * E3[2] *
      2.0);
    b_E1[14] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E3[3] * 2.0 +
      tc_E1_tmp * E3[0] * 2.0) + uc_E1_tmp * E3[0] * 2.0) + vc_E1_tmp * E3[3] *
      6.0) + fe_E1_tmp * E3[6] * 2.0) + ge_E1_tmp * E3[6] * 2.0) + bd_E1_tmp *
      E3[3] * 2.0) + rc_E1_tmp * E3[4] * 2.0) + r_E1_tmp * E3[1] * 2.0) -
      u_E1_tmp * E3[1] * 2.0) + sc_E1_tmp * E3[4] * 2.0) - y_E1_tmp * E3[1] *
      2.0) - ed_E1_tmp * E3[3] * 2.0) + fd_E1_tmp * E3[0] * 2.0) + bb_E1_tmp *
      E3[1] * 2.0) + gd_E1_tmp * E3[0] * 2.0) + wc_E1_tmp * E3[4] * 2.0) +
      xc_E1_tmp * E3[4] * 2.0) + hd_E1_tmp * E3[3] * 2.0) - v_E1_tmp * E3[7] *
      2.0) + x_E1_tmp * E3[7] * 2.0) + cd_E1_tmp * E3[4] * 2.0) + cb_E1_tmp *
      E3[7] * 2.0) + he_E1_tmp * E3[6] * 2.0) - eb_E1_tmp * E3[7] * 2.0) +
      dd_E1_tmp * E3[4] * 2.0) + ie_E1_tmp * E3[6] * 2.0) - kd_E1_tmp * E3[3] *
                          2.0) + sd_E1_tmp * E3[5] * 2.0) + tb_E1_tmp * E3[2] *
                        2.0) - ub_E1_tmp * E3[2] * 2.0) + td_E1_tmp * E3[5] *
                      2.0) - fb_E1_tmp * E3[2] * 2.0) - ld_E1_tmp * E3[3] * 2.0)
                   + md_E1_tmp * E3[0] * 2.0) + hb_E1_tmp * E3[2] * 2.0) +
                 nd_E1_tmp * E3[0] * 2.0) + ud_E1_tmp * E3[5] * 2.0) +
      ((((((((((vd_E1_tmp * E3[5] * 2.0 + od_E1_tmp * E3[3] * 2.0) - kc_E1_tmp *
               E3[8] * 2.0) + lc_E1_tmp * E3[8] * 2.0) + wd_E1_tmp * E3[5] * 2.0)
            + ib_E1_tmp * E3[8] * 2.0) + je_E1_tmp * E3[6] * 2.0) - kb_E1_tmp *
          E3[8] * 2.0) + xd_E1_tmp * E3[5] * 2.0) + ke_E1_tmp * E3[6] * 2.0) -
       rd_E1_tmp * E3[3] * 2.0);
    b_E1[15] = (((((((((((((((((((((((((((((((((((((tc_E1_tmp * E3[1] * 2.0 -
      qc_E1_tmp * E3[4] * 2.0) + rc_E1_tmp * E3[3] * 2.0) - r_E1_tmp * E3[0] *
      2.0) + uc_E1_tmp * E3[1] * 2.0) + u_E1_tmp * E3[0] * 2.0) + sc_E1_tmp *
      E3[3] * 2.0) + y_E1_tmp * E3[0] * 2.0) - bb_E1_tmp * E3[0] * 2.0) +
      vc_E1_tmp * E3[4] * 2.0) + wc_E1_tmp * E3[3] * 2.0) + xc_E1_tmp * E3[3] *
      2.0) + fe_E1_tmp * E3[7] * 2.0) + v_E1_tmp * E3[6] * 2.0) + ge_E1_tmp *
      E3[7] * 2.0) - bd_E1_tmp * E3[4] * 2.0) - x_E1_tmp * E3[6] * 2.0) +
      cd_E1_tmp * E3[3] * 2.0) - cb_E1_tmp * E3[6] * 2.0) + eb_E1_tmp * E3[6] *
      2.0) + dd_E1_tmp * E3[3] * 2.0) + ed_E1_tmp * E3[4] * 2.0) + fd_E1_tmp *
      E3[1] * 2.0) + gd_E1_tmp * E3[1] * 2.0) + hd_E1_tmp * E3[4] * 6.0) +
      he_E1_tmp * E3[7] * 2.0) + ie_E1_tmp * E3[7] * 2.0) + kd_E1_tmp * E3[4] *
                          2.0) + yd_E1_tmp * E3[5] * 2.0) + ac_E1_tmp * E3[2] *
                        2.0) - bc_E1_tmp * E3[2] * 2.0) + ae_E1_tmp * E3[5] *
                      2.0) - dc_E1_tmp * E3[2] * 2.0) - ld_E1_tmp * E3[4] * 2.0)
                   + md_E1_tmp * E3[1] * 2.0) + ec_E1_tmp * E3[2] * 2.0) +
                 nd_E1_tmp * E3[1] * 2.0) + be_E1_tmp * E3[5] * 2.0) +
      ((((((((((ce_E1_tmp * E3[5] * 2.0 + od_E1_tmp * E3[4] * 2.0) - mc_E1_tmp *
               E3[8] * 2.0) + nc_E1_tmp * E3[8] * 2.0) + de_E1_tmp * E3[5] * 2.0)
            + oc_E1_tmp * E3[8] * 2.0) + je_E1_tmp * E3[7] * 2.0) - pc_E1_tmp *
          E3[8] * 2.0) + ee_E1_tmp * E3[5] * 2.0) + ke_E1_tmp * E3[7] * 2.0) -
       rd_E1_tmp * E3[4] * 2.0);
    b_E1[16] = ((((((((((((((((((((((((((((((((((((tc_E1_tmp * E3[2] * 2.0 -
      qc_E1_tmp * E3[5] * 2.0) + sd_E1_tmp * E3[3] * 2.0) - tb_E1_tmp * E3[0] *
      2.0) + uc_E1_tmp * E3[2] * 2.0) + ub_E1_tmp * E3[0] * 2.0) + td_E1_tmp *
      E3[3] * 2.0) + fb_E1_tmp * E3[0] * 2.0) - hb_E1_tmp * E3[0] * 2.0) +
      vc_E1_tmp * E3[5] * 2.0) + ud_E1_tmp * E3[3] * 2.0) + vd_E1_tmp * E3[3] *
      2.0) + fe_E1_tmp * E3[8] * 2.0) + kc_E1_tmp * E3[6] * 2.0) + ge_E1_tmp *
      E3[8] * 2.0) - bd_E1_tmp * E3[5] * 2.0) - lc_E1_tmp * E3[6] * 2.0) +
      wd_E1_tmp * E3[3] * 2.0) - ib_E1_tmp * E3[6] * 2.0) + kb_E1_tmp * E3[6] *
      2.0) + xd_E1_tmp * E3[3] * 2.0) - ed_E1_tmp * E3[5] * 2.0) + fd_E1_tmp *
      E3[2] * 2.0) + yd_E1_tmp * E3[4] * 2.0) - ac_E1_tmp * E3[1] * 2.0) +
      gd_E1_tmp * E3[2] * 2.0) + bc_E1_tmp * E3[1] * 2.0) + ae_E1_tmp * E3[4] *
                         2.0) + dc_E1_tmp * E3[1] * 2.0) - ec_E1_tmp * E3[1] *
                       2.0) + hd_E1_tmp * E3[5] * 2.0) + be_E1_tmp * E3[4] * 2.0)
                    + ce_E1_tmp * E3[4] * 2.0) + he_E1_tmp * E3[8] * 2.0) +
                  mc_E1_tmp * E3[7] * 2.0) + ie_E1_tmp * E3[8] * 2.0) -
                kd_E1_tmp * E3[5] * 2.0) + (((((((((((nc_E1_tmp * E3[7] * -2.0 +
      de_E1_tmp * E3[4] * 2.0) - oc_E1_tmp * E3[7] * 2.0) + pc_E1_tmp * E3[7] *
      2.0) + ee_E1_tmp * E3[4] * 2.0) + ld_E1_tmp * E3[5] * 2.0) + md_E1_tmp *
      E3[2] * 2.0) + nd_E1_tmp * E3[2] * 2.0) + od_E1_tmp * E3[5] * 6.0) +
      je_E1_tmp * E3[8] * 2.0) + ke_E1_tmp * E3[8] * 2.0) + rd_E1_tmp * E3[5] *
      2.0);
    b_E1[17] = (((((((((((((((((((((((((((((((((((((qc_E1_tmp * E3[6] * 2.0 +
      yc_E1_tmp * E3[0] * 2.0) + ad_E1_tmp * E3[0] * 2.0) + vc_E1_tmp * E3[6] *
      2.0) + fe_E1_tmp * E3[3] * 2.0) + ge_E1_tmp * E3[3] * 2.0) + bd_E1_tmp *
      E3[6] * 6.0) + rc_E1_tmp * E3[7] * 2.0) + s_E1_tmp * E3[1] * 2.0) -
      w_E1_tmp * E3[1] * 2.0) + sc_E1_tmp * E3[7] * 2.0) - ab_E1_tmp * E3[1] *
      2.0) - ed_E1_tmp * E3[6] * 2.0) + id_E1_tmp * E3[0] * 2.0) + db_E1_tmp *
      E3[1] * 2.0) + jd_E1_tmp * E3[0] * 2.0) + wc_E1_tmp * E3[7] * 2.0) +
      v_E1_tmp * E3[4] * 2.0) - x_E1_tmp * E3[4] * 2.0) + xc_E1_tmp * E3[7] *
      2.0) - cb_E1_tmp * E3[4] * 2.0) - hd_E1_tmp * E3[6] * 2.0) + he_E1_tmp *
      E3[3] * 2.0) + eb_E1_tmp * E3[4] * 2.0) + ie_E1_tmp * E3[3] * 2.0) +
      cd_E1_tmp * E3[7] * 2.0) + dd_E1_tmp * E3[7] * 2.0) + kd_E1_tmp * E3[6] *
                          2.0) + sd_E1_tmp * E3[8] * 2.0) + xb_E1_tmp * E3[2] *
                        2.0) - yb_E1_tmp * E3[2] * 2.0) + td_E1_tmp * E3[8] *
                      2.0) - gb_E1_tmp * E3[2] * 2.0) - ld_E1_tmp * E3[6] * 2.0)
                   + pd_E1_tmp * E3[0] * 2.0) + jb_E1_tmp * E3[2] * 2.0) +
                 qd_E1_tmp * E3[0] * 2.0) + ud_E1_tmp * E3[8] * 2.0) +
      ((((((((((kc_E1_tmp * E3[5] * 2.0 - lc_E1_tmp * E3[5] * 2.0) + vd_E1_tmp *
               E3[8] * 2.0) - ib_E1_tmp * E3[5] * 2.0) - od_E1_tmp * E3[6] * 2.0)
            + je_E1_tmp * E3[3] * 2.0) + kb_E1_tmp * E3[5] * 2.0) + ke_E1_tmp *
          E3[3] * 2.0) + wd_E1_tmp * E3[8] * 2.0) + xd_E1_tmp * E3[8] * 2.0) +
       rd_E1_tmp * E3[6] * 2.0);
    b_E1[18] = (((((((((((((((((((((((((((((((((((((yc_E1_tmp * E3[1] * 2.0 -
      qc_E1_tmp * E3[7] * 2.0) + rc_E1_tmp * E3[6] * 2.0) - s_E1_tmp * E3[0] *
      2.0) + ad_E1_tmp * E3[1] * 2.0) + w_E1_tmp * E3[0] * 2.0) + sc_E1_tmp *
      E3[6] * 2.0) + ab_E1_tmp * E3[0] * 2.0) - db_E1_tmp * E3[0] * 2.0) -
      vc_E1_tmp * E3[7] * 2.0) + fe_E1_tmp * E3[4] * 2.0) + wc_E1_tmp * E3[6] *
      2.0) - v_E1_tmp * E3[3] * 2.0) + ge_E1_tmp * E3[4] * 2.0) + x_E1_tmp * E3
      [3] * 2.0) + xc_E1_tmp * E3[6] * 2.0) + cb_E1_tmp * E3[3] * 2.0) -
      eb_E1_tmp * E3[3] * 2.0) + bd_E1_tmp * E3[7] * 2.0) + cd_E1_tmp * E3[6] *
      2.0) + dd_E1_tmp * E3[6] * 2.0) + ed_E1_tmp * E3[7] * 2.0) + id_E1_tmp *
      E3[1] * 2.0) + jd_E1_tmp * E3[1] * 2.0) + hd_E1_tmp * E3[7] * 2.0) +
      he_E1_tmp * E3[4] * 2.0) + ie_E1_tmp * E3[4] * 2.0) + kd_E1_tmp * E3[7] *
                          6.0) + yd_E1_tmp * E3[8] * 2.0) + gc_E1_tmp * E3[2] *
                        2.0) - hc_E1_tmp * E3[2] * 2.0) + ae_E1_tmp * E3[8] *
                      2.0) - ic_E1_tmp * E3[2] * 2.0) - ld_E1_tmp * E3[7] * 2.0)
                   + pd_E1_tmp * E3[1] * 2.0) + jc_E1_tmp * E3[2] * 2.0) +
                 qd_E1_tmp * E3[1] * 2.0) + be_E1_tmp * E3[8] * 2.0) +
      ((((((((((mc_E1_tmp * E3[5] * 2.0 - nc_E1_tmp * E3[5] * 2.0) + ce_E1_tmp *
               E3[8] * 2.0) - oc_E1_tmp * E3[5] * 2.0) - od_E1_tmp * E3[7] * 2.0)
            + je_E1_tmp * E3[4] * 2.0) + pc_E1_tmp * E3[5] * 2.0) + ke_E1_tmp *
          E3[4] * 2.0) + de_E1_tmp * E3[8] * 2.0) + ee_E1_tmp * E3[8] * 2.0) +
       rd_E1_tmp * E3[7] * 2.0);
    b_E1[19] = ((((((((((((((((((((((((((((((((((((yc_E1_tmp * E3[2] * 2.0 -
      qc_E1_tmp * E3[8] * 2.0) + sd_E1_tmp * E3[6] * 2.0) - xb_E1_tmp * E3[0] *
      2.0) + ad_E1_tmp * E3[2] * 2.0) + yb_E1_tmp * E3[0] * 2.0) + td_E1_tmp *
      E3[6] * 2.0) + gb_E1_tmp * E3[0] * 2.0) - jb_E1_tmp * E3[0] * 2.0) -
      vc_E1_tmp * E3[8] * 2.0) + fe_E1_tmp * E3[5] * 2.0) + ud_E1_tmp * E3[6] *
      2.0) - kc_E1_tmp * E3[3] * 2.0) + ge_E1_tmp * E3[5] * 2.0) + lc_E1_tmp *
      E3[3] * 2.0) + vd_E1_tmp * E3[6] * 2.0) + ib_E1_tmp * E3[3] * 2.0) -
      kb_E1_tmp * E3[3] * 2.0) + bd_E1_tmp * E3[8] * 2.0) + wd_E1_tmp * E3[6] *
      2.0) + xd_E1_tmp * E3[6] * 2.0) - ed_E1_tmp * E3[8] * 2.0) + id_E1_tmp *
      E3[2] * 2.0) + yd_E1_tmp * E3[7] * 2.0) - gc_E1_tmp * E3[1] * 2.0) +
      jd_E1_tmp * E3[2] * 2.0) + hc_E1_tmp * E3[1] * 2.0) + ae_E1_tmp * E3[7] *
                         2.0) + ic_E1_tmp * E3[1] * 2.0) - jc_E1_tmp * E3[1] *
                       2.0) - hd_E1_tmp * E3[8] * 2.0) + he_E1_tmp * E3[5] * 2.0)
                    + be_E1_tmp * E3[7] * 2.0) - mc_E1_tmp * E3[4] * 2.0) +
                  ie_E1_tmp * E3[5] * 2.0) + nc_E1_tmp * E3[4] * 2.0) +
                ce_E1_tmp * E3[7] * 2.0) + (((((((((((oc_E1_tmp * E3[4] * 2.0 -
      pc_E1_tmp * E3[4] * 2.0) + kd_E1_tmp * E3[8] * 2.0) + de_E1_tmp * E3[7] *
      2.0) + ee_E1_tmp * E3[7] * 2.0) + ld_E1_tmp * E3[8] * 2.0) + pd_E1_tmp *
      E3[2] * 2.0) + qd_E1_tmp * E3[2] * 2.0) + od_E1_tmp * E3[8] * 2.0) +
      je_E1_tmp * E3[5] * 2.0) + ke_E1_tmp * E3[5] * 2.0) + rd_E1_tmp * E3[8] *
      6.0);
    b_E1[20] = ((((((((((((((((ob_E1_tmp * E3[8] - pb_E1_tmp * E3[5]) -
      le_E1_tmp * E3[7]) + me_E1_tmp * E3[4]) - lb_E1_tmp * E3[8]) + qb_E1_tmp *
      E3[2]) + rb_E1_tmp * E3[7]) - ne_E1_tmp * E3[1]) + mb_E1_tmp * E3[5]) -
                       nb_E1_tmp * E3[2]) - sb_E1_tmp * E3[4]) + cc_E1_tmp * E3
                     [1]) + oe_E1_tmp * E3[6]) - pe_E1_tmp * E3[3]) - vb_E1_tmp *
                  E3[6]) + qe_E1_tmp * E3[0]) + wb_E1_tmp * E3[3]) - fc_E1_tmp *
      E3[0];
    E1_tmp = 2.0 * E3[3] * E2[0];
    b_E1_tmp = 2.0 * E3[6] * E2[0];
    c_E1_tmp = 2.0 * E3[1] * E2[0];
    d_E1_tmp = 2.0 * E3[4] * E2[3];
    e_E1_tmp = 2.0 * E3[7] * E2[6];
    f_E1_tmp = 2.0 * E3[2] * E2[0];
    g_E1_tmp = 2.0 * E3[5] * E2[3];
    h_E1_tmp = 2.0 * E3[8] * E2[6];
    b_E1[21] = (((((((((((((((((((((((((((E3[0] * t11 * 3.0 + E3[0] * t12) + E3
      [0] * t13) + E3[0] * t14) - E3[0] * t15) - E3[0] * t16) + E3[0] * t17) -
      E3[0] * t18) - E3[0] * t19) + E1_tmp * E2[3]) + b_E1_tmp * E2[6]) +
      c_E1_tmp * E2[1]) + 2.0 * E3[3] * E2[1] * E2[4]) + 2.0 * E3[1] * E2[3] *
      E2[4]) + -2.0 * E3[4] * E2[0] * E2[4]) + d_E1_tmp * E2[1]) + 2.0 * E3[6] *
      E2[1] * E2[7]) + 2.0 * E3[1] * E2[6] * E2[7]) + -2.0 * E3[7] * E2[0] * E2
                         [7]) + e_E1_tmp * E2[1]) + f_E1_tmp * E2[2]) + 2.0 *
                      E3[3] * E2[2] * E2[5]) + 2.0 * E3[2] * E2[3] * E2[5]) +
                    -2.0 * E3[5] * E2[0] * E2[5]) + g_E1_tmp * E2[2]) + 2.0 *
                  E3[6] * E2[2] * E2[8]) + 2.0 * E3[2] * E2[6] * E2[8]) + -2.0 *
                E3[8] * E2[0] * E2[8]) + h_E1_tmp * E2[2];
    i_E1_tmp = 2.0 * E3[0] * E2[0];
    j_E1_tmp = 2.0 * E3[0] * E2[3];
    k_E1_tmp = -2.0 * E3[3] * E2[3];
    l_E1_tmp = 2.0 * E3[0] * E2[6];
    m_E1_tmp = -2.0 * E3[6] * E2[6];
    n_E1_tmp = 2.0 * E3[4] * E2[1];
    o_E1_tmp = 2.0 * E3[7] * E2[1];
    p_E1_tmp = 2.0 * E3[4] * E2[0];
    q_E1_tmp = 2.0 * E3[2] * E2[1];
    r_E1_tmp = 2.0 * E3[5] * E2[4];
    s_E1_tmp = 2.0 * E3[8] * E2[7];
    t_E1_tmp = 2.0 * E3[7] * E2[0];
    b_E1[22] = (((((((((((((((((((((((((((E3[1] * t11 - E3[1] * t12) - E3[1] *
      t13) + E3[1] * t14 * 3.0) + E3[1] * t15) + E3[1] * t16) + E3[1] * t17) -
      E3[1] * t18) - E3[1] * t19) + i_E1_tmp * E2[1]) + j_E1_tmp * E2[4]) +
      E1_tmp * E2[4]) + k_E1_tmp * E2[1]) + p_E1_tmp * E2[3]) + l_E1_tmp * E2[7])
      + b_E1_tmp * E2[7]) + m_E1_tmp * E2[1]) + t_E1_tmp * E2[6]) + n_E1_tmp *
                         E2[4]) + o_E1_tmp * E2[7]) + q_E1_tmp * E2[2]) + 2.0 *
                      E3[4] * E2[2] * E2[5]) + 2.0 * E3[2] * E2[4] * E2[5]) +
                    -2.0 * E3[5] * E2[1] * E2[5]) + r_E1_tmp * E2[2]) + 2.0 *
                  E3[7] * E2[2] * E2[8]) + 2.0 * E3[2] * E2[7] * E2[8]) + -2.0 *
                E3[8] * E2[1] * E2[8]) + s_E1_tmp * E2[2];
    u_E1_tmp = 2.0 * E3[5] * E2[0];
    v_E1_tmp = 2.0 * E3[1] * E2[1];
    w_E1_tmp = 2.0 * E3[5] * E2[1];
    x_E1_tmp = 2.0 * E3[1] * E2[4];
    y_E1_tmp = -2.0 * E3[7] * E2[7];
    ab_E1_tmp = 2.0 * E3[8] * E2[0];
    bb_E1_tmp = 2.0 * E3[8] * E2[1];
    cb_E1_tmp = 2.0 * E3[1] * E2[7];
    db_E1_tmp = -2.0 * E3[4] * E2[4];
    b_E1[23] = (((((((((((((((((((((((((((E3[2] * t11 - E3[2] * t12) - E3[2] *
      t13) + E3[2] * t14) - E3[2] * t15) - E3[2] * t16) + E3[2] * t17 * 3.0) +
      E3[2] * t18) + E3[2] * t19) + i_E1_tmp * E2[2]) + j_E1_tmp * E2[5]) +
      E1_tmp * E2[5]) + k_E1_tmp * E2[2]) + u_E1_tmp * E2[3]) + l_E1_tmp * E2[8])
      + b_E1_tmp * E2[8]) + m_E1_tmp * E2[2]) + ab_E1_tmp * E2[6]) + v_E1_tmp *
                         E2[2]) + x_E1_tmp * E2[5]) + n_E1_tmp * E2[5]) +
                      db_E1_tmp * E2[2]) + w_E1_tmp * E2[4]) + cb_E1_tmp * E2[8])
                   + o_E1_tmp * E2[8]) + y_E1_tmp * E2[2]) + bb_E1_tmp * E2[7])
                + 2.0 * E3[5] * E2[2] * E2[5]) + 2.0 * E3[8] * E2[2] * E2[8];
    eb_E1_tmp = 2.0 * E3[6] * E2[3];
    fb_E1_tmp = 2.0 * E3[0] * E2[1];
    gb_E1_tmp = 2.0 * E3[0] * E2[2];
    b_E1[24] = (((((((((((((((((((((((((((E3[3] * t11 + E3[3] * t12 * 3.0) + E3
      [3] * t13) - E3[3] * t14) + E3[3] * t15) - E3[3] * t16) - E3[3] * t17) +
      E3[3] * t18) - E3[3] * t19) + i_E1_tmp * E2[3]) + eb_E1_tmp * E2[6]) +
      fb_E1_tmp * E2[4]) + c_E1_tmp * E2[4]) + -2.0 * E3[1] * E2[3] * E2[1]) +
      p_E1_tmp * E2[1]) + d_E1_tmp * E2[4]) + 2.0 * E3[6] * E2[4] * E2[7]) + 2.0
                          * E3[4] * E2[6] * E2[7]) + -2.0 * E3[7] * E2[3] * E2[7])
                        + e_E1_tmp * E2[4]) + gb_E1_tmp * E2[5]) + f_E1_tmp *
                      E2[5]) + -2.0 * E3[2] * E2[3] * E2[2]) + u_E1_tmp * E2[2])
                   + g_E1_tmp * E2[5]) + 2.0 * E3[6] * E2[5] * E2[8]) + 2.0 *
                 E3[5] * E2[6] * E2[8]) + -2.0 * E3[8] * E2[3] * E2[8]) +
      h_E1_tmp * E2[5];
    p_E1_tmp = -2.0 * E3[0] * E2[0];
    u_E1_tmp = 2.0 * E3[3] * E2[3];
    hb_E1_tmp = 2.0 * E3[3] * E2[6];
    ib_E1_tmp = 2.0 * E3[7] * E2[4];
    jb_E1_tmp = 2.0 * E3[7] * E2[3];
    kb_E1_tmp = 2.0 * E3[1] * E2[2];
    b_E1[25] = (((((((((((((((((((((((((((-E3[4] * t11 + E3[4] * t12) - E3[4] *
      t13) + E3[4] * t14) + E3[4] * t15 * 3.0) + E3[4] * t16) - E3[4] * t17) +
      E3[4] * t18) - E3[4] * t19) + p_E1_tmp * E2[4]) + j_E1_tmp * E2[1]) +
      E1_tmp * E2[1]) + c_E1_tmp * E2[3]) + u_E1_tmp * E2[4]) + hb_E1_tmp * E2[7])
      + eb_E1_tmp * E2[7]) + m_E1_tmp * E2[4]) + jb_E1_tmp * E2[6]) + v_E1_tmp *
                         E2[4]) + ib_E1_tmp * E2[7]) + kb_E1_tmp * E2[5]) +
                      q_E1_tmp * E2[5]) + -2.0 * E3[2] * E2[4] * E2[2]) +
                    w_E1_tmp * E2[2]) + r_E1_tmp * E2[5]) + 2.0 * E3[7] * E2[5] *
                  E2[8]) + 2.0 * E3[5] * E2[7] * E2[8]) + -2.0 * E3[8] * E2[4] *
                E2[8]) + s_E1_tmp * E2[5];
    w_E1_tmp = 2.0 * E3[8] * E2[3];
    lb_E1_tmp = 2.0 * E3[4] * E2[4];
    mb_E1_tmp = 2.0 * E3[8] * E2[4];
    nb_E1_tmp = -2.0 * E3[1] * E2[1];
    ob_E1_tmp = 2.0 * E3[4] * E2[7];
    pb_E1_tmp = 2.0 * E3[2] * E2[2];
    b_E1[26] = (((((((((((((((((((((((((((-E3[5] * t11 + E3[5] * t12) - E3[5] *
      t13) - E3[5] * t14) + E3[5] * t15) - E3[5] * t16) + E3[5] * t17) + E3[5] *
      t18 * 3.0) + E3[5] * t19) + p_E1_tmp * E2[5]) + j_E1_tmp * E2[2]) + E1_tmp
      * E2[2]) + f_E1_tmp * E2[3]) + u_E1_tmp * E2[5]) + hb_E1_tmp * E2[8]) +
      eb_E1_tmp * E2[8]) + m_E1_tmp * E2[5]) + w_E1_tmp * E2[6]) + nb_E1_tmp *
                         E2[5]) + x_E1_tmp * E2[2]) + n_E1_tmp * E2[2]) +
                      q_E1_tmp * E2[4]) + lb_E1_tmp * E2[5]) + ob_E1_tmp * E2[8])
                   + ib_E1_tmp * E2[8]) + y_E1_tmp * E2[5]) + mb_E1_tmp * E2[7])
                + pb_E1_tmp * E2[5]) + 2.0 * E3[8] * E2[5] * E2[8];
    b_E1[27] = (((((((((((((((((((((((((((E3[6] * t11 + E3[6] * t12) + E3[6] *
      t13 * 3.0) - E3[6] * t14) - E3[6] * t15) + E3[6] * t16) - E3[6] * t17) -
      E3[6] * t18) + E3[6] * t19) + i_E1_tmp * E2[6]) + u_E1_tmp * E2[6]) +
      fb_E1_tmp * E2[7]) + c_E1_tmp * E2[7]) + -2.0 * E3[1] * E2[6] * E2[1]) +
      t_E1_tmp * E2[1]) + 2.0 * E3[3] * E2[4] * E2[7]) + d_E1_tmp * E2[7]) +
                          -2.0 * E3[4] * E2[6] * E2[4]) + jb_E1_tmp * E2[4]) +
                        e_E1_tmp * E2[7]) + gb_E1_tmp * E2[8]) + f_E1_tmp * E2[8])
                     + -2.0 * E3[2] * E2[6] * E2[2]) + ab_E1_tmp * E2[2]) + 2.0 *
                   E3[3] * E2[5] * E2[8]) + g_E1_tmp * E2[8]) + -2.0 * E3[5] *
                 E2[6] * E2[5]) + w_E1_tmp * E2[5]) + h_E1_tmp * E2[8];
    E1_tmp = 2.0 * E3[6] * E2[6];
    b_E1[28] = (((((((((((((((((((((((((((-E3[7] * t11 - E3[7] * t12) + E3[7] *
      t13) + E3[7] * t14) + E3[7] * t15) + E3[7] * t16 * 3.0) - E3[7] * t17) -
      E3[7] * t18) + E3[7] * t19) + p_E1_tmp * E2[7]) + l_E1_tmp * E2[1]) +
      b_E1_tmp * E2[1]) + c_E1_tmp * E2[6]) + k_E1_tmp * E2[7]) + hb_E1_tmp *
      E2[4]) + eb_E1_tmp * E2[4]) + d_E1_tmp * E2[6]) + E1_tmp * E2[7]) +
                         v_E1_tmp * E2[7]) + lb_E1_tmp * E2[7]) + kb_E1_tmp *
                       E2[8]) + q_E1_tmp * E2[8]) + -2.0 * E3[2] * E2[7] * E2[2])
                    + bb_E1_tmp * E2[2]) + 2.0 * E3[4] * E2[5] * E2[8]) +
                  r_E1_tmp * E2[8]) + -2.0 * E3[5] * E2[7] * E2[5]) + mb_E1_tmp *
                E2[5]) + s_E1_tmp * E2[8];
    b_E1[29] = (((((((((((((((((((((((((((-E3[8] * t11 - E3[8] * t12) + E3[8] *
      t13) - E3[8] * t14) - E3[8] * t15) + E3[8] * t16) + E3[8] * t17) + E3[8] *
      t18) + E3[8] * t19 * 3.0) + p_E1_tmp * E2[8]) + l_E1_tmp * E2[2]) +
      b_E1_tmp * E2[2]) + f_E1_tmp * E2[6]) + k_E1_tmp * E2[8]) + hb_E1_tmp *
      E2[5]) + eb_E1_tmp * E2[5]) + g_E1_tmp * E2[6]) + E1_tmp * E2[8]) +
                         nb_E1_tmp * E2[8]) + cb_E1_tmp * E2[2]) + o_E1_tmp *
                       E2[2]) + q_E1_tmp * E2[7]) + db_E1_tmp * E2[8]) +
                    ob_E1_tmp * E2[5]) + ib_E1_tmp * E2[5]) + r_E1_tmp * E2[7])
                 + 2.0 * E3[7] * E2[7] * E2[8]) + pb_E1_tmp * E2[8]) + 2.0 * E3
      [5] * E2[5] * E2[8];
    E1_tmp = E1[0] * E3[4];
    b_E1_tmp = E3[1] * E1[3];
    c_E1_tmp = E1[1] * E3[3];
    d_E1_tmp = E3[0] * E1[4];
    e_E1_tmp = E1[0] * E3[7];
    f_E1_tmp = E3[1] * E1[6];
    g_E1_tmp = E1[1] * E3[6];
    h_E1_tmp = E3[0] * E1[7];
    i_E1_tmp = E1[0] * E3[5];
    j_E1_tmp = E3[2] * E1[3];
    k_E1_tmp = E1[2] * E3[3];
    l_E1_tmp = E3[0] * E1[5];
    m_E1_tmp = E1[0] * E3[8];
    n_E1_tmp = E3[2] * E1[6];
    o_E1_tmp = E1[2] * E3[6];
    p_E1_tmp = E3[0] * E1[8];
    q_E1_tmp = E1[1] * E3[5];
    r_E1_tmp = E3[2] * E1[4];
    s_E1_tmp = E1[2] * E3[4];
    t_E1_tmp = E3[1] * E1[5];
    u_E1_tmp = E1[1] * E3[8];
    v_E1_tmp = E3[2] * E1[7];
    w_E1_tmp = E1[2] * E3[7];
    x_E1_tmp = E3[1] * E1[8];
    y_E1_tmp = E1[3] * E3[7];
    ab_E1_tmp = E3[4] * E1[6];
    bb_E1_tmp = E1[4] * E3[6];
    cb_E1_tmp = E3[3] * E1[7];
    db_E1_tmp = E1[3] * E3[8];
    eb_E1_tmp = E3[5] * E1[6];
    fb_E1_tmp = E1[5] * E3[6];
    gb_E1_tmp = E3[3] * E1[8];
    hb_E1_tmp = E1[4] * E3[8];
    ib_E1_tmp = E3[5] * E1[7];
    jb_E1_tmp = E1[5] * E3[7];
    kb_E1_tmp = E3[4] * E1[8];
    b_E1[30] = ((((((((((((((((((((((((((((((((((E1_tmp * E4[8] - e_E1_tmp * E4
      [5]) - i_E1_tmp * E4[7]) + m_E1_tmp * E4[4]) - b_E1_tmp * E4[8]) +
      y_E1_tmp * E4[2]) + j_E1_tmp * E4[7]) - db_E1_tmp * E4[1]) + f_E1_tmp *
      E4[5]) - ab_E1_tmp * E4[2]) - n_E1_tmp * E4[4]) + eb_E1_tmp * E4[1]) -
      c_E1_tmp * E4[8]) + g_E1_tmp * E4[5]) + q_E1_tmp * E4[6]) - u_E1_tmp * E4
      [3]) + d_E1_tmp * E4[8]) - bb_E1_tmp * E4[2]) - r_E1_tmp * E4[6]) +
      hb_E1_tmp * E4[0]) - h_E1_tmp * E4[5]) + cb_E1_tmp * E4[2]) + v_E1_tmp *
      E4[3]) - ib_E1_tmp * E4[0]) + k_E1_tmp * E4[7]) - o_E1_tmp * E4[4]) -
                        s_E1_tmp * E4[6]) + w_E1_tmp * E4[3]) - l_E1_tmp * E4[7])
                     + fb_E1_tmp * E4[1]) + t_E1_tmp * E4[6]) - jb_E1_tmp * E4[0])
                  + p_E1_tmp * E4[4]) - gb_E1_tmp * E4[1]) - x_E1_tmp * E4[3]) +
      kb_E1_tmp * E4[0];
    lb_E1_tmp = E1[0] * E3[0];
    mb_E1_tmp = E1[0] * E3[1];
    nb_E1_tmp = E3[0] * E1[1];
    ob_E1_tmp = E1[0] * E3[3];
    pb_E1_tmp = E3[0] * E1[3];
    qb_E1_tmp = E1[3] * E3[3];
    rb_E1_tmp = E1[3] * E3[4];
    sb_E1_tmp = E3[3] * E1[4];
    tb_E1_tmp = E1[0] * E3[6];
    ub_E1_tmp = E3[0] * E1[6];
    vb_E1_tmp = E1[6] * E3[6];
    wb_E1_tmp = E1[6] * E3[7];
    xb_E1_tmp = E3[6] * E1[7];
    yb_E1_tmp = E1[1] * E3[1];
    ac_E1_tmp = E1[1] * E3[4];
    bc_E1_tmp = E3[1] * E1[4];
    cc_E1_tmp = E1[4] * E3[4];
    dc_E1_tmp = E1[1] * E3[7];
    ec_E1_tmp = E3[1] * E1[7];
    fc_E1_tmp = E1[7] * E3[7];
    gc_E1_tmp = E1[2] * E3[2];
    hc_E1_tmp = E1[2] * E3[5];
    ic_E1_tmp = E3[2] * E1[5];
    jc_E1_tmp = E1[5] * E3[5];
    kc_E1_tmp = E1[2] * E3[8];
    lc_E1_tmp = E3[2] * E1[8];
    mc_E1_tmp = E1[8] * E3[8];
    nc_E1_tmp = E1[0] * E3[2];
    oc_E1_tmp = E3[0] * E1[2];
    pc_E1_tmp = E1[3] * E3[5];
    qc_E1_tmp = E3[3] * E1[5];
    rc_E1_tmp = E1[6] * E3[8];
    sc_E1_tmp = E3[6] * E1[8];
    b_E1[31] = (((((((((((((((((((((((((((((((((((((lb_E1_tmp * E4[0] * 6.0 +
      ob_E1_tmp * E4[3] * 2.0) + pb_E1_tmp * E4[3] * 2.0) + qb_E1_tmp * E4[0] *
      2.0) + tb_E1_tmp * E4[6] * 2.0) + ub_E1_tmp * E4[6] * 2.0) + vb_E1_tmp *
      E4[0] * 2.0) + mb_E1_tmp * E4[1] * 2.0) + nb_E1_tmp * E4[1] * 2.0) +
      yb_E1_tmp * E4[0] * 2.0) - E1_tmp * E4[4] * 2.0) + b_E1_tmp * E4[4] * 2.0)
      + rb_E1_tmp * E4[1] * 2.0) + c_E1_tmp * E4[4] * 2.0) + ac_E1_tmp * E4[3] *
      2.0) - d_E1_tmp * E4[4] * 2.0) + sb_E1_tmp * E4[1] * 2.0) + bc_E1_tmp *
      E4[3] * 2.0) - cc_E1_tmp * E4[0] * 2.0) - e_E1_tmp * E4[7] * 2.0) +
      f_E1_tmp * E4[7] * 2.0) + wb_E1_tmp * E4[1] * 2.0) + g_E1_tmp * E4[7] *
      2.0) + dc_E1_tmp * E4[6] * 2.0) - h_E1_tmp * E4[7] * 2.0) + xb_E1_tmp *
      E4[1] * 2.0) + ec_E1_tmp * E4[6] * 2.0) - fc_E1_tmp * E4[0] * 2.0) +
                         nc_E1_tmp * E4[2] * 2.0) + oc_E1_tmp * E4[2] * 2.0) +
                       gc_E1_tmp * E4[0] * 2.0) - i_E1_tmp * E4[5] * 2.0) +
                     j_E1_tmp * E4[5] * 2.0) + pc_E1_tmp * E4[2] * 2.0) +
                   k_E1_tmp * E4[5] * 2.0) + hc_E1_tmp * E4[3] * 2.0) - l_E1_tmp
                 * E4[5] * 2.0) + qc_E1_tmp * E4[2] * 2.0) + ((((((((((ic_E1_tmp
      * E4[3] * 2.0 - jc_E1_tmp * E4[0] * 2.0) - m_E1_tmp * E4[8] * 2.0) +
      n_E1_tmp * E4[8] * 2.0) + rc_E1_tmp * E4[2] * 2.0) + o_E1_tmp * E4[8] *
      2.0) + kc_E1_tmp * E4[6] * 2.0) - p_E1_tmp * E4[8] * 2.0) + sc_E1_tmp *
      E4[2] * 2.0) + lc_E1_tmp * E4[6] * 2.0) - mc_E1_tmp * E4[0] * 2.0);
    tc_E1_tmp = E1[1] * E3[2];
    uc_E1_tmp = E3[1] * E1[2];
    vc_E1_tmp = E1[4] * E3[5];
    wc_E1_tmp = E3[4] * E1[5];
    xc_E1_tmp = E1[7] * E3[8];
    yc_E1_tmp = E3[7] * E1[8];
    b_E1[32] = (((((((((((((((((((((((((((((((((((((lb_E1_tmp * E4[1] * 2.0 +
      mb_E1_tmp * E4[0] * 2.0) + nb_E1_tmp * E4[0] * 2.0) + ob_E1_tmp * E4[4] *
      2.0) + E1_tmp * E4[3] * 2.0) + pb_E1_tmp * E4[4] * 2.0) - qb_E1_tmp * E4[1]
      * 2.0) - b_E1_tmp * E4[3] * 2.0) + rb_E1_tmp * E4[0] * 2.0) - c_E1_tmp *
      E4[3] * 2.0) + d_E1_tmp * E4[3] * 2.0) + sb_E1_tmp * E4[0] * 2.0) +
      tb_E1_tmp * E4[7] * 2.0) + e_E1_tmp * E4[6] * 2.0) + ub_E1_tmp * E4[7] *
      2.0) - vb_E1_tmp * E4[1] * 2.0) - f_E1_tmp * E4[6] * 2.0) + wb_E1_tmp *
      E4[0] * 2.0) - g_E1_tmp * E4[6] * 2.0) + h_E1_tmp * E4[6] * 2.0) +
      xb_E1_tmp * E4[0] * 2.0) + yb_E1_tmp * E4[1] * 6.0) + ac_E1_tmp * E4[4] *
      2.0) + bc_E1_tmp * E4[4] * 2.0) + cc_E1_tmp * E4[1] * 2.0) + dc_E1_tmp *
      E4[7] * 2.0) + ec_E1_tmp * E4[7] * 2.0) + fc_E1_tmp * E4[1] * 2.0) +
                         tc_E1_tmp * E4[2] * 2.0) + uc_E1_tmp * E4[2] * 2.0) +
                       gc_E1_tmp * E4[1] * 2.0) - q_E1_tmp * E4[5] * 2.0) +
                     r_E1_tmp * E4[5] * 2.0) + vc_E1_tmp * E4[2] * 2.0) +
                   s_E1_tmp * E4[5] * 2.0) + hc_E1_tmp * E4[4] * 2.0) - t_E1_tmp
                 * E4[5] * 2.0) + wc_E1_tmp * E4[2] * 2.0) + ((((((((((ic_E1_tmp
      * E4[4] * 2.0 - jc_E1_tmp * E4[1] * 2.0) - u_E1_tmp * E4[8] * 2.0) +
      v_E1_tmp * E4[8] * 2.0) + xc_E1_tmp * E4[2] * 2.0) + w_E1_tmp * E4[8] *
      2.0) + kc_E1_tmp * E4[7] * 2.0) - x_E1_tmp * E4[8] * 2.0) + yc_E1_tmp *
      E4[2] * 2.0) + lc_E1_tmp * E4[7] * 2.0) - mc_E1_tmp * E4[1] * 2.0);
    b_E1[33] = ((((((((((((((((((((((((((((((((((((lb_E1_tmp * E4[2] * 2.0 +
      nc_E1_tmp * E4[0] * 2.0) + oc_E1_tmp * E4[0] * 2.0) + ob_E1_tmp * E4[5] *
      2.0) + i_E1_tmp * E4[3] * 2.0) + pb_E1_tmp * E4[5] * 2.0) - qb_E1_tmp *
      E4[2] * 2.0) - j_E1_tmp * E4[3] * 2.0) + pc_E1_tmp * E4[0] * 2.0) -
      k_E1_tmp * E4[3] * 2.0) + l_E1_tmp * E4[3] * 2.0) + qc_E1_tmp * E4[0] *
      2.0) + tb_E1_tmp * E4[8] * 2.0) + m_E1_tmp * E4[6] * 2.0) + ub_E1_tmp *
      E4[8] * 2.0) - vb_E1_tmp * E4[2] * 2.0) - n_E1_tmp * E4[6] * 2.0) +
      rc_E1_tmp * E4[0] * 2.0) - o_E1_tmp * E4[6] * 2.0) + p_E1_tmp * E4[6] *
      2.0) + sc_E1_tmp * E4[0] * 2.0) + yb_E1_tmp * E4[2] * 2.0) + tc_E1_tmp *
      E4[1] * 2.0) + uc_E1_tmp * E4[1] * 2.0) + ac_E1_tmp * E4[5] * 2.0) +
      q_E1_tmp * E4[4] * 2.0) + bc_E1_tmp * E4[5] * 2.0) - cc_E1_tmp * E4[2] *
                         2.0) - r_E1_tmp * E4[4] * 2.0) + vc_E1_tmp * E4[1] *
                       2.0) - s_E1_tmp * E4[4] * 2.0) + t_E1_tmp * E4[4] * 2.0)
                    + wc_E1_tmp * E4[1] * 2.0) + dc_E1_tmp * E4[8] * 2.0) +
                  u_E1_tmp * E4[7] * 2.0) + ec_E1_tmp * E4[8] * 2.0) - fc_E1_tmp
                * E4[2] * 2.0) + (((((((((((v_E1_tmp * E4[7] * -2.0 + xc_E1_tmp *
      E4[1] * 2.0) - w_E1_tmp * E4[7] * 2.0) + x_E1_tmp * E4[7] * 2.0) +
      yc_E1_tmp * E4[1] * 2.0) + gc_E1_tmp * E4[2] * 6.0) + hc_E1_tmp * E4[5] *
      2.0) + ic_E1_tmp * E4[5] * 2.0) + jc_E1_tmp * E4[2] * 2.0) + kc_E1_tmp *
      E4[8] * 2.0) + lc_E1_tmp * E4[8] * 2.0) + mc_E1_tmp * E4[2] * 2.0);
    ad_E1_tmp = E1[3] * E3[6];
    bd_E1_tmp = E3[3] * E1[6];
    cd_E1_tmp = E1[4] * E3[7];
    dd_E1_tmp = E3[4] * E1[7];
    ed_E1_tmp = E1[5] * E3[8];
    fd_E1_tmp = E3[5] * E1[8];
    b_E1[34] = (((((((((((((((((((((((((((((((((((((lb_E1_tmp * E4[3] * 2.0 +
      ob_E1_tmp * E4[0] * 2.0) + pb_E1_tmp * E4[0] * 2.0) + qb_E1_tmp * E4[3] *
      6.0) + ad_E1_tmp * E4[6] * 2.0) + bd_E1_tmp * E4[6] * 2.0) + vb_E1_tmp *
      E4[3] * 2.0) + mb_E1_tmp * E4[4] * 2.0) + E1_tmp * E4[1] * 2.0) - b_E1_tmp
      * E4[1] * 2.0) + nb_E1_tmp * E4[4] * 2.0) - c_E1_tmp * E4[1] * 2.0) -
      yb_E1_tmp * E4[3] * 2.0) + ac_E1_tmp * E4[0] * 2.0) + d_E1_tmp * E4[1] *
      2.0) + bc_E1_tmp * E4[0] * 2.0) + rb_E1_tmp * E4[4] * 2.0) + sb_E1_tmp *
      E4[4] * 2.0) + cc_E1_tmp * E4[3] * 2.0) - y_E1_tmp * E4[7] * 2.0) +
      ab_E1_tmp * E4[7] * 2.0) + wb_E1_tmp * E4[4] * 2.0) + bb_E1_tmp * E4[7] *
      2.0) + cd_E1_tmp * E4[6] * 2.0) - cb_E1_tmp * E4[7] * 2.0) + xb_E1_tmp *
      E4[4] * 2.0) + dd_E1_tmp * E4[6] * 2.0) - fc_E1_tmp * E4[3] * 2.0) +
                         nc_E1_tmp * E4[5] * 2.0) + i_E1_tmp * E4[2] * 2.0) -
                       j_E1_tmp * E4[2] * 2.0) + oc_E1_tmp * E4[5] * 2.0) -
                     k_E1_tmp * E4[2] * 2.0) - gc_E1_tmp * E4[3] * 2.0) +
                   hc_E1_tmp * E4[0] * 2.0) + l_E1_tmp * E4[2] * 2.0) +
                 ic_E1_tmp * E4[0] * 2.0) + pc_E1_tmp * E4[5] * 2.0) +
      ((((((((((qc_E1_tmp * E4[5] * 2.0 + jc_E1_tmp * E4[3] * 2.0) - db_E1_tmp *
               E4[8] * 2.0) + eb_E1_tmp * E4[8] * 2.0) + rc_E1_tmp * E4[5] * 2.0)
            + fb_E1_tmp * E4[8] * 2.0) + ed_E1_tmp * E4[6] * 2.0) - gb_E1_tmp *
          E4[8] * 2.0) + sc_E1_tmp * E4[5] * 2.0) + fd_E1_tmp * E4[6] * 2.0) -
       mc_E1_tmp * E4[3] * 2.0);
    b_E1[35] = (((((((((((((((((((((((((((((((((((((ob_E1_tmp * E4[1] * 2.0 -
      lb_E1_tmp * E4[4] * 2.0) + mb_E1_tmp * E4[3] * 2.0) - E1_tmp * E4[0] * 2.0)
      + pb_E1_tmp * E4[1] * 2.0) + b_E1_tmp * E4[0] * 2.0) + nb_E1_tmp * E4[3] *
      2.0) + c_E1_tmp * E4[0] * 2.0) - d_E1_tmp * E4[0] * 2.0) + qb_E1_tmp * E4
      [4] * 2.0) + rb_E1_tmp * E4[3] * 2.0) + sb_E1_tmp * E4[3] * 2.0) +
      ad_E1_tmp * E4[7] * 2.0) + y_E1_tmp * E4[6] * 2.0) + bd_E1_tmp * E4[7] *
      2.0) - vb_E1_tmp * E4[4] * 2.0) - ab_E1_tmp * E4[6] * 2.0) + wb_E1_tmp *
      E4[3] * 2.0) - bb_E1_tmp * E4[6] * 2.0) + cb_E1_tmp * E4[6] * 2.0) +
      xb_E1_tmp * E4[3] * 2.0) + yb_E1_tmp * E4[4] * 2.0) + ac_E1_tmp * E4[1] *
      2.0) + bc_E1_tmp * E4[1] * 2.0) + cc_E1_tmp * E4[4] * 6.0) + cd_E1_tmp *
      E4[7] * 2.0) + dd_E1_tmp * E4[7] * 2.0) + fc_E1_tmp * E4[4] * 2.0) +
                         tc_E1_tmp * E4[5] * 2.0) + q_E1_tmp * E4[2] * 2.0) -
                       r_E1_tmp * E4[2] * 2.0) + uc_E1_tmp * E4[5] * 2.0) -
                     s_E1_tmp * E4[2] * 2.0) - gc_E1_tmp * E4[4] * 2.0) +
                   hc_E1_tmp * E4[1] * 2.0) + t_E1_tmp * E4[2] * 2.0) +
                 ic_E1_tmp * E4[1] * 2.0) + vc_E1_tmp * E4[5] * 2.0) +
      ((((((((((wc_E1_tmp * E4[5] * 2.0 + jc_E1_tmp * E4[4] * 2.0) - hb_E1_tmp *
               E4[8] * 2.0) + ib_E1_tmp * E4[8] * 2.0) + xc_E1_tmp * E4[5] * 2.0)
            + jb_E1_tmp * E4[8] * 2.0) + ed_E1_tmp * E4[7] * 2.0) - kb_E1_tmp *
          E4[8] * 2.0) + yc_E1_tmp * E4[5] * 2.0) + fd_E1_tmp * E4[7] * 2.0) -
       mc_E1_tmp * E4[4] * 2.0);
    b_E1[36] = ((((((((((((((((((((((((((((((((((((ob_E1_tmp * E4[2] * 2.0 -
      lb_E1_tmp * E4[5] * 2.0) + nc_E1_tmp * E4[3] * 2.0) - i_E1_tmp * E4[0] *
      2.0) + pb_E1_tmp * E4[2] * 2.0) + j_E1_tmp * E4[0] * 2.0) + oc_E1_tmp *
      E4[3] * 2.0) + k_E1_tmp * E4[0] * 2.0) - l_E1_tmp * E4[0] * 2.0) +
      qb_E1_tmp * E4[5] * 2.0) + pc_E1_tmp * E4[3] * 2.0) + qc_E1_tmp * E4[3] *
      2.0) + ad_E1_tmp * E4[8] * 2.0) + db_E1_tmp * E4[6] * 2.0) + bd_E1_tmp *
      E4[8] * 2.0) - vb_E1_tmp * E4[5] * 2.0) - eb_E1_tmp * E4[6] * 2.0) +
      rc_E1_tmp * E4[3] * 2.0) - fb_E1_tmp * E4[6] * 2.0) + gb_E1_tmp * E4[6] *
      2.0) + sc_E1_tmp * E4[3] * 2.0) - yb_E1_tmp * E4[5] * 2.0) + ac_E1_tmp *
      E4[2] * 2.0) + tc_E1_tmp * E4[4] * 2.0) - q_E1_tmp * E4[1] * 2.0) +
      bc_E1_tmp * E4[2] * 2.0) + r_E1_tmp * E4[1] * 2.0) + uc_E1_tmp * E4[4] *
                         2.0) + s_E1_tmp * E4[1] * 2.0) - t_E1_tmp * E4[1] * 2.0)
                      + cc_E1_tmp * E4[5] * 2.0) + vc_E1_tmp * E4[4] * 2.0) +
                    wc_E1_tmp * E4[4] * 2.0) + cd_E1_tmp * E4[8] * 2.0) +
                  hb_E1_tmp * E4[7] * 2.0) + dd_E1_tmp * E4[8] * 2.0) -
                fc_E1_tmp * E4[5] * 2.0) + (((((((((((ib_E1_tmp * E4[7] * -2.0 +
      xc_E1_tmp * E4[4] * 2.0) - jb_E1_tmp * E4[7] * 2.0) + kb_E1_tmp * E4[7] *
      2.0) + yc_E1_tmp * E4[4] * 2.0) + gc_E1_tmp * E4[5] * 2.0) + hc_E1_tmp *
      E4[2] * 2.0) + ic_E1_tmp * E4[2] * 2.0) + jc_E1_tmp * E4[5] * 6.0) +
      ed_E1_tmp * E4[8] * 2.0) + fd_E1_tmp * E4[8] * 2.0) + mc_E1_tmp * E4[5] *
      2.0);
    b_E1[37] = (((((((((((((((((((((((((((((((((((((lb_E1_tmp * E4[6] * 2.0 +
      tb_E1_tmp * E4[0] * 2.0) + ub_E1_tmp * E4[0] * 2.0) + qb_E1_tmp * E4[6] *
      2.0) + ad_E1_tmp * E4[3] * 2.0) + bd_E1_tmp * E4[3] * 2.0) + vb_E1_tmp *
      E4[6] * 6.0) + mb_E1_tmp * E4[7] * 2.0) + e_E1_tmp * E4[1] * 2.0) -
      f_E1_tmp * E4[1] * 2.0) + nb_E1_tmp * E4[7] * 2.0) - g_E1_tmp * E4[1] *
      2.0) - yb_E1_tmp * E4[6] * 2.0) + dc_E1_tmp * E4[0] * 2.0) + h_E1_tmp *
      E4[1] * 2.0) + ec_E1_tmp * E4[0] * 2.0) + rb_E1_tmp * E4[7] * 2.0) +
      y_E1_tmp * E4[4] * 2.0) - ab_E1_tmp * E4[4] * 2.0) + sb_E1_tmp * E4[7] *
      2.0) - bb_E1_tmp * E4[4] * 2.0) - cc_E1_tmp * E4[6] * 2.0) + cd_E1_tmp *
      E4[3] * 2.0) + cb_E1_tmp * E4[4] * 2.0) + dd_E1_tmp * E4[3] * 2.0) +
      wb_E1_tmp * E4[7] * 2.0) + xb_E1_tmp * E4[7] * 2.0) + fc_E1_tmp * E4[6] *
                          2.0) + nc_E1_tmp * E4[8] * 2.0) + m_E1_tmp * E4[2] *
                        2.0) - n_E1_tmp * E4[2] * 2.0) + oc_E1_tmp * E4[8] * 2.0)
                     - o_E1_tmp * E4[2] * 2.0) - gc_E1_tmp * E4[6] * 2.0) +
                   kc_E1_tmp * E4[0] * 2.0) + p_E1_tmp * E4[2] * 2.0) +
                 lc_E1_tmp * E4[0] * 2.0) + pc_E1_tmp * E4[8] * 2.0) +
      ((((((((((db_E1_tmp * E4[5] * 2.0 - eb_E1_tmp * E4[5] * 2.0) + qc_E1_tmp *
               E4[8] * 2.0) - fb_E1_tmp * E4[5] * 2.0) - jc_E1_tmp * E4[6] * 2.0)
            + ed_E1_tmp * E4[3] * 2.0) + gb_E1_tmp * E4[5] * 2.0) + fd_E1_tmp *
          E4[3] * 2.0) + rc_E1_tmp * E4[8] * 2.0) + sc_E1_tmp * E4[8] * 2.0) +
       mc_E1_tmp * E4[6] * 2.0);
    b_E1[38] = (((((((((((((((((((((((((((((((((((((tb_E1_tmp * E4[1] * 2.0 -
      lb_E1_tmp * E4[7] * 2.0) + mb_E1_tmp * E4[6] * 2.0) - e_E1_tmp * E4[0] *
      2.0) + ub_E1_tmp * E4[1] * 2.0) + f_E1_tmp * E4[0] * 2.0) + nb_E1_tmp *
      E4[6] * 2.0) + g_E1_tmp * E4[0] * 2.0) - h_E1_tmp * E4[0] * 2.0) -
      qb_E1_tmp * E4[7] * 2.0) + ad_E1_tmp * E4[4] * 2.0) + rb_E1_tmp * E4[6] *
      2.0) - y_E1_tmp * E4[3] * 2.0) + bd_E1_tmp * E4[4] * 2.0) + ab_E1_tmp *
      E4[3] * 2.0) + sb_E1_tmp * E4[6] * 2.0) + bb_E1_tmp * E4[3] * 2.0) -
      cb_E1_tmp * E4[3] * 2.0) + vb_E1_tmp * E4[7] * 2.0) + wb_E1_tmp * E4[6] *
      2.0) + xb_E1_tmp * E4[6] * 2.0) + yb_E1_tmp * E4[7] * 2.0) + dc_E1_tmp *
      E4[1] * 2.0) + ec_E1_tmp * E4[1] * 2.0) + cc_E1_tmp * E4[7] * 2.0) +
      cd_E1_tmp * E4[4] * 2.0) + dd_E1_tmp * E4[4] * 2.0) + fc_E1_tmp * E4[7] *
                          6.0) + tc_E1_tmp * E4[8] * 2.0) + u_E1_tmp * E4[2] *
                        2.0) - v_E1_tmp * E4[2] * 2.0) + uc_E1_tmp * E4[8] * 2.0)
                     - w_E1_tmp * E4[2] * 2.0) - gc_E1_tmp * E4[7] * 2.0) +
                   kc_E1_tmp * E4[1] * 2.0) + x_E1_tmp * E4[2] * 2.0) +
                 lc_E1_tmp * E4[1] * 2.0) + vc_E1_tmp * E4[8] * 2.0) +
      ((((((((((hb_E1_tmp * E4[5] * 2.0 - ib_E1_tmp * E4[5] * 2.0) + wc_E1_tmp *
               E4[8] * 2.0) - jb_E1_tmp * E4[5] * 2.0) - jc_E1_tmp * E4[7] * 2.0)
            + ed_E1_tmp * E4[4] * 2.0) + kb_E1_tmp * E4[5] * 2.0) + fd_E1_tmp *
          E4[4] * 2.0) + xc_E1_tmp * E4[8] * 2.0) + yc_E1_tmp * E4[8] * 2.0) +
       mc_E1_tmp * E4[7] * 2.0);
    b_E1[39] = ((((((((((((((((((((((((((((((((((((tb_E1_tmp * E4[2] * 2.0 -
      lb_E1_tmp * E4[8] * 2.0) + nc_E1_tmp * E4[6] * 2.0) - m_E1_tmp * E4[0] *
      2.0) + ub_E1_tmp * E4[2] * 2.0) + n_E1_tmp * E4[0] * 2.0) + oc_E1_tmp *
      E4[6] * 2.0) + o_E1_tmp * E4[0] * 2.0) - p_E1_tmp * E4[0] * 2.0) -
      qb_E1_tmp * E4[8] * 2.0) + ad_E1_tmp * E4[5] * 2.0) + pc_E1_tmp * E4[6] *
      2.0) - db_E1_tmp * E4[3] * 2.0) + bd_E1_tmp * E4[5] * 2.0) + eb_E1_tmp *
      E4[3] * 2.0) + qc_E1_tmp * E4[6] * 2.0) + fb_E1_tmp * E4[3] * 2.0) -
      gb_E1_tmp * E4[3] * 2.0) + vb_E1_tmp * E4[8] * 2.0) + rc_E1_tmp * E4[6] *
      2.0) + sc_E1_tmp * E4[6] * 2.0) - yb_E1_tmp * E4[8] * 2.0) + dc_E1_tmp *
      E4[2] * 2.0) + tc_E1_tmp * E4[7] * 2.0) - u_E1_tmp * E4[1] * 2.0) +
      ec_E1_tmp * E4[2] * 2.0) + v_E1_tmp * E4[1] * 2.0) + uc_E1_tmp * E4[7] *
                         2.0) + w_E1_tmp * E4[1] * 2.0) - x_E1_tmp * E4[1] * 2.0)
                      - cc_E1_tmp * E4[8] * 2.0) + cd_E1_tmp * E4[5] * 2.0) +
                    vc_E1_tmp * E4[7] * 2.0) - hb_E1_tmp * E4[4] * 2.0) +
                  dd_E1_tmp * E4[5] * 2.0) + ib_E1_tmp * E4[4] * 2.0) +
                wc_E1_tmp * E4[7] * 2.0) + (((((((((((jb_E1_tmp * E4[4] * 2.0 -
      kb_E1_tmp * E4[4] * 2.0) + fc_E1_tmp * E4[8] * 2.0) + xc_E1_tmp * E4[7] *
      2.0) + yc_E1_tmp * E4[7] * 2.0) + gc_E1_tmp * E4[8] * 2.0) + kc_E1_tmp *
      E4[2] * 2.0) + lc_E1_tmp * E4[2] * 2.0) + jc_E1_tmp * E4[8] * 2.0) +
      ed_E1_tmp * E4[5] * 2.0) + fd_E1_tmp * E4[5] * 2.0) + mc_E1_tmp * E4[8] *
      6.0);
    i_E1_tmp = E2[0] * E3[4];
    j_E1_tmp = E3[1] * E2[3];
    m_E1_tmp = E2[1] * E3[3];
    n_E1_tmp = E3[0] * E2[4];
    q_E1_tmp = E2[0] * E3[7];
    r_E1_tmp = E3[1] * E2[6];
    s_E1_tmp = E2[1] * E3[6];
    t_E1_tmp = E3[0] * E2[7];
    u_E1_tmp = E2[0] * E3[5];
    v_E1_tmp = E3[2] * E2[3];
    w_E1_tmp = E2[2] * E3[3];
    x_E1_tmp = E3[0] * E2[5];
    db_E1_tmp = E2[0] * E3[8];
    eb_E1_tmp = E3[2] * E2[6];
    hb_E1_tmp = E2[2] * E3[6];
    ib_E1_tmp = E3[0] * E2[8];
    jb_E1_tmp = E2[1] * E3[5];
    kb_E1_tmp = E3[2] * E2[4];
    lb_E1_tmp = E2[2] * E3[4];
    mb_E1_tmp = E3[1] * E2[5];
    nb_E1_tmp = E2[1] * E3[8];
    ob_E1_tmp = E3[2] * E2[7];
    pb_E1_tmp = E2[2] * E3[7];
    qb_E1_tmp = E3[1] * E2[8];
    rb_E1_tmp = E2[3] * E3[7];
    sb_E1_tmp = E3[4] * E2[6];
    tb_E1_tmp = E2[4] * E3[6];
    ub_E1_tmp = E3[3] * E2[7];
    vb_E1_tmp = E2[3] * E3[8];
    wb_E1_tmp = E3[5] * E2[6];
    xb_E1_tmp = E2[5] * E3[6];
    yb_E1_tmp = E3[3] * E2[8];
    ac_E1_tmp = E2[4] * E3[8];
    bc_E1_tmp = E3[5] * E2[7];
    cc_E1_tmp = E2[5] * E3[7];
    dc_E1_tmp = E3[4] * E2[8];
    b_E1[40] = ((((((((((((((((((((((((((((((((((i_E1_tmp * E4[8] - q_E1_tmp *
      E4[5]) - u_E1_tmp * E4[7]) + db_E1_tmp * E4[4]) - j_E1_tmp * E4[8]) +
      rb_E1_tmp * E4[2]) + v_E1_tmp * E4[7]) - vb_E1_tmp * E4[1]) + r_E1_tmp *
      E4[5]) - sb_E1_tmp * E4[2]) - eb_E1_tmp * E4[4]) + wb_E1_tmp * E4[1]) -
      m_E1_tmp * E4[8]) + s_E1_tmp * E4[5]) + jb_E1_tmp * E4[6]) - nb_E1_tmp *
      E4[3]) + n_E1_tmp * E4[8]) - tb_E1_tmp * E4[2]) - kb_E1_tmp * E4[6]) +
      ac_E1_tmp * E4[0]) - t_E1_tmp * E4[5]) + ub_E1_tmp * E4[2]) + ob_E1_tmp *
      E4[3]) - bc_E1_tmp * E4[0]) + w_E1_tmp * E4[7]) - hb_E1_tmp * E4[4]) -
                        lb_E1_tmp * E4[6]) + pb_E1_tmp * E4[3]) - x_E1_tmp * E4
                      [7]) + xb_E1_tmp * E4[1]) + mb_E1_tmp * E4[6]) - cc_E1_tmp
                   * E4[0]) + ib_E1_tmp * E4[4]) - yb_E1_tmp * E4[1]) -
                qb_E1_tmp * E4[3]) + dc_E1_tmp * E4[0];
    ec_E1_tmp = E2[0] * E3[0];
    fc_E1_tmp = E2[0] * E3[1];
    gc_E1_tmp = E3[0] * E2[1];
    hc_E1_tmp = E2[0] * E3[3];
    ic_E1_tmp = E3[0] * E2[3];
    jc_E1_tmp = E2[3] * E3[3];
    kc_E1_tmp = E2[3] * E3[4];
    lc_E1_tmp = E3[3] * E2[4];
    mc_E1_tmp = E2[0] * E3[6];
    nc_E1_tmp = E3[0] * E2[6];
    oc_E1_tmp = E2[6] * E3[6];
    pc_E1_tmp = E2[6] * E3[7];
    qc_E1_tmp = E3[6] * E2[7];
    rc_E1_tmp = E2[1] * E3[1];
    sc_E1_tmp = E2[1] * E3[4];
    tc_E1_tmp = E3[1] * E2[4];
    uc_E1_tmp = E2[4] * E3[4];
    vc_E1_tmp = E2[1] * E3[7];
    wc_E1_tmp = E3[1] * E2[7];
    xc_E1_tmp = E2[7] * E3[7];
    yc_E1_tmp = E2[2] * E3[2];
    ad_E1_tmp = E2[2] * E3[5];
    bd_E1_tmp = E3[2] * E2[5];
    cd_E1_tmp = E2[5] * E3[5];
    dd_E1_tmp = E2[2] * E3[8];
    ed_E1_tmp = E3[2] * E2[8];
    fd_E1_tmp = E2[8] * E3[8];
    gd_E1_tmp = E2[0] * E3[2];
    hd_E1_tmp = E3[0] * E2[2];
    id_E1_tmp = E2[3] * E3[5];
    jd_E1_tmp = E3[3] * E2[5];
    kd_E1_tmp = E2[6] * E3[8];
    ld_E1_tmp = E3[6] * E2[8];
    b_E1[41] = (((((((((((((((((((((((((((((((((((((ec_E1_tmp * E4[0] * 6.0 +
      hc_E1_tmp * E4[3] * 2.0) + ic_E1_tmp * E4[3] * 2.0) + jc_E1_tmp * E4[0] *
      2.0) + mc_E1_tmp * E4[6] * 2.0) + nc_E1_tmp * E4[6] * 2.0) + oc_E1_tmp *
      E4[0] * 2.0) + fc_E1_tmp * E4[1] * 2.0) + gc_E1_tmp * E4[1] * 2.0) +
      rc_E1_tmp * E4[0] * 2.0) - i_E1_tmp * E4[4] * 2.0) + j_E1_tmp * E4[4] *
      2.0) + kc_E1_tmp * E4[1] * 2.0) + m_E1_tmp * E4[4] * 2.0) + sc_E1_tmp *
      E4[3] * 2.0) - n_E1_tmp * E4[4] * 2.0) + lc_E1_tmp * E4[1] * 2.0) +
      tc_E1_tmp * E4[3] * 2.0) - uc_E1_tmp * E4[0] * 2.0) - q_E1_tmp * E4[7] *
      2.0) + r_E1_tmp * E4[7] * 2.0) + pc_E1_tmp * E4[1] * 2.0) + s_E1_tmp * E4
      [7] * 2.0) + vc_E1_tmp * E4[6] * 2.0) - t_E1_tmp * E4[7] * 2.0) +
      qc_E1_tmp * E4[1] * 2.0) + wc_E1_tmp * E4[6] * 2.0) - xc_E1_tmp * E4[0] *
                          2.0) + gd_E1_tmp * E4[2] * 2.0) + hd_E1_tmp * E4[2] *
                        2.0) + yc_E1_tmp * E4[0] * 2.0) - u_E1_tmp * E4[5] * 2.0)
                     + v_E1_tmp * E4[5] * 2.0) + id_E1_tmp * E4[2] * 2.0) +
                   w_E1_tmp * E4[5] * 2.0) + ad_E1_tmp * E4[3] * 2.0) - x_E1_tmp
                 * E4[5] * 2.0) + jd_E1_tmp * E4[2] * 2.0) + ((((((((((bd_E1_tmp
      * E4[3] * 2.0 - cd_E1_tmp * E4[0] * 2.0) - db_E1_tmp * E4[8] * 2.0) +
      eb_E1_tmp * E4[8] * 2.0) + kd_E1_tmp * E4[2] * 2.0) + hb_E1_tmp * E4[8] *
      2.0) + dd_E1_tmp * E4[6] * 2.0) - ib_E1_tmp * E4[8] * 2.0) + ld_E1_tmp *
      E4[2] * 2.0) + ed_E1_tmp * E4[6] * 2.0) - fd_E1_tmp * E4[0] * 2.0);
    md_E1_tmp = E2[1] * E3[2];
    nd_E1_tmp = E3[1] * E2[2];
    od_E1_tmp = E2[4] * E3[5];
    pd_E1_tmp = E3[4] * E2[5];
    qd_E1_tmp = E2[7] * E3[8];
    rd_E1_tmp = E3[7] * E2[8];
    b_E1[42] = (((((((((((((((((((((((((((((((((((((ec_E1_tmp * E4[1] * 2.0 +
      fc_E1_tmp * E4[0] * 2.0) + gc_E1_tmp * E4[0] * 2.0) + hc_E1_tmp * E4[4] *
      2.0) + i_E1_tmp * E4[3] * 2.0) + ic_E1_tmp * E4[4] * 2.0) - jc_E1_tmp *
      E4[1] * 2.0) - j_E1_tmp * E4[3] * 2.0) + kc_E1_tmp * E4[0] * 2.0) -
      m_E1_tmp * E4[3] * 2.0) + n_E1_tmp * E4[3] * 2.0) + lc_E1_tmp * E4[0] *
      2.0) + mc_E1_tmp * E4[7] * 2.0) + q_E1_tmp * E4[6] * 2.0) + nc_E1_tmp *
      E4[7] * 2.0) - oc_E1_tmp * E4[1] * 2.0) - r_E1_tmp * E4[6] * 2.0) +
      pc_E1_tmp * E4[0] * 2.0) - s_E1_tmp * E4[6] * 2.0) + t_E1_tmp * E4[6] *
      2.0) + qc_E1_tmp * E4[0] * 2.0) + rc_E1_tmp * E4[1] * 6.0) + sc_E1_tmp *
      E4[4] * 2.0) + tc_E1_tmp * E4[4] * 2.0) + uc_E1_tmp * E4[1] * 2.0) +
      vc_E1_tmp * E4[7] * 2.0) + wc_E1_tmp * E4[7] * 2.0) + xc_E1_tmp * E4[1] *
                          2.0) + md_E1_tmp * E4[2] * 2.0) + nd_E1_tmp * E4[2] *
                        2.0) + yc_E1_tmp * E4[1] * 2.0) - jb_E1_tmp * E4[5] *
                      2.0) + kb_E1_tmp * E4[5] * 2.0) + od_E1_tmp * E4[2] * 2.0)
                   + lb_E1_tmp * E4[5] * 2.0) + ad_E1_tmp * E4[4] * 2.0) -
                 mb_E1_tmp * E4[5] * 2.0) + pd_E1_tmp * E4[2] * 2.0) +
      ((((((((((bd_E1_tmp * E4[4] * 2.0 - cd_E1_tmp * E4[1] * 2.0) - nb_E1_tmp *
               E4[8] * 2.0) + ob_E1_tmp * E4[8] * 2.0) + qd_E1_tmp * E4[2] * 2.0)
            + pb_E1_tmp * E4[8] * 2.0) + dd_E1_tmp * E4[7] * 2.0) - qb_E1_tmp *
          E4[8] * 2.0) + rd_E1_tmp * E4[2] * 2.0) + ed_E1_tmp * E4[7] * 2.0) -
       fd_E1_tmp * E4[1] * 2.0);
    b_E1[43] = ((((((((((((((((((((((((((((((((((((ec_E1_tmp * E4[2] * 2.0 +
      gd_E1_tmp * E4[0] * 2.0) + hd_E1_tmp * E4[0] * 2.0) + hc_E1_tmp * E4[5] *
      2.0) + u_E1_tmp * E4[3] * 2.0) + ic_E1_tmp * E4[5] * 2.0) - jc_E1_tmp *
      E4[2] * 2.0) - v_E1_tmp * E4[3] * 2.0) + id_E1_tmp * E4[0] * 2.0) -
      w_E1_tmp * E4[3] * 2.0) + x_E1_tmp * E4[3] * 2.0) + jd_E1_tmp * E4[0] *
      2.0) + mc_E1_tmp * E4[8] * 2.0) + db_E1_tmp * E4[6] * 2.0) + nc_E1_tmp *
      E4[8] * 2.0) - oc_E1_tmp * E4[2] * 2.0) - eb_E1_tmp * E4[6] * 2.0) +
      kd_E1_tmp * E4[0] * 2.0) - hb_E1_tmp * E4[6] * 2.0) + ib_E1_tmp * E4[6] *
      2.0) + ld_E1_tmp * E4[0] * 2.0) + rc_E1_tmp * E4[2] * 2.0) + md_E1_tmp *
      E4[1] * 2.0) + nd_E1_tmp * E4[1] * 2.0) + sc_E1_tmp * E4[5] * 2.0) +
      jb_E1_tmp * E4[4] * 2.0) + tc_E1_tmp * E4[5] * 2.0) - uc_E1_tmp * E4[2] *
                         2.0) - kb_E1_tmp * E4[4] * 2.0) + od_E1_tmp * E4[1] *
                       2.0) - lb_E1_tmp * E4[4] * 2.0) + mb_E1_tmp * E4[4] * 2.0)
                    + pd_E1_tmp * E4[1] * 2.0) + vc_E1_tmp * E4[8] * 2.0) +
                  nb_E1_tmp * E4[7] * 2.0) + wc_E1_tmp * E4[8] * 2.0) -
                xc_E1_tmp * E4[2] * 2.0) + (((((((((((ob_E1_tmp * E4[7] * -2.0 +
      qd_E1_tmp * E4[1] * 2.0) - pb_E1_tmp * E4[7] * 2.0) + qb_E1_tmp * E4[7] *
      2.0) + rd_E1_tmp * E4[1] * 2.0) + yc_E1_tmp * E4[2] * 6.0) + ad_E1_tmp *
      E4[5] * 2.0) + bd_E1_tmp * E4[5] * 2.0) + cd_E1_tmp * E4[2] * 2.0) +
      dd_E1_tmp * E4[8] * 2.0) + ed_E1_tmp * E4[8] * 2.0) + fd_E1_tmp * E4[2] *
      2.0);
    sd_E1_tmp = E2[3] * E3[6];
    td_E1_tmp = E3[3] * E2[6];
    ud_E1_tmp = E2[4] * E3[7];
    vd_E1_tmp = E3[4] * E2[7];
    wd_E1_tmp = E2[5] * E3[8];
    xd_E1_tmp = E3[5] * E2[8];
    b_E1[44] = (((((((((((((((((((((((((((((((((((((ec_E1_tmp * E4[3] * 2.0 +
      hc_E1_tmp * E4[0] * 2.0) + ic_E1_tmp * E4[0] * 2.0) + jc_E1_tmp * E4[3] *
      6.0) + sd_E1_tmp * E4[6] * 2.0) + td_E1_tmp * E4[6] * 2.0) + oc_E1_tmp *
      E4[3] * 2.0) + fc_E1_tmp * E4[4] * 2.0) + i_E1_tmp * E4[1] * 2.0) -
      j_E1_tmp * E4[1] * 2.0) + gc_E1_tmp * E4[4] * 2.0) - m_E1_tmp * E4[1] *
      2.0) - rc_E1_tmp * E4[3] * 2.0) + sc_E1_tmp * E4[0] * 2.0) + n_E1_tmp *
      E4[1] * 2.0) + tc_E1_tmp * E4[0] * 2.0) + kc_E1_tmp * E4[4] * 2.0) +
      lc_E1_tmp * E4[4] * 2.0) + uc_E1_tmp * E4[3] * 2.0) - rb_E1_tmp * E4[7] *
      2.0) + sb_E1_tmp * E4[7] * 2.0) + pc_E1_tmp * E4[4] * 2.0) + tb_E1_tmp *
      E4[7] * 2.0) + ud_E1_tmp * E4[6] * 2.0) - ub_E1_tmp * E4[7] * 2.0) +
      qc_E1_tmp * E4[4] * 2.0) + vd_E1_tmp * E4[6] * 2.0) - xc_E1_tmp * E4[3] *
                          2.0) + gd_E1_tmp * E4[5] * 2.0) + u_E1_tmp * E4[2] *
                        2.0) - v_E1_tmp * E4[2] * 2.0) + hd_E1_tmp * E4[5] * 2.0)
                     - w_E1_tmp * E4[2] * 2.0) - yc_E1_tmp * E4[3] * 2.0) +
                   ad_E1_tmp * E4[0] * 2.0) + x_E1_tmp * E4[2] * 2.0) +
                 bd_E1_tmp * E4[0] * 2.0) + id_E1_tmp * E4[5] * 2.0) +
      ((((((((((jd_E1_tmp * E4[5] * 2.0 + cd_E1_tmp * E4[3] * 2.0) - vb_E1_tmp *
               E4[8] * 2.0) + wb_E1_tmp * E4[8] * 2.0) + kd_E1_tmp * E4[5] * 2.0)
            + xb_E1_tmp * E4[8] * 2.0) + wd_E1_tmp * E4[6] * 2.0) - yb_E1_tmp *
          E4[8] * 2.0) + ld_E1_tmp * E4[5] * 2.0) + xd_E1_tmp * E4[6] * 2.0) -
       fd_E1_tmp * E4[3] * 2.0);
    b_E1[45] = (((((((((((((((((((((((((((((((((((((hc_E1_tmp * E4[1] * 2.0 -
      ec_E1_tmp * E4[4] * 2.0) + fc_E1_tmp * E4[3] * 2.0) - i_E1_tmp * E4[0] *
      2.0) + ic_E1_tmp * E4[1] * 2.0) + j_E1_tmp * E4[0] * 2.0) + gc_E1_tmp *
      E4[3] * 2.0) + m_E1_tmp * E4[0] * 2.0) - n_E1_tmp * E4[0] * 2.0) +
      jc_E1_tmp * E4[4] * 2.0) + kc_E1_tmp * E4[3] * 2.0) + lc_E1_tmp * E4[3] *
      2.0) + sd_E1_tmp * E4[7] * 2.0) + rb_E1_tmp * E4[6] * 2.0) + td_E1_tmp *
      E4[7] * 2.0) - oc_E1_tmp * E4[4] * 2.0) - sb_E1_tmp * E4[6] * 2.0) +
      pc_E1_tmp * E4[3] * 2.0) - tb_E1_tmp * E4[6] * 2.0) + ub_E1_tmp * E4[6] *
      2.0) + qc_E1_tmp * E4[3] * 2.0) + rc_E1_tmp * E4[4] * 2.0) + sc_E1_tmp *
      E4[1] * 2.0) + tc_E1_tmp * E4[1] * 2.0) + uc_E1_tmp * E4[4] * 6.0) +
      ud_E1_tmp * E4[7] * 2.0) + vd_E1_tmp * E4[7] * 2.0) + xc_E1_tmp * E4[4] *
                          2.0) + md_E1_tmp * E4[5] * 2.0) + jb_E1_tmp * E4[2] *
                        2.0) - kb_E1_tmp * E4[2] * 2.0) + nd_E1_tmp * E4[5] *
                      2.0) - lb_E1_tmp * E4[2] * 2.0) - yc_E1_tmp * E4[4] * 2.0)
                   + ad_E1_tmp * E4[1] * 2.0) + mb_E1_tmp * E4[2] * 2.0) +
                 bd_E1_tmp * E4[1] * 2.0) + od_E1_tmp * E4[5] * 2.0) +
      ((((((((((pd_E1_tmp * E4[5] * 2.0 + cd_E1_tmp * E4[4] * 2.0) - ac_E1_tmp *
               E4[8] * 2.0) + bc_E1_tmp * E4[8] * 2.0) + qd_E1_tmp * E4[5] * 2.0)
            + cc_E1_tmp * E4[8] * 2.0) + wd_E1_tmp * E4[7] * 2.0) - dc_E1_tmp *
          E4[8] * 2.0) + rd_E1_tmp * E4[5] * 2.0) + xd_E1_tmp * E4[7] * 2.0) -
       fd_E1_tmp * E4[4] * 2.0);
    b_E1[46] = ((((((((((((((((((((((((((((((((((((hc_E1_tmp * E4[2] * 2.0 -
      ec_E1_tmp * E4[5] * 2.0) + gd_E1_tmp * E4[3] * 2.0) - u_E1_tmp * E4[0] *
      2.0) + ic_E1_tmp * E4[2] * 2.0) + v_E1_tmp * E4[0] * 2.0) + hd_E1_tmp *
      E4[3] * 2.0) + w_E1_tmp * E4[0] * 2.0) - x_E1_tmp * E4[0] * 2.0) +
      jc_E1_tmp * E4[5] * 2.0) + id_E1_tmp * E4[3] * 2.0) + jd_E1_tmp * E4[3] *
      2.0) + sd_E1_tmp * E4[8] * 2.0) + vb_E1_tmp * E4[6] * 2.0) + td_E1_tmp *
      E4[8] * 2.0) - oc_E1_tmp * E4[5] * 2.0) - wb_E1_tmp * E4[6] * 2.0) +
      kd_E1_tmp * E4[3] * 2.0) - xb_E1_tmp * E4[6] * 2.0) + yb_E1_tmp * E4[6] *
      2.0) + ld_E1_tmp * E4[3] * 2.0) - rc_E1_tmp * E4[5] * 2.0) + sc_E1_tmp *
      E4[2] * 2.0) + md_E1_tmp * E4[4] * 2.0) - jb_E1_tmp * E4[1] * 2.0) +
      tc_E1_tmp * E4[2] * 2.0) + kb_E1_tmp * E4[1] * 2.0) + nd_E1_tmp * E4[4] *
                         2.0) + lb_E1_tmp * E4[1] * 2.0) - mb_E1_tmp * E4[1] *
                       2.0) + uc_E1_tmp * E4[5] * 2.0) + od_E1_tmp * E4[4] * 2.0)
                    + pd_E1_tmp * E4[4] * 2.0) + ud_E1_tmp * E4[8] * 2.0) +
                  ac_E1_tmp * E4[7] * 2.0) + vd_E1_tmp * E4[8] * 2.0) -
                xc_E1_tmp * E4[5] * 2.0) + (((((((((((bc_E1_tmp * E4[7] * -2.0 +
      qd_E1_tmp * E4[4] * 2.0) - cc_E1_tmp * E4[7] * 2.0) + dc_E1_tmp * E4[7] *
      2.0) + rd_E1_tmp * E4[4] * 2.0) + yc_E1_tmp * E4[5] * 2.0) + ad_E1_tmp *
      E4[2] * 2.0) + bd_E1_tmp * E4[2] * 2.0) + cd_E1_tmp * E4[5] * 6.0) +
      wd_E1_tmp * E4[8] * 2.0) + xd_E1_tmp * E4[8] * 2.0) + fd_E1_tmp * E4[5] *
      2.0);
    b_E1[47] = (((((((((((((((((((((((((((((((((((((ec_E1_tmp * E4[6] * 2.0 +
      mc_E1_tmp * E4[0] * 2.0) + nc_E1_tmp * E4[0] * 2.0) + jc_E1_tmp * E4[6] *
      2.0) + sd_E1_tmp * E4[3] * 2.0) + td_E1_tmp * E4[3] * 2.0) + oc_E1_tmp *
      E4[6] * 6.0) + fc_E1_tmp * E4[7] * 2.0) + q_E1_tmp * E4[1] * 2.0) -
      r_E1_tmp * E4[1] * 2.0) + gc_E1_tmp * E4[7] * 2.0) - s_E1_tmp * E4[1] *
      2.0) - rc_E1_tmp * E4[6] * 2.0) + vc_E1_tmp * E4[0] * 2.0) + t_E1_tmp *
      E4[1] * 2.0) + wc_E1_tmp * E4[0] * 2.0) + kc_E1_tmp * E4[7] * 2.0) +
      rb_E1_tmp * E4[4] * 2.0) - sb_E1_tmp * E4[4] * 2.0) + lc_E1_tmp * E4[7] *
      2.0) - tb_E1_tmp * E4[4] * 2.0) - uc_E1_tmp * E4[6] * 2.0) + ud_E1_tmp *
      E4[3] * 2.0) + ub_E1_tmp * E4[4] * 2.0) + vd_E1_tmp * E4[3] * 2.0) +
      pc_E1_tmp * E4[7] * 2.0) + qc_E1_tmp * E4[7] * 2.0) + xc_E1_tmp * E4[6] *
                          2.0) + gd_E1_tmp * E4[8] * 2.0) + db_E1_tmp * E4[2] *
                        2.0) - eb_E1_tmp * E4[2] * 2.0) + hd_E1_tmp * E4[8] *
                      2.0) - hb_E1_tmp * E4[2] * 2.0) - yc_E1_tmp * E4[6] * 2.0)
                   + dd_E1_tmp * E4[0] * 2.0) + ib_E1_tmp * E4[2] * 2.0) +
                 ed_E1_tmp * E4[0] * 2.0) + id_E1_tmp * E4[8] * 2.0) +
      ((((((((((vb_E1_tmp * E4[5] * 2.0 - wb_E1_tmp * E4[5] * 2.0) + jd_E1_tmp *
               E4[8] * 2.0) - xb_E1_tmp * E4[5] * 2.0) - cd_E1_tmp * E4[6] * 2.0)
            + wd_E1_tmp * E4[3] * 2.0) + yb_E1_tmp * E4[5] * 2.0) + xd_E1_tmp *
          E4[3] * 2.0) + kd_E1_tmp * E4[8] * 2.0) + ld_E1_tmp * E4[8] * 2.0) +
       fd_E1_tmp * E4[6] * 2.0);
    b_E1[48] = (((((((((((((((((((((((((((((((((((((mc_E1_tmp * E4[1] * 2.0 -
      ec_E1_tmp * E4[7] * 2.0) + fc_E1_tmp * E4[6] * 2.0) - q_E1_tmp * E4[0] *
      2.0) + nc_E1_tmp * E4[1] * 2.0) + r_E1_tmp * E4[0] * 2.0) + gc_E1_tmp *
      E4[6] * 2.0) + s_E1_tmp * E4[0] * 2.0) - t_E1_tmp * E4[0] * 2.0) -
      jc_E1_tmp * E4[7] * 2.0) + sd_E1_tmp * E4[4] * 2.0) + kc_E1_tmp * E4[6] *
      2.0) - rb_E1_tmp * E4[3] * 2.0) + td_E1_tmp * E4[4] * 2.0) + sb_E1_tmp *
      E4[3] * 2.0) + lc_E1_tmp * E4[6] * 2.0) + tb_E1_tmp * E4[3] * 2.0) -
      ub_E1_tmp * E4[3] * 2.0) + oc_E1_tmp * E4[7] * 2.0) + pc_E1_tmp * E4[6] *
      2.0) + qc_E1_tmp * E4[6] * 2.0) + rc_E1_tmp * E4[7] * 2.0) + vc_E1_tmp *
      E4[1] * 2.0) + wc_E1_tmp * E4[1] * 2.0) + uc_E1_tmp * E4[7] * 2.0) +
      ud_E1_tmp * E4[4] * 2.0) + vd_E1_tmp * E4[4] * 2.0) + xc_E1_tmp * E4[7] *
                          6.0) + md_E1_tmp * E4[8] * 2.0) + nb_E1_tmp * E4[2] *
                        2.0) - ob_E1_tmp * E4[2] * 2.0) + nd_E1_tmp * E4[8] *
                      2.0) - pb_E1_tmp * E4[2] * 2.0) - yc_E1_tmp * E4[7] * 2.0)
                   + dd_E1_tmp * E4[1] * 2.0) + qb_E1_tmp * E4[2] * 2.0) +
                 ed_E1_tmp * E4[1] * 2.0) + od_E1_tmp * E4[8] * 2.0) +
      ((((((((((ac_E1_tmp * E4[5] * 2.0 - bc_E1_tmp * E4[5] * 2.0) + pd_E1_tmp *
               E4[8] * 2.0) - cc_E1_tmp * E4[5] * 2.0) - cd_E1_tmp * E4[7] * 2.0)
            + wd_E1_tmp * E4[4] * 2.0) + dc_E1_tmp * E4[5] * 2.0) + xd_E1_tmp *
          E4[4] * 2.0) + qd_E1_tmp * E4[8] * 2.0) + rd_E1_tmp * E4[8] * 2.0) +
       fd_E1_tmp * E4[7] * 2.0);
    b_E1[49] = ((((((((((((((((((((((((((((((((((((mc_E1_tmp * E4[2] * 2.0 -
      ec_E1_tmp * E4[8] * 2.0) + gd_E1_tmp * E4[6] * 2.0) - db_E1_tmp * E4[0] *
      2.0) + nc_E1_tmp * E4[2] * 2.0) + eb_E1_tmp * E4[0] * 2.0) + hd_E1_tmp *
      E4[6] * 2.0) + hb_E1_tmp * E4[0] * 2.0) - ib_E1_tmp * E4[0] * 2.0) -
      jc_E1_tmp * E4[8] * 2.0) + sd_E1_tmp * E4[5] * 2.0) + id_E1_tmp * E4[6] *
      2.0) - vb_E1_tmp * E4[3] * 2.0) + td_E1_tmp * E4[5] * 2.0) + wb_E1_tmp *
      E4[3] * 2.0) + jd_E1_tmp * E4[6] * 2.0) + xb_E1_tmp * E4[3] * 2.0) -
      yb_E1_tmp * E4[3] * 2.0) + oc_E1_tmp * E4[8] * 2.0) + kd_E1_tmp * E4[6] *
      2.0) + ld_E1_tmp * E4[6] * 2.0) - rc_E1_tmp * E4[8] * 2.0) + vc_E1_tmp *
      E4[2] * 2.0) + md_E1_tmp * E4[7] * 2.0) - nb_E1_tmp * E4[1] * 2.0) +
      wc_E1_tmp * E4[2] * 2.0) + ob_E1_tmp * E4[1] * 2.0) + nd_E1_tmp * E4[7] *
                         2.0) + pb_E1_tmp * E4[1] * 2.0) - qb_E1_tmp * E4[1] *
                       2.0) - uc_E1_tmp * E4[8] * 2.0) + ud_E1_tmp * E4[5] * 2.0)
                    + od_E1_tmp * E4[7] * 2.0) - ac_E1_tmp * E4[4] * 2.0) +
                  vd_E1_tmp * E4[5] * 2.0) + bc_E1_tmp * E4[4] * 2.0) +
                pd_E1_tmp * E4[7] * 2.0) + (((((((((((cc_E1_tmp * E4[4] * 2.0 -
      dc_E1_tmp * E4[4] * 2.0) + xc_E1_tmp * E4[8] * 2.0) + qd_E1_tmp * E4[7] *
      2.0) + rd_E1_tmp * E4[7] * 2.0) + yc_E1_tmp * E4[8] * 2.0) + dd_E1_tmp *
      E4[2] * 2.0) + ed_E1_tmp * E4[2] * 2.0) + cd_E1_tmp * E4[8] * 2.0) +
      wd_E1_tmp * E4[5] * 2.0) + xd_E1_tmp * E4[5] * 2.0) + fd_E1_tmp * E4[8] *
      6.0);
    b_E1[50] = ((((((((((((((((E3[0] * E4[4] * E4[8] - E3[0] * E4[7] * E4[5]) -
      E4[1] * E3[3] * E4[8]) + E3[3] * E4[7] * E4[2]) + E4[1] * E3[6] * E4[5]) -
      E4[4] * E3[6] * E4[2]) - E3[1] * E4[3] * E4[8]) + E3[1] * E4[6] * E4[5]) +
                        E4[0] * E3[4] * E4[8]) - E3[4] * E4[6] * E4[2]) - E4[0] *
                      E3[7] * E4[5]) + E4[3] * E3[7] * E4[2]) + E3[2] * E4[3] *
                    E4[7]) - E3[2] * E4[6] * E4[4]) - E4[0] * E3[5] * E4[7]) +
                 E3[5] * E4[6] * E4[1]) + E4[0] * E3[8] * E4[4]) - E4[3] * E3[8]
      * E4[1];
    u_E1_tmp = 2.0 * E3[3] * E4[0];
    v_E1_tmp = 2.0 * E3[6] * E4[0];
    db_E1_tmp = 2.0 * E3[1] * E4[0];
    eb_E1_tmp = 2.0 * E3[4] * E4[3];
    jb_E1_tmp = 2.0 * E3[7] * E4[6];
    kb_E1_tmp = 2.0 * E3[2] * E4[0];
    lb_E1_tmp = 2.0 * E3[5] * E4[3];
    mb_E1_tmp = 2.0 * E3[8] * E4[6];
    b_E1[51] = (((((((((((((((((((((((((((E3[0] * t29 * 3.0 + E3[0] * t30) + E3
      [0] * t31) + E3[0] * t32) - E3[0] * t33) - E3[0] * t34) + E3[0] * t35) -
      E3[0] * t36) - E3[0] * t37) + u_E1_tmp * E4[3]) + v_E1_tmp * E4[6]) +
      db_E1_tmp * E4[1]) + 2.0 * E3[3] * E4[1] * E4[4]) + 2.0 * E3[1] * E4[3] *
      E4[4]) + -2.0 * E3[4] * E4[0] * E4[4]) + eb_E1_tmp * E4[1]) + 2.0 * E3[6] *
      E4[1] * E4[7]) + 2.0 * E3[1] * E4[6] * E4[7]) + -2.0 * E3[7] * E4[0] * E4
                         [7]) + jb_E1_tmp * E4[1]) + kb_E1_tmp * E4[2]) + 2.0 *
                      E3[3] * E4[2] * E4[5]) + 2.0 * E3[2] * E4[3] * E4[5]) +
                    -2.0 * E3[5] * E4[0] * E4[5]) + lb_E1_tmp * E4[2]) + 2.0 *
                  E3[6] * E4[2] * E4[8]) + 2.0 * E3[2] * E4[6] * E4[8]) + -2.0 *
                E3[8] * E4[0] * E4[8]) + mb_E1_tmp * E4[2];
    nb_E1_tmp = 2.0 * E3[0] * E4[0];
    ob_E1_tmp = 2.0 * E3[0] * E4[3];
    pb_E1_tmp = -2.0 * E3[3] * E4[3];
    qb_E1_tmp = 2.0 * E3[0] * E4[6];
    vb_E1_tmp = -2.0 * E3[6] * E4[6];
    wb_E1_tmp = 2.0 * E3[4] * E4[1];
    ac_E1_tmp = 2.0 * E3[7] * E4[1];
    bc_E1_tmp = 2.0 * E3[4] * E4[0];
    cc_E1_tmp = 2.0 * E3[2] * E4[1];
    dc_E1_tmp = 2.0 * E3[5] * E4[4];
    ec_E1_tmp = 2.0 * E3[8] * E4[7];
    fc_E1_tmp = 2.0 * E3[7] * E4[0];
    b_E1[52] = (((((((((((((((((((((((((((E3[1] * t29 - E3[1] * t30) - E3[1] *
      t31) + E3[1] * t32 * 3.0) + E3[1] * t33) + E3[1] * t34) + E3[1] * t35) -
      E3[1] * t36) - E3[1] * t37) + nb_E1_tmp * E4[1]) + ob_E1_tmp * E4[4]) +
      u_E1_tmp * E4[4]) + pb_E1_tmp * E4[1]) + bc_E1_tmp * E4[3]) + qb_E1_tmp *
      E4[7]) + v_E1_tmp * E4[7]) + vb_E1_tmp * E4[1]) + fc_E1_tmp * E4[6]) +
                         wb_E1_tmp * E4[4]) + ac_E1_tmp * E4[7]) + cc_E1_tmp *
                       E4[2]) + 2.0 * E3[4] * E4[2] * E4[5]) + 2.0 * E3[2] * E4
                     [4] * E4[5]) + -2.0 * E3[5] * E4[1] * E4[5]) + dc_E1_tmp *
                   E4[2]) + 2.0 * E3[7] * E4[2] * E4[8]) + 2.0 * E3[2] * E4[7] *
                 E4[8]) + -2.0 * E3[8] * E4[1] * E4[8]) + ec_E1_tmp * E4[2];
    gc_E1_tmp = 2.0 * E3[5] * E4[0];
    hc_E1_tmp = 2.0 * E3[1] * E4[1];
    ic_E1_tmp = 2.0 * E3[5] * E4[1];
    jc_E1_tmp = 2.0 * E3[1] * E4[4];
    kc_E1_tmp = -2.0 * E3[7] * E4[7];
    lc_E1_tmp = 2.0 * E3[8] * E4[0];
    mc_E1_tmp = 2.0 * E3[8] * E4[1];
    nc_E1_tmp = 2.0 * E3[1] * E4[7];
    oc_E1_tmp = -2.0 * E3[4] * E4[4];
    b_E1[53] = (((((((((((((((((((((((((((E3[2] * t29 - E3[2] * t30) - E3[2] *
      t31) + E3[2] * t32) - E3[2] * t33) - E3[2] * t34) + E3[2] * t35 * 3.0) +
      E3[2] * t36) + E3[2] * t37) + nb_E1_tmp * E4[2]) + ob_E1_tmp * E4[5]) +
      u_E1_tmp * E4[5]) + pb_E1_tmp * E4[2]) + gc_E1_tmp * E4[3]) + qb_E1_tmp *
      E4[8]) + v_E1_tmp * E4[8]) + vb_E1_tmp * E4[2]) + lc_E1_tmp * E4[6]) +
                         hc_E1_tmp * E4[2]) + jc_E1_tmp * E4[5]) + wb_E1_tmp *
                       E4[5]) + oc_E1_tmp * E4[2]) + ic_E1_tmp * E4[4]) +
                    nc_E1_tmp * E4[8]) + ac_E1_tmp * E4[8]) + kc_E1_tmp * E4[2])
                 + mc_E1_tmp * E4[7]) + 2.0 * E3[5] * E4[2] * E4[5]) + 2.0 * E3
      [8] * E4[2] * E4[8];
    pc_E1_tmp = 2.0 * E3[6] * E4[3];
    qc_E1_tmp = 2.0 * E3[0] * E4[1];
    rc_E1_tmp = 2.0 * E3[0] * E4[2];
    b_E1[54] = (((((((((((((((((((((((((((E3[3] * t29 + E3[3] * t30 * 3.0) + E3
      [3] * t31) - E3[3] * t32) + E3[3] * t33) - E3[3] * t34) - E3[3] * t35) +
      E3[3] * t36) - E3[3] * t37) + nb_E1_tmp * E4[3]) + pc_E1_tmp * E4[6]) +
      qc_E1_tmp * E4[4]) + db_E1_tmp * E4[4]) + -2.0 * E3[1] * E4[3] * E4[1]) +
      bc_E1_tmp * E4[1]) + eb_E1_tmp * E4[4]) + 2.0 * E3[6] * E4[4] * E4[7]) +
                          2.0 * E3[4] * E4[6] * E4[7]) + -2.0 * E3[7] * E4[3] *
                         E4[7]) + jb_E1_tmp * E4[4]) + rc_E1_tmp * E4[5]) +
                      kb_E1_tmp * E4[5]) + -2.0 * E3[2] * E4[3] * E4[2]) +
                    gc_E1_tmp * E4[2]) + lb_E1_tmp * E4[5]) + 2.0 * E3[6] * E4[5]
                  * E4[8]) + 2.0 * E3[5] * E4[6] * E4[8]) + -2.0 * E3[8] * E4[3]
                * E4[8]) + mb_E1_tmp * E4[5];
    bc_E1_tmp = -2.0 * E3[0] * E4[0];
    gc_E1_tmp = 2.0 * E3[3] * E4[3];
    sc_E1_tmp = 2.0 * E3[3] * E4[6];
    tc_E1_tmp = 2.0 * E3[7] * E4[4];
    uc_E1_tmp = 2.0 * E3[7] * E4[3];
    vc_E1_tmp = 2.0 * E3[1] * E4[2];
    b_E1[55] = (((((((((((((((((((((((((((-E3[4] * t29 + E3[4] * t30) - E3[4] *
      t31) + E3[4] * t32) + E3[4] * t33 * 3.0) + E3[4] * t34) - E3[4] * t35) +
      E3[4] * t36) - E3[4] * t37) + bc_E1_tmp * E4[4]) + ob_E1_tmp * E4[1]) +
      u_E1_tmp * E4[1]) + db_E1_tmp * E4[3]) + gc_E1_tmp * E4[4]) + sc_E1_tmp *
      E4[7]) + pc_E1_tmp * E4[7]) + vb_E1_tmp * E4[4]) + uc_E1_tmp * E4[6]) +
                         hc_E1_tmp * E4[4]) + tc_E1_tmp * E4[7]) + vc_E1_tmp *
                       E4[5]) + cc_E1_tmp * E4[5]) + -2.0 * E3[2] * E4[4] * E4[2])
                    + ic_E1_tmp * E4[2]) + dc_E1_tmp * E4[5]) + 2.0 * E3[7] *
                  E4[5] * E4[8]) + 2.0 * E3[5] * E4[7] * E4[8]) + -2.0 * E3[8] *
                E4[4] * E4[8]) + ec_E1_tmp * E4[5];
    ic_E1_tmp = 2.0 * E3[8] * E4[3];
    wc_E1_tmp = 2.0 * E3[4] * E4[4];
    xc_E1_tmp = 2.0 * E3[8] * E4[4];
    yc_E1_tmp = -2.0 * E3[1] * E4[1];
    ad_E1_tmp = 2.0 * E3[4] * E4[7];
    bd_E1_tmp = 2.0 * E3[2] * E4[2];
    b_E1[56] = (((((((((((((((((((((((((((-E3[5] * t29 + E3[5] * t30) - E3[5] *
      t31) - E3[5] * t32) + E3[5] * t33) - E3[5] * t34) + E3[5] * t35) + E3[5] *
      t36 * 3.0) + E3[5] * t37) + bc_E1_tmp * E4[5]) + ob_E1_tmp * E4[2]) +
      u_E1_tmp * E4[2]) + kb_E1_tmp * E4[3]) + gc_E1_tmp * E4[5]) + sc_E1_tmp *
      E4[8]) + pc_E1_tmp * E4[8]) + vb_E1_tmp * E4[5]) + ic_E1_tmp * E4[6]) +
                         yc_E1_tmp * E4[5]) + jc_E1_tmp * E4[2]) + wb_E1_tmp *
                       E4[2]) + cc_E1_tmp * E4[4]) + wc_E1_tmp * E4[5]) +
                    ad_E1_tmp * E4[8]) + tc_E1_tmp * E4[8]) + kc_E1_tmp * E4[5])
                 + xc_E1_tmp * E4[7]) + bd_E1_tmp * E4[5]) + 2.0 * E3[8] * E4[5]
      * E4[8];
    b_E1[57] = (((((((((((((((((((((((((((E3[6] * t29 + E3[6] * t30) + E3[6] *
      t31 * 3.0) - E3[6] * t32) - E3[6] * t33) + E3[6] * t34) - E3[6] * t35) -
      E3[6] * t36) + E3[6] * t37) + nb_E1_tmp * E4[6]) + gc_E1_tmp * E4[6]) +
      qc_E1_tmp * E4[7]) + db_E1_tmp * E4[7]) + -2.0 * E3[1] * E4[6] * E4[1]) +
      fc_E1_tmp * E4[1]) + 2.0 * E3[3] * E4[4] * E4[7]) + eb_E1_tmp * E4[7]) +
                          -2.0 * E3[4] * E4[6] * E4[4]) + uc_E1_tmp * E4[4]) +
                        jb_E1_tmp * E4[7]) + rc_E1_tmp * E4[8]) + kb_E1_tmp *
                      E4[8]) + -2.0 * E3[2] * E4[6] * E4[2]) + lc_E1_tmp * E4[2])
                   + 2.0 * E3[3] * E4[5] * E4[8]) + lb_E1_tmp * E4[8]) + -2.0 *
                 E3[5] * E4[6] * E4[5]) + ic_E1_tmp * E4[5]) + mb_E1_tmp * E4[8];
    u_E1_tmp = 2.0 * E3[6] * E4[6];
    b_E1[58] = (((((((((((((((((((((((((((-E3[7] * t29 - E3[7] * t30) + E3[7] *
      t31) + E3[7] * t32) + E3[7] * t33) + E3[7] * t34 * 3.0) - E3[7] * t35) -
      E3[7] * t36) + E3[7] * t37) + bc_E1_tmp * E4[7]) + qb_E1_tmp * E4[1]) +
      v_E1_tmp * E4[1]) + db_E1_tmp * E4[6]) + pb_E1_tmp * E4[7]) + sc_E1_tmp *
      E4[4]) + pc_E1_tmp * E4[4]) + eb_E1_tmp * E4[6]) + u_E1_tmp * E4[7]) +
                         hc_E1_tmp * E4[7]) + wc_E1_tmp * E4[7]) + vc_E1_tmp *
                       E4[8]) + cc_E1_tmp * E4[8]) + -2.0 * E3[2] * E4[7] * E4[2])
                    + mc_E1_tmp * E4[2]) + 2.0 * E3[4] * E4[5] * E4[8]) +
                  dc_E1_tmp * E4[8]) + -2.0 * E3[5] * E4[7] * E4[5]) + xc_E1_tmp
                * E4[5]) + ec_E1_tmp * E4[8];
    b_E1[59] = (((((((((((((((((((((((((((-E3[8] * t29 - E3[8] * t30) + E3[8] *
      t31) - E3[8] * t32) - E3[8] * t33) + E3[8] * t34) + E3[8] * t35) + E3[8] *
      t36) + E3[8] * t37 * 3.0) + bc_E1_tmp * E4[8]) + qb_E1_tmp * E4[2]) +
      v_E1_tmp * E4[2]) + kb_E1_tmp * E4[6]) + pb_E1_tmp * E4[8]) + sc_E1_tmp *
      E4[5]) + pc_E1_tmp * E4[5]) + lb_E1_tmp * E4[6]) + u_E1_tmp * E4[8]) +
                         yc_E1_tmp * E4[8]) + nc_E1_tmp * E4[2]) + ac_E1_tmp *
                       E4[2]) + cc_E1_tmp * E4[7]) + oc_E1_tmp * E4[8]) +
                    ad_E1_tmp * E4[5]) + tc_E1_tmp * E4[5]) + dc_E1_tmp * E4[7])
                 + 2.0 * E3[7] * E4[7] * E4[8]) + bd_E1_tmp * E4[8]) + 2.0 * E3
      [5] * E4[5] * E4[8];
    std::memset(&C2[0], 0, 40U * sizeof(real_T));
    std::copy(&b_E1[0], &b_E1[60], &C2[40]);
    std::memset(&C3[0], 0, 70U * sizeof(real_T));
    C3[70] = ((((((((((((((((E1_tmp * E3[8] - e_E1_tmp * E3[5]) - b_E1_tmp * E3
      [8]) + y_E1_tmp * E3[2]) + f_E1_tmp * E3[5]) - ab_E1_tmp * E3[2]) -
                        c_E1_tmp * E3[8]) + g_E1_tmp * E3[5]) + d_E1_tmp * E3[8])
                     - bb_E1_tmp * E3[2]) - h_E1_tmp * E3[5]) + cb_E1_tmp * E3[2])
                  + k_E1_tmp * E3[7]) - o_E1_tmp * E3[4]) - l_E1_tmp * E3[7]) +
               fb_E1_tmp * E3[1]) + p_E1_tmp * E3[4]) - gb_E1_tmp * E3[1];
    t14 = 2.0 * E1[3] * E3[0];
    t15 = 2.0 * E1[6] * E3[0];
    t16 = 2.0 * E1[1] * E3[0];
    t17 = 2.0 * E1[4] * E3[3];
    t18 = 2.0 * E1[7] * E3[6];
    kb_E1_tmp = 2.0 * E1[2] * E3[0];
    t19 = 2.0 * E1[5] * E3[3];
    t29 = 2.0 * E1[8] * E3[6];
    C3[71] = (((((((((((((((((((((((((((E1[0] * t20 * 3.0 + E1[0] * t21) + E1[0]
      * t22) + E1[0] * t23) - E1[0] * t24) - E1[0] * t25) + E1[0] * t26) - E1[0]
      * t27) - E1[0] * t28) + t14 * E3[3]) + t15 * E3[6]) + t16 * E3[1]) + 2.0 *
      E1[3] * E3[1] * E3[4]) + 2.0 * E1[1] * E3[3] * E3[4]) + -2.0 * E1[4] * E3
      [0] * E3[4]) + t17 * E3[1]) + 2.0 * E1[6] * E3[1] * E3[7]) + 2.0 * E1[1] *
                        E3[6] * E3[7]) + -2.0 * E1[7] * E3[0] * E3[7]) + t18 *
                      E3[1]) + kb_E1_tmp * E3[2]) + 2.0 * E1[3] * E3[2] * E3[5])
                   + 2.0 * E1[2] * E3[3] * E3[5]) + -2.0 * E1[5] * E3[0] * E3[5])
                 + t19 * E3[2]) + 2.0 * E1[6] * E3[2] * E3[8]) + 2.0 * E1[2] *
               E3[6] * E3[8]) + -2.0 * E1[8] * E3[0] * E3[8]) + t29 * E3[2];
    gb_E1_tmp = 2.0 * E1[0] * E3[0];
    jb_E1_tmp = 2.0 * E1[0] * E3[3];
    lb_E1_tmp = -2.0 * E1[3] * E3[3];
    mb_E1_tmp = 2.0 * E1[0] * E3[6];
    t30 = -2.0 * E1[6] * E3[6];
    t31 = 2.0 * E1[4] * E3[1];
    t32 = 2.0 * E1[7] * E3[1];
    t33 = 2.0 * E1[4] * E3[0];
    t34 = 2.0 * E1[2] * E3[1];
    t35 = 2.0 * E1[5] * E3[4];
    t36 = 2.0 * E1[8] * E3[7];
    t37 = 2.0 * E1[7] * E3[0];
    C3[72] = (((((((((((((((((((((((((((E1[1] * t20 - E1[1] * t21) - E1[1] * t22)
      + E1[1] * t23 * 3.0) + E1[1] * t24) + E1[1] * t25) + E1[1] * t26) - E1[1] *
      t27) - E1[1] * t28) + gb_E1_tmp * E3[1]) + jb_E1_tmp * E3[4]) + t14 * E3[4])
      + lb_E1_tmp * E3[1]) + t33 * E3[3]) + mb_E1_tmp * E3[7]) + t15 * E3[7]) +
                         t30 * E3[1]) + t37 * E3[6]) + t31 * E3[4]) + t32 * E3[7])
                     + t34 * E3[2]) + 2.0 * E1[4] * E3[2] * E3[5]) + 2.0 * E1[2]
                   * E3[4] * E3[5]) + -2.0 * E1[5] * E3[1] * E3[5]) + t35 * E3[2])
                + 2.0 * E1[7] * E3[2] * E3[8]) + 2.0 * E1[2] * E3[7] * E3[8]) +
              -2.0 * E1[8] * E3[1] * E3[8]) + t36 * E3[2];
    E1_tmp = 2.0 * E1[5] * E3[0];
    b_E1_tmp = 2.0 * E1[1] * E3[1];
    c_E1_tmp = 2.0 * E1[5] * E3[1];
    d_E1_tmp = 2.0 * E1[1] * E3[4];
    e_E1_tmp = -2.0 * E1[7] * E3[7];
    f_E1_tmp = 2.0 * E1[8] * E3[0];
    g_E1_tmp = 2.0 * E1[8] * E3[1];
    h_E1_tmp = 2.0 * E1[1] * E3[7];
    k_E1_tmp = -2.0 * E1[4] * E3[4];
    C3[73] = (((((((((((((((((((((((((((E1[2] * t20 - E1[2] * t21) - E1[2] * t22)
      + E1[2] * t23) - E1[2] * t24) - E1[2] * t25) + E1[2] * t26 * 3.0) + E1[2] *
      t27) + E1[2] * t28) + gb_E1_tmp * E3[2]) + jb_E1_tmp * E3[5]) + t14 * E3[5])
      + lb_E1_tmp * E3[2]) + E1_tmp * E3[3]) + mb_E1_tmp * E3[8]) + t15 * E3[8])
                         + t30 * E3[2]) + f_E1_tmp * E3[6]) + b_E1_tmp * E3[2])
                      + d_E1_tmp * E3[5]) + t31 * E3[5]) + k_E1_tmp * E3[2]) +
                   c_E1_tmp * E3[4]) + h_E1_tmp * E3[8]) + t32 * E3[8]) +
                e_E1_tmp * E3[2]) + g_E1_tmp * E3[7]) + 2.0 * E1[5] * E3[2] *
              E3[5]) + 2.0 * E1[8] * E3[2] * E3[8];
    l_E1_tmp = 2.0 * E1[6] * E3[3];
    o_E1_tmp = 2.0 * E1[0] * E3[1];
    p_E1_tmp = 2.0 * E1[0] * E3[2];
    C3[74] = (((((((((((((((((((((((((((E1[3] * t20 + E1[3] * t21 * 3.0) + E1[3]
      * t22) - E1[3] * t23) + E1[3] * t24) - E1[3] * t25) - E1[3] * t26) + E1[3]
      * t27) - E1[3] * t28) + gb_E1_tmp * E3[3]) + l_E1_tmp * E3[6]) + o_E1_tmp *
      E3[4]) + t16 * E3[4]) + -2.0 * E1[1] * E3[3] * E3[1]) + t33 * E3[1]) + t17
                          * E3[4]) + 2.0 * E1[6] * E3[4] * E3[7]) + 2.0 * E1[4] *
                        E3[6] * E3[7]) + -2.0 * E1[7] * E3[3] * E3[7]) + t18 *
                      E3[4]) + p_E1_tmp * E3[5]) + kb_E1_tmp * E3[5]) + -2.0 *
                   E1[2] * E3[3] * E3[2]) + E1_tmp * E3[2]) + t19 * E3[5]) + 2.0
                * E1[6] * E3[5] * E3[8]) + 2.0 * E1[5] * E3[6] * E3[8]) + -2.0 *
              E1[8] * E3[3] * E3[8]) + t29 * E3[5];
    t33 = -2.0 * E1[0] * E3[0];
    E1_tmp = 2.0 * E1[3] * E3[3];
    u_E1_tmp = 2.0 * E1[3] * E3[6];
    v_E1_tmp = 2.0 * E1[7] * E3[4];
    y_E1_tmp = 2.0 * E1[7] * E3[3];
    ab_E1_tmp = 2.0 * E1[1] * E3[2];
    C3[75] = (((((((((((((((((((((((((((-E1[4] * t20 + E1[4] * t21) - E1[4] *
      t22) + E1[4] * t23) + E1[4] * t24 * 3.0) + E1[4] * t25) - E1[4] * t26) +
      E1[4] * t27) - E1[4] * t28) + t33 * E3[4]) + jb_E1_tmp * E3[1]) + t14 *
      E3[1]) + t16 * E3[3]) + E1_tmp * E3[4]) + u_E1_tmp * E3[7]) + l_E1_tmp *
                          E3[7]) + t30 * E3[4]) + y_E1_tmp * E3[6]) + b_E1_tmp *
                       E3[4]) + v_E1_tmp * E3[7]) + ab_E1_tmp * E3[5]) + t34 *
                    E3[5]) + -2.0 * E1[2] * E3[4] * E3[2]) + c_E1_tmp * E3[2]) +
                 t35 * E3[5]) + 2.0 * E1[7] * E3[5] * E3[8]) + 2.0 * E1[5] * E3
               [7] * E3[8]) + -2.0 * E1[8] * E3[4] * E3[8]) + t36 * E3[5];
    c_E1_tmp = 2.0 * E1[8] * E3[3];
    bb_E1_tmp = 2.0 * E1[4] * E3[4];
    cb_E1_tmp = 2.0 * E1[8] * E3[4];
    db_E1_tmp = -2.0 * E1[1] * E3[1];
    eb_E1_tmp = 2.0 * E1[4] * E3[7];
    fb_E1_tmp = 2.0 * E1[2] * E3[2];
    C3[76] = (((((((((((((((((((((((((((-E1[5] * t20 + E1[5] * t21) - E1[5] *
      t22) - E1[5] * t23) + E1[5] * t24) - E1[5] * t25) + E1[5] * t26) + E1[5] *
      t27 * 3.0) + E1[5] * t28) + t33 * E3[5]) + jb_E1_tmp * E3[2]) + t14 * E3[2])
      + kb_E1_tmp * E3[3]) + E1_tmp * E3[5]) + u_E1_tmp * E3[8]) + l_E1_tmp *
                          E3[8]) + t30 * E3[5]) + c_E1_tmp * E3[6]) + db_E1_tmp *
                       E3[5]) + d_E1_tmp * E3[2]) + t31 * E3[2]) + t34 * E3[4])
                   + bb_E1_tmp * E3[5]) + eb_E1_tmp * E3[8]) + v_E1_tmp * E3[8])
                + e_E1_tmp * E3[5]) + cb_E1_tmp * E3[7]) + fb_E1_tmp * E3[5]) +
      2.0 * E1[8] * E3[5] * E3[8];
    C3[77] = (((((((((((((((((((((((((((E1[6] * t20 + E1[6] * t21) + E1[6] * t22
      * 3.0) - E1[6] * t23) - E1[6] * t24) + E1[6] * t25) - E1[6] * t26) - E1[6]
      * t27) + E1[6] * t28) + gb_E1_tmp * E3[6]) + E1_tmp * E3[6]) + o_E1_tmp *
      E3[7]) + t16 * E3[7]) + -2.0 * E1[1] * E3[6] * E3[1]) + t37 * E3[1]) + 2.0
                          * E1[3] * E3[4] * E3[7]) + t17 * E3[7]) + -2.0 * E1[4]
                        * E3[6] * E3[4]) + y_E1_tmp * E3[4]) + t18 * E3[7]) +
                     p_E1_tmp * E3[8]) + kb_E1_tmp * E3[8]) + -2.0 * E1[2] * E3
                   [6] * E3[2]) + f_E1_tmp * E3[2]) + 2.0 * E1[3] * E3[5] * E3[8])
                + t19 * E3[8]) + -2.0 * E1[5] * E3[6] * E3[5]) + c_E1_tmp * E3[5])
      + t29 * E3[8];
    t14 = 2.0 * E1[6] * E3[6];
    C3[78] = (((((((((((((((((((((((((((-E1[7] * t20 - E1[7] * t21) + E1[7] *
      t22) + E1[7] * t23) + E1[7] * t24) + E1[7] * t25 * 3.0) - E1[7] * t26) -
      E1[7] * t27) + E1[7] * t28) + t33 * E3[7]) + mb_E1_tmp * E3[1]) + t15 *
      E3[1]) + t16 * E3[6]) + lb_E1_tmp * E3[7]) + u_E1_tmp * E3[4]) + l_E1_tmp *
                          E3[4]) + t17 * E3[6]) + t14 * E3[7]) + b_E1_tmp * E3[7])
                      + bb_E1_tmp * E3[7]) + ab_E1_tmp * E3[8]) + t34 * E3[8]) +
                   -2.0 * E1[2] * E3[7] * E3[2]) + g_E1_tmp * E3[2]) + 2.0 * E1
                 [4] * E3[5] * E3[8]) + t35 * E3[8]) + -2.0 * E1[5] * E3[7] *
               E3[5]) + cb_E1_tmp * E3[5]) + t36 * E3[8];
    C3[79] = (((((((((((((((((((((((((((-E1[8] * t20 - E1[8] * t21) + E1[8] *
      t22) - E1[8] * t23) - E1[8] * t24) + E1[8] * t25) + E1[8] * t26) + E1[8] *
      t27) + E1[8] * t28 * 3.0) + t33 * E3[8]) + mb_E1_tmp * E3[2]) + t15 * E3[2])
      + kb_E1_tmp * E3[6]) + lb_E1_tmp * E3[8]) + u_E1_tmp * E3[5]) + l_E1_tmp *
                          E3[5]) + t19 * E3[6]) + t14 * E3[8]) + db_E1_tmp * E3
                       [8]) + h_E1_tmp * E3[2]) + t32 * E3[2]) + t34 * E3[7]) +
                   k_E1_tmp * E3[8]) + eb_E1_tmp * E3[5]) + v_E1_tmp * E3[5]) +
                t35 * E3[7]) + 2.0 * E1[7] * E3[7] * E3[8]) + fb_E1_tmp * E3[8])
      + 2.0 * E1[5] * E3[5] * E3[8];
    C3[80] = ((((((((((((((((i_E1_tmp * E3[8] - q_E1_tmp * E3[5]) - j_E1_tmp *
      E3[8]) + rb_E1_tmp * E3[2]) + r_E1_tmp * E3[5]) - sb_E1_tmp * E3[2]) -
                        m_E1_tmp * E3[8]) + s_E1_tmp * E3[5]) + n_E1_tmp * E3[8])
                     - tb_E1_tmp * E3[2]) - t_E1_tmp * E3[5]) + ub_E1_tmp * E3[2])
                  + w_E1_tmp * E3[7]) - hb_E1_tmp * E3[4]) - x_E1_tmp * E3[7]) +
               xb_E1_tmp * E3[1]) + ib_E1_tmp * E3[4]) - yb_E1_tmp * E3[1];
    t14 = 2.0 * E2[3] * E3[0];
    t15 = 2.0 * E2[6] * E3[0];
    t16 = 2.0 * E2[1] * E3[0];
    t17 = 2.0 * E2[4] * E3[3];
    t18 = 2.0 * E2[7] * E3[6];
    kb_E1_tmp = 2.0 * E2[2] * E3[0];
    t19 = 2.0 * E2[5] * E3[3];
    t29 = 2.0 * E2[8] * E3[6];
    C3[81] = (((((((((((((((((((((((((((E2[0] * t20 * 3.0 + E2[0] * t21) + E2[0]
      * t22) + E2[0] * t23) - E2[0] * t24) - E2[0] * t25) + E2[0] * t26) - E2[0]
      * t27) - E2[0] * t28) + t14 * E3[3]) + t15 * E3[6]) + t16 * E3[1]) + 2.0 *
      E2[3] * E3[1] * E3[4]) + 2.0 * E2[1] * E3[3] * E3[4]) + -2.0 * E2[4] * E3
      [0] * E3[4]) + t17 * E3[1]) + 2.0 * E2[6] * E3[1] * E3[7]) + 2.0 * E2[1] *
                        E3[6] * E3[7]) + -2.0 * E2[7] * E3[0] * E3[7]) + t18 *
                      E3[1]) + kb_E1_tmp * E3[2]) + 2.0 * E2[3] * E3[2] * E3[5])
                   + 2.0 * E2[2] * E3[3] * E3[5]) + -2.0 * E2[5] * E3[0] * E3[5])
                 + t19 * E3[2]) + 2.0 * E2[6] * E3[2] * E3[8]) + 2.0 * E2[2] *
               E3[6] * E3[8]) + -2.0 * E2[8] * E3[0] * E3[8]) + t29 * E3[2];
    gb_E1_tmp = 2.0 * E2[0] * E3[0];
    jb_E1_tmp = 2.0 * E2[0] * E3[3];
    lb_E1_tmp = -2.0 * E2[3] * E3[3];
    mb_E1_tmp = 2.0 * E2[0] * E3[6];
    t30 = -2.0 * E2[6] * E3[6];
    t31 = 2.0 * E2[4] * E3[1];
    t32 = 2.0 * E2[7] * E3[1];
    t33 = 2.0 * E2[4] * E3[0];
    t34 = 2.0 * E2[2] * E3[1];
    t35 = 2.0 * E2[5] * E3[4];
    t36 = 2.0 * E2[8] * E3[7];
    t37 = 2.0 * E2[7] * E3[0];
    C3[82] = (((((((((((((((((((((((((((E2[1] * t20 - E2[1] * t21) - E2[1] * t22)
      + E2[1] * t23 * 3.0) + E2[1] * t24) + E2[1] * t25) + E2[1] * t26) - E2[1] *
      t27) - E2[1] * t28) + gb_E1_tmp * E3[1]) + jb_E1_tmp * E3[4]) + t14 * E3[4])
      + lb_E1_tmp * E3[1]) + t33 * E3[3]) + mb_E1_tmp * E3[7]) + t15 * E3[7]) +
                         t30 * E3[1]) + t37 * E3[6]) + t31 * E3[4]) + t32 * E3[7])
                     + t34 * E3[2]) + 2.0 * E2[4] * E3[2] * E3[5]) + 2.0 * E2[2]
                   * E3[4] * E3[5]) + -2.0 * E2[5] * E3[1] * E3[5]) + t35 * E3[2])
                + 2.0 * E2[7] * E3[2] * E3[8]) + 2.0 * E2[2] * E3[7] * E3[8]) +
              -2.0 * E2[8] * E3[1] * E3[8]) + t36 * E3[2];
    E1_tmp = 2.0 * E2[5] * E3[0];
    b_E1_tmp = 2.0 * E2[1] * E3[1];
    c_E1_tmp = 2.0 * E2[5] * E3[1];
    d_E1_tmp = 2.0 * E2[1] * E3[4];
    e_E1_tmp = -2.0 * E2[7] * E3[7];
    f_E1_tmp = 2.0 * E2[8] * E3[0];
    g_E1_tmp = 2.0 * E2[8] * E3[1];
    h_E1_tmp = 2.0 * E2[1] * E3[7];
    k_E1_tmp = -2.0 * E2[4] * E3[4];
    C3[83] = (((((((((((((((((((((((((((E2[2] * t20 - E2[2] * t21) - E2[2] * t22)
      + E2[2] * t23) - E2[2] * t24) - E2[2] * t25) + E2[2] * t26 * 3.0) + E2[2] *
      t27) + E2[2] * t28) + gb_E1_tmp * E3[2]) + jb_E1_tmp * E3[5]) + t14 * E3[5])
      + lb_E1_tmp * E3[2]) + E1_tmp * E3[3]) + mb_E1_tmp * E3[8]) + t15 * E3[8])
                         + t30 * E3[2]) + f_E1_tmp * E3[6]) + b_E1_tmp * E3[2])
                      + d_E1_tmp * E3[5]) + t31 * E3[5]) + k_E1_tmp * E3[2]) +
                   c_E1_tmp * E3[4]) + h_E1_tmp * E3[8]) + t32 * E3[8]) +
                e_E1_tmp * E3[2]) + g_E1_tmp * E3[7]) + 2.0 * E2[5] * E3[2] *
              E3[5]) + 2.0 * E2[8] * E3[2] * E3[8];
    l_E1_tmp = 2.0 * E2[6] * E3[3];
    o_E1_tmp = 2.0 * E2[0] * E3[1];
    p_E1_tmp = 2.0 * E2[0] * E3[2];
    C3[84] = (((((((((((((((((((((((((((E2[3] * t20 + E2[3] * t21 * 3.0) + E2[3]
      * t22) - E2[3] * t23) + E2[3] * t24) - E2[3] * t25) - E2[3] * t26) + E2[3]
      * t27) - E2[3] * t28) + gb_E1_tmp * E3[3]) + l_E1_tmp * E3[6]) + o_E1_tmp *
      E3[4]) + t16 * E3[4]) + -2.0 * E2[1] * E3[3] * E3[1]) + t33 * E3[1]) + t17
                          * E3[4]) + 2.0 * E2[6] * E3[4] * E3[7]) + 2.0 * E2[4] *
                        E3[6] * E3[7]) + -2.0 * E2[7] * E3[3] * E3[7]) + t18 *
                      E3[4]) + p_E1_tmp * E3[5]) + kb_E1_tmp * E3[5]) + -2.0 *
                   E2[2] * E3[3] * E3[2]) + E1_tmp * E3[2]) + t19 * E3[5]) + 2.0
                * E2[6] * E3[5] * E3[8]) + 2.0 * E2[5] * E3[6] * E3[8]) + -2.0 *
              E2[8] * E3[3] * E3[8]) + t29 * E3[5];
    t33 = -2.0 * E2[0] * E3[0];
    E1_tmp = 2.0 * E2[3] * E3[3];
    u_E1_tmp = 2.0 * E2[3] * E3[6];
    v_E1_tmp = 2.0 * E2[7] * E3[4];
    y_E1_tmp = 2.0 * E2[7] * E3[3];
    ab_E1_tmp = 2.0 * E2[1] * E3[2];
    C3[85] = (((((((((((((((((((((((((((-E2[4] * t20 + E2[4] * t21) - E2[4] *
      t22) + E2[4] * t23) + E2[4] * t24 * 3.0) + E2[4] * t25) - E2[4] * t26) +
      E2[4] * t27) - E2[4] * t28) + t33 * E3[4]) + jb_E1_tmp * E3[1]) + t14 *
      E3[1]) + t16 * E3[3]) + E1_tmp * E3[4]) + u_E1_tmp * E3[7]) + l_E1_tmp *
                          E3[7]) + t30 * E3[4]) + y_E1_tmp * E3[6]) + b_E1_tmp *
                       E3[4]) + v_E1_tmp * E3[7]) + ab_E1_tmp * E3[5]) + t34 *
                    E3[5]) + -2.0 * E2[2] * E3[4] * E3[2]) + c_E1_tmp * E3[2]) +
                 t35 * E3[5]) + 2.0 * E2[7] * E3[5] * E3[8]) + 2.0 * E2[5] * E3
               [7] * E3[8]) + -2.0 * E2[8] * E3[4] * E3[8]) + t36 * E3[5];
    c_E1_tmp = 2.0 * E2[8] * E3[3];
    bb_E1_tmp = 2.0 * E2[4] * E3[4];
    cb_E1_tmp = 2.0 * E2[8] * E3[4];
    db_E1_tmp = -2.0 * E2[1] * E3[1];
    eb_E1_tmp = 2.0 * E2[4] * E3[7];
    fb_E1_tmp = 2.0 * E2[2] * E3[2];
    C3[86] = (((((((((((((((((((((((((((-E2[5] * t20 + E2[5] * t21) - E2[5] *
      t22) - E2[5] * t23) + E2[5] * t24) - E2[5] * t25) + E2[5] * t26) + E2[5] *
      t27 * 3.0) + E2[5] * t28) + t33 * E3[5]) + jb_E1_tmp * E3[2]) + t14 * E3[2])
      + kb_E1_tmp * E3[3]) + E1_tmp * E3[5]) + u_E1_tmp * E3[8]) + l_E1_tmp *
                          E3[8]) + t30 * E3[5]) + c_E1_tmp * E3[6]) + db_E1_tmp *
                       E3[5]) + d_E1_tmp * E3[2]) + t31 * E3[2]) + t34 * E3[4])
                   + bb_E1_tmp * E3[5]) + eb_E1_tmp * E3[8]) + v_E1_tmp * E3[8])
                + e_E1_tmp * E3[5]) + cb_E1_tmp * E3[7]) + fb_E1_tmp * E3[5]) +
      2.0 * E2[8] * E3[5] * E3[8];
    C3[87] = (((((((((((((((((((((((((((E2[6] * t20 + E2[6] * t21) + E2[6] * t22
      * 3.0) - E2[6] * t23) - E2[6] * t24) + E2[6] * t25) - E2[6] * t26) - E2[6]
      * t27) + E2[6] * t28) + gb_E1_tmp * E3[6]) + E1_tmp * E3[6]) + o_E1_tmp *
      E3[7]) + t16 * E3[7]) + -2.0 * E2[1] * E3[6] * E3[1]) + t37 * E3[1]) + 2.0
                          * E2[3] * E3[4] * E3[7]) + t17 * E3[7]) + -2.0 * E2[4]
                        * E3[6] * E3[4]) + y_E1_tmp * E3[4]) + t18 * E3[7]) +
                     p_E1_tmp * E3[8]) + kb_E1_tmp * E3[8]) + -2.0 * E2[2] * E3
                   [6] * E3[2]) + f_E1_tmp * E3[2]) + 2.0 * E2[3] * E3[5] * E3[8])
                + t19 * E3[8]) + -2.0 * E2[5] * E3[6] * E3[5]) + c_E1_tmp * E3[5])
      + t29 * E3[8];
    t14 = 2.0 * E2[6] * E3[6];
    C3[88] = (((((((((((((((((((((((((((-E2[7] * t20 - E2[7] * t21) + E2[7] *
      t22) + E2[7] * t23) + E2[7] * t24) + E2[7] * t25 * 3.0) - E2[7] * t26) -
      E2[7] * t27) + E2[7] * t28) + t33 * E3[7]) + mb_E1_tmp * E3[1]) + t15 *
      E3[1]) + t16 * E3[6]) + lb_E1_tmp * E3[7]) + u_E1_tmp * E3[4]) + l_E1_tmp *
                          E3[4]) + t17 * E3[6]) + t14 * E3[7]) + b_E1_tmp * E3[7])
                      + bb_E1_tmp * E3[7]) + ab_E1_tmp * E3[8]) + t34 * E3[8]) +
                   -2.0 * E2[2] * E3[7] * E3[2]) + g_E1_tmp * E3[2]) + 2.0 * E2
                 [4] * E3[5] * E3[8]) + t35 * E3[8]) + -2.0 * E2[5] * E3[7] *
               E3[5]) + cb_E1_tmp * E3[5]) + t36 * E3[8];
    C3[89] = (((((((((((((((((((((((((((-E2[8] * t20 - E2[8] * t21) + E2[8] *
      t22) - E2[8] * t23) - E2[8] * t24) + E2[8] * t25) + E2[8] * t26) + E2[8] *
      t27) + E2[8] * t28 * 3.0) + t33 * E3[8]) + mb_E1_tmp * E3[2]) + t15 * E3[2])
      + kb_E1_tmp * E3[6]) + lb_E1_tmp * E3[8]) + u_E1_tmp * E3[5]) + l_E1_tmp *
                          E3[5]) + t19 * E3[6]) + t14 * E3[8]) + db_E1_tmp * E3
                       [8]) + h_E1_tmp * E3[2]) + t32 * E3[2]) + t34 * E3[7]) +
                   k_E1_tmp * E3[8]) + eb_E1_tmp * E3[5]) + v_E1_tmp * E3[5]) +
                t35 * E3[7]) + 2.0 * E2[7] * E3[7] * E3[8]) + fb_E1_tmp * E3[8])
      + 2.0 * E2[5] * E3[5] * E3[8];
    t14 = E3[0] * E3[4];
    t15 = E3[0] * E3[7];
    t16 = E3[1] * E3[3];
    t17 = E3[3] * E3[7];
    t18 = E3[1] * E3[6];
    kb_E1_tmp = E3[4] * E3[6];
    t19 = E3[2] * E3[3];
    t29 = E3[2] * E3[6];
    gb_E1_tmp = E3[2] * E3[4];
    jb_E1_tmp = E3[2] * E3[7];
    lb_E1_tmp = E3[5] * E3[6];
    mb_E1_tmp = E3[5] * E3[7];
    C3[90] = ((((((((((((((((t14 * E4[8] - t15 * E4[5]) - E3[0] * E3[5] * E4[7])
      + E3[0] * E3[8] * E4[4]) - t16 * E4[8]) + t17 * E4[2]) + t19 * E4[7]) -
                       E3[3] * E3[8] * E4[1]) + t18 * E4[5]) - kb_E1_tmp * E4[2])
                    - t29 * E4[4]) + lb_E1_tmp * E4[1]) + E3[1] * E3[5] * E4[6])
                 - E3[1] * E3[8] * E4[3]) - gb_E1_tmp * E4[6]) + E3[4] * E3[8] *
               E4[0]) + jb_E1_tmp * E4[3]) - mb_E1_tmp * E4[0];
    t30 = 2.0 * E4[3] * E3[0];
    t31 = 2.0 * E4[6] * E3[0];
    t32 = 2.0 * E4[1] * E3[0];
    t33 = 2.0 * E4[4] * E3[3];
    t34 = 2.0 * E4[7] * E3[6];
    t35 = 2.0 * E4[2] * E3[0];
    t36 = 2.0 * E4[5] * E3[3];
    t37 = 2.0 * E4[8] * E3[6];
    C3[91] = (((((((((((((((((((((((((((E4[0] * t20 * 3.0 + E4[0] * t21) + E4[0]
      * t22) + E4[0] * t23) - E4[0] * t24) - E4[0] * t25) + E4[0] * t26) - E4[0]
      * t27) - E4[0] * t28) + t30 * E3[3]) + t31 * E3[6]) + t32 * E3[1]) + 2.0 *
      E4[3] * E3[1] * E3[4]) + 2.0 * E4[1] * E3[3] * E3[4]) + -2.0 * E4[4] * E3
      [0] * E3[4]) + t33 * E3[1]) + 2.0 * E4[6] * E3[1] * E3[7]) + 2.0 * E4[1] *
                        E3[6] * E3[7]) + -2.0 * E4[7] * E3[0] * E3[7]) + t34 *
                      E3[1]) + t35 * E3[2]) + 2.0 * E4[3] * E3[2] * E3[5]) + 2.0
                   * E4[2] * E3[3] * E3[5]) + -2.0 * E4[5] * E3[0] * E3[5]) +
                 t36 * E3[2]) + 2.0 * E4[6] * E3[2] * E3[8]) + 2.0 * E4[2] * E3
               [6] * E3[8]) + -2.0 * E4[8] * E3[0] * E3[8]) + t37 * E3[2];
    E1_tmp = 2.0 * E4[0] * E3[0];
    b_E1_tmp = 2.0 * E4[0] * E3[3];
    c_E1_tmp = -2.0 * E4[3] * E3[3];
    d_E1_tmp = 2.0 * E4[0] * E3[6];
    e_E1_tmp = -2.0 * E4[6] * E3[6];
    f_E1_tmp = 2.0 * E4[4] * E3[1];
    g_E1_tmp = 2.0 * E4[7] * E3[1];
    h_E1_tmp = 2.0 * E4[4] * E3[0];
    k_E1_tmp = 2.0 * E4[2] * E3[1];
    l_E1_tmp = 2.0 * E4[5] * E3[4];
    o_E1_tmp = 2.0 * E4[8] * E3[7];
    p_E1_tmp = 2.0 * E4[7] * E3[0];
    C3[92] = (((((((((((((((((((((((((((E4[1] * t20 - E4[1] * t21) - E4[1] * t22)
      + E4[1] * t23 * 3.0) + E4[1] * t24) + E4[1] * t25) + E4[1] * t26) - E4[1] *
      t27) - E4[1] * t28) + E1_tmp * E3[1]) + b_E1_tmp * E3[4]) + t30 * E3[4]) +
      c_E1_tmp * E3[1]) + h_E1_tmp * E3[3]) + d_E1_tmp * E3[7]) + t31 * E3[7]) +
                         e_E1_tmp * E3[1]) + p_E1_tmp * E3[6]) + f_E1_tmp * E3[4])
                      + g_E1_tmp * E3[7]) + k_E1_tmp * E3[2]) + 2.0 * E4[4] *
                    E3[2] * E3[5]) + 2.0 * E4[2] * E3[4] * E3[5]) + -2.0 * E4[5]
                  * E3[1] * E3[5]) + l_E1_tmp * E3[2]) + 2.0 * E4[7] * E3[2] *
                E3[8]) + 2.0 * E4[2] * E3[7] * E3[8]) + -2.0 * E4[8] * E3[1] *
              E3[8]) + o_E1_tmp * E3[2];
    u_E1_tmp = 2.0 * E4[5] * E3[0];
    v_E1_tmp = 2.0 * E4[1] * E3[1];
    y_E1_tmp = 2.0 * E4[5] * E3[1];
    ab_E1_tmp = 2.0 * E4[1] * E3[4];
    bb_E1_tmp = -2.0 * E4[7] * E3[7];
    cb_E1_tmp = 2.0 * E4[8] * E3[0];
    db_E1_tmp = 2.0 * E4[8] * E3[1];
    eb_E1_tmp = 2.0 * E4[1] * E3[7];
    fb_E1_tmp = -2.0 * E4[4] * E3[4];
    C3[93] = (((((((((((((((((((((((((((E4[2] * t20 - E4[2] * t21) - E4[2] * t22)
      + E4[2] * t23) - E4[2] * t24) - E4[2] * t25) + E4[2] * t26 * 3.0) + E4[2] *
      t27) + E4[2] * t28) + E1_tmp * E3[2]) + b_E1_tmp * E3[5]) + t30 * E3[5]) +
      c_E1_tmp * E3[2]) + u_E1_tmp * E3[3]) + d_E1_tmp * E3[8]) + t31 * E3[8]) +
                         e_E1_tmp * E3[2]) + cb_E1_tmp * E3[6]) + v_E1_tmp * E3
                       [2]) + ab_E1_tmp * E3[5]) + f_E1_tmp * E3[5]) + fb_E1_tmp
                    * E3[2]) + y_E1_tmp * E3[4]) + eb_E1_tmp * E3[8]) + g_E1_tmp
                 * E3[8]) + bb_E1_tmp * E3[2]) + db_E1_tmp * E3[7]) + 2.0 * E4[5]
              * E3[2] * E3[5]) + 2.0 * E4[8] * E3[2] * E3[8];
    t2 = 2.0 * E4[6] * E3[3];
    t3 = 2.0 * E4[0] * E3[1];
    t4 = 2.0 * E4[0] * E3[2];
    C3[94] = (((((((((((((((((((((((((((E4[3] * t20 + E4[3] * t21 * 3.0) + E4[3]
      * t22) - E4[3] * t23) + E4[3] * t24) - E4[3] * t25) - E4[3] * t26) + E4[3]
      * t27) - E4[3] * t28) + E1_tmp * E3[3]) + t2 * E3[6]) + t3 * E3[4]) + t32 *
      E3[4]) + -2.0 * E4[1] * E3[3] * E3[1]) + h_E1_tmp * E3[1]) + t33 * E3[4])
                         + 2.0 * E4[6] * E3[4] * E3[7]) + 2.0 * E4[4] * E3[6] *
                        E3[7]) + -2.0 * E4[7] * E3[3] * E3[7]) + t34 * E3[4]) +
                     t4 * E3[5]) + t35 * E3[5]) + -2.0 * E4[2] * E3[3] * E3[2])
                  + u_E1_tmp * E3[2]) + t36 * E3[5]) + 2.0 * E4[6] * E3[5] * E3
                [8]) + 2.0 * E4[5] * E3[6] * E3[8]) + -2.0 * E4[8] * E3[3] * E3
              [8]) + t37 * E3[5];
    h_E1_tmp = -2.0 * E4[0] * E3[0];
    u_E1_tmp = 2.0 * E4[3] * E3[3];
    t5 = 2.0 * E4[3] * E3[6];
    t6 = 2.0 * E4[7] * E3[4];
    t7 = 2.0 * E4[7] * E3[3];
    t8 = 2.0 * E4[1] * E3[2];
    C3[95] = (((((((((((((((((((((((((((-E4[4] * t20 + E4[4] * t21) - E4[4] *
      t22) + E4[4] * t23) + E4[4] * t24 * 3.0) + E4[4] * t25) - E4[4] * t26) +
      E4[4] * t27) - E4[4] * t28) + h_E1_tmp * E3[4]) + b_E1_tmp * E3[1]) + t30 *
      E3[1]) + t32 * E3[3]) + u_E1_tmp * E3[4]) + t5 * E3[7]) + t2 * E3[7]) +
                         e_E1_tmp * E3[4]) + t7 * E3[6]) + v_E1_tmp * E3[4]) +
                      t6 * E3[7]) + t8 * E3[5]) + k_E1_tmp * E3[5]) + -2.0 * E4
                   [2] * E3[4] * E3[2]) + y_E1_tmp * E3[2]) + l_E1_tmp * E3[5])
                + 2.0 * E4[7] * E3[5] * E3[8]) + 2.0 * E4[5] * E3[7] * E3[8]) +
              -2.0 * E4[8] * E3[4] * E3[8]) + o_E1_tmp * E3[5];
    y_E1_tmp = 2.0 * E4[8] * E3[3];
    t9 = 2.0 * E4[4] * E3[4];
    t10 = 2.0 * E4[8] * E3[4];
    t11 = -2.0 * E4[1] * E3[1];
    t12 = 2.0 * E4[4] * E3[7];
    t13 = 2.0 * E4[2] * E3[2];
    C3[96] = (((((((((((((((((((((((((((-E4[5] * t20 + E4[5] * t21) - E4[5] *
      t22) - E4[5] * t23) + E4[5] * t24) - E4[5] * t25) + E4[5] * t26) + E4[5] *
      t27 * 3.0) + E4[5] * t28) + h_E1_tmp * E3[5]) + b_E1_tmp * E3[2]) + t30 *
      E3[2]) + t35 * E3[3]) + u_E1_tmp * E3[5]) + t5 * E3[8]) + t2 * E3[8]) +
                         e_E1_tmp * E3[5]) + y_E1_tmp * E3[6]) + t11 * E3[5]) +
                      ab_E1_tmp * E3[2]) + f_E1_tmp * E3[2]) + k_E1_tmp * E3[4])
                   + t9 * E3[5]) + t12 * E3[8]) + t6 * E3[8]) + bb_E1_tmp * E3[5])
               + t10 * E3[7]) + t13 * E3[5]) + 2.0 * E4[8] * E3[5] * E3[8];
    C3[97] = (((((((((((((((((((((((((((E4[6] * t20 + E4[6] * t21) + E4[6] * t22
      * 3.0) - E4[6] * t23) - E4[6] * t24) + E4[6] * t25) - E4[6] * t26) - E4[6]
      * t27) + E4[6] * t28) + E1_tmp * E3[6]) + u_E1_tmp * E3[6]) + t3 * E3[7])
      + t32 * E3[7]) + -2.0 * E4[1] * E3[6] * E3[1]) + p_E1_tmp * E3[1]) + 2.0 *
                          E4[3] * E3[4] * E3[7]) + t33 * E3[7]) + -2.0 * E4[4] *
                        E3[6] * E3[4]) + t7 * E3[4]) + t34 * E3[7]) + t4 * E3[8])
                    + t35 * E3[8]) + -2.0 * E4[2] * E3[6] * E3[2]) + cb_E1_tmp *
                  E3[2]) + 2.0 * E4[3] * E3[5] * E3[8]) + t36 * E3[8]) + -2.0 *
               E4[5] * E3[6] * E3[5]) + y_E1_tmp * E3[5]) + t37 * E3[8];
    t30 = 2.0 * E4[6] * E3[6];
    C3[98] = (((((((((((((((((((((((((((-E4[7] * t20 - E4[7] * t21) + E4[7] *
      t22) + E4[7] * t23) + E4[7] * t24) + E4[7] * t25 * 3.0) - E4[7] * t26) -
      E4[7] * t27) + E4[7] * t28) + h_E1_tmp * E3[7]) + d_E1_tmp * E3[1]) + t31 *
      E3[1]) + t32 * E3[6]) + c_E1_tmp * E3[7]) + t5 * E3[4]) + t2 * E3[4]) +
                         t33 * E3[6]) + t30 * E3[7]) + v_E1_tmp * E3[7]) + t9 *
                      E3[7]) + t8 * E3[8]) + k_E1_tmp * E3[8]) + -2.0 * E4[2] *
                   E3[7] * E3[2]) + db_E1_tmp * E3[2]) + 2.0 * E4[4] * E3[5] *
                 E3[8]) + l_E1_tmp * E3[8]) + -2.0 * E4[5] * E3[7] * E3[5]) +
              t10 * E3[5]) + o_E1_tmp * E3[8];
    C3[99] = (((((((((((((((((((((((((((-E4[8] * t20 - E4[8] * t21) + E4[8] *
      t22) - E4[8] * t23) - E4[8] * t24) + E4[8] * t25) + E4[8] * t26) + E4[8] *
      t27) + E4[8] * t28 * 3.0) + h_E1_tmp * E3[8]) + d_E1_tmp * E3[2]) + t31 *
      E3[2]) + t35 * E3[6]) + c_E1_tmp * E3[8]) + t5 * E3[5]) + t2 * E3[5]) +
                         t36 * E3[6]) + t30 * E3[8]) + t11 * E3[8]) + eb_E1_tmp *
                      E3[2]) + g_E1_tmp * E3[2]) + k_E1_tmp * E3[7]) + fb_E1_tmp
                   * E3[8]) + t12 * E3[5]) + t6 * E3[5]) + l_E1_tmp * E3[7]) +
               2.0 * E4[7] * E3[7] * E3[8]) + t13 * E3[8]) + 2.0 * E4[5] * E3[5]
      * E3[8];
    std::memset(&C4[0], 0, 90U * sizeof(real_T));
    C4[90] = ((((t14 * E3[8] - t15 * E3[5]) - t16 * E3[8]) + t17 * E3[2]) + t18 *
              E3[5]) - kb_E1_tmp * E3[2];
    C4[91] = (((((((((((E3[0] * t21 + E3[0] * t22) + E3[0] * t23) - E3[0] * t24)
                     - E3[0] * t25) + E3[0] * t26) - E3[0] * t27) - E3[0] * t28)
                 + muDoubleScalarPower(E3[0], 3.0)) + t16 * E3[4] * 2.0) + t18 *
               E3[7] * 2.0) + t19 * E3[5] * 2.0) + t29 * E3[8] * 2.0;
    t9 = E3[0] * E3[3];
    t10 = E3[0] * E3[6];
    C4[92] = (((((((((((E3[1] * t20 - E3[1] * t21) - E3[1] * t22) + E3[1] * t24)
                     + E3[1] * t25) + E3[1] * t26) - E3[1] * t27) - E3[1] * t28)
                 + muDoubleScalarPower(E3[1], 3.0)) + t9 * E3[4] * 2.0) + t10 *
               E3[7] * 2.0) + gb_E1_tmp * E3[5] * 2.0) + jb_E1_tmp * E3[8] * 2.0;
    t5 = E3[1] * E3[4];
    t6 = E3[1] * E3[7];
    C4[93] = (((((((((((E3[2] * t20 - E3[2] * t21) - E3[2] * t22) + E3[2] * t23)
                     - E3[2] * t24) - E3[2] * t25) + E3[2] * t27) + E3[2] * t28)
                 + muDoubleScalarPower(E3[2], 3.0)) + t9 * E3[5] * 2.0) + t10 *
               E3[8] * 2.0) + t5 * E3[5] * 2.0) + t6 * E3[8] * 2.0;
    t7 = E3[0] * E3[1];
    t8 = E3[0] * E3[2];
    C4[94] = (((((((((((E3[3] * t20 + E3[3] * t22) - E3[3] * t23) + E3[3] * t24)
                     - E3[3] * t25) - E3[3] * t26) + E3[3] * t27) - E3[3] * t28)
                 + muDoubleScalarPower(E3[3], 3.0)) + t7 * E3[4] * 2.0) +
               kb_E1_tmp * E3[7] * 2.0) + t8 * E3[5] * 2.0) + lb_E1_tmp * E3[8] *
      2.0;
    t3 = E3[3] * E3[6];
    t4 = E3[1] * E3[2];
    C4[95] = (((((((((((-E3[4] * t20 + E3[4] * t21) - E3[4] * t22) + E3[4] * t23)
                     + E3[4] * t25) - E3[4] * t26) + E3[4] * t27) - E3[4] * t28)
                 + muDoubleScalarPower(E3[4], 3.0)) + t9 * E3[1] * 2.0) + t3 *
               E3[7] * 2.0) + t4 * E3[5] * 2.0) + mb_E1_tmp * E3[8] * 2.0;
    t2 = E3[4] * E3[7];
    C4[96] = (((((((((((-E3[5] * t20 + E3[5] * t21) - E3[5] * t22) - E3[5] * t23)
                     + E3[5] * t24) - E3[5] * t25) + E3[5] * t26) + E3[5] * t28)
                 + muDoubleScalarPower(E3[5], 3.0)) + t9 * E3[2] * 2.0) + t3 *
               E3[8] * 2.0) + t5 * E3[2] * 2.0) + t2 * E3[8] * 2.0;
    C4[97] = (((((((((((E3[6] * t20 + E3[6] * t21) - E3[6] * t23) - E3[6] * t24)
                     + E3[6] * t25) - E3[6] * t26) - E3[6] * t27) + E3[6] * t28)
                 + muDoubleScalarPower(E3[6], 3.0)) + t7 * E3[7] * 2.0) + E3[3] *
               E3[4] * E3[7] * 2.0) + t8 * E3[8] * 2.0) + E3[3] * E3[5] * E3[8] *
      2.0;
    C4[98] = (((((((((((-E3[7] * t20 - E3[7] * t21) + E3[7] * t22) + E3[7] * t23)
                     + E3[7] * t24) - E3[7] * t26) - E3[7] * t27) + E3[7] * t28)
                 + muDoubleScalarPower(E3[7], 3.0)) + t10 * E3[1] * 2.0) + t3 *
               E3[4] * 2.0) + t4 * E3[8] * 2.0) + E3[4] * E3[5] * E3[8] * 2.0;
    C4[99] = (((((((((((-E3[8] * t20 - E3[8] * t21) + E3[8] * t22) - E3[8] * t23)
                     - E3[8] * t24) + E3[8] * t25) + E3[8] * t26) + E3[8] * t27)
                 + muDoubleScalarPower(E3[8], 3.0)) + t10 * E3[2] * 2.0) + t3 *
               E3[5] * 2.0) + t6 * E3[2] * 2.0) + t2 * E3[5] * 2.0;
  }

  void estimateEssentialMatrix(const emlrtStack &sp, const array<real32_T, 2U>
    &matchedPoints1, const array<real32_T, 2U> &matchedPoints2, const
    cameraIntrinsics &varargin_1, real_T E_data[], int32_T E_size[2], array<
    boolean_T, 1U> &inlierIdx)
  {
    static real_T dv[2]{ 0.0, 2.0 };

    array<real_T, 3U> y;
    array<real_T, 2U> b_matchedPoints2;
    array<real_T, 2U> points1;
    array<real_T, 2U> pts1norm;
    array<real_T, 2U> pts2norm;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack h_st;
    emlrtStack st;
    real_T K1[9];
    real_T d;
    int32_T ysize[3];
    int32_T iy;
    int32_T k;
    int32_T loop_ub;
    uint32_T b_varargin_1[2];
    uint32_T varargin_2[2];
    boolean_T exitg1;
    boolean_T p;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    f_st.prev = &e_st;
    f_st.tls = e_st.tls;
    g_st.prev = &f_st;
    g_st.tls = f_st.tls;
    h_st.prev = &g_st;
    h_st.tls = g_st.tls;
    dv[0U] = rtNaN;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &mr_emlrtRSI;
    b_st.site = &sr_emlrtRSI;
    c_st.site = &vk_emlrtRSI;
    d_st.site = &xk_emlrtRSI;
    e_st.site = &yk_emlrtRSI;
    f_st.site = &al_emlrtRSI;
    g_st.site = &xf_emlrtRSI;
    h_st.site = &be_emlrtRSI;
    p = true;
    for (k = 0; k < 2; k++) {
      if (p) {
        d = dv[k];
        if ((!(d != d)) && (matchedPoints1.size(k) != 2)) {
          p = false;
        }
      } else {
        p = false;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&h_st, &i_emlrtRTEI,
        "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:estimateEssentialMatrix:incorrectSize", 3, 4, 14,
        "matchedPoints1");
    }

    c_st.site = &wk_emlrtRSI;
    d_st.site = &xk_emlrtRSI;
    e_st.site = &yk_emlrtRSI;
    f_st.site = &al_emlrtRSI;
    g_st.site = &xf_emlrtRSI;
    h_st.site = &be_emlrtRSI;
    p = true;
    for (k = 0; k < 2; k++) {
      if (p) {
        d = dv[k];
        if ((!(d != d)) && (matchedPoints2.size(k) != 2)) {
          p = false;
        }
      } else {
        p = false;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&h_st, &i_emlrtRTEI,
        "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:estimateEssentialMatrix:incorrectSize", 3, 4, 14,
        "matchedPoints2");
    }

    b_varargin_1[0] = static_cast<uint32_T>(matchedPoints1.size(0));
    varargin_2[0] = static_cast<uint32_T>(matchedPoints2.size(0));
    b_varargin_1[1] = 2U;
    varargin_2[1] = 2U;
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (static_cast<int32_T>(b_varargin_1[k]) != static_cast<int32_T>
          (varargin_2[k])) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
        "vision:points:numPtsMismatch", "vision:points:numPtsMismatch", 6, 4, 14,
        "matchedPoints1", 4, 14, "matchedPoints2");
    }

    loop_ub = matchedPoints1.size(0);
    points1.set_size(&oq_emlrtRTEI, &st, matchedPoints1.size(0), 2);
    k = matchedPoints1.size(0) << 1;
    for (iy = 0; iy < k; iy++) {
      points1[iy] = matchedPoints1[iy];
    }

    b_st.site = &tr_emlrtRSI;
    c_st.site = &ur_emlrtRSI;
    d_st.site = &be_emlrtRSI;
    e_st.site = &wr_emlrtRSI;
    if (varargin_1.cameraIntrinsicsArrayData.size(0) *
        varargin_1.cameraIntrinsicsArrayData.size(1) != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &ob_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:estimateEssentialMatrix:expectedScalar", 3, 4, 5, "input");
    }

    c_st.site = &vr_emlrtRSI;
    for (iy = 0; iy < 3; iy++) {
      K1[3 * iy] = varargin_1.K[iy];
      K1[3 * iy + 1] = varargin_1.K[iy + 3];
      K1[3 * iy + 2] = varargin_1.K[iy + 6];
    }

    if (points1.size(0) < 5) {
      std::memset(&K1[0], 0, 9U * sizeof(real_T));
      K1[0] = 1.0;
      K1[4] = 1.0;
      K1[8] = 1.0;
      E_size[0] = 3;
      E_size[1] = 3;
      std::copy(&K1[0], &K1[9], &E_data[0]);
      inlierIdx.set_size(&rq_emlrtRTEI, &sp, matchedPoints1.size(0));
      for (iy = 0; iy < loop_ub; iy++) {
        inlierIdx[iy] = false;
      }

      k = 1;
    } else {
      int32_T j;
      b_matchedPoints2.set_size(&pq_emlrtRTEI, &sp, matchedPoints2.size(0), 2);
      k = matchedPoints2.size(0) << 1;
      for (iy = 0; iy < k; iy++) {
        b_matchedPoints2[iy] = matchedPoints2[iy];
      }

      st.site = &nr_emlrtRSI;
      pixelsToNormalizedCoords(st, points1, b_matchedPoints2, K1, K1, pts1norm,
        pts2norm);
      st.site = &or_emlrtRSI;
      ysize[0] = pts1norm.size(0);
      ysize[1] = 3;
      ysize[2] = 2;
      j = 0;
      exitg1 = false;
      while ((!exitg1) && (j < 2)) {
        if (ysize[j] != pts1norm.size(j)) {
          emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
            "Coder:MATLAB:catenate_dimensionMismatch",
            "Coder:MATLAB:catenate_dimensionMismatch", 0);
        } else {
          j++;
        }
      }

      j = 0;
      exitg1 = false;
      while ((!exitg1) && (j < 2)) {
        if (ysize[j] != pts2norm.size(j)) {
          emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
            "Coder:MATLAB:catenate_dimensionMismatch",
            "Coder:MATLAB:catenate_dimensionMismatch", 0);
        } else {
          j++;
        }
      }

      y.set_size(&co_emlrtRTEI, &st, pts1norm.size(0), 3, 2);
      k = pts1norm.size(0) * 3;
      b_st.site = &bl_emlrtRSI;
      if (k > 2147483646) {
        c_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }

      for (j = 0; j < k; j++) {
        y[j] = pts1norm[j];
      }

      if (k - 1 < 0) {
        iy = -1;
      } else {
        iy = k + -1;
      }

      k = pts2norm.size(0) * 3;
      b_st.site = &bl_emlrtRSI;
      if (k > 2147483646) {
        c_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }

      for (j = 0; j < k; j++) {
        y[(iy + j) + 1] = pts2norm[j];
      }

      st.site = &pr_emlrtRSI;
      p = vision::internal::ransac::b_msac(st, y, K1, K1, E_data, E_size,
        inlierIdx);
      if (p) {
        k = 0;
        st.site = &qr_emlrtRSI;
        normalizeEssentialMatrix(st, E_data, E_size);
      } else {
        std::memset(&K1[0], 0, 9U * sizeof(real_T));
        K1[0] = 1.0;
        K1[4] = 1.0;
        K1[8] = 1.0;
        E_size[0] = 3;
        E_size[1] = 3;
        std::copy(&K1[0], &K1[9], &E_data[0]);
        inlierIdx.set_size(&qq_emlrtRTEI, &sp, matchedPoints1.size(0));
        for (iy = 0; iy < loop_ub; iy++) {
          inlierIdx[iy] = false;
        }

        k = 2;
      }
    }

    st.site = &rr_emlrtRSI;
    if (k == 1) {
      emlrtErrorWithMessageIdR2018a(&st, &mb_emlrtRTEI,
        "vision:points:notEnoughMatchedPts", "vision:points:notEnoughMatchedPts",
        8, 4, 14, "matchedPoints1", 4, 14, "matchedPoints2", 6, 5.0);
    }

    if (k == 2) {
      emlrtErrorWithMessageIdR2018a(&st, &nb_emlrtRTEI,
        "vision:points:notEnoughInlierMatches",
        "vision:points:notEnoughInlierMatches", 6, 4, 14, "matchedPoints1", 4,
        14, "matchedPoints2");
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void evalEssential(const emlrtStack &sp, const cell_wrap_92 Es_data[], const
                     int32_T Es_size[2], const array<real_T, 3U> &x, const
                     real_T varargin_1[9], const real_T varargin_2[9], array<
                     real_T, 2U> &distances)
  {
    ptrdiff_t k_t;
    ptrdiff_t lda_t;
    ptrdiff_t ldb_t;
    ptrdiff_t ldc_t;
    ptrdiff_t m_t;
    ptrdiff_t n_t;
    array<real_T, 2U> Ftx2;
    array<real_T, 2U> Fx1;
    array<real_T, 2U> b_r2;
    array<real_T, 2U> b_r3;
    array<real_T, 2U> b_x;
    array<real_T, 2U> b_y;
    array<real_T, 2U> epipolarDists;
    array<real_T, 2U> x1;
    array<real_T, 2U> x2;
    array<real_T, 2U> y;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
    real_T A[9];
    real_T F[9];
    real_T b_A[9];
    real_T a21;
    real_T maxval;
    int32_T i;
    int32_T loop_ub;
    int32_T r1;
    int32_T r3;
    int32_T rtemp;
    char_T TRANSA1;
    char_T TRANSB1;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    f_st.prev = &e_st;
    f_st.tls = e_st.tls;
    g_st.prev = &f_st;
    g_st.tls = f_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &ht_emlrtRSI;
    rtemp = x.size(0);
    b_x.set_size(&sq_emlrtRTEI, &st, x.size(0), 3);
    for (i = 0; i < 3; i++) {
      for (r3 = 0; r3 < rtemp; r3++) {
        b_x[r3 + b_x.size(0) * i] = x[r3 + x.size(0) * i];
      }
    }

    b_st.site = &ln_emlrtRSI;
    internal::blas::mtimes(b_st, b_x, varargin_1, y);
    loop_ub = y.size(0);
    x1.set_size(&tq_emlrtRTEI, &sp, 3, y.size(0));
    for (i = 0; i < loop_ub; i++) {
      x1[3 * i] = y[i];
      x1[3 * i + 1] = y[i + y.size(0)];
      x1[3 * i + 2] = y[i + y.size(0) * 2];
    }

    st.site = &it_emlrtRSI;
    b_x.set_size(&uq_emlrtRTEI, &st, x.size(0), 3);
    for (i = 0; i < 3; i++) {
      for (r3 = 0; r3 < rtemp; r3++) {
        b_x[r3 + b_x.size(0) * i] = x[(r3 + x.size(0) * i) + x.size(0) * 3];
      }
    }

    b_st.site = &ln_emlrtRSI;
    internal::blas::mtimes(b_st, b_x, varargin_2, y);
    rtemp = y.size(0);
    x2.set_size(&vq_emlrtRTEI, &sp, 3, y.size(0));
    for (i = 0; i < rtemp; i++) {
      x2[3 * i] = y[i];
      x2[3 * i + 1] = y[i + y.size(0)];
      x2[3 * i + 2] = y[i + y.size(0) * 2];
    }

    i = Es_size[1];
    distances.set_size(&wq_emlrtRTEI, &sp, loop_ub, Es_size[1]);
    r1 = x1.size(1) * Es_size[1];
    for (r3 = 0; r3 < r1; r3++) {
      distances[r3] = 0.0;
    }

    for (int32_T b_i{0}; b_i < i; b_i++) {
      __m128d b_r;
      __m128d b_r1;
      real_T d;
      real_T d1;
      real_T d2;
      real_T d3;
      real_T d4;
      real_T d5;
      real_T d6;
      int32_T F_tmp;
      int32_T r2;
      st.site = &jt_emlrtRSI;
      b_st.site = &jt_emlrtRSI;
      if (b_i > Es_size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Es_size[1] - 1, &wd_emlrtBCI,
          &b_st);
      }

      c_st.site = &xm_emlrtRSI;
      d_st.site = &ym_emlrtRSI;
      e_st.site = &an_emlrtRSI;
      std::copy(&varargin_2[0], &varargin_2[9], &A[0]);
      r1 = 0;
      r2 = 1;
      r3 = 2;
      maxval = muDoubleScalarAbs(varargin_2[0]);
      a21 = muDoubleScalarAbs(varargin_2[1]);
      if (a21 > maxval) {
        maxval = a21;
        r1 = 1;
        r2 = 0;
      }

      if (muDoubleScalarAbs(varargin_2[2]) > maxval) {
        r1 = 2;
        r2 = 1;
        r3 = 0;
      }

      A[r2] = varargin_2[r2] / varargin_2[r1];
      A[r3] /= A[r1];
      A[r2 + 3] -= A[r2] * A[r1 + 3];
      A[r3 + 3] -= A[r3] * A[r1 + 3];
      A[r2 + 6] -= A[r2] * A[r1 + 6];
      A[r3 + 6] -= A[r3] * A[r1 + 6];
      if (muDoubleScalarAbs(A[r3 + 3]) > muDoubleScalarAbs(A[r2 + 3])) {
        rtemp = r2;
        r2 = r3;
        r3 = rtemp;
      }

      A[r3 + 3] /= A[r2 + 3];
      A[r3 + 6] -= A[r3 + 3] * A[r2 + 6];
      if ((A[r1] == 0.0) || (A[r2 + 3] == 0.0) || (A[r3 + 6] == 0.0)) {
        f_st.site = &bn_emlrtRSI;
        if (!emlrtSetWarningFlag(&f_st)) {
          g_st.site = &cn_emlrtRSI;
          internal::b_warning(g_st);
        }
      }

      maxval = Es_data[b_i].f1[r1];
      a21 = Es_data[b_i].f1[r2] - maxval * A[r2];
      d = A[r3 + 3];
      d1 = A[r3 + 6];
      d2 = ((Es_data[b_i].f1[r3] - maxval * A[r3]) - a21 * d) / d1;
      b_A[2] = d2;
      d3 = A[r1 + 6];
      maxval -= d2 * d3;
      d4 = A[r2 + 6];
      a21 -= d2 * d4;
      d5 = A[r2 + 3];
      a21 /= d5;
      b_A[1] = a21;
      d6 = A[r1 + 3];
      maxval -= a21 * d6;
      maxval /= A[r1];
      b_A[0] = maxval;
      maxval = Es_data[b_i].f1[r1 + 3];
      a21 = Es_data[b_i].f1[r2 + 3] - maxval * A[r2];
      d2 = ((Es_data[b_i].f1[r3 + 3] - maxval * A[r3]) - a21 * d) / d1;
      b_A[5] = d2;
      maxval -= d2 * d3;
      a21 -= d2 * d4;
      a21 /= d5;
      b_A[4] = a21;
      maxval -= a21 * d6;
      maxval /= A[r1];
      b_A[3] = maxval;
      maxval = Es_data[b_i].f1[r1 + 6];
      a21 = Es_data[b_i].f1[r2 + 6] - maxval * A[r2];
      d2 = ((Es_data[b_i].f1[r3 + 6] - maxval * A[r3]) - a21 * d) / d1;
      b_A[8] = d2;
      maxval -= d2 * d3;
      a21 -= d2 * d4;
      a21 /= d5;
      b_A[7] = a21;
      maxval -= a21 * d6;
      maxval /= A[r1];
      b_A[6] = maxval;
      for (r3 = 0; r3 < 3; r3++) {
        A[3 * r3] = varargin_1[r3];
        A[3 * r3 + 1] = varargin_1[r3 + 3];
        A[3 * r3 + 2] = varargin_1[r3 + 6];
      }

      b_st.site = &oq_emlrtRSI;
      c_st.site = &pq_emlrtRSI;
      d_st.site = &an_emlrtRSI;
      r1 = 0;
      r2 = 1;
      r3 = 2;
      maxval = muDoubleScalarAbs(A[0]);
      a21 = muDoubleScalarAbs(A[1]);
      if (a21 > maxval) {
        maxval = a21;
        r1 = 1;
        r2 = 0;
      }

      if (muDoubleScalarAbs(A[2]) > maxval) {
        r1 = 2;
        r2 = 1;
        r3 = 0;
      }

      A[r2] /= A[r1];
      A[r3] /= A[r1];
      A[r2 + 3] -= A[r2] * A[r1 + 3];
      A[r3 + 3] -= A[r3] * A[r1 + 3];
      A[r2 + 6] -= A[r2] * A[r1 + 6];
      A[r3 + 6] -= A[r3] * A[r1 + 6];
      if (muDoubleScalarAbs(A[r3 + 3]) > muDoubleScalarAbs(A[r2 + 3])) {
        rtemp = r2;
        r2 = r3;
        r3 = rtemp;
      }

      A[r3 + 3] /= A[r2 + 3];
      A[r3 + 6] -= A[r3 + 3] * A[r2 + 6];
      if ((A[r1] == 0.0) || (A[r2 + 3] == 0.0) || (A[r3 + 6] == 0.0)) {
        e_st.site = &bn_emlrtRSI;
        if (!emlrtSetWarningFlag(&e_st)) {
          f_st.site = &cn_emlrtRSI;
          internal::b_warning(f_st);
        }
      }

      b_r = _mm_loadu_pd(&b_A[0]);
      _mm_storeu_pd(&F[3 * r1], _mm_div_pd(b_r, _mm_set1_pd(A[r1])));
      b_r = _mm_loadu_pd(&F[3 * r1]);
      b_r1 = _mm_loadu_pd(&b_A[3]);
      maxval = A[r1 + 3];
      _mm_storeu_pd(&F[3 * r2], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd
        (maxval))));
      b_r = _mm_loadu_pd(&F[3 * r1]);
      b_r1 = _mm_loadu_pd(&b_A[6]);
      a21 = A[r1 + 6];
      _mm_storeu_pd(&F[3 * r3], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(a21))));
      b_r = _mm_loadu_pd(&F[3 * r2]);
      d = A[r2 + 3];
      _mm_storeu_pd(&F[3 * r2], _mm_div_pd(b_r, _mm_set1_pd(d)));
      b_r = _mm_loadu_pd(&F[3 * r2]);
      b_r1 = _mm_loadu_pd(&F[3 * r3]);
      d1 = A[r2 + 6];
      _mm_storeu_pd(&F[3 * r3], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(d1))));
      b_r = _mm_loadu_pd(&F[3 * r3]);
      d3 = A[r3 + 6];
      _mm_storeu_pd(&F[3 * r3], _mm_div_pd(b_r, _mm_set1_pd(d3)));
      b_r = _mm_loadu_pd(&F[3 * r3]);
      b_r1 = _mm_loadu_pd(&F[3 * r2]);
      d4 = A[r3 + 3];
      _mm_storeu_pd(&F[3 * r2], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(d4))));
      b_r = _mm_loadu_pd(&F[3 * r3]);
      b_r1 = _mm_loadu_pd(&F[3 * r1]);
      _mm_storeu_pd(&F[3 * r1], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd
        (A[r3]))));
      b_r = _mm_loadu_pd(&F[3 * r2]);
      b_r1 = _mm_loadu_pd(&F[3 * r1]);
      _mm_storeu_pd(&F[3 * r1], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd
        (A[r2]))));
      F_tmp = 3 * r1 + 2;
      F[F_tmp] = b_A[2] / A[r1];
      rtemp = 3 * r2 + 2;
      F[rtemp] = b_A[5] - F[F_tmp] * maxval;
      r1 = 3 * r3 + 2;
      F[r1] = d2 - F[F_tmp] * a21;
      F[rtemp] /= d;
      F[r1] -= F[rtemp] * d1;
      F[r1] /= d3;
      F[rtemp] -= F[r1] * d4;
      F[F_tmp] -= F[r1] * A[r3];
      F[F_tmp] -= F[rtemp] * A[r2];
      st.site = &kt_emlrtRSI;
      b_st.site = &ln_emlrtRSI;
      if (x1.size(1) == 0) {
        Fx1.set_size(&xq_emlrtRTEI, &b_st, 3, 0);
      } else {
        c_st.site = &nn_emlrtRSI;
        d_st.site = &on_emlrtRSI;
        TRANSB1 = 'N';
        TRANSA1 = 'N';
        maxval = 1.0;
        a21 = 0.0;
        m_t = (ptrdiff_t)3;
        n_t = (ptrdiff_t)x1.size(1);
        k_t = (ptrdiff_t)3;
        lda_t = (ptrdiff_t)3;
        ldb_t = (ptrdiff_t)3;
        ldc_t = (ptrdiff_t)3;
        Fx1.set_size(&tn_emlrtRTEI, &d_st, 3, loop_ub);
        dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &maxval, &F[0], &lda_t,
              &(x1.data())[0], &ldb_t, &a21, &(Fx1.data())[0], &ldc_t);
      }

      if ((x2.size(1) != Fx1.size(1)) && ((x2.size(1) != 1) && (Fx1.size(1) != 1)))
      {
        emlrtDimSizeImpxCheckR2021b(x2.size(1), Fx1.size(1), &ab_emlrtECI,
          (emlrtConstCTX)&sp);
      }

      st.site = &lt_emlrtRSI;
      b_st.site = &sj_emlrtRSI;
      if (x2.size(1) == Fx1.size(1)) {
        Ftx2.set_size(&yq_emlrtRTEI, &b_st, 3, x2.size(1));
        r1 = 3 * x2.size(1);
        F_tmp = (r1 / 2) << 1;
        r2 = F_tmp - 2;
        for (r3 = 0; r3 <= r2; r3 += 2) {
          b_r = _mm_loadu_pd(&x2[r3]);
          b_r1 = _mm_loadu_pd(&Fx1[r3]);
          _mm_storeu_pd(&Ftx2[r3], _mm_mul_pd(b_r, b_r1));
        }

        for (r3 = F_tmp; r3 < r1; r3++) {
          Ftx2[r3] = x2[r3] * Fx1[r3];
        }

        c_st.site = &tj_emlrtRSI;
        b_combineVectorElements(c_st, Ftx2, epipolarDists);
      } else {
        c_st.site = &tj_emlrtRSI;
        binary_expand_op_14(c_st, epipolarDists, tj_emlrtRSI, x2, Fx1);
      }

      st.site = &mt_emlrtRSI;
      b_st.site = &ln_emlrtRSI;
      if (x2.size(1) == 0) {
        Ftx2.set_size(&ar_emlrtRTEI, &b_st, 3, 0);
      } else {
        c_st.site = &nn_emlrtRSI;
        d_st.site = &on_emlrtRSI;
        TRANSB1 = 'N';
        TRANSA1 = 'T';
        maxval = 1.0;
        a21 = 0.0;
        m_t = (ptrdiff_t)3;
        n_t = (ptrdiff_t)x2.size(1);
        k_t = (ptrdiff_t)3;
        lda_t = (ptrdiff_t)3;
        ldb_t = (ptrdiff_t)3;
        ldc_t = (ptrdiff_t)3;
        Ftx2.set_size(&tn_emlrtRTEI, &d_st, 3, x2.size(1));
        dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &maxval, &F[0], &lda_t,
              &(x2.data())[0], &ldb_t, &a21, &(Ftx2.data())[0], &ldc_t);
      }

      rtemp = Fx1.size(1);
      b_r2.set_size(&ao_emlrtRTEI, &sp, 2, Fx1.size(1));
      for (r3 = 0; r3 < rtemp; r3++) {
        maxval = Fx1[3 * r3];
        b_r2[2 * r3] = maxval * maxval;
        maxval = Fx1[3 * r3 + 1];
        b_r2[2 * r3 + 1] = maxval * maxval;
      }

      st.site = &ot_emlrtRSI;
      sum(st, b_r2, b_y);
      rtemp = Ftx2.size(1);
      b_r2.set_size(&ao_emlrtRTEI, &sp, 2, Ftx2.size(1));
      for (r3 = 0; r3 < rtemp; r3++) {
        maxval = Ftx2[3 * r3];
        b_r2[2 * r3] = maxval * maxval;
        maxval = Ftx2[3 * r3 + 1];
        b_r2[2 * r3 + 1] = maxval * maxval;
      }

      st.site = &ot_emlrtRSI;
      sum(st, b_r2, b_r3);
      if ((b_y.size(1) != b_r3.size(1)) && ((b_y.size(1) != 1) && (b_r3.size(1)
            != 1))) {
        emlrtDimSizeImpxCheckR2021b(b_y.size(1), b_r3.size(1), &bb_emlrtECI,
          (emlrtConstCTX)&sp);
      }

      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &vd_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      st.site = &nt_emlrtRSI;
      b_st.site = &nt_emlrtRSI;
      c_st.site = &fo_emlrtRSI;
      epipolarDists.set_size(&br_emlrtRTEI, &c_st, 1, epipolarDists.size(1));
      r1 = epipolarDists.size(1) - 1;
      for (r3 = 0; r3 <= r1; r3++) {
        maxval = epipolarDists[r3];
        epipolarDists[r3] = maxval * maxval;
      }

      if (b_y.size(1) == b_r3.size(1)) {
        rtemp = b_y.size(1) - 1;
        b_y.set_size(&cr_emlrtRTEI, &st, 1, b_y.size(1));
        F_tmp = (b_y.size(1) / 2) << 1;
        r2 = F_tmp - 2;
        for (r3 = 0; r3 <= r2; r3 += 2) {
          b_r = _mm_loadu_pd(&b_y[r3]);
          b_r1 = _mm_loadu_pd(&b_r3[r3]);
          _mm_storeu_pd(&b_y[r3], _mm_add_pd(b_r, b_r1));
        }

        for (r3 = F_tmp; r3 <= rtemp; r3++) {
          b_y[r3] = b_y[r3] + b_r3[r3];
        }
      } else {
        b_st.site = &ot_emlrtRSI;
        plus(b_st, b_y, b_r3);
      }

      b_st.site = &lf_emlrtRSI;
      c_st.site = &mf_emlrtRSI;
      if ((epipolarDists.size(1) != 1) && (b_y.size(1) != 1) &&
          (epipolarDists.size(1) != b_y.size(1))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
          "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
      }

      if (epipolarDists.size(1) == b_y.size(1)) {
        epipolarDists.set_size(&br_emlrtRTEI, &b_st, 1, epipolarDists.size(1));
        F_tmp = (epipolarDists.size(1) / 2) << 1;
        r2 = F_tmp - 2;
        for (r3 = 0; r3 <= r2; r3 += 2) {
          b_r = _mm_loadu_pd(&epipolarDists[r3]);
          b_r1 = _mm_loadu_pd(&b_y[r3]);
          _mm_storeu_pd(&epipolarDists[r3], _mm_div_pd(b_r, b_r1));
        }

        for (r3 = F_tmp; r3 <= r1; r3++) {
          epipolarDists[r3] = epipolarDists[r3] / b_y[r3];
        }
      } else {
        c_st.site = &uid_emlrtRSI;
        rdivide(c_st, epipolarDists, b_y);
      }

      emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, epipolarDists.size(), 2,
        &cb_emlrtECI, (emlrtCTX)&sp);
      for (r3 = 0; r3 < loop_ub; r3++) {
        distances[r3 + distances.size(0) * b_i] = epipolarDists[r3];
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void fivePointAlgorithm(const emlrtStack &sp, const array<real_T, 3U> &x,
    cell_wrap_92 Es_data[], int32_T Es_size[2])
  {
    array<real_T, 2U> Q;
    array<real_T, 2U> U1;
    array<real_T, 1U> varargin_1;
    array<real_T, 1U> varargin_2;
    array<real_T, 1U> varargin_3;
    array<real_T, 1U> varargin_4;
    array<real_T, 1U> varargin_5;
    array<real_T, 1U> varargin_6;
    array<real_T, 1U> varargin_7;
    array<real_T, 1U> varargin_8;
    array<real_T, 1U> varargin_9;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack st;
    real_T V1[81];
    real_T E1[9];
    real_T E2[9];
    real_T E3[9];
    real_T E4[9];
    real_T s1_data[9];
    int32_T loop_ub;
    int32_T scalarLB;
    int32_T vectorUB;
    boolean_T p;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    f_st.prev = &e_st;
    f_st.tls = e_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    loop_ub = x.size(0);
    st.site = &rt_emlrtRSI;
    varargin_1.set_size(&dr_emlrtRTEI, &st, x.size(0));
    varargin_2.set_size(&er_emlrtRTEI, &st, x.size(0));
    varargin_3.set_size(&fr_emlrtRTEI, &st, x.size(0));
    varargin_4.set_size(&gr_emlrtRTEI, &st, x.size(0));
    varargin_5.set_size(&hr_emlrtRTEI, &st, x.size(0));
    varargin_6.set_size(&ir_emlrtRTEI, &st, x.size(0));
    varargin_7.set_size(&jr_emlrtRTEI, &st, x.size(0));
    varargin_8.set_size(&kr_emlrtRTEI, &st, x.size(0));
    varargin_9.set_size(&lr_emlrtRTEI, &st, x.size(0));
    scalarLB = (x.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T i{0}; i <= vectorUB; i += 2) {
      __m128d b_r;
      __m128d r1;
      __m128d r2;
      __m128d r3;
      b_r = _mm_loadu_pd(&x[i + x.size(0) * 3]);
      r1 = _mm_loadu_pd(&x[i]);
      _mm_storeu_pd(&varargin_1[i], _mm_mul_pd(b_r, r1));
      r2 = _mm_loadu_pd(&x[i + x.size(0)]);
      _mm_storeu_pd(&varargin_2[i], _mm_mul_pd(b_r, r2));
      r3 = _mm_loadu_pd(&x[i + x.size(0) * 2]);
      _mm_storeu_pd(&varargin_3[i], _mm_mul_pd(b_r, r3));
      b_r = _mm_loadu_pd(&x[(i + x.size(0)) + x.size(0) * 3]);
      _mm_storeu_pd(&varargin_4[i], _mm_mul_pd(b_r, r1));
      _mm_storeu_pd(&varargin_5[i], _mm_mul_pd(b_r, r2));
      _mm_storeu_pd(&varargin_6[i], _mm_mul_pd(b_r, r3));
      b_r = _mm_loadu_pd(&x[(i + x.size(0) * 2) + x.size(0) * 3]);
      _mm_storeu_pd(&varargin_7[i], _mm_mul_pd(b_r, r1));
      _mm_storeu_pd(&varargin_8[i], _mm_mul_pd(b_r, r2));
      _mm_storeu_pd(&varargin_9[i], _mm_mul_pd(b_r, r3));
    }

    for (int32_T i{scalarLB}; i < loop_ub; i++) {
      real_T d;
      real_T d1;
      real_T d2;
      real_T d3;
      d = x[i + x.size(0) * 3];
      d1 = x[i];
      varargin_1[i] = d * d1;
      d2 = x[i + x.size(0)];
      varargin_2[i] = d * d2;
      d3 = x[i + x.size(0) * 2];
      varargin_3[i] = d * d3;
      d = x[(i + x.size(0)) + x.size(0) * 3];
      varargin_4[i] = d * d1;
      varargin_5[i] = d * d2;
      varargin_6[i] = d * d3;
      d = x[(i + x.size(0) * 2) + x.size(0) * 3];
      varargin_7[i] = d * d1;
      varargin_8[i] = d * d2;
      varargin_9[i] = d * d3;
    }

    b_st.site = &ij_emlrtRSI;
    c_st.site = &jj_emlrtRSI;
    if (varargin_2.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_3.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_4.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_5.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_6.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_7.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_8.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (varargin_9.size(0) != varargin_1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    loop_ub = varargin_1.size(0);
    Q.set_size(&mr_emlrtRTEI, &b_st, varargin_1.size(0), 9);
    for (int32_T i{0}; i < loop_ub; i++) {
      Q[i] = varargin_1[i];
      Q[i + Q.size(0)] = varargin_2[i];
      Q[i + Q.size(0) * 2] = varargin_3[i];
      Q[i + Q.size(0) * 3] = varargin_4[i];
      Q[i + Q.size(0) * 4] = varargin_5[i];
      Q[i + Q.size(0) * 5] = varargin_6[i];
      Q[i + Q.size(0) * 6] = varargin_7[i];
      Q[i + Q.size(0) * 7] = varargin_8[i];
      Q[i + Q.size(0) * 8] = varargin_9[i];
    }

    st.site = &cs_emlrtRSI;
    b_st.site = &am_emlrtRSI;
    c_st.site = &dm_emlrtRSI;
    d_st.site = &em_emlrtRSI;
    loop_ub = Q.size(0) * 9;
    p = true;
    e_st.site = &fm_emlrtRSI;
    if (loop_ub > 2147483646) {
      f_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(f_st);
    }

    for (scalarLB = 0; scalarLB < loop_ub; scalarLB++) {
      if ((!p) || (muDoubleScalarIsInf(Q[scalarLB]) || muDoubleScalarIsNaN
                   (Q[scalarLB]))) {
        p = false;
      }
    }

    if (p) {
      b_st.site = &bm_emlrtRSI;
      internal::b_svd(b_st, Q, U1, s1_data, V1);
    } else {
      uint32_T unnamed_idx_0;
      unnamed_idx_0 = static_cast<uint32_T>(Q.size(0));
      Q.set_size(&np_emlrtRTEI, &st, static_cast<int32_T>(unnamed_idx_0), 9);
      loop_ub = static_cast<int32_T>(unnamed_idx_0) * 9;
      for (int32_T i{0}; i < loop_ub; i++) {
        Q[i] = 0.0;
      }

      b_st.site = &cm_emlrtRSI;
      internal::b_svd(b_st, Q, U1, s1_data, V1);
      for (int32_T i{0}; i < 81; i++) {
        V1[i] = rtNaN;
      }
    }

    std::copy(&V1[45], &V1[54], &s1_data[0]);
    for (int32_T i{0}; i < 3; i++) {
      E1[3 * i] = s1_data[i];
      E1[3 * i + 1] = s1_data[i + 3];
      E1[3 * i + 2] = s1_data[i + 6];
    }

    std::copy(&V1[54], &V1[63], &s1_data[0]);
    for (int32_T i{0}; i < 3; i++) {
      E2[3 * i] = s1_data[i];
      E2[3 * i + 1] = s1_data[i + 3];
      E2[3 * i + 2] = s1_data[i + 6];
    }

    std::copy(&V1[63], &V1[72], &s1_data[0]);
    for (int32_T i{0}; i < 3; i++) {
      E3[3 * i] = s1_data[i];
      E3[3 * i + 1] = s1_data[i + 3];
      E3[3 * i + 2] = s1_data[i + 6];
    }

    std::copy(&V1[72], &V1[81], &s1_data[0]);
    for (int32_T i{0}; i < 3; i++) {
      E4[3 * i] = s1_data[i];
      E4[3 * i + 1] = s1_data[i + 3];
      E4[3 * i + 2] = s1_data[i + 6];
    }

    real_T C1[100];
    real_T C2[100];
    real_T C3[100];
    real_T C4[100];
    st.site = &ds_emlrtRSI;
    computeCoefficients(E1, E2, E3, E4, C1, C2, C3, C4);
    st.site = &es_emlrtRSI;
    polyeig4(st, C1, C2, C3, C4, E1, E2, E3, E4, Es_data, Es_size);
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void polyeig4(const emlrtStack &sp, const real_T A0[100], const real_T A1[100],
                const real_T A2[100], const real_T A3[100], const real_T E1[9],
                const real_T E2[9], const real_T E3[9], const real_T E4[9],
                cell_wrap_92 Es_data[], int32_T Es_size[2])
  {
    static const char_T fname[14]{ 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
      's', 'y', 'g', 'v', 'd' };

    __m128d b_r;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
    creal_T V[900];
    creal_T D[30];
    real_T A[900];
    real_T B[900];
    real_T b_A[900];
    real_T b_B[900];
    real_T Em[270];
    real_T b_A0[100];
    real_T w[30];
    real_T E[9];
    real_T b_E[9];
    real_T res[3];
    real_T d;
    int32_T b_i;
    int32_T b_k;
    int32_T exponent;
    int32_T i;
    int32_T irank;
    int32_T k;
    boolean_T guard1;
    boolean_T p;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    f_st.prev = &e_st;
    f_st.tls = e_st.tls;
    g_st.prev = &f_st;
    g_st.tls = f_st.tls;
    std::memset(&A[0], 0, 900U * sizeof(real_T));
    for (k = 0; k < 30; k++) {
      A[k + 30 * k] = 1.0;
    }

    for (i = 0; i < 10; i++) {
      std::copy(&A0[i * 10], &A0[static_cast<int32_T>(static_cast<uint32_T>(i *
                  10) + 10U)], &A[i * 30]);
    }

    std::memset(&B[0], 0, 900U * sizeof(real_T));
    for (i = 0; i < 29; i++) {
      B[31 * i + 10] = 1.0;
    }

    b_r = _mm_set1_pd(-1.0);
    for (i = 0; i < 10; i++) {
      for (b_k = 0; b_k <= 8; b_k += 2) {
        irank = b_k + 10 * i;
        _mm_storeu_pd(&B[b_k + 30 * i], _mm_mul_pd(_mm_loadu_pd(&A1[irank]), b_r));
        _mm_storeu_pd(&B[b_k + 30 * (i + 10)], _mm_mul_pd(_mm_loadu_pd(&A2[irank]),
          b_r));
        _mm_storeu_pd(&B[b_k + 30 * (i + 20)], _mm_mul_pd(_mm_loadu_pd(&A3[irank]),
          b_r));
      }
    }

    st.site = &ks_emlrtRSI;
    b_st.site = &ns_emlrtRSI;
    c_st.site = &dm_emlrtRSI;
    d_st.site = &em_emlrtRSI;
    p = true;
    e_st.site = &fm_emlrtRSI;
    for (k = 0; k < 900; k++) {
      if (p) {
        d = A[k];
        if (muDoubleScalarIsInf(d) || muDoubleScalarIsNaN(d)) {
          p = false;
        }
      } else {
        p = false;
      }
    }

    guard1 = false;
    if (!p) {
      guard1 = true;
    } else {
      b_st.site = &os_emlrtRSI;
      c_st.site = &dm_emlrtRSI;
      d_st.site = &em_emlrtRSI;
      p = true;
      e_st.site = &fm_emlrtRSI;
      for (k = 0; k < 900; k++) {
        if (p) {
          d = B[k];
          if (muDoubleScalarIsInf(d) || muDoubleScalarIsNaN(d)) {
            p = false;
          }
        } else {
          p = false;
        }
      }

      if (!p) {
        guard1 = true;
      } else if (ishermitian(A) && ishermitian(B)) {
        ptrdiff_t info_t;
        b_st.site = &ps_emlrtRSI;
        c_st.site = &rs_emlrtRSI;
        d_st.site = &ts_emlrtRSI;
        std::copy(&A[0], &A[900], &b_A[0]);
        std::copy(&B[0], &B[900], &b_B[0]);
        info_t = LAPACKE_dsygvd(102, (ptrdiff_t)1, 'V', 'U', (ptrdiff_t)30,
          &b_A[0], (ptrdiff_t)30, &b_B[0], (ptrdiff_t)30, &w[0]);
        e_st.site = &us_emlrtRSI;
        if ((int32_T)info_t < 0) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &fb_emlrtRTEI, "MATLAB:nomem",
              "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&e_st, &gb_emlrtRTEI,
              "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12,
              (int32_T)info_t);
          }
        }

        if ((int32_T)info_t == 0) {
          for (b_i = 0; b_i < 30; b_i++) {
            D[b_i].re = w[b_i];
            D[b_i].im = 0.0;
          }

          for (i = 0; i < 900; i++) {
            V[i].re = b_A[i];
            V[i].im = 0.0;
          }
        }

        if ((int32_T)info_t > 0) {
          c_st.site = &ss_emlrtRSI;
          eigGeneralized(c_st, A, B, V, D);
        }
      } else {
        b_st.site = &qs_emlrtRSI;
        eigGeneralized(b_st, A, B, V, D);
      }
    }

    if (guard1) {
      for (i = 0; i < 900; i++) {
        V[i].re = rtNaN;
        V[i].im = 0.0;
      }

      for (b_i = 0; b_i < 30; b_i++) {
        D[b_i].re = rtNaN;
        D[b_i].im = 0.0;
      }
    }

    std::memset(&Em[0], 0, 270U * sizeof(real_T));
    k = 0;
    for (int32_T j{0}; j < 30; j++) {
      d = D[j].re;
      if ((muDoubleScalarAbs(d) < 1.0E+15) && (muDoubleScalarAbs(D[j].im) <
           1.0E-8)) {
        real_T R[30];
        real_T y[30];
        real_T absxk;
        real_T e2;
        real_T scale;
        real_T t;
        boolean_T b[9];
        boolean_T b_b[9];
        boolean_T exitg1;
        for (i = 0; i < 30; i++) {
          w[i] = V[i + 30 * j].re;
        }

        e2 = d * d;
        absxk = e2 * d;
        for (i = 0; i <= 98; i += 2) {
          _mm_storeu_pd(&b_A0[i], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_loadu_pd(
            &A0[i]), _mm_mul_pd(_mm_set1_pd(d), _mm_loadu_pd(&A1[i]))),
            _mm_mul_pd(_mm_set1_pd(e2), _mm_loadu_pd(&A2[i]))), _mm_mul_pd
            (_mm_set1_pd(absxk), _mm_loadu_pd(&A3[i]))));
        }

        for (i = 0; i < 10; i++) {
          for (b_k = 0; b_k < 3; b_k++) {
            t = 0.0;
            for (irank = 0; irank < 10; irank++) {
              t += b_A0[i + 10 * irank] * w[irank + 10 * b_k];
            }

            R[i + 10 * b_k] = t;
          }
        }

        for (b_k = 0; b_k < 30; b_k++) {
          y[b_k] = muDoubleScalarAbs(R[b_k]);
        }

        res[0] = sumColumnB(y, 1);
        res[1] = sumColumnB(y, 2);
        res[2] = sumColumnB(y, 3);
        for (b_k = 0; b_k < 30; b_k++) {
          y[b_k] = muDoubleScalarAbs(w[b_k]);
        }

        res[0] /= sumColumnB(y, 1);
        res[1] /= sumColumnB(y, 2);
        res[2] /= sumColumnB(y, 3);
        if (!muDoubleScalarIsNaN(res[0])) {
          irank = 1;
        } else {
          irank = 0;
          b_k = 2;
          exitg1 = false;
          while ((!exitg1) && (b_k < 4)) {
            if (!muDoubleScalarIsNaN(res[b_k - 1])) {
              irank = b_k;
              exitg1 = true;
            } else {
              b_k++;
            }
          }
        }

        if (irank == 0) {
          irank = 1;
        } else {
          e2 = res[irank - 1];
          i = irank + 1;
          for (b_k = i; b_k < 4; b_k++) {
            t = res[b_k - 1];
            if (e2 > t) {
              e2 = t;
              irank = b_k;
            }
          }
        }

        e2 = 0.0;
        scale = 3.3121686421112381E-170;
        for (b_k = 0; b_k < 10; b_k++) {
          absxk = muDoubleScalarAbs(w[b_k + 10 * (irank - 1)]);
          if (absxk > scale) {
            t = scale / absxk;
            e2 = e2 * t * t + 1.0;
            scale = absxk;
          } else {
            t = absxk / scale;
            e2 += t * t;
          }
        }

        e2 = scale * muDoubleScalarSqrt(e2);
        i = 10 * (irank - 1);
        b_r = _mm_loadu_pd(&w[i + 7]);
        _mm_storeu_pd(&res[0], _mm_div_pd(b_r, _mm_set1_pd(e2)));
        res[2] = w[i + 9] / e2;
        absxk = res[2] * d;
        d = res[0];
        t = res[1];
        e2 = res[2];
        for (i = 0; i < 9; i++) {
          scale = ((d * E1[i] + t * E2[i]) + absxk * E3[i]) + e2 * E4[i];
          E[i] = scale;
          b[i] = muDoubleScalarIsInf(scale);
          b_b[i] = muDoubleScalarIsNaN(scale);
        }

        p = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k <= 8)) {
          if (b[b_k] || b_b[b_k]) {
            p = false;
            exitg1 = true;
          } else {
            b_k++;
          }
        }

        if (p) {
          st.site = &ls_emlrtRSI;
          b_st.site = &ct_emlrtRSI;
          irank = 0;
          c_st.site = &dt_emlrtRSI;
          d_st.site = &am_emlrtRSI;
          e_st.site = &dm_emlrtRSI;
          f_st.site = &em_emlrtRSI;
          p = true;
          for (b_k = 0; b_k < 9; b_k++) {
            if (p) {
              d = E[b_k];
              if (muDoubleScalarIsInf(d) || muDoubleScalarIsNaN(d)) {
                p = false;
              }
            } else {
              p = false;
            }
          }

          if (p) {
            d_st.site = &et_emlrtRSI;
            e_st.site = &jp_emlrtRSI;
            f_st.site = &kp_emlrtRSI;
            std::copy(&E[0], &E[9], &b_E[0]);
            g_st.site = &lp_emlrtRSI;
            internal::reflapack::xzsvdc(g_st, b_E, res);
          } else {
            res[0] = rtNaN;
            res[1] = rtNaN;
            res[2] = rtNaN;
          }

          e2 = muDoubleScalarAbs(res[0]);
          if (muDoubleScalarIsInf(e2) || muDoubleScalarIsNaN(e2)) {
            e2 = rtNaN;
          } else if (e2 < 4.4501477170144028E-308) {
            e2 = 4.94065645841247E-324;
          } else {
            std::frexp(e2, &exponent);
            e2 = std::ldexp(1.0, exponent - 53);
          }

          e2 *= 3.0;
          b_i = 0;
          exitg1 = false;
          while ((!exitg1) && (b_i < 3)) {
            if (muDoubleScalarIsInf(res[b_i]) || muDoubleScalarIsNaN(res[b_i]))
            {
              e2 = 1.7976931348623157E+308;
              exitg1 = true;
            } else {
              b_i++;
            }
          }

          b_k = 0;
          while ((b_k < 3) && (res[b_k] > e2)) {
            irank++;
            b_k++;
          }

          if (irank >= 2) {
            k++;
            if (k > 30) {
              emlrtDynamicBoundsCheckR2012b(31, 1, 30, &td_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            for (i = 0; i < 3; i++) {
              irank = 3 * i + 9 * (k - 1);
              Em[irank] = E[3 * i];
              Em[irank + 1] = E[3 * i + 1];
              Em[irank + 2] = E[3 * i + 2];
            }
          }
        }
      }
    }

    real_T varargin_1[2];
    st.site = &ms_emlrtRSI;
    varargin_1[0] = 1.0;
    varargin_1[1] = k;
    b_st.site = &ne_emlrtRSI;
    internal::assertValidSizeArg(b_st, varargin_1);
    Es_size[0] = 1;
    Es_size[1] = k;
    if (k != 0) {
      b_st.site = &ft_emlrtRSI;
      for (irank = 0; irank < k; irank++) {
        std::memset(&Es_data[irank].f1[0], 0, 9U * sizeof(real_T));
      }
    }

    for (b_i = 0; b_i < k; b_i++) {
      for (i = 0; i < 3; i++) {
        if (b_i > k - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, k - 1, &ud_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        b_k = 3 * i + 9 * b_i;
        Es_data[b_i].f1[3 * i] = Em[b_k];
        if (b_i > k - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, k - 1, &ud_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        Es_data[b_i].f1[3 * i + 1] = Em[b_k + 1];
        if (b_i > k - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, k - 1, &ud_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        Es_data[b_i].f1[3 * i + 2] = Em[b_k + 2];
      }
    }
  }
}

// End of code generation (estimateEssentialMatrix.cpp)
