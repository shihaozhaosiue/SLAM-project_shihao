//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// optimizePoses1.cpp
//
// Code generation for function 'optimizePoses1'
//

// Include files
#include "optimizePoses1.h"
#include "any1.h"
#include "digraph.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "isequal.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "strjoin.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo qgd_emlrtRSI{
    87,                   // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo rgd_emlrtRSI{
    90,                   // lineNo
    "parseInputsCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo sgd_emlrtRSI{
    189,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo tgd_emlrtRSI{
    186,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ugd_emlrtRSI{
    148,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo vgd_emlrtRSI{
    147,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo wgd_emlrtRSI{
    142,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo xgd_emlrtRSI{
    134,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ygd_emlrtRSI{
    121,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ahd_emlrtRSI{
    112,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo bhd_emlrtRSI{
    111,                     // lineNo
    "checkPoseGraphCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo chd_emlrtRSI{
    198,                                  // lineNo
    "checkAndConvertAbsolutePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo dhd_emlrtRSI{
    200,                                  // lineNo
    "checkAndConvertAbsolutePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ehd_emlrtRSI{
    201,                                  // lineNo
    "checkAndConvertAbsolutePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo fhd_emlrtRSI{
    204,                                  // lineNo
    "checkAndConvertAbsolutePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ghd_emlrtRSI{
    216,                                  // lineNo
    "checkAndConvertRelativePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo hhd_emlrtRSI{
    220,                                  // lineNo
    "checkAndConvertRelativePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ihd_emlrtRSI{
    223,                                  // lineNo
    "checkAndConvertRelativePoseCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo jhd_emlrtRSI{
    249,                                       // lineNo
    "checkAndDecomposeSimilarityTformCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo khd_emlrtRSI{
    251,                                       // lineNo
    "checkAndDecomposeSimilarityTformCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo lhd_emlrtRSI{
    255,                                       // lineNo
    "checkAndDecomposeSimilarityTformCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo mhd_emlrtRSI{
    267,                                       // lineNo
    "checkAndDecomposeSimilarityTformCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo nhd_emlrtRSI{
    250,                                       // lineNo
    "checkAndDecomposeSimilarityTformCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo ohd_emlrtRSI{
    279,                                       // lineNo
    "checkAndConvertInformationMatrixCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtRSInfo phd_emlrtRSI{
    285,                                       // lineNo
    "checkAndConvertInformationMatrixCodegen", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pathName
};

static emlrtBCInfo ux_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    279,                                       // lineNo
    42,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo vx_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    287,                                       // lineNo
    44,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo wx_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    285,                                       // lineNo
    44,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo xx_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    90,                   // lineNo
    16,                   // colNo
    "",                   // aName
    "parseInputsCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo yx_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    90,                   // lineNo
    9,                    // colNo
    "",                   // aName
    "parseInputsCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ay_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    280,                                       // lineNo
    45,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo by_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    280,                                       // lineNo
    60,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo cy_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    284,                                       // lineNo
    48,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo dy_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    285,                                       // lineNo
    13,                                        // colNo
    "",                                        // aName
    "checkAndConvertInformationMatrixCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtRTEInfo eg_emlrtRTEI{
    120,                     // lineNo
    69,                      // colNo
    "checkPoseGraphCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtBCInfo ey_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    265,                                       // lineNo
    24,                                        // colNo
    "",                                        // aName
    "checkAndDecomposeSimilarityTformCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo fy_emlrtBCI{
    -1,                                        // iFirst
    -1,                                        // iLast
    266,                                       // lineNo
    19,                                        // colNo
    "",                                        // aName
    "checkAndDecomposeSimilarityTformCodegen", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m", // pName
    0                                       // checkKind
};

static emlrtRTEInfo orb_emlrtRTEI{
    90,              // lineNo
    16,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo prb_emlrtRTEI{
    90,              // lineNo
    9,               // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo qrb_emlrtRTEI{
    280,             // lineNo
    28,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo rrb_emlrtRTEI{
    287,             // lineNo
    13,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo srb_emlrtRTEI{
    137,             // lineNo
    9,               // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo trb_emlrtRTEI{
    216,             // lineNo
    5,               // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo urb_emlrtRTEI{
    252,             // lineNo
    33,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo vrb_emlrtRTEI{
    253,             // lineNo
    28,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo wrb_emlrtRTEI{
    228,             // lineNo
    17,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo xrb_emlrtRTEI{
    225,             // lineNo
    17,              // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo yrb_emlrtRTEI{
    186,             // lineNo
    6,               // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

static emlrtRTEInfo asb_emlrtRTEI{
    192,             // lineNo
    9,               // colNo
    "optimizePoses", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\+poseGraph\\optimizePoses.m" // pName
};

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace poseGraph {
static boolean_T checkPoseGraphCodegen(
    const emlrtStack &sp, const digraph &G, array<uint32_T, 1U> &Nodes_ViewId,
    b_rigidtform3d &Nodes_AbsolutePose, b_rigidtform3d &Edges_RelativePose,
    array<real_T, 2U> &Edges_Scale,
    array<cell_wrap_7, 2U> &Edges_InformationMatrix,
    array<real_T, 1U> &Edges_Weight, array<real_T, 2U> &Edges_EndNodes,
    array<real_T, 1U> &infoMatDoF);

}
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace poseGraph {
static boolean_T checkPoseGraphCodegen(
    const emlrtStack &sp, const digraph &G, array<uint32_T, 1U> &Nodes_ViewId,
    b_rigidtform3d &Nodes_AbsolutePose, b_rigidtform3d &Edges_RelativePose,
    array<real_T, 2U> &Edges_Scale,
    array<cell_wrap_7, 2U> &Edges_InformationMatrix,
    array<real_T, 1U> &Edges_Weight, array<real_T, 2U> &Edges_EndNodes,
    array<real_T, 1U> &infoMatDoF)
{
  static const char_T t15_f1[6]{'V', 'i', 'e', 'w', 'I', 'd'};
  c_table t;
  e_table edges;
  matlab::internal::coder::tabular::b_private::varNamesDim mjd_emlrtRSI;
  table nodes;
  array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
  array<int8_T, 2U> b_Edges_Scale;
  array<int8_T, 1U> edgeScales;
  array<boolean_T, 1U> isSim3Pose;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T a__2;
  real_T rowIndices;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  char_T tmp_data[20];
  boolean_T exitg1;
  boolean_T isSimilarityPoseGraph;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &bhd_emlrtRSI;
  b_st.site = &agb_emlrtRSI;
  c_st.site = &bgb_emlrtRSI;
  nodes.init(c_st, G.NodeProperties.data.f1, G.NodeProperties.data.f2);
  st.site = &ahd_emlrtRSI;
  b_st.site = &xab_emlrtRSI;
  c_st.site = &yab_emlrtRSI;
  if (!isequal(t15_f1, cv6, t15_f1, cv6)) {
    int32_T tmp_size[2];
    st.site = &ygd_emlrtRSI;
    strjoin(tmp_data, tmp_size);
    emlrtErrorWithMessageIdR2018a(
        &sp, &eg_emlrtRTEI, "vision:viewSet:requiredColumnsMissing",
        "vision:viewSet:requiredColumnsMissing", 6, 4, 10, "Nodes of G", 4,
        tmp_size[1], &tmp_data[0]);
  }
  st.site = &xgd_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= nodes.data.f1.size(0) - 1)) {
    if (nodes.data.f1[k] > 0U) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:optimizePoses:expectedPositive", 3, 4, 21,
        "ViewId of Nodes table");
  }
  loop_ub = nodes.data.f1.size(0);
  Nodes_ViewId.set_size(&srb_emlrtRTEI, &sp, nodes.data.f1.size(0));
  for (i = 0; i < loop_ub; i++) {
    Nodes_ViewId[i] = nodes.data.f1[i];
  }
  st.site = &wgd_emlrtRSI;
  b_st.site = &chd_emlrtRSI;
  nodes.parenReference(b_st, t);
  Nodes_AbsolutePose = t.data.f2[0];
  b_st.site = &dhd_emlrtRSI;
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    b_st.site = &ehd_emlrtRSI;
    c_st.site = &htb_emlrtRSI;
    rowIndices =
        nodes.rowDim.subs2inds(c_st, static_cast<real_T>(b_i) + 1.0, a__2);
    c_st.site = &itb_emlrtRSI;
    matlab::internal::coder::tabular::b_private::c_varNamesDim::subs2inds(
        c_st, mjd_emlrtRSI);
    if ((static_cast<int32_T>(rowIndices) < 1) ||
        (static_cast<int32_T>(rowIndices) > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(rowIndices), 1,
                                    loop_ub, &ev_emlrtBCI, &b_st);
    }
    if ((static_cast<int32_T>(rowIndices) - 1 < 0) ||
        (static_cast<int32_T>(rowIndices) - 1 > nodes.data.f2.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(rowIndices) - 1, 0,
                                    nodes.data.f2.size(0) - 1, &gj_emlrtBCI,
                                    &b_st);
    }
    b_st.site = &fhd_emlrtRSI;
    if (b_i + 1 > Nodes_AbsolutePose.Data.size(1)) {
      dataArray.set_size(&qkb_emlrtRTEI, &b_st, 1, b_i + 1);
      i = Nodes_AbsolutePose.Data.size(1);
      for (k = 0; k < i; k++) {
        if (k > Nodes_AbsolutePose.Data.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              k, 0, Nodes_AbsolutePose.Data.size(1) - 1, &lr_emlrtBCI, &b_st);
        }
        if (k > dataArray.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(k, 0, dataArray.size(1) - 1,
                                        &mr_emlrtBCI, &b_st);
        }
        dataArray[k] = Nodes_AbsolutePose.Data[k];
      }
      i = nodes.data.f2[static_cast<int32_T>(rowIndices) - 1].Data.size(1);
      if (i - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, i - 1, &cr_emlrtBCI, &b_st);
      }
      if (b_i > dataArray.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dataArray.size(1) - 1,
                                      &nr_emlrtBCI, &b_st);
      }
      dataArray[b_i] =
          nodes.data.f2[static_cast<int32_T>(rowIndices) - 1].Data[0];
      b_loop_ub = dataArray.size(1);
      Nodes_AbsolutePose.Data.set_size(&rkb_emlrtRTEI, &b_st, 1,
                                       dataArray.size(1));
      for (i = 0; i < b_loop_ub; i++) {
        Nodes_AbsolutePose.Data[i] = dataArray[i];
      }
    } else {
      i = nodes.data.f2[static_cast<int32_T>(rowIndices) - 1].Data.size(1);
      if (i - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, i - 1, &dr_emlrtBCI, &b_st);
      }
      if (b_i > Nodes_AbsolutePose.Data.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(
            b_i, 0, Nodes_AbsolutePose.Data.size(1) - 1, &kr_emlrtBCI, &b_st);
      }
      Nodes_AbsolutePose.Data[b_i] =
          nodes.data.f2[static_cast<int32_T>(rowIndices) - 1].Data[0];
    }
  }
  st.site = &vgd_emlrtRSI;
  G.get_Edges(st, edges);
  st.site = &ugd_emlrtRSI;
  b_st.site = &xab_emlrtRSI;
  c_st.site = &yab_emlrtRSI;
  st.site = &tgd_emlrtRSI;
  b_st.site = &ghd_emlrtRSI;
  loop_ub = edges.data.f1.size(0);
  infoMatDoF.set_size(&trb_emlrtRTEI, &st, edges.data.f1.size(0));
  for (i = 0; i < loop_ub; i++) {
    infoMatDoF[i] = 6.0;
  }
  b_st.site = &hhd_emlrtRSI;
  c_st.site = &jhd_emlrtRSI;
  d_st.site = &htb_emlrtRSI;
  if (edges.rowDim.length < 1.0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &pd_emlrtRTEI,
                                  "MATLAB:table:RowIndexOutOfRange",
                                  "MATLAB:table:RowIndexOutOfRange", 0);
  }
  if (edges.data.f1.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, edges.data.f1.size(0), &ev_emlrtBCI,
                                  &c_st);
  }
  i = edges.data.f2.size(0) - 1;
  if (edges.data.f2.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, edges.data.f2.size(0) - 1, &gj_emlrtBCI,
                                  &c_st);
  }
  i1 = edges.data.f3.size(0) - 1;
  if (edges.data.f3.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, edges.data.f3.size(0) - 1, &gj_emlrtBCI,
                                  &c_st);
  }
  b_loop_ub = edges.data.f4.size(0);
  if (edges.data.f4.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, edges.data.f4.size(0), &ev_emlrtBCI,
                                  &c_st);
  }
  c_st.site = &nhd_emlrtRSI;
  Edges_RelativePose.init(c_st);
  c_st.site = &khd_emlrtRSI;
  isSim3Pose.set_size(&urb_emlrtRTEI, &b_st, edges.data.f1.size(0));
  edgeScales.set_size(&vrb_emlrtRTEI, &b_st, edges.data.f1.size(0));
  for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
    int32_T i2;
    c_st.site = &lhd_emlrtRSI;
    d_st.site = &htb_emlrtRSI;
    rowIndices =
        edges.rowDim.subs2inds(d_st, static_cast<real_T>(b_i) + 1.0, a__2);
    if ((static_cast<int32_T>(rowIndices) < 1) ||
        (static_cast<int32_T>(rowIndices) > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(rowIndices), 1,
                                    loop_ub, &ev_emlrtBCI, &c_st);
    }
    if ((static_cast<int32_T>(rowIndices) - 1 < 0) ||
        (static_cast<int32_T>(rowIndices) - 1 > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(rowIndices) - 1, 0, i,
                                    &gj_emlrtBCI, &c_st);
    }
    if ((static_cast<int32_T>(rowIndices) - 1 < 0) ||
        (static_cast<int32_T>(rowIndices) - 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(rowIndices) - 1, 0, i1,
                                    &gj_emlrtBCI, &c_st);
    }
    if ((static_cast<int32_T>(rowIndices) < 1) ||
        (static_cast<int32_T>(rowIndices) > b_loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(rowIndices), 1,
                                    b_loop_ub, &ev_emlrtBCI, &c_st);
    }
    if (b_i + 1 > isSim3Pose.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, isSim3Pose.size(0),
                                    &ey_emlrtBCI, &b_st);
    }
    isSim3Pose[b_i] = false;
    if (b_i + 1 > edgeScales.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, edgeScales.size(0),
                                    &fy_emlrtBCI, &b_st);
    }
    edgeScales[b_i] = 1;
    c_st.site = &mhd_emlrtRSI;
    i2 = Edges_RelativePose.Data.size(1);
    if (b_i + 1 > Edges_RelativePose.Data.size(1)) {
      dataArray.set_size(&qkb_emlrtRTEI, &c_st, 1, b_i + 1);
      for (k = 0; k < i2; k++) {
        if (k > Edges_RelativePose.Data.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              k, 0, Edges_RelativePose.Data.size(1) - 1, &lr_emlrtBCI, &c_st);
        }
        if (k > dataArray.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(k, 0, dataArray.size(1) - 1,
                                        &mr_emlrtBCI, &c_st);
        }
        dataArray[k] = Edges_RelativePose.Data[k];
      }
      i2 = edges.data.f2[static_cast<int32_T>(rowIndices) - 1].Data.size(1);
      if (i2 - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, i2 - 1, &cr_emlrtBCI, &c_st);
      }
      if (b_i > dataArray.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, dataArray.size(1) - 1,
                                      &nr_emlrtBCI, &c_st);
      }
      dataArray[b_i] =
          edges.data.f2[static_cast<int32_T>(rowIndices) - 1].Data[0];
      k = dataArray.size(1);
      Edges_RelativePose.Data.set_size(&rkb_emlrtRTEI, &c_st, 1,
                                       dataArray.size(1));
      for (i2 = 0; i2 < k; i2++) {
        Edges_RelativePose.Data[i2] = dataArray[i2];
      }
    } else {
      i2 = edges.data.f2[static_cast<int32_T>(rowIndices) - 1].Data.size(1);
      if (i2 - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, i2 - 1, &dr_emlrtBCI, &c_st);
      }
      if (b_i > Edges_RelativePose.Data.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(
            b_i, 0, Edges_RelativePose.Data.size(1) - 1, &kr_emlrtBCI, &c_st);
      }
      Edges_RelativePose.Data[b_i] =
          edges.data.f2[static_cast<int32_T>(rowIndices) - 1].Data[0];
    }
  }
  b_st.site = &ihd_emlrtRSI;
  isSimilarityPoseGraph = any(b_st, isSim3Pose);
  if (isSimilarityPoseGraph) {
    loop_ub = edgeScales.size(0);
    b_Edges_Scale.set_size(&xrb_emlrtRTEI, &st, edgeScales.size(0), 1);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      b_Edges_Scale[b_i] = 1;
    }
  } else {
    b_Edges_Scale.set_size(&wrb_emlrtRTEI, &st, 0, 0);
  }
  Edges_Scale.set_size(&yrb_emlrtRTEI, &sp, b_Edges_Scale.size(0),
                       b_Edges_Scale.size(1));
  k = b_Edges_Scale.size(0) * b_Edges_Scale.size(1);
  for (i = 0; i < k; i++) {
    Edges_Scale[i] = 1.0;
  }
  Edges_InformationMatrix.set_size(&yrb_emlrtRTEI, &sp, edges.data.f3.size(0),
                                   edges.data.f3.size(1));
  k = edges.data.f3.size(0) * edges.data.f3.size(1);
  for (i = 0; i < k; i++) {
    Edges_InformationMatrix[i] = edges.data.f3[i];
  }
  Edges_Weight.set_size(&yrb_emlrtRTEI, &sp, edges.data.f4.size(0));
  for (i = 0; i < b_loop_ub; i++) {
    Edges_Weight[i] = edges.data.f4[i];
  }
  st.site = &sgd_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  p = true;
  loop_ub = edges.data.f1.size(0) << 1;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= loop_ub - 1)) {
    if ((!muDoubleScalarIsInf(edges.data.f1[k])) &&
        (!muDoubleScalarIsNaN(edges.data.f1[k])) &&
        (muDoubleScalarFloor(edges.data.f1[k]) == edges.data.f1[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &qc_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:optimizePoses:expectedInteger", 3, 4, 23,
        "EndNodes of Edges table");
  }
  b_st.site = &be_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= loop_ub - 1)) {
    if (!(edges.data.f1[k] <= 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &h_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:optimizePoses:expectedPositive", 3, 4, 23,
        "EndNodes of Edges table");
  }
  Edges_EndNodes.set_size(&asb_emlrtRTEI, &sp, edges.data.f1.size(0), 2);
  for (i = 0; i < loop_ub; i++) {
    Edges_EndNodes[i] = edges.data.f1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isSimilarityPoseGraph;
}

real_T
parseInputsCodegen(const emlrtStack &sp, const digraph &G,
                   array<uint32_T, 1U> &params_Nodes_ViewId,
                   b_rigidtform3d &params_Nodes_AbsolutePose,
                   b_rigidtform3d &params_Edges_RelativePose,
                   array<real_T, 2U> &params_Edges_Scale,
                   array<cell_wrap_7, 2U> &params_Edges_InformationMatrix,
                   array<real_T, 1U> &params_Edges_Weight,
                   array<real_T, 2U> &params_Edges_EndNodes,
                   array<cell_wrap_7, 1U> &params_InfoMats,
                   real_T &params_Tolerance, boolean_T &params_Verbose,
                   real_T &params_MaxTime,
                   boolean_T &params_isSimilarityPoseGraph)
{
  static const int8_T varargin_2[7]{0, 0, 0, 0, 0, 0, 1};
  array<real_T, 1U> infoMatDoF;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T t17_f3[2];
  real_T params_MaxIterations;
  int32_T c_params_Edges_InformationMatri;
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qgd_emlrtRSI;
  params_isSimilarityPoseGraph = checkPoseGraphCodegen(
      st, G, params_Nodes_ViewId, params_Nodes_AbsolutePose,
      params_Edges_RelativePose, params_Edges_Scale,
      params_Edges_InformationMatrix, params_Edges_Weight,
      params_Edges_EndNodes, infoMatDoF);
  st.site = &rgd_emlrtRSI;
  c_params_Edges_InformationMatri = params_Edges_InformationMatrix.size(0);
  params_InfoMats.set_size(&orb_emlrtRTEI, &st,
                           params_Edges_InformationMatrix.size(0));
  for (i = 0; i < c_params_Edges_InformationMatri; i++) {
    if (i > params_InfoMats.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, params_InfoMats.size(0) - 1,
                                    &xx_emlrtBCI, &st);
    }
    params_InfoMats[i].f1.set_size(&orb_emlrtRTEI, &st, 0,
                                   params_InfoMats[i].f1.size(1));
    if (i > params_InfoMats.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, params_InfoMats.size(0) - 1,
                                    &yx_emlrtBCI, &st);
    }
    params_InfoMats[i].f1.set_size(&prb_emlrtRTEI, &st,
                                   params_InfoMats[i].f1.size(0), 0);
  }
  params_InfoMats.set_size(&qrb_emlrtRTEI, &st,
                           params_Edges_InformationMatrix.size(0));
  for (int32_T b_i{0}; b_i < c_params_Edges_InformationMatri; b_i++) {
    real_T sz[2];
    real_T d;
    int32_T i1;
    int32_T k;
    boolean_T guard1;
    boolean_T p;
    if (b_i + 1 > infoMatDoF.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, infoMatDoF.size(0),
                                    &ay_emlrtBCI, &st);
    }
    params_MaxIterations = infoMatDoF[b_i];
    t17_f3[0] = params_MaxIterations;
    if (b_i + 1 > infoMatDoF.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, infoMatDoF.size(0),
                                    &by_emlrtBCI, &st);
    }
    t17_f3[1] = params_MaxIterations;
    b_st.site = &ohd_emlrtRSI;
    i = params_Edges_InformationMatrix.size(0) - 1;
    if (b_i > params_Edges_InformationMatrix.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0,
                                    params_Edges_InformationMatrix.size(0) - 1,
                                    &ux_emlrtBCI, &b_st);
    }
    c_st.site = &be_emlrtRSI;
    sz[0] = infoMatDoF[b_i];
    sz[1] = infoMatDoF[b_i];
    p = true;
    for (k = 0; k < 2; k++) {
      if (p) {
        d = t17_f3[k];
        if ((!(d != d)) &&
            (muDoubleScalarIsInf(d) || (!(d == muDoubleScalarFloor(sz[k]))))) {
          p = false;
        }
      } else {
        p = false;
      }
    }
    if (!p) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &re_emlrtRTEI, "MATLAB:validateattributes:badSizeArray",
          "MATLAB:validateattributes:badSizeArray", 0);
    }
    p = true;
    for (k = 0; k < 2; k++) {
      if (p) {
        d = t17_f3[k];
        if ((!(d != d)) && (!(d == 6.0))) {
          p = false;
        }
      } else {
        p = false;
      }
    }
    if (!p) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &i_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
          "MATLAB:optimizePoses:incorrectSize", 3, 4, 35,
          "element of InformationMatrix column");
    }
    guard1 = false;
    if (params_isSimilarityPoseGraph) {
      if (b_i + 1 > infoMatDoF.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, infoMatDoF.size(0),
                                      &cy_emlrtBCI, &st);
      }
      if (params_MaxIterations == 6.0) {
        int32_T loop_ub;
        b_st.site = &phd_emlrtRSI;
        if (b_i > params_Edges_InformationMatrix.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              b_i, 0, params_Edges_InformationMatrix.size(0) - 1, &wx_emlrtBCI,
              &b_st);
        }
        b_st.site = &phd_emlrtRSI;
        if (b_i > params_Edges_InformationMatrix.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              b_i, 0, params_Edges_InformationMatrix.size(0) - 1, &yx_emlrtBCI,
              &st);
        }
        k = params_Edges_InformationMatrix[b_i].f1.size(0);
        params_InfoMats[b_i].f1.set_size(&prb_emlrtRTEI, &st, k + 1,
                                         params_InfoMats[b_i].f1.size(1));
        if (b_i > params_Edges_InformationMatrix.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(
              b_i, 0, params_Edges_InformationMatrix.size(0) - 1, &yx_emlrtBCI,
              &st);
        }
        loop_ub = params_Edges_InformationMatrix[b_i].f1.size(1);
        params_InfoMats[b_i].f1.set_size(
            &prb_emlrtRTEI, &st, params_InfoMats[b_i].f1.size(0), loop_ub + 1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (int32_T i2{0}; i2 < k; i2++) {
            if (b_i > i) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &dy_emlrtBCI, &st);
            }
            params_InfoMats[b_i].f1[i2 + params_InfoMats[b_i].f1.size(0) * i1] =
                params_Edges_InformationMatrix[b_i]
                    .f1[i2 +
                        params_Edges_InformationMatrix[b_i].f1.size(0) * i1];
          }
        }
        for (i1 = 0; i1 < 6; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &dy_emlrtBCI, &st);
          }
          params_InfoMats[b_i]
              .f1[i1 + params_InfoMats[b_i].f1.size(0) * loop_ub] = 0.0;
        }
        for (i1 = 0; i1 < 7; i1++) {
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &dy_emlrtBCI, &st);
          }
          params_InfoMats[b_i].f1[k + params_InfoMats[b_i].f1.size(0) * i1] =
              varargin_2[i1];
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      if (b_i > params_Edges_InformationMatrix.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(
            b_i, 0, params_Edges_InformationMatrix.size(0) - 1, &vx_emlrtBCI,
            &st);
      }
      i = params_Edges_InformationMatrix[b_i].f1.size(0);
      i1 = params_Edges_InformationMatrix[b_i].f1.size(1);
      params_InfoMats[b_i].f1.set_size(&rrb_emlrtRTEI, &st, i, i1);
      k = i * i1;
      for (i = 0; i < k; i++) {
        params_InfoMats[b_i].f1[i] = params_Edges_InformationMatrix[b_i].f1[i];
      }
    }
  }
  params_MaxIterations = 300.0;
  params_Tolerance = 1.0E-16;
  params_Verbose = false;
  params_MaxTime = rtInf;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return params_MaxIterations;
}

} // namespace poseGraph
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (optimizePoses1.cpp)
