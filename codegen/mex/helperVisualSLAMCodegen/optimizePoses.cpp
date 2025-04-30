//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// optimizePoses.cpp
//
// Code generation for function 'optimizePoses'
//

// Include files
#include "optimizePoses.h"
#include "digraph.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "indexShapeCheck.h"
#include "isequal.h"
#include "optimizePoses1.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rt_nonfinite.h"
#include "strjoin.h"
#include "table.h"
#include "coder_array.h"
#include "cvstCG_optimizePoses.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo fgd_emlrtRSI{
    150,             // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\optimizePoses.m" // pathName
};

static emlrtRSInfo ggd_emlrtRSI{
    47,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo hgd_emlrtRSI{
    33,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo igd_emlrtRSI{
    42,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo jgd_emlrtRSI{
    40,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo kgd_emlrtRSI{
    31,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo lgd_emlrtRSI{
    28,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo mgd_emlrtRSI{
    25,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ngd_emlrtRSI{
    14,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ogd_emlrtRSI{
    11,              // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo pgd_emlrtRSI{
    8,               // lineNo
    "optimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo qhd_emlrtRSI{
    81,                                           // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo rhd_emlrtRSI{
    82,                                           // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo shd_emlrtRSI{
    103,                                          // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo thd_emlrtRSI{
    104,                                          // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo uhd_emlrtRSI{
    122,                                          // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo vhd_emlrtRSI{
    124,                                          // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo whd_emlrtRSI{
    158,                                          // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtRSInfo xhd_emlrtRSI{
    162,                                          // lineNo
    "optimizePosesBuildable/visionOptimizePoses", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pathName
};

static emlrtBCInfo dx_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    31,              // lineNo
    53,              // colNo
    "",              // aName
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtRTEInfo dg_emlrtRTEI{
    13,              // lineNo
    73,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtBCInfo ex_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    114,                                          // lineNo
    50,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo fx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    93,                                           // lineNo
    23,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtECInfo ce_emlrtECI{
    -1,                                           // nDims
    93,                                           // lineNo
    17,                                           // colNo
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtBCInfo gx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    119,                                          // lineNo
    23,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtECInfo de_emlrtECI{
    -1,                                           // nDims
    119,                                          // lineNo
    17,                                           // colNo
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtBCInfo hx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    127,                                          // lineNo
    33,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtECInfo ee_emlrtECI{
    -1,                                           // nDims
    127,                                          // lineNo
    17,                                           // colNo
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtBCInfo ix_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    158,                                          // lineNo
    36,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo jx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    158,                                          // lineNo
    38,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo kx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    124,                                          // lineNo
    125,                                          // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo lx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    122,                                          // lineNo
    130,                                          // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo mx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    163,                                          // lineNo
    32,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo nx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    100,                                          // lineNo
    35,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo ox_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    101,                                          // lineNo
    35,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo px_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    180,                                          // lineNo
    48,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo qx_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    180,                                          // lineNo
    32,                                           // colNo
    "",                                           // aName
    "optimizePosesBuildable/visionOptimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo rx_emlrtBCI{
    -1,                                                        // iFirst
    -1,                                                        // iLast
    215,                                                       // lineNo
    47,                                                        // colNo
    "",                                                        // aName
    "optimizePosesBuildable/compactifyRigidInformationMatrix", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo sx_emlrtBCI{
    -1,                                                             // iFirst
    -1,                                                             // iLast
    197,                                                            // lineNo
    47,                                                             // colNo
    "",                                                             // aName
    "optimizePosesBuildable/compactifySimilarityInformationMatrix", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m", // pName
    0                                      // checkKind
};

static emlrtBCInfo tx_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    31,              // lineNo
    17,              // colNo
    "",              // aName
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtRTEInfo drb_emlrtRTEI{
    59,                       // lineNo
    36,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo erb_emlrtRTEI{
    60,                       // lineNo
    36,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo frb_emlrtRTEI{
    61,                       // lineNo
    41,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo grb_emlrtRTEI{
    67,                       // lineNo
    17,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo hrb_emlrtRTEI{
    64,                       // lineNo
    17,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo irb_emlrtRTEI{
    152,                      // lineNo
    56,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo jrb_emlrtRTEI{
    158,                      // lineNo
    17,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo krb_emlrtRTEI{
    184,                      // lineNo
    17,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo lrb_emlrtRTEI{
    178,                      // lineNo
    45,                       // colNo
    "optimizePosesBuildable", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "buildable\\optimizePosesBuildable.m" // pName
};

static emlrtRTEInfo mrb_emlrtRTEI{
    29,              // lineNo
    40,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo nrb_emlrtRTEI{
    33,              // lineNo
    58,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
void optimizePoses(const emlrtStack &sp, const digraph &G, f_table &poseTable)
{
  static const char_T t18_f1[6]{'V', 'i', 'e', 'w', 'I', 'd'};
  b_rigidtform3d obj;
  b_rigidtform3d ojd_emlrtRSI;
  b_rigidtform3d params_Edges_RelativePose;
  b_rigidtform3d params_Nodes_AbsolutePose;
  b_rigidtform3d pjd_emlrtRSI;
  b_rigidtform3d qjd_emlrtRSI;
  e_table t;
  table N;
  table b_N;
  table mjd_emlrtRSI;
  table njd_emlrtRSI;
  array<cell_wrap_1, 1U> tformCell;
  array<cell_wrap_7, 2U> expl_temp;
  array<cell_wrap_7, 1U> params_InfoMats;
  array<real_T, 2U> edges;
  array<real_T, 2U> infoMatsCompact;
  array<real_T, 2U> nodeScales;
  array<real_T, 2U> nodes;
  array<real_T, 2U> optimNodes;
  array<real_T, 2U> params_Edges_EndNodes;
  array<real_T, 2U> params_Edges_Scale;
  array<real_T, 2U> pose1;
  array<real_T, 1U> b_expl_temp;
  array<uint32_T, 1U> params_Nodes_ViewId;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T infoMatCompact_data[28];
  real_T infoMatCompact[21];
  real_T tform[16];
  real_T edge_data[10];
  real_T pose_data[8];
  real_T d_expl_temp;
  real_T k;
  int32_T b_iv[2];
  int32_T edge_size[2];
  int32_T tmp_size[2];
  int32_T loop_ub_tmp;
  char_T tmp_data[20];
  boolean_T c_expl_temp;
  boolean_T params_isSimilarityPoseGraph;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &fgd_emlrtRSI;
  b_st.site = &pgd_emlrtRSI;
  G.get_Edges(b_st, t);
  if (t.data.f1.size(0) == 0) {
    int32_T loop_ub;
    b_st.site = &ogd_emlrtRSI;
    c_st.site = &agb_emlrtRSI;
    d_st.site = &bgb_emlrtRSI;
    mjd_emlrtRSI.init(d_st, G.NodeProperties.data.f1, G.NodeProperties.data.f2);
    b_st.site = &ogd_emlrtRSI;
    c_st.site = &xab_emlrtRSI;
    if (!isequal(t18_f1, cv6, t18_f1, cv6)) {
      b_st.site = &ngd_emlrtRSI;
      strjoin(tmp_data, tmp_size);
      emlrtErrorWithMessageIdR2018a(
          &st, &dg_emlrtRTEI, "vision:viewSet:requiredColumnsMissing",
          "vision:viewSet:requiredColumnsMissing", 6, 4, 10, "Nodes of G", 4,
          tmp_size[1], &tmp_data[0]);
    }
    b_st.site = &mgd_emlrtRSI;
    c_st.site = &agb_emlrtRSI;
    d_st.site = &bgb_emlrtRSI;
    njd_emlrtRSI.init(d_st, G.NodeProperties.data.f1, G.NodeProperties.data.f2);
    b_st.site = &lgd_emlrtRSI;
    c_st.site = &agb_emlrtRSI;
    d_st.site = &bgb_emlrtRSI;
    N.init(d_st, G.NodeProperties.data.f1, G.NodeProperties.data.f2);
    b_st.site = &lgd_emlrtRSI;
    loop_ub = N.data.f1.size(0);
    tformCell.set_size(&mrb_emlrtRTEI, &st, N.data.f1.size(0));
    for (int32_T n{0}; n < loop_ub; n++) {
      b_st.site = &kgd_emlrtRSI;
      c_st.site = &agb_emlrtRSI;
      d_st.site = &bgb_emlrtRSI;
      b_N.init(d_st, G.NodeProperties.data.f1, G.NodeProperties.data.f2);
      if (n > b_N.data.f2.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, b_N.data.f2.size(0) - 1,
                                      &dx_emlrtBCI, &st);
      }
      for (int32_T i{0}; i < 3; i++) {
        int32_T i1;
        if (n > tformCell.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1,
                                        &tx_emlrtBCI, &st);
        }
        i1 = i << 2;
        tformCell[n].f1[i1] = b_N.data.f2[n].R[i];
        if (n > tformCell.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1,
                                        &tx_emlrtBCI, &st);
        }
        tformCell[n].f1[i1 + 1] = b_N.data.f2[n].R[i + 3];
        if (n > tformCell.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1,
                                        &tx_emlrtBCI, &st);
        }
        tformCell[n].f1[i1 + 2] = b_N.data.f2[n].R[i + 6];
      }
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[3] = b_N.data.f2[n].Translation[0];
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[7] = b_N.data.f2[n].Translation[1];
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[11] = b_N.data.f2[n].Translation[2];
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[12] = 0.0F;
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[13] = 0.0F;
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[14] = 0.0F;
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &tx_emlrtBCI,
                                      &st);
      }
      tformCell[n].f1[15] = 1.0F;
    }
    b_st.site = &hgd_emlrtRSI;
    c_st.site = &agb_emlrtRSI;
    d_st.site = &bgb_emlrtRSI;
    b_N.init(d_st, G.NodeProperties.data.f1, G.NodeProperties.data.f2);
    b_expl_temp.set_size(&nrb_emlrtRTEI, &st, N.data.f1.size(0));
    for (int32_T i{0}; i < loop_ub; i++) {
      b_expl_temp[i] = 1.0;
    }
    b_st.site = &hgd_emlrtRSI;
    poseTable.init(b_st, b_N.data.f1, tformCell, b_expl_temp);
  } else {
    void *edgesVec;
    void *infoMatsVec;
    void *nodesVec;
    real_T solverInfo[3];
    int32_T blockSolverType;
    int32_T edgeScales_size_idx_0;
    int32_T edgeScales_size_idx_1;
    int32_T i;
    int32_T i1;
    int32_T infoDim;
    int32_T loop_ub;
    int32_T poseDim;
    int32_T tform_tmp;
    b_st.site = &jgd_emlrtRSI;
    codegen::poseGraph::parseInputsCodegen(
        b_st, G, params_Nodes_ViewId, params_Nodes_AbsolutePose,
        params_Edges_RelativePose, params_Edges_Scale, expl_temp, b_expl_temp,
        params_Edges_EndNodes, params_InfoMats, k, c_expl_temp, d_expl_temp,
        params_isSimilarityPoseGraph);
    b_st.site = &igd_emlrtRSI;
    if (params_isSimilarityPoseGraph) {
      poseDim = 8;
      blockSolverType = 2;
      edgeScales_size_idx_0 = params_Edges_Scale.size(0);
      edgeScales_size_idx_1 = params_Edges_Scale.size(1);
    } else {
      poseDim = 7;
      blockSolverType = 1;
      edgeScales_size_idx_0 = 0;
      edgeScales_size_idx_1 = 0;
    }
    loop_ub = params_Nodes_AbsolutePose.Data.size(1);
    tmp_size[0] = params_Nodes_AbsolutePose.Data.size(1);
    nodes.set_size(&drb_emlrtRTEI, &b_st,
                   params_Nodes_AbsolutePose.Data.size(1), poseDim);
    i = params_Edges_RelativePose.Data.size(1);
    edges.set_size(&erb_emlrtRTEI, &b_st,
                   params_Edges_RelativePose.Data.size(1), poseDim + 2);
    optimNodes.set_size(&frb_emlrtRTEI, &b_st,
                        params_Nodes_AbsolutePose.Data.size(1), poseDim);
    if (params_isSimilarityPoseGraph) {
      infoDim = 28;
      infoMatsCompact.set_size(&hrb_emlrtRTEI, &b_st,
                               params_Edges_RelativePose.Data.size(1), 28);
    } else {
      infoDim = 21;
      infoMatsCompact.set_size(&grb_emlrtRTEI, &b_st,
                               params_Edges_RelativePose.Data.size(1), 21);
    }
    solverInfo[0] = 0.0;
    solverInfo[1] = 0.0;
    solverInfo[2] = 0.0;
    nodesVec = nullptr;
    edgesVec = nullptr;
    infoMatsVec = nullptr;
    if (loop_ub - 1 >= 0) {
      b_iv[0] = 1;
      b_iv[1] = poseDim;
    }
    for (int32_T n{0}; n < loop_ub; n++) {
      std::memset(&pose_data[0], 0,
                  static_cast<uint32_T>(poseDim) * sizeof(real_T));
      c_st.site = &qhd_emlrtRSI;
      params_Nodes_AbsolutePose.parenReference(
          c_st, static_cast<real_T>(n) + 1.0, &ojd_emlrtRSI);
      c_st.site = &rhd_emlrtRSI;
      params_Nodes_AbsolutePose.parenReference(
          c_st, static_cast<real_T>(n) + 1.0, &obj);
      for (i1 = 0; i1 < 3; i1++) {
        tform_tmp = i1 << 2;
        tform[tform_tmp] = obj.R[i1];
        tform[tform_tmp + 1] = obj.R[i1 + 3];
        tform[tform_tmp + 2] = obj.R[i1 + 6];
        tform[tform_tmp + 3] = obj.Translation[i1];
      }
      tform[12] = 0.0;
      tform[13] = 0.0;
      tform[14] = 0.0;
      tform[15] = 1.0;
      tform2quatpose(&tform[0], &pose_data[0]);
      if (params_isSimilarityPoseGraph) {
        pose_data[poseDim - 1] = 1.0;
      }
      if (n + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, loop_ub, &fx_emlrtBCI, &b_st);
      }
      tmp_size[0] = 1;
      tform_tmp = nodes.size(1);
      tmp_size[1] = nodes.size(1);
      emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &b_iv[0], 2, &ce_emlrtECI,
                                    &b_st);
      for (i1 = 0; i1 < tform_tmp; i1++) {
        nodes[n + nodes.size(0) * i1] = pose_data[i1];
      }
    }
    if (i - 1 >= 0) {
      edge_size[0] = 1;
      edge_size[1] = poseDim + 2;
      loop_ub_tmp = poseDim + 2;
    }
    for (int32_T n{0}; n < i; n++) {
      std::memset(&edge_data[0], 0,
                  static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
      i1 = params_Edges_EndNodes.size(0) << 1;
      if (n + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i1, &nx_emlrtBCI, &b_st);
      }
      edge_data[0] = params_Edges_EndNodes[n] - 1.0;
      tform_tmp = static_cast<int32_T>(
          (static_cast<uint32_T>(n) +
           static_cast<uint32_T>(params_Edges_RelativePose.Data.size(1))) +
          1U);
      if ((tform_tmp < 1) || (tform_tmp > i1)) {
        emlrtDynamicBoundsCheckR2012b(tform_tmp, 1, i1, &ox_emlrtBCI, &b_st);
      }
      edge_data[1] = params_Edges_EndNodes[tform_tmp - 1] - 1.0;
      c_st.site = &shd_emlrtRSI;
      params_Edges_RelativePose.parenReference(
          c_st, static_cast<real_T>(n) + 1.0, &pjd_emlrtRSI);
      c_st.site = &thd_emlrtRSI;
      params_Edges_RelativePose.parenReference(
          c_st, static_cast<real_T>(n) + 1.0, &obj);
      for (i1 = 0; i1 < 3; i1++) {
        tform_tmp = i1 << 2;
        tform[tform_tmp] = obj.R[i1];
        tform[tform_tmp + 1] = obj.R[i1 + 3];
        tform[tform_tmp + 2] = obj.R[i1 + 6];
        tform[tform_tmp + 3] = obj.Translation[i1];
      }
      tform[12] = 0.0;
      tform[13] = 0.0;
      tform[14] = 0.0;
      tform[15] = 1.0;
      tform2quatpose(&tform[0], &edge_data[2]);
      if (params_isSimilarityPoseGraph) {
        i1 = edgeScales_size_idx_0 * edgeScales_size_idx_1;
        if (n + 1 > i1) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i1, &ex_emlrtBCI, &b_st);
        }
        edge_data[poseDim + 1] = 1.0;
      }
      if (n + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i, &gx_emlrtBCI, &b_st);
      }
      tmp_size[0] = 1;
      tmp_size[1] = poseDim + 2;
      emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &edge_size[0], 2,
                                    &de_emlrtECI, &b_st);
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        edges[n + edges.size(0) * i1] = edge_data[i1];
      }
      if (params_isSimilarityPoseGraph) {
        c_st.site = &uhd_emlrtRSI;
        if (n > params_InfoMats.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, params_InfoMats.size(0) - 1,
                                        &lx_emlrtBCI, &c_st);
        }
        k = 1.0;
        d_expl_temp = 1.0;
        for (tform_tmp = 0; tform_tmp < 28; tform_tmp++) {
          i1 = params_InfoMats[n].f1.size(0) * params_InfoMats[n].f1.size(1);
          if ((static_cast<int32_T>(k) < 1) || (static_cast<int32_T>(k) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k), 1, i1,
                                          &sx_emlrtBCI, &c_st);
          }
          infoMatCompact_data[tform_tmp] =
              params_InfoMats[n].f1[static_cast<int32_T>(k) - 1];
          k += 7.0;
          if (k > 49.0) {
            k = d_expl_temp + 8.0;
            d_expl_temp += 8.0;
          }
        }
        b_iv[0] = 1;
        b_iv[1] = 28;
      } else {
        c_st.site = &vhd_emlrtRSI;
        if (n > params_InfoMats.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(n, 0, params_InfoMats.size(0) - 1,
                                        &kx_emlrtBCI, &c_st);
        }
        k = 1.0;
        d_expl_temp = 1.0;
        for (tform_tmp = 0; tform_tmp < 21; tform_tmp++) {
          i1 = params_InfoMats[n].f1.size(0) * params_InfoMats[n].f1.size(1);
          if ((static_cast<int32_T>(k) < 1) || (static_cast<int32_T>(k) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k), 1, i1,
                                          &rx_emlrtBCI, &c_st);
          }
          infoMatCompact[tform_tmp] =
              params_InfoMats[n].f1[static_cast<int32_T>(k) - 1];
          k += 6.0;
          if (k > 36.0) {
            k = d_expl_temp + 7.0;
            d_expl_temp += 7.0;
          }
        }
        b_iv[0] = 1;
        b_iv[1] = 21;
        std::copy(&infoMatCompact[0], &infoMatCompact[21],
                  &infoMatCompact_data[0]);
      }
      if (n + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i, &hx_emlrtBCI, &b_st);
      }
      tmp_size[0] = 1;
      tform_tmp = infoMatsCompact.size(1);
      tmp_size[1] = infoMatsCompact.size(1);
      emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &b_iv[0], 2, &ee_emlrtECI,
                                    &b_st);
      for (i1 = 0; i1 < tform_tmp; i1++) {
        infoMatsCompact[n + infoMatsCompact.size(0) * i1] =
            infoMatCompact_data[i1];
      }
    }
    initializeVectors(
        static_cast<uint32_T>(params_Nodes_AbsolutePose.Data.size(1)),
        static_cast<uint32_T>(poseDim), &nodes[0], &nodesVec);
    initializeVectors(
        static_cast<uint32_T>(params_Edges_RelativePose.Data.size(1)),
        static_cast<uint32_T>(poseDim + 2), &edges[0], &edgesVec);
    initializeVectors(
        static_cast<uint32_T>(params_Edges_RelativePose.Data.size(1)),
        static_cast<uint32_T>(infoDim), &infoMatsCompact[0], &infoMatsVec);
    poseOptimizer(static_cast<real_T>(blockSolverType), 300.0, 1.0E-16, false,
                  rtInf, nodesVec, edgesVec, infoMatsVec, &optimNodes[0],
                  &solverInfo[0]);
    tformCell.set_size(&irb_emlrtRTEI, &b_st,
                       params_Nodes_AbsolutePose.Data.size(1));
    k = 1.0;
    d_expl_temp = poseDim;
    if (params_Nodes_AbsolutePose.Data.size(1) - 1 >= 0) {
      tmp_size[0] = 1;
    }
    for (int32_T n{0}; n < loop_ub; n++) {
      std::memset(&tform[0], 0, 16U * sizeof(real_T));
      if (k > d_expl_temp) {
        i1 = 0;
        i = 0;
      } else {
        i = optimNodes.size(0) * optimNodes.size(1);
        if ((static_cast<int32_T>(k) < 1) || (static_cast<int32_T>(k) > i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k), 1, i,
                                        &ix_emlrtBCI, &b_st);
        }
        i1 = static_cast<int32_T>(k) - 1;
        if ((static_cast<int32_T>(d_expl_temp) < 1) ||
            (static_cast<int32_T>(d_expl_temp) > i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_expl_temp), 1, i,
                                        &jx_emlrtBCI, &b_st);
        }
        i = static_cast<int32_T>(d_expl_temp);
      }
      tform_tmp = i - i1;
      tmp_size[1] = tform_tmp;
      b_iv[0] = (*(int32_T(*)[2])optimNodes.size())[0];
      b_iv[1] = (*(int32_T(*)[2])optimNodes.size())[1];
      c_st.site = &whd_emlrtRSI;
      ::coder::internal::b_indexShapeCheck(c_st, b_iv, tmp_size);
      pose1.set_size(&jrb_emlrtRTEI, &b_st, 1, tform_tmp);
      for (i = 0; i < tform_tmp; i++) {
        pose1[i] = optimNodes[i1 + i];
      }
      quatpose2tform(&pose1[0], &tform[0]);
      c_st.site = &xhd_emlrtRSI;
      params_Nodes_AbsolutePose.parenReference(
          c_st, static_cast<real_T>(n) + 1.0, &qjd_emlrtRSI);
      if (n > tformCell.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(n, 0, tformCell.size(0) - 1, &mx_emlrtBCI,
                                      &b_st);
      }
      for (i = 0; i < 16; i++) {
        tformCell[n].f1[i] = static_cast<real32_T>(tform[i]);
      }
      k += static_cast<real_T>(poseDim);
      d_expl_temp += static_cast<real_T>(poseDim);
    }
    if (params_isSimilarityPoseGraph) {
      nodeScales.set_size(&lrb_emlrtRTEI, &b_st,
                          params_Nodes_AbsolutePose.Data.size(1),
                          params_Nodes_AbsolutePose.Data.size(1));
      for (int32_T n{0}; n < loop_ub; n++) {
        i = optimNodes.size(0) * optimNodes.size(1);
        i1 = (n + 1) * poseDim;
        if ((i1 < 1) || (i1 > i)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i, &px_emlrtBCI, &b_st);
        }
        i = nodeScales.size(0) * nodeScales.size(1);
        if (n + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i, &qx_emlrtBCI, &b_st);
        }
        nodeScales[n] = optimNodes[i1 - 1];
      }
    } else {
      nodeScales.set_size(&krb_emlrtRTEI, &b_st,
                          params_Nodes_AbsolutePose.Data.size(1), 1);
      for (i = 0; i < loop_ub; i++) {
        nodeScales[i] = 1.0;
      }
    }
    b_st.site = &ggd_emlrtRSI;
    poseTable.init(b_st, params_Nodes_ViewId, tformCell, nodeScales);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (optimizePoses.cpp)
