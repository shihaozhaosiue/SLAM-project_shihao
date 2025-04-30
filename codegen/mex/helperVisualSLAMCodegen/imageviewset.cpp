//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// imageviewset.cpp
//
// Code generation for function 'imageviewset'
//

// Include files
#include "imageviewset.h"
#include "MLDigraph.h"
#include "MLGraph.h"
#include "ORBPoints.h"
#include "ViewSetBaseImpl.h"
#include "ViewSetFeatureGraph.h"
#include "any1.h"
#include "assertValidSizeArg.h"
#include "checkIfViewIsMissing.h"
#include "constructFromEdgeList.h"
#include "digraph.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "estRelPoseImpl.h"
#include "find.h"
#include "graph.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_types.h"
#include "ismember.h"
#include "optimizePoses.h"
#include "pointTrack.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include "omp.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo cab_emlrtRSI{ 33,   // lineNo
  "imageviewset/imageviewset",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo dab_emlrtRSI{ 172,  // lineNo
  "imageviewsetBase/imageviewsetBase", // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo eab_emlrtRSI{ 211,  // lineNo
  "imageviewsetBase/imageviewsetBase", // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo fab_emlrtRSI{ 1233, // lineNo
  "imageviewsetBase/initializeViewsetData",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo gab_emlrtRSI{ 1237, // lineNo
  "imageviewsetBase/initializeViewsetData",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo hab_emlrtRSI{ 1310, // lineNo
  "imageviewsetBase/makeEmptyAffine3d",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo iab_emlrtRSI{ 50,   // lineNo
  "simtform3d/simtform3d",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+coder\\simtform3d.m"// pathName
};

static emlrtRSInfo jab_emlrtRSI{ 51,   // lineNo
  "simtform3d/simtform3d",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+coder\\simtform3d.m"// pathName
};

static emlrtRSInfo kab_emlrtRSI{ 39,   // lineNo
  "simtform3dImpl/simtform3dImpl",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\simtform3dImpl.m"// pathName
};

static emlrtRSInfo lab_emlrtRSI{ 1273, // lineNo
  "imageviewsetBase/initializeFeatureGraph",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo mab_emlrtRSI{ 1274, // lineNo
  "imageviewsetBase/initializeFeatureGraph",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo nab_emlrtRSI{ 19,   // lineNo
  "ViewSetFeatureGraph/ViewSetFeatureGraph",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pathName
};

static emlrtRSInfo oab_emlrtRSI{ 22,   // lineNo
  "ViewSetFeatureGraph/ViewSetFeatureGraph",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pathName
};

static emlrtRSInfo wab_emlrtRSI{ 60,   // lineNo
  "tabularDimension/init",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+matlab\\+internal\\+coder\\+tabular\\+private\\"
  "tabularDimension.m"                 // pathName
};

static emlrtRSInfo ibb_emlrtRSI{ 166,  // lineNo
  "constructFromEdgeList",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\constructFromEdgeList.m"// pathName
};

static emlrtRSInfo wcb_emlrtRSI{ 1428, // lineNo
  "imageviewset/checkPoints",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo xcb_emlrtRSI{ 454,  // lineNo
  "imageviewset/hasView",              // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ycb_emlrtRSI{ 40,   // lineNo
  "ViewSetBaseImpl/hasView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo qdb_emlrtRSI{ 30,   // lineNo
  "ViewSetFeatureGraph/addNodes",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pathName
};

static emlrtRSInfo rdb_emlrtRSI{ 48,   // lineNo
  "ViewSetFeatureGraph/addNodes",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pathName
};

static emlrtRSInfo sdb_emlrtRSI{ 51,   // lineNo
  "ViewSetFeatureGraph/addNodes",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pathName
};

static emlrtRSInfo tdb_emlrtRSI{ 52,   // lineNo
  "ViewSetFeatureGraph/addNodes",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pathName
};

static emlrtRSInfo udb_emlrtRSI{ 8,    // lineNo
  "graphBase/addnode",                 // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graphBase\\addnode.m"// pathName
};

static emlrtRSInfo vdb_emlrtRSI{ 13,   // lineNo
  "graphBase/addnode",                 // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graphBase\\addnode.m"// pathName
};

static emlrtRSInfo wdb_emlrtRSI{ 14,   // lineNo
  "graphBase/addnode",                 // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graphBase\\addnode.m"// pathName
};

static emlrtRSInfo xdb_emlrtRSI{ 22,   // lineNo
  "graphBase/addToNodeProperties",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graphBase\\addToNodeProperti"
  "es.m"                               // pathName
};

static emlrtRSInfo ydb_emlrtRSI{ 23,   // lineNo
  "graphBase/addToNodeProperties",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graphBase\\addToNodeProperti"
  "es.m"                               // pathName
};

static emlrtRSInfo aeb_emlrtRSI{ 207,  // lineNo
  "graphPropertyContainer/append",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\graphPropertyContainer.m"// pathName
};

static emlrtRSInfo beb_emlrtRSI{ 214,  // lineNo
  "graphPropertyContainer/append",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\graphPropertyContainer.m"// pathName
};

static emlrtRSInfo ceb_emlrtRSI{ 217,  // lineNo
  "graphPropertyContainer/append",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\graphPropertyContainer.m"// pathName
};

static emlrtRSInfo deb_emlrtRSI{ 183,  // lineNo
  "graph/underlyingConstructor",       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graph\\graph.m"// pathName
};

static emlrtRSInfo heb_emlrtRSI{ 949,  // lineNo
  "imageviewset/parseViewInputs",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ieb_emlrtRSI{ 184,  // lineNo
  "ViewSetBaseImpl/checkPose",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo leb_emlrtRSI{ 1270, // lineNo
  "imageviewset/parseConnectionInputs",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo reb_emlrtRSI{ 1026, // lineNo
  "imageviewset/parseMatches",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo seb_emlrtRSI{ 1495, // lineNo
  "imageviewset/checkMatches",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo teb_emlrtRSI{ 1032, // lineNo
  "imageviewset/checkMatchesOutOfBounds",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ueb_emlrtRSI{ 1033, // lineNo
  "imageviewset/checkMatchesOutOfBounds",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo veb_emlrtRSI{ 1039, // lineNo
  "imageviewset/checkMatchesOutOfBounds",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo web_emlrtRSI{ 1040, // lineNo
  "imageviewset/checkMatchesOutOfBounds",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo xeb_emlrtRSI{ 1044, // lineNo
  "imageviewset/checkMatchesOutOfBounds",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo yeb_emlrtRSI{ 1045, // lineNo
  "imageviewset/checkMatchesOutOfBounds",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo afb_emlrtRSI{ 66,   // lineNo
  "ViewSetBaseImpl/getViewIndex",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo bfb_emlrtRSI{ 70,   // lineNo
  "ViewSetBaseImpl/getViewIndex",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo cfb_emlrtRSI{ 269,  // lineNo
  "imageviewsetBase/get.Views",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo mfb_emlrtRSI{ 607,  // lineNo
  "imageviewset/hasConnection",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo nfb_emlrtRSI{ 53,   // lineNo
  "ViewSetBaseImpl/hasConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo ofb_emlrtRSI{ 54,   // lineNo
  "ViewSetBaseImpl/hasConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo pfb_emlrtRSI{ 56,   // lineNo
  "ViewSetBaseImpl/hasConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo fpb_emlrtRSI{ 742,  // lineNo
  "imageviewset/findTracks",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo gpb_emlrtRSI{ 740,  // lineNo
  "imageviewset/findTracks",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo hpb_emlrtRSI{ 739,  // lineNo
  "imageviewset/findTracks",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ipb_emlrtRSI{ 724,  // lineNo
  "imageviewset/findTracks",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo jpb_emlrtRSI{ 1403, // lineNo
  "imageviewset/parseFindTracksInputs",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo gyb_emlrtRSI{ 238,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo hyb_emlrtRSI{ 228,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo iyb_emlrtRSI{ 219,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo jyb_emlrtRSI{ 218,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo kyb_emlrtRSI{ 204,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo lyb_emlrtRSI{ 196,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo myb_emlrtRSI{ 195,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo nyb_emlrtRSI{ 194,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo oyb_emlrtRSI{ 192,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo pyb_emlrtRSI{ 190,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo qyb_emlrtRSI{ 188,  // lineNo
  "imageviewset/updateView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo syb_emlrtRSI{ 909,  // lineNo
  "imageviewset/parseViewInputs",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo vyb_emlrtRSI{ 153,  // lineNo
  "ViewSetBaseImpl/checkIfViewIsMissing",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo wyb_emlrtRSI{ 152,  // lineNo
  "ViewSetBaseImpl/checkIfViewIsMissing",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo yyb_emlrtRSI{ 994,  // lineNo
  "imageviewsetBase/updateProps",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo aac_emlrtRSI{ 995,  // lineNo
  "imageviewsetBase/updateProps",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo bac_emlrtRSI{ 996,  // lineNo
  "imageviewsetBase/updateProps",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo dac_emlrtRSI{ 865,  // lineNo
  "imageviewset/wipeMatches",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo eac_emlrtRSI{ 855,  // lineNo
  "imageviewset/wipeMatches",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo fac_emlrtRSI{ 674,  // lineNo
  "imageviewsetBase/getConnection",    // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo wbc_emlrtRSI{ 463,  // lineNo
  "imageviewset/updateConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo xbc_emlrtRSI{ 465,  // lineNo
  "imageviewset/updateConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ybc_emlrtRSI{ 485,  // lineNo
  "imageviewset/updateConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo acc_emlrtRSI{ 1238, // lineNo
  "imageviewset/parseConnectionInputs",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo bcc_emlrtRSI{ 1243, // lineNo
  "imageviewset/parseConnectionInputs",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ccc_emlrtRSI{ 160,  // lineNo
  "ViewSetBaseImpl/checkIfConnectionIsMissing",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo ymc_emlrtRSI{ 349,  // lineNo
  "imageviewset/findView",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo anc_emlrtRSI{ 572,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo bnc_emlrtRSI{ 575,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo cnc_emlrtRSI{ 579,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo dnc_emlrtRSI{ 587,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo enc_emlrtRSI{ 591,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo fnc_emlrtRSI{ 592,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo gnc_emlrtRSI{ 593,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo hnc_emlrtRSI{ 598,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo inc_emlrtRSI{ 600,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo jnc_emlrtRSI{ 601,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo knc_emlrtRSI{ 602,  // lineNo
  "imageviewsetBase/findView",         // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo dpc_emlrtRSI{ 35,   // lineNo
  "ViewSetBaseImpl/hasView",           // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo kpc_emlrtRSI{ 50,   // lineNo
  "ViewSetBaseImpl/hasConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo lpc_emlrtRSI{ 51,   // lineNo
  "ViewSetBaseImpl/hasConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pathName
};

static emlrtRSInfo orc_emlrtRSI{ 626,  // lineNo
  "imageviewset/connectedViews",       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo prc_emlrtRSI{ 636,  // lineNo
  "imageviewset/connectedViews",       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo qrc_emlrtRSI{ 649,  // lineNo
  "imageviewset/connectedViews",       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo rrc_emlrtRSI{ 652,  // lineNo
  "imageviewset/connectedViews",       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo src_emlrtRSI{ 674,  // lineNo
  "imageviewset/connectedViews",       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo trc_emlrtRSI{ 467,  // lineNo
  "imageviewsetBase/connectedViews",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo urc_emlrtRSI{ 490,  // lineNo
  "imageviewsetBase/connectedViews",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo vrc_emlrtRSI{ 493,  // lineNo
  "imageviewsetBase/connectedViews",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo wrc_emlrtRSI{ 464,  // lineNo
  "imageviewsetBase/connectedViews",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo ssc_emlrtRSI{ 467,  // lineNo
  "imageviewset/updateConnection",     // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo tsc_emlrtRSI{ 1249, // lineNo
  "imageviewset/parseConnectionInputs",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo kdd_emlrtRSI{ 805,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ldd_emlrtRSI{ 809,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo mdd_emlrtRSI{ 810,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo ndd_emlrtRSI{ 812,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo odd_emlrtRSI{ 814,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo pdd_emlrtRSI{ 818,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo qdd_emlrtRSI{ 820,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo rdd_emlrtRSI{ 824,  // lineNo
  "imageviewset/optimizePoses",        // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo sdd_emlrtRSI{ 791,  // lineNo
  "imageviewset/createPoseGraph",      // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo tdd_emlrtRSI{ 565,  // lineNo
  "imageviewsetBase/createPoseGraph",  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo udd_emlrtRSI{ 563,  // lineNo
  "imageviewsetBase/createPoseGraph",  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo vdd_emlrtRSI{ 531,  // lineNo
  "imageviewsetBase/createPoseGraph",  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo wdd_emlrtRSI{ 554,  // lineNo
  "imageviewsetBase/createPoseGraph",  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo xdd_emlrtRSI{ 523,  // lineNo
  "imageviewsetBase/createPoseGraph",  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo ydd_emlrtRSI{ 515,  // lineNo
  "imageviewsetBase/createPoseGraph",  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

static emlrtRSInfo aed_emlrtRSI{ 70,   // lineNo
  "digraph/digraph",                   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@digraph\\digraph.m"// pathName
};

static emlrtRSInfo bed_emlrtRSI{ 9,    // lineNo
  "constructFromTable",                // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\constructFromTable.m"// pathName
};

static emlrtRSInfo ced_emlrtRSI{ 46,   // lineNo
  "constructFromTable",                // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\constructFromTable.m"// pathName
};

static emlrtRSInfo ded_emlrtRSI{ 44,   // lineNo
  "constructFromTable",                // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\constructFromTable.m"// pathName
};

static emlrtRSInfo yhd_emlrtRSI{ 854,  // lineNo
  "imageviewset/wipeMatches",          // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtBCInfo in_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  243,                                 // lineNo
  37,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Views",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  54,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Views",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  75,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Views",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ln_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  270,                                 // lineNo
  65,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Views",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  270,                                 // lineNo
  96,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Views",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  35,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Views",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  356,                                 // lineNo
  42,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/get.Connections",  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  600,                                 // lineNo
  48,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  600,                                 // lineNo
  30,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  593,                                 // lineNo
  20,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  592,                                 // lineNo
  40,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  592,                                 // lineNo
  22,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtECInfo md_emlrtECI{ -1,    // nDims
  599,                                 // lineNo
  21,                                  // colNo
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtECInfo nd_emlrtECI{ -1,    // nDims
  583,                                 // lineNo
  13,                                  // colNo
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtBCInfo yq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  583,                                 // lineNo
  17,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ar_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  598,                                 // lineNo
  58,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo br_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  579,                                 // lineNo
  50,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo er_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  583,                                 // lineNo
  27,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  593,                                 // lineNo
  36,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  599,                                 // lineNo
  35,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  599,                                 // lineNo
  25,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ir_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  601,                                 // lineNo
  44,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  601,                                 // lineNo
  28,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/findView",         // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo ve_emlrtRTEI{ 1046,// lineNo
  13,                                  // colNo
  "imageviewset/checkMatchesOutOfBounds",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtBCInfo ns_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  1039,                                // lineNo
  45,                                  // colNo
  "",                                  // aName
  "imageviewset/checkMatchesOutOfBounds",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo os_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  1040,                                // lineNo
  45,                                  // colNo
  "",                                  // aName
  "imageviewset/checkMatchesOutOfBounds",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ps_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  59,                                  // colNo
  "",                                  // aName
  "ViewSetBaseImpl/getConnectionIndex",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  100,                                 // colNo
  "",                                  // aName
  "ViewSetBaseImpl/getConnectionIndex",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo we_emlrtRTEI{ 650, // lineNo
  33,                                  // colNo
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtDCInfo bc_emlrtDCI{ 663,   // lineNo
  42,                                  // colNo
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo rs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  629,                                 // lineNo
  46,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ss_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  656,                                 // lineNo
  44,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ts_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  663,                                 // lineNo
  42,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo us_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  663,                                 // lineNo
  59,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  626,                                 // lineNo
  31,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ws_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  628,                                 // lineNo
  36,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  641,                                 // lineNo
  49,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ys_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  644,                                 // lineNo
  51,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo at_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  651,                                 // lineNo
  51,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  662,                                 // lineNo
  51,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ct_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  664,                                 // lineNo
  55,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  664,                                 // lineNo
  40,                                  // colNo
  "",                                  // aName
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo cc_emlrtDCI{ 664,   // lineNo
  40,                                  // colNo
  "imageviewset/connectedViews",       // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  1                                    // checkKind
};

static emlrtECInfo rd_emlrtECI{ 1,     // nDims
  507,                                 // lineNo
  23,                                  // colNo
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtBCInfo et_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  495,                                 // lineNo
  36,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ft_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  500,                                 // lineNo
  30,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  500,                                 // lineNo
  47,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ht_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  475,                                 // lineNo
  17,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo it_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  476,                                 // lineNo
  17,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  491,                                 // lineNo
  39,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  483,                                 // lineNo
  29,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  483,                                 // lineNo
  52,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  500,                                 // lineNo
  55,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  501,                                 // lineNo
  43,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ot_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  501,                                 // lineNo
  51,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  501,                                 // lineNo
  28,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/connectedViews",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  788,                                 // lineNo
  42,                                  // colNo
  "",                                  // aName
  "imageviewset/createPoseGraph",      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  788,                                 // lineNo
  24,                                  // colNo
  "",                                  // aName
  "imageviewset/createPoseGraph",      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo av_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  523,                                 // lineNo
  31,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/createPoseGraph",  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  554,                                 // lineNo
  37,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/createPoseGraph",  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ydb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  663,                                 // lineNo
  33,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/getConnection",    // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo aeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  865,                                 // lineNo
  74,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo beb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  869,                                 // lineNo
  31,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ceb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  870,                                 // lineNo
  31,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo deb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  877,                                 // lineNo
  45,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo vg_emlrtRTEI{ 7,   // lineNo
  38,                                  // colNo
  "checkSingletonValueList",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\checkSingletonValueList.m"// pName
};

static emlrtBCInfo eeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  45,                                  // colNo
  "",                                  // aName
  "imageviewset/updateView",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo feb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  47,                                  // colNo
  "",                                  // aName
  "imageviewset/updateView",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo geb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  238,                                 // lineNo
  17,                                  // colNo
  "",                                  // aName
  "imageviewset/updateView",           // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo heb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  868,                                 // lineNo
  31,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ieb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  866,                                 // lineNo
  30,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  867,                                 // lineNo
  30,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo keb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  877,                                 // lineNo
  52,                                  // colNo
  "",                                  // aName
  "imageviewset/wipeMatches",          // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo leb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  468,                                 // lineNo
  26,                                  // colNo
  "",                                  // aName
  "imageviewset/updateConnection",     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo ah_emlrtRTEI{ 161, // lineNo
  13,                                  // colNo
  "ViewSetBaseImpl/checkIfConnectionIsMissing",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pName
};

static emlrtBCInfo akb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  509,                                 // lineNo
  37,                                  // colNo
  "",                                  // aName
  "imageviewset/updateConnection",     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  508,                                 // lineNo
  52,                                  // colNo
  "",                                  // aName
  "imageviewset/updateConnection",     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  664,                                 // lineNo
  33,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/getConnection",    // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  820,                                 // lineNo
  17,                                  // colNo
  "",                                  // aName
  "imageviewset/optimizePoses",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo okb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  47,                                  // colNo
  "",                                  // aName
  "ViewSetBaseImpl/getConnectionIndexToAndFrom",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  47,                                  // colNo
  "",                                  // aName
  "ViewSetBaseImpl/getConnectionIndexToAndFrom",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  820,                                 // lineNo
  58,                                  // colNo
  "",                                  // aName
  "imageviewset/optimizePoses",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo ph_emlrtRTEI{ 814, // lineNo
  21,                                  // colNo
  "imageviewset/optimizePoses",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtBCInfo rkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  689,                                 // lineNo
  42,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/getConnection",    // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo skb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  682,                                 // lineNo
  45,                                  // colNo
  "",                                  // aName
  "imageviewsetBase/getConnection",    // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tkb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  820,                                 // lineNo
  75,                                  // colNo
  "",                                  // aName
  "imageviewset/optimizePoses",        // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo it_emlrtRTEI{ 170, // lineNo
  13,                                  // colNo
  "OneDimArrayBehaviorTransform",      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\+coder\\OneDimArrayBehaviorTransform.m"// pName
};

static emlrtRTEInfo jt_emlrtRTEI{ 172, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo kt_emlrtRTEI{ 33,  // lineNo
  13,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo lt_emlrtRTEI{ 183, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo mt_emlrtRTEI{ 184, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo nt_emlrtRTEI{ 196, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo ot_emlrtRTEI{ 197, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo pt_emlrtRTEI{ 1283,// lineNo
  17,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo qt_emlrtRTEI{ 203, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo rt_emlrtRTEI{ 204, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo st_emlrtRTEI{ 205, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo su_emlrtRTEI{ 243, // lineNo
  37,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo tu_emlrtRTEI{ 325, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo uu_emlrtRTEI{ 326, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo vu_emlrtRTEI{ 327, // lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo fy_emlrtRTEI{ 59,  // lineNo
  13,                                  // colNo
  "repmat",                            // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"// pName
};

static emlrtRTEInfo gy_emlrtRTEI{ 49,  // lineNo
  33,                                  // colNo
  "ViewSetFeatureGraph",               // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetFeatureGraph.m"// pName
};

static emlrtRTEInfo hy_emlrtRTEI{ 722, // lineNo
  27,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo iy_emlrtRTEI{ 217, // lineNo
  36,                                  // colNo
  "graphPropertyContainer",            // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\graphPropertyContainer.m"// pName
};

static emlrtRTEInfo jy_emlrtRTEI{ 22,  // lineNo
  22,                                  // colNo
  "addToNodeProperties",               // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\@graphBase\\addToNodeProperti"
  "es.m"                               // pName
};

static emlrtRTEInfo wjb_emlrtRTEI{ 333,// lineNo
  32,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo xjb_emlrtRTEI{ 405,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo yjb_emlrtRTEI{ 406,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo akb_emlrtRTEI{ 403,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo ikb_emlrtRTEI{ 151,// lineNo
  13,                                  // colNo
  "ViewSetBaseImpl",                   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pName
};

static emlrtRTEInfo jkb_emlrtRTEI{ 348,// lineNo
  26,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo lkb_emlrtRTEI{ 580,// lineNo
  34,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo mkb_emlrtRTEI{ 584,// lineNo
  54,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo nkb_emlrtRTEI{ 585,// lineNo
  52,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo okb_emlrtRTEI{ 592,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo pkb_emlrtRTEI{ 600,// lineNo
  21,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo qlb_emlrtRTEI{ 619,// lineNo
  13,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo rlb_emlrtRTEI{ 626,// lineNo
  31,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo slb_emlrtRTEI{ 613,// lineNo
  38,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo tlb_emlrtRTEI{ 673,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo ulb_emlrtRTEI{ 675,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo vlb_emlrtRTEI{ 676,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo wlb_emlrtRTEI{ 663,// lineNo
  33,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo xlb_emlrtRTEI{ 668,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo ylb_emlrtRTEI{ 669,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo amb_emlrtRTEI{ 463,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo bmb_emlrtRTEI{ 465,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo cmb_emlrtRTEI{ 466,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo dmb_emlrtRTEI{ 471,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo emb_emlrtRTEI{ 472,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo fmb_emlrtRTEI{ 460,// lineNo
  41,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo gmb_emlrtRTEI{ 474,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo hmb_emlrtRTEI{ 479,// lineNo
  38,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo imb_emlrtRTEI{ 492,// lineNo
  17,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo jmb_emlrtRTEI{ 495,// lineNo
  36,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo kmb_emlrtRTEI{ 500,// lineNo
  21,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo lmb_emlrtRTEI{ 503,// lineNo
  17,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo mmb_emlrtRTEI{ 504,// lineNo
  17,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo nmb_emlrtRTEI{ 484,// lineNo
  25,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo smb_emlrtRTEI{ 713,// lineNo
  38,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo tmb_emlrtRTEI{ 703,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo umb_emlrtRTEI{ 705,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo vmb_emlrtRTEI{ 706,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo wmb_emlrtRTEI{ 707,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo fnb_emlrtRTEI{ 150,// lineNo
  18,                                  // colNo
  "ViewSetBaseImpl",                   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\ViewSetBaseImpl.m"// pName
};

static emlrtRTEInfo hpb_emlrtRTEI{ 786,// lineNo
  22,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo ipb_emlrtRTEI{ 515,// lineNo
  13,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo jpb_emlrtRTEI{ 523,// lineNo
  31,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo kpb_emlrtRTEI{ 542,// lineNo
  57,                                  // colNo
  "imageviewsetBase",                  // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pName
};

static emlrtRTEInfo qpb_emlrtRTEI{ 46, // lineNo
  9,                                   // colNo
  "constructFromTable",                // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\constructFromTable.m"// pName
};

static emlrtRTEInfo rpb_emlrtRTEI{ 46, // lineNo
  24,                                  // colNo
  "constructFromTable",                // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\matlab\\graphfun\\codegen\\+matlab\\+internal\\+coder\\constructFromTable.m"// pName
};

static emlrtRTEInfo eub_emlrtRTEI{ 44, // lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo fub_emlrtRTEI{ 71, // lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo gub_emlrtRTEI{ 38, // lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo hub_emlrtRTEI{ 88, // lineNo
  29,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo iub_emlrtRTEI{ 90, // lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo sub_emlrtRTEI{ 97, // lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo wub_emlrtRTEI{ 111,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo bvb_emlrtRTEI{ 117,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo jvb_emlrtRTEI{ 367,// lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo kvb_emlrtRTEI{ 368,// lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo lvb_emlrtRTEI{ 388,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo mvb_emlrtRTEI{ 396,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo vwb_emlrtRTEI{ 204,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo wwb_emlrtRTEI{ 218,// lineNo
  29,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo xwb_emlrtRTEI{ 219,// lineNo
  29,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo ywb_emlrtRTEI{ 854,// lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo axb_emlrtRTEI{ 855,// lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo bxb_emlrtRTEI{ 238,// lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo cxb_emlrtRTEI{ 869,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo dxb_emlrtRTEI{ 877,// lineNo
  29,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo ycc_emlrtRTEI{ 509,// lineNo
  21,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo odc_emlrtRTEI{ 355,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo pdc_emlrtRTEI{ 809,// lineNo
  29,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo qdc_emlrtRTEI{ 40, // lineNo
  9,                                   // colNo
  "find",                              // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"// pName
};

static emlrtRTEInfo rdc_emlrtRTEI{ 820,// lineNo
  17,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo sdc_emlrtRTEI{ 797,// lineNo
  30,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRTEInfo tdc_emlrtRTEI{ 870,// lineNo
  25,                                  // colNo
  "imageviewset",                      // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pName
};

static emlrtRSInfo xid_emlrtRSI{ 507,  // lineNo
  "imageviewsetBase/connectedViews",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewsetBase.m"// pathName
};

// Function Definitions
namespace coder
{
  void imageviewset::createPoseGraph(const emlrtStack &sp, digraph &G) const
  {
    b_rigidtform3d obj;
    d_table b;
    table nodeTable;
    array<b_rigidtform3d, 1U> rPose;
    array<cell_wrap_7, 2U> b_dataj;
    array<uint32_T, 2U> b_indices;
    array<uint32_T, 2U> endNodes;
    array<uint32_T, 2U> indices;
    array<uint32_T, 1U> b_endNodes;
    array<uint32_T, 1U> weight;
    array<boolean_T, 1U> b_r;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack h_st;
    emlrtStack i_st;
    emlrtStack j_st;
    emlrtStack k_st;
    emlrtStack l_st;
    emlrtStack m_st;
    emlrtStack st;
    int32_T b_loop_ub;
    int32_T i;
    int32_T loop_ub;
    int32_T obj_tmp;
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
    i_st.prev = &h_st;
    i_st.tls = h_st.tls;
    j_st.prev = &i_st;
    j_st.tls = i_st.tls;
    k_st.prev = &j_st;
    k_st.tls = j_st.tls;
    l_st.prev = &k_st;
    l_st.tls = k_st.tls;
    m_st.prev = &l_st;
    m_st.tls = l_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    i = MatchesInt.size(0);
    weight.set_size(&hpb_emlrtRTEI, &sp, MatchesInt.size(0));
    for (int32_T b_i{0}; b_i < i; b_i++) {
      if (b_i > MatchesInt.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, MatchesInt.size(0) - 1,
          &xu_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (b_i + 1 > weight.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, weight.size(0), &yu_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      weight[b_i] = static_cast<uint32_T>(MatchesInt[b_i].f1.size(0));
    }

    st.site = &sdd_emlrtRSI;
    b_st.site = &ydd_emlrtRSI;
    c_st.site = &ij_emlrtRSI;
    d_st.site = &jj_emlrtRSI;
    if (ViewId2.size(0) != ViewId1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    loop_ub = ViewId1.size(0);
    endNodes.set_size(&ipb_emlrtRTEI, &c_st, ViewId1.size(0), 2);
    for (i = 0; i < loop_ub; i++) {
      endNodes[i] = ViewId1[i];
    }

    b_loop_ub = ViewId2.size(0);
    for (i = 0; i < b_loop_ub; i++) {
      endNodes[i + endNodes.size(0)] = ViewId2[i];
    }

    b_st.site = &xdd_emlrtRSI;
    b_loop_ub = RrigidPoseSingle.Data.size(1);
    rPose.set_size(&jpb_emlrtRTEI, &b_st, RrigidPoseSingle.Data.size(1));
    for (i = 0; i < b_loop_ub; i++) {
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &av_emlrtBCI,
          &b_st);
      }

      rPose[i].Data.set_size(&jpb_emlrtRTEI, &b_st, 0, rPose[i].Data.size(1));
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &av_emlrtBCI,
          &b_st);
      }

      rPose[i].Data.set_size(&jpb_emlrtRTEI, &b_st, rPose[i].Data.size(0), 0);
    }

    rPose.set_size(&ojb_emlrtRTEI, &b_st, RrigidPoseSingle.Data.size(1));
    for (int32_T b_i{0}; b_i < b_loop_ub; b_i++) {
      real32_T b_obj[16];
      c_st.site = &spb_emlrtRSI;
      RrigidPoseSingle.parenReference(c_st, static_cast<real_T>(b_i) + 1.0, &obj);
      for (i = 0; i < 3; i++) {
        obj_tmp = i << 2;
        b_obj[obj_tmp] = obj.R[3 * i];
        b_obj[obj_tmp + 1] = obj.R[3 * i + 1];
        b_obj[obj_tmp + 2] = obj.R[3 * i + 2];
        b_obj[i + 12] = obj.Translation[i];
      }

      b_obj[3] = 0.0F;
      b_obj[7] = 0.0F;
      b_obj[11] = 0.0F;
      b_obj[15] = 1.0F;
      if (b_i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, rPose.size(0) - 1, &jq_emlrtBCI,
          &b_st);
      }

      c_st.site = &spb_emlrtRSI;
      rPose[b_i].b_init(c_st, b_obj);
    }

    b_st.site = &vdd_emlrtRSI;
    b.arrayProps.Description.size[0] = 1;
    b.arrayProps.Description.size[1] = 0;
    c_st.site = &pab_emlrtRSI;
    if (rPose.size(0) != endNodes.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ec_emlrtRTEI,
        "MATLAB:table:UnequalVarLengths", "MATLAB:table:UnequalVarLengths", 0);
    }

    if (InfoMatDouble.size(0) != endNodes.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ec_emlrtRTEI,
        "MATLAB:table:UnequalVarLengths", "MATLAB:table:UnequalVarLengths", 0);
    }

    if (weight.size(0) != endNodes.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ec_emlrtRTEI,
        "MATLAB:table:UnequalVarLengths", "MATLAB:table:UnequalVarLengths", 0);
    }

    c_st.site = &qab_emlrtRSI;
    d_st.site = &rab_emlrtRSI;
    e_st.site = &tab_emlrtRSI;
    f_st.site = &uab_emlrtRSI;
    indices.set_size(&dv_emlrtRTEI, &f_st, 1, ViewId1.size(0));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i + 1 > indices.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, indices.size(1), &dh_emlrtBCI,
          &f_st);
      }

      indices[b_i] = static_cast<uint32_T>(b_i + 1);
    }

    d_st.site = &sab_emlrtRSI;
    e_st.site = &vab_emlrtRSI;
    f_st.site = &wab_emlrtRSI;
    i = ViewId.size(0);
    b.data.f1.set_size(&kpb_emlrtRTEI, &st, ViewId.size(0));
    for (int32_T b_i{0}; b_i < i; b_i++) {
      if (b_i > b.data.f1.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b.data.f1.size(0) - 1,
          &bv_emlrtBCI, &st);
      }

      b_st.site = &wdd_emlrtRSI;
      AbsPosesSingle.parenReference(b_st, static_cast<real_T>(b_i) + 1.0,
        &b.data.f1[b_i]);
    }

    b_st.site = &udd_emlrtRSI;
    nodeTable.init(b_st, ViewId, b.data.f1);
    b_st.site = &tdd_emlrtRSI;
    c_st.site = &aed_emlrtRSI;
    d_st.site = &bed_emlrtRSI;
    e_st.site = &xab_emlrtRSI;
    f_st.site = &yab_emlrtRSI;
    d_st.site = &ced_emlrtRSI;
    e_st.site = &htb_emlrtRSI;
    b_r.set_size(&lpb_emlrtRTEI, &e_st, ViewId1.size(0));
    for (i = 0; i < loop_ub; i++) {
      b_r[i] = false;
    }

    f_st.site = &fgb_emlrtRSI;
    if (any(f_st, b_r)) {
      emlrtErrorWithMessageIdR2018a(&e_st, &qd_emlrtRTEI,
        "MATLAB:badsubscriptTextRange", "MATLAB:badsubscript", 0);
    }

    f_st.site = &ggb_emlrtRSI;
    g_st.site = &mbb_emlrtRSI;
    h_st.site = &nbb_emlrtRSI;
    i_st.site = &obb_emlrtRSI;
    j_st.site = &jfb_emlrtRSI;
    k_st.site = &kfb_emlrtRSI;
    b_loop_ub = 1;
    l_st.site = &lfb_emlrtRSI;
    if (endNodes.size(0) > 2147483646) {
      m_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(m_st);
    }

    for (obj_tmp = 2; obj_tmp <= loop_ub; obj_tmp++) {
      if (b_loop_ub < obj_tmp) {
        b_loop_ub = obj_tmp;
      }
    }

    if (b_loop_ub > endNodes.size(0)) {
      emlrtErrorWithMessageIdR2018a(&e_st, &pd_emlrtRTEI,
        "MATLAB:table:RowIndexOutOfRange", "MATLAB:table:RowIndexOutOfRange", 0);
    }

    f_st.site = &ltb_emlrtRSI;
    g_st.site = &eed_emlrtRSI;
    h_st.site = &tab_emlrtRSI;
    b.rowDim.length = endNodes.size(0);
    i_st.site = &uab_emlrtRSI;
    b_indices.set_size(&dv_emlrtRTEI, &i_st, 1, ViewId1.size(0));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i + 1 > b_indices.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b_indices.size(1),
          &dh_emlrtBCI, &i_st);
      }

      b_indices[b_i] = static_cast<uint32_T>(b_i + 1);
    }

    f_st.site = &hgb_emlrtRSI;
    e_st.site = &itb_emlrtRSI;
    f_st.site = &ktb_emlrtRSI;
    g_st.site = &ltb_emlrtRSI;
    h_st.site = &jtb_emlrtRSI;
    matlab::internal::coder::tabular::b_private::c_varNamesDim::selectFrom(h_st,
      b.varDim);
    g_st.site = &hgb_emlrtRSI;
    b.data.f1.set_size(&mpb_emlrtRTEI, &d_st, ViewId1.size(0));
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &cv_emlrtBCI, &d_st);
      }

      if (b_i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, rPose.size(0) - 1, &gj_emlrtBCI,
          &d_st);
      }

      if (b_i > b.data.f1.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b.data.f1.size(0) - 1,
          &dv_emlrtBCI, &d_st);
      }

      b.data.f1[b_i] = rPose[b_i];
    }

    b_dataj.set_size(&mpb_emlrtRTEI, &d_st, ViewId1.size(0), 1);
    for (int32_T b_i{0}; b_i < loop_ub; b_i++) {
      if (b_i + 1 > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &cv_emlrtBCI, &d_st);
      }

      if (b_i > InfoMatDouble.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, InfoMatDouble.size(0) - 1,
          &gj_emlrtBCI, &d_st);
      }

      if (b_i > b_dataj.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj.size(0) - 1, &dv_emlrtBCI,
          &d_st);
      }

      i = InfoMatDouble[b_i].f1.size(0);
      b_loop_ub = InfoMatDouble[b_i].f1.size(1);
      b_dataj[b_i].f1.set_size(&npb_emlrtRTEI, &d_st, i, b_loop_ub);
      b_loop_ub *= i;
      for (i = 0; i < b_loop_ub; i++) {
        b_dataj[b_i].f1[i] = InfoMatDouble[b_i].f1[i];
      }
    }

    b.data.f2.set_size(&opb_emlrtRTEI, &d_st, ViewId1.size(0), 1);
    for (i = 0; i < loop_ub; i++) {
      b.data.f2[i] = b_dataj[i];
    }

    b.data.f3.set_size(&ppb_emlrtRTEI, &d_st, ViewId1.size(0));
    for (i = 0; i < loop_ub; i++) {
      if (i + 1 > weight.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, weight.size(0), &ev_emlrtBCI,
          &d_st);
      }

      b.data.f3[i] = weight[i];
    }

    weight.set_size(&qpb_emlrtRTEI, &c_st, ViewId1.size(0));
    b_endNodes.set_size(&rpb_emlrtRTEI, &c_st, ViewId1.size(0));
    for (i = 0; i < loop_ub; i++) {
      weight[i] = endNodes[i];
      b_endNodes[i] = endNodes[i + endNodes.size(0)];
    }

    d_st.site = &ded_emlrtRSI;
    matlab::internal::coder::constructFromEdgeList(d_st, weight, b_endNodes, b,
      nodeTable, G.Underlying, G.EdgeProperties, G.NodeProperties);
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  boolean_T imageviewset::hasView() const
  {
    int32_T k;
    boolean_T exitg1;
    boolean_T tf;
    tf = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= ViewId.size(0) - 1)) {
      if (ViewId[k] == 2U) {
        tf = true;
        exitg1 = true;
      } else {
        k++;
      }
    }

    return tf;
  }

  void imageviewset::addConnection(const emlrtStack &sp, uint32_T viewId1,
    real_T viewId2, const b_rigidtform3d &varargin_1, const array<uint32_T, 2U>
    &varargin_3)
  {
    b_rigidtform3d connTable_RelativePose;
    imageviewset b_this;
    array<real_T, 2U> f1;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
    int32_T i;
    int32_T i1;
    int32_T loop_ub;
    int32_T varargin_1_tmp;
    real32_T b_varargin_1[16];
    uint32_T b_viewId2;
    boolean_T connectionExists;
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
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &keb_emlrtRSI;
    b_st.site = &ipc_emlrtRSI;
    c_st.site = &tyb_emlrtRSI;
    d_st.site = &uyb_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (viewId1 <= 0U) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
    }

    b_st.site = &jpc_emlrtRSI;
    b_viewId2 = ViewSetBaseImpl::checkViewId(b_st, viewId2);
    for (i = 0; i < 3; i++) {
      varargin_1_tmp = i << 2;
      b_varargin_1[varargin_1_tmp] = varargin_1.R[3 * i];
      b_varargin_1[varargin_1_tmp + 1] = varargin_1.R[3 * i + 1];
      b_varargin_1[varargin_1_tmp + 2] = varargin_1.R[3 * i + 2];
      b_varargin_1[i + 12] = varargin_1.Translation[i];
    }

    b_varargin_1[3] = 0.0F;
    b_varargin_1[7] = 0.0F;
    b_varargin_1[11] = 0.0F;
    b_varargin_1[15] = 1.0F;
    b_st.site = &meb_emlrtRSI;
    connTable_RelativePose.b_init(b_st, b_varargin_1);
    b_st.site = &neb_emlrtRSI;
    imageviewset::parseMatches(b_st, varargin_3);
    b_st.site = &oeb_emlrtRSI;
    checkMatchesOutOfBounds(b_st, varargin_3, viewId1, b_viewId2);
    b_st.site = &peb_emlrtRSI;
    if (!hasView(b_st, viewId1)) {
      emlrtErrorWithMessageIdR2018a(&st, &jg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        viewId1);
    }

    b_st.site = &qeb_emlrtRSI;
    if (!hasView(b_st, b_viewId2)) {
      emlrtErrorWithMessageIdR2018a(&st, &kg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        b_viewId2);
    }

    f1.set_size(&ivb_emlrtRTEI, &st, 6, 6);
    for (i = 0; i < 36; i++) {
      f1[i] = iv5[i];
    }

    st.site = &jeb_emlrtRSI;
    connectionExists = hasConnection(st, viewId1, b_viewId2);
    if (connectionExists) {
      emlrtErrorWithMessageIdR2018a(&sp, &ig_emlrtRTEI,
        "vision:viewSet:connectionAlreadyExists",
        "vision:viewSet:connectionAlreadyExists", 4, 13, viewId1, 13, b_viewId2);
    }

    i = ViewId1.size(0);
    ViewId1.set_size(&odc_emlrtRTEI, &sp, i + 1);
    ViewId1[i] = viewId1;
    i = ViewId2.size(0);
    ViewId2.set_size(&odc_emlrtRTEI, &sp, i + 1);
    ViewId2[i] = b_viewId2;
    st.site = &hpc_emlrtRSI;
    RrigidPoseSingle.horzcat(st, connTable_RelativePose);
    st.site = &gpc_emlrtRSI;
    b_this = *this;
    i = ViewId1.size(0);
    InfoMatDouble.set_size(&yac_emlrtRTEI, &st, i, 1);
    i1 = b_this.ViewId1.size(0);
    for (int32_T b_i{0}; b_i < i1; b_i++) {
      if (b_i + 1 == b_this.ViewId1.size(0)) {
        int32_T i2;
        i2 = InfoMatDouble.size(0) - 1;
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &uhb_emlrtBCI, &st);
        }

        InfoMatDouble[b_i].f1.set_size(&bbc_emlrtRTEI, &st, 6, 6);
        for (i2 = 0; i2 < 36; i2++) {
          InfoMatDouble[b_i].f1[i2] = f1[i2];
        }
      } else {
        int32_T i2;
        int32_T loop_ub_tmp;
        if (b_i > b_this.InfoMatDouble.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_this.InfoMatDouble.size(0) - 1,
            &thb_emlrtBCI, &st);
        }

        varargin_1_tmp = b_this.InfoMatDouble[b_i].f1.size(0);
        loop_ub_tmp = b_this.InfoMatDouble[b_i].f1.size(1);
        loop_ub = varargin_1_tmp * loop_ub_tmp;
        i2 = InfoMatDouble.size(0) - 1;
        if (b_i > i2) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &shb_emlrtBCI, &st);
        }

        InfoMatDouble[b_i].f1.set_size(&abc_emlrtRTEI, &st, varargin_1_tmp,
          loop_ub_tmp);
        for (i2 = 0; i2 < loop_ub; i2++) {
          InfoMatDouble[b_i].f1[i2] = b_this.InfoMatDouble[b_i].f1[i2];
        }
      }
    }

    st.site = &fpc_emlrtRSI;
    b_this = *this;
    MatchesInt.set_size(&cbc_emlrtRTEI, &st, i, 1);
    i = b_this.ViewId1.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      if (b_i + 1 == b_this.ViewId1.size(0)) {
        loop_ub = varargin_3.size(0) << 1;
        i1 = MatchesInt.size(0) - 1;
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &xhb_emlrtBCI, &st);
        }

        MatchesInt[b_i].f1.set_size(&ebc_emlrtRTEI, &st, varargin_3.size(0), 2);
        for (i1 = 0; i1 < loop_ub; i1++) {
          MatchesInt[b_i].f1[i1] = varargin_3[i1];
        }
      } else {
        if (b_i > b_this.MatchesInt.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_this.MatchesInt.size(0) - 1,
            &whb_emlrtBCI, &st);
        }

        varargin_1_tmp = b_this.MatchesInt[b_i].f1.size(0);
        loop_ub = varargin_1_tmp << 1;
        i1 = MatchesInt.size(0) - 1;
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &vhb_emlrtBCI, &st);
        }

        MatchesInt[b_i].f1.set_size(&dbc_emlrtRTEI, &st, varargin_1_tmp, 2);
        for (i1 = 0; i1 < loop_ub; i1++) {
          MatchesInt[b_i].f1[i1] = b_this.MatchesInt[b_i].f1[i1];
        }
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::addConnection(const emlrtStack &sp, const rigidtform3d &
    varargin_1, const array<uint32_T, 2U> &varargin_3)
  {
    static const int8_T b_iv[4]{ 0, 0, 0, 1 };

    b_rigidtform3d connTable_RelativePose;
    b_rigidtform3d unusedExpr;
    array<b_ORBPoints, 1U> b_expl_temp;
    array<cell_wrap_8, 2U> expl_temp;
    array<uint32_T, 1U> t25_ViewId;
    cell_wrap_11 b_r;
    cell_wrap_7 r1;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack h_st;
    emlrtStack i_st;
    emlrtStack j_st;
    emlrtStack st;
    int32_T tmp_size[2];
    int32_T ib_data;
    int32_T ib_size;
    int32_T result_data_tmp;
    int32_T view1_data;
    int32_T view2_data;
    int32_T view2_size;
    real32_T b_result_data[16];
    real32_T result_data[12];
    real32_T varargin_2_data[12];
    uint32_T c_data;
    uint32_T u;
    int8_T input_sizes_idx_1;
    boolean_T connectionExists;
    boolean_T guard1;
    boolean_T x;
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
    i_st.prev = &h_st;
    i_st.tls = h_st.tls;
    j_st.prev = &i_st;
    j_st.tls = i_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &keb_emlrtRSI;
    b_st.site = &leb_emlrtRSI;
    c_st.site = &ieb_emlrtRSI;
    d_st.site = &be_emlrtRSI;
    if (varargin_1.Data.size[0] * varargin_1.Data.size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &ob_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:imageviewset:expectedScalar", 3, 4, 7, "relPose");
    }

    b_st.site = &meb_emlrtRSI;
    c_st.site = &hw_emlrtRSI;
    d_st.site = &iw_emlrtRSI;
    e_st.site = &jw_emlrtRSI;
    result_data_tmp = varargin_1.Translation.size[1];
    if (result_data_tmp - 1 >= 0) {
      std::copy(&varargin_1.Translation.data[0],
                &varargin_1.Translation.data[result_data_tmp], &varargin_2_data
                [0]);
    }

    f_st.site = &kn_emlrtRSI;
    g_st.site = &jj_emlrtRSI;
    if ((varargin_1.Translation.size[1] != 3) && (varargin_1.Translation.size[1]
         != 0)) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    input_sizes_idx_1 = static_cast<int8_T>(varargin_1.Translation.size[1] != 0);
    for (ib_data = 0; ib_data < 3; ib_data++) {
      result_data[3 * ib_data] = varargin_1.R[3 * ib_data];
      result_data_tmp = 3 * ib_data + 1;
      result_data[result_data_tmp] = varargin_1.R[result_data_tmp];
      result_data_tmp = 3 * ib_data + 2;
      result_data[result_data_tmp] = varargin_1.R[result_data_tmp];
    }

    result_data_tmp = input_sizes_idx_1;
    if (result_data_tmp - 1 >= 0) {
      result_data[9] = varargin_2_data[0];
      result_data[10] = varargin_2_data[1];
      result_data[11] = varargin_2_data[2];
    }

    e_st.site = &jw_emlrtRSI;
    f_st.site = &kn_emlrtRSI;
    g_st.site = &jj_emlrtRSI;
    if (input_sizes_idx_1 + 3 != 4) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    for (ib_data = 0; ib_data < 4; ib_data++) {
      b_result_data[4 * ib_data] = result_data[3 * ib_data];
      b_result_data[4 * ib_data + 1] = result_data[3 * ib_data + 1];
      b_result_data[4 * ib_data + 2] = result_data[3 * ib_data + 2];
      b_result_data[4 * ib_data + 3] = b_iv[ib_data];
    }

    b_st.site = &meb_emlrtRSI;
    connTable_RelativePose.init(b_st, b_result_data);
    b_st.site = &neb_emlrtRSI;
    imageviewset::parseMatches(b_st, varargin_3);
    b_st.site = &oeb_emlrtRSI;
    c_st.site = &teb_emlrtRSI;
    d_st.site = &afb_emlrtRSI;
    get_Views(d_st, t25_ViewId, expl_temp, b_expl_temp, unusedExpr);
    d_st.site = &bfb_emlrtRSI;
    e_st.site = &dfb_emlrtRSI;
    f_st.site = &efb_emlrtRSI;
    do_vectors(f_st, (const uint32_T *)t25_ViewId.data(), (*(int32_T (*)[1])
                t25_ViewId.size())[0], (uint32_T *)&c_data, (int32_T *)
               &view2_data, view2_size, (int32_T *)&ib_data, ib_size);
    result_data_tmp = view2_size;
    for (ib_data = 0; ib_data < view2_size; ib_data++) {
      view1_data = view2_data;
    }

    c_st.site = &ueb_emlrtRSI;
    d_st.site = &afb_emlrtRSI;
    get_Views(d_st, t25_ViewId, expl_temp, b_expl_temp, unusedExpr);
    d_st.site = &bfb_emlrtRSI;
    e_st.site = &dfb_emlrtRSI;
    f_st.site = &efb_emlrtRSI;
    b_do_vectors(f_st, (const uint32_T *)t25_ViewId.data(), (*(int32_T (*)[1])
      t25_ViewId.size())[0], (uint32_T *)&c_data, (int32_T *)&view2_data,
                 view2_size, (int32_T *)&ib_data, ib_size);
    c_st.site = &veb_emlrtRSI;
    if (result_data_tmp == 0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &de_emlrtRTEI,
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }

    if ((view1_data - 1 < 0) || (view1_data - 1 > 1)) {
      emlrtDynamicBoundsCheckR2012b(view1_data - 1, 0, 1, &ns_emlrtBCI, &b_st);
    }

    c_st.site = &web_emlrtRSI;
    if (view2_size == 0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &de_emlrtRTEI,
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }

    if ((view2_data - 1 < 0) || (view2_data - 1 > 1)) {
      emlrtDynamicBoundsCheckR2012b(view2_data - 1, 0, 1, &os_emlrtBCI, &b_st);
    }

    c_st.site = &xeb_emlrtRSI;
    d_st.site = &mbb_emlrtRSI;
    e_st.site = &nbb_emlrtRSI;
    f_st.site = &obb_emlrtRSI;
    if (varargin_3.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &m_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &jfb_emlrtRSI;
    result_data_tmp = varargin_3.size(0);
    h_st.site = &kfb_emlrtRSI;
    c_data = varargin_3[0];
    i_st.site = &lfb_emlrtRSI;
    if (varargin_3.size(0) > 2147483646) {
      j_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(j_st);
    }

    for (ib_data = 2; ib_data <= result_data_tmp; ib_data++) {
      u = varargin_3[ib_data - 1];
      if (c_data < u) {
        c_data = u;
      }
    }

    guard1 = false;
    if (c_data > static_cast<uint32_T>(PointsSingle[view1_data - 1].f1.size(0)))
    {
      guard1 = true;
    } else {
      c_st.site = &yeb_emlrtRSI;
      d_st.site = &mbb_emlrtRSI;
      e_st.site = &nbb_emlrtRSI;
      f_st.site = &obb_emlrtRSI;
      g_st.site = &jfb_emlrtRSI;
      h_st.site = &kfb_emlrtRSI;
      c_data = varargin_3[varargin_3.size(0)];
      i_st.site = &lfb_emlrtRSI;
      for (ib_data = 2; ib_data <= result_data_tmp; ib_data++) {
        u = varargin_3[(ib_data + varargin_3.size(0)) - 1];
        if (c_data < u) {
          c_data = u;
        }
      }

      if (c_data > static_cast<uint32_T>(PointsSingle[view2_data - 1].f1.size(0)))
      {
        guard1 = true;
      }
    }

    if (guard1) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ve_emlrtRTEI,
        "vision:viewSet:matchIdxOutOfBounds",
        "vision:viewSet:matchIdxOutOfBounds", 0);
    }

    b_r.f1.set_size(&ivb_emlrtRTEI, &st, varargin_3.size(0), 2);
    result_data_tmp = varargin_3.size(0) << 1;
    for (ib_data = 0; ib_data < result_data_tmp; ib_data++) {
      b_r.f1[ib_data] = varargin_3[ib_data];
    }

    b_st.site = &peb_emlrtRSI;
    c_st.site = &xcb_emlrtRSI;
    d_st.site = &ycb_emlrtRSI;
    e_st.site = &adb_emlrtRSI;
    f_st.site = &bdb_emlrtRSI;
    connectionExists = isMember((const uint32_T *)ViewId.data());
    if (!connectionExists) {
      emlrtErrorWithMessageIdR2018a(&st, &jg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        1U);
    }

    b_st.site = &qeb_emlrtRSI;
    if (!hasView()) {
      emlrtErrorWithMessageIdR2018a(&st, &kg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        2U);
    }

    r1.f1.set_size(&ivb_emlrtRTEI, &st, 6, 6);
    for (ib_data = 0; ib_data < 36; ib_data++) {
      r1.f1[ib_data] = iv5[ib_data];
    }

    st.site = &jeb_emlrtRSI;
    b_st.site = &mfb_emlrtRSI;
    c_st.site = &nfb_emlrtRSI;
    d_st.site = &xcb_emlrtRSI;
    e_st.site = &ycb_emlrtRSI;
    f_st.site = &adb_emlrtRSI;
    g_st.site = &bdb_emlrtRSI;
    connectionExists = isMember((const uint32_T *)ViewId.data());
    c_st.site = &ofb_emlrtRSI;
    x = hasView();
    if (connectionExists && x) {
      real_T tmp_data;
      tmp_size[0] = 1;
      tmp_size[1] = 0;
      c_st.site = &pfb_emlrtRSI;
      if (b_any((const real_T *)&tmp_data, tmp_size)) {
        connectionExists = true;
      } else {
        connectionExists = false;
      }
    } else {
      connectionExists = false;
    }

    if (connectionExists) {
      emlrtErrorWithMessageIdR2018a(&sp, &ig_emlrtRTEI,
        "vision:viewSet:connectionAlreadyExists",
        "vision:viewSet:connectionAlreadyExists", 4, 13, 1U, 13, 2U);
    }

    ViewId1.set_size(&jvb_emlrtRTEI, &sp, 1);
    ViewId1[0] = 1U;
    ViewId2.set_size(&kvb_emlrtRTEI, &sp, 1);
    ViewId2[0] = 2U;
    RrigidPoseSingle = connTable_RelativePose;
    InfoMatDouble.set_size(&lvb_emlrtRTEI, &sp, 1, 1);
    InfoMatDouble[0] = r1;
    MatchesInt.set_size(&mvb_emlrtRTEI, &sp, 1, 1);
    MatchesInt[0] = b_r;
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::addView(const emlrtStack &sp, const ORBPoints &varargin_4,
    const array<uint8_T, 2U> &varargin_6)
  {
    bounded_array<cell_wrap_12, 1U, 2U> uMetric;
    bounded_array<cell_wrap_6, 1U, 2U> pointsLocation;
    cell_wrap_8 b_r;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack st;
    int32_T loop_ub_tmp;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &scb_emlrtRSI;
    b_st.site = &ucb_emlrtRSI;
    AbsPosesSingle.init(b_st);
    b_st.site = &tcb_emlrtRSI;
    c_st.site = &vcb_emlrtRSI;
    imageviewset::checkPoints(c_st, varargin_4);
    b_r.f1.set_size(&eub_emlrtRTEI, &st, varargin_6.size(0), 32);
    loop_ub_tmp = varargin_6.size(0) << 5;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      b_r.f1[i] = varargin_6[i];
    }

    FeaturesBinary.set_size(&fub_emlrtRTEI, &sp, 1, 1);
    FeaturesBinary[0] = b_r;
    pointsLocation.size[0] = 1;
    pointsLocation.size[1] = 1;
    pointsLocation.data[0].f1.set_size(&hub_emlrtRTEI, &sp,
      varargin_4.pLocation.size(0), 2);
    loop_ub_tmp = varargin_4.pLocation.size(0) << 1;
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      pointsLocation.data[0].f1[i] = varargin_4.pLocation[i];
    }

    PointsSingle.set_size(&iub_emlrtRTEI, &sp, 1, 1);
    PointsSingle[0] = pointsLocation.data[0];
    uMetric.size[0] = 1;
    uMetric.size[1] = 1;
    loop_ub_tmp = varargin_4.pMetric.size(0);
    uMetric.data[0].f1.set_size(&kub_emlrtRTEI, &sp, varargin_4.pMetric.size(0));
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      uMetric.data[0].f1[i] = varargin_4.pMetric[i];
    }

    Metrics.set_size(&lub_emlrtRTEI, &sp, 1, 1);
    Metrics[0] = uMetric.data[0];
    uMetric.size[0] = 1;
    uMetric.size[1] = 1;
    loop_ub_tmp = varargin_4.pScale.size(0);
    uMetric.data[0].f1.set_size(&nub_emlrtRTEI, &sp, varargin_4.pScale.size(0));
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      uMetric.data[0].f1[i] = varargin_4.pScale[i];
    }

    Scale.set_size(&oub_emlrtRTEI, &sp, 1, 1);
    Scale[0] = uMetric.data[0];
    uMetric.size[0] = 1;
    uMetric.size[1] = 1;
    loop_ub_tmp = varargin_4.pOrientation.size(0);
    uMetric.data[0].f1.set_size(&qub_emlrtRTEI, &sp,
      varargin_4.pOrientation.size(0));
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      uMetric.data[0].f1[i] = varargin_4.pOrientation[i];
    }

    Orientation.set_size(&rub_emlrtRTEI, &sp, 1, 1);
    Orientation[0] = uMetric.data[0];
    ViewId.set_size(&sub_emlrtRTEI, &sp, 1);
    ViewId[0] = 1U;
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::addView(const emlrtStack &sp, const rigidtform3d &
    varargin_2, const ORBPoints &varargin_4, const array<uint8_T, 2U>
    &varargin_6)
  {
    static const int8_T b_iv[4]{ 0, 0, 0, 1 };

    b_rigidtform3d t26_AbsolutePose;
    bounded_array<cell_wrap_12, 2U, 2U> uMetric;
    bounded_array<cell_wrap_6, 2U, 2U> pUpdated;
    bounded_array<cell_wrap_8, 2U, 2U> b_fUpdated;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
    int32_T fUpdated;
    int32_T loop_ub;
    real32_T b_result_data[16];
    real32_T result_data[12];
    real32_T varargin_2_data[12];
    int8_T input_sizes_idx_1;
    boolean_T viewExists;
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
    st.site = &scb_emlrtRSI;
    b_st.site = &heb_emlrtRSI;
    c_st.site = &ieb_emlrtRSI;
    d_st.site = &be_emlrtRSI;
    if (varargin_2.Data.size[0] * varargin_2.Data.size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &ob_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:imageviewset:expectedScalar", 3, 4, 7, "absPose");
    }

    b_st.site = &ucb_emlrtRSI;
    c_st.site = &hw_emlrtRSI;
    d_st.site = &iw_emlrtRSI;
    e_st.site = &jw_emlrtRSI;
    loop_ub = varargin_2.Translation.size[1];
    if (loop_ub - 1 >= 0) {
      std::copy(&varargin_2.Translation.data[0],
                &varargin_2.Translation.data[loop_ub], &varargin_2_data[0]);
    }

    f_st.site = &kn_emlrtRSI;
    g_st.site = &jj_emlrtRSI;
    if ((varargin_2.Translation.size[1] != 3) && (varargin_2.Translation.size[1]
         != 0)) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    input_sizes_idx_1 = static_cast<int8_T>(varargin_2.Translation.size[1] != 0);
    for (fUpdated = 0; fUpdated < 3; fUpdated++) {
      result_data[3 * fUpdated] = varargin_2.R[3 * fUpdated];
      loop_ub = 3 * fUpdated + 1;
      result_data[loop_ub] = varargin_2.R[loop_ub];
      loop_ub = 3 * fUpdated + 2;
      result_data[loop_ub] = varargin_2.R[loop_ub];
    }

    loop_ub = input_sizes_idx_1;
    if (loop_ub - 1 >= 0) {
      result_data[9] = varargin_2_data[0];
      result_data[10] = varargin_2_data[1];
      result_data[11] = varargin_2_data[2];
    }

    e_st.site = &jw_emlrtRSI;
    f_st.site = &kn_emlrtRSI;
    g_st.site = &jj_emlrtRSI;
    if (input_sizes_idx_1 + 3 != 4) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    for (fUpdated = 0; fUpdated < 4; fUpdated++) {
      b_result_data[4 * fUpdated] = result_data[3 * fUpdated];
      b_result_data[4 * fUpdated + 1] = result_data[3 * fUpdated + 1];
      b_result_data[4 * fUpdated + 2] = result_data[3 * fUpdated + 2];
      b_result_data[4 * fUpdated + 3] = b_iv[fUpdated];
    }

    b_st.site = &ucb_emlrtRSI;
    t26_AbsolutePose.init(b_st, b_result_data);
    b_st.site = &tcb_emlrtRSI;
    c_st.site = &vcb_emlrtRSI;
    imageviewset::checkPoints(c_st, varargin_4);
    st.site = &geb_emlrtRSI;
    viewExists = hasView();
    if (viewExists) {
      emlrtErrorWithMessageIdR2018a(&sp, &hg_emlrtRTEI,
        "vision:viewSet:viewIdAlreadyExists",
        "vision:viewSet:viewIdAlreadyExists", 2, 13, 2U);
    }

    st.site = &feb_emlrtRSI;
    AbsPosesSingle.horzcat(st, t26_AbsolutePose);
    b_fUpdated.size[0] = 2;
    b_fUpdated.size[1] = 1;
    for (int32_T i{0}; i < 2; i++) {
      if (i + 1 > 1) {
        b_fUpdated.data[1].f1.set_size(&vub_emlrtRTEI, &sp, varargin_6.size(0),
          varargin_6.size(1));
        loop_ub = varargin_6.size(0) * varargin_6.size(1);
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          b_fUpdated.data[1].f1[fUpdated] = varargin_6[fUpdated];
        }
      } else {
        loop_ub = FeaturesBinary[0].f1.size(0);
        fUpdated = FeaturesBinary[0].f1.size(1);
        b_fUpdated.data[0].f1.set_size(&uub_emlrtRTEI, &sp, loop_ub, fUpdated);
        loop_ub = FeaturesBinary[0].f1.size(0) * FeaturesBinary[0].f1.size(1);
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          b_fUpdated.data[0].f1[fUpdated] = FeaturesBinary[0].f1[fUpdated];
        }
      }
    }

    FeaturesBinary.set_size(&wub_emlrtRTEI, &sp, 2, 1);
    FeaturesBinary[0] = b_fUpdated.data[0];
    FeaturesBinary[1] = b_fUpdated.data[1];
    pUpdated.size[0] = 2;
    pUpdated.size[1] = 1;
    for (int32_T i{0}; i < 2; i++) {
      if (i + 1 > 1) {
        pUpdated.data[1].f1.set_size(&avb_emlrtRTEI, &sp,
          varargin_4.pLocation.size(0), 2);
        loop_ub = varargin_4.pLocation.size(0) << 1;
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          pUpdated.data[1].f1[fUpdated] = varargin_4.pLocation[fUpdated];
        }
      } else {
        loop_ub = PointsSingle[0].f1.size(0);
        fUpdated = PointsSingle[0].f1.size(1);
        pUpdated.data[0].f1.set_size(&yub_emlrtRTEI, &sp, loop_ub, fUpdated);
        loop_ub = PointsSingle[0].f1.size(0) * PointsSingle[0].f1.size(1);
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          pUpdated.data[0].f1[fUpdated] = PointsSingle[0].f1[fUpdated];
        }
      }
    }

    PointsSingle.set_size(&bvb_emlrtRTEI, &sp, 2, 1);
    PointsSingle[0] = pUpdated.data[0];
    PointsSingle[1] = pUpdated.data[1];
    uMetric.size[0] = 2;
    uMetric.size[1] = 1;
    for (int32_T i{0}; i < 2; i++) {
      if (i + 1 > 1) {
        loop_ub = varargin_4.pMetric.size(0);
        uMetric.data[1].f1.set_size(&kub_emlrtRTEI, &sp, varargin_4.pMetric.size
          (0));
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          uMetric.data[1].f1[fUpdated] = varargin_4.pMetric[fUpdated];
        }
      } else {
        uMetric.data[0].f1.set_size(&cvb_emlrtRTEI, &sp, Metrics[0].f1.size(0));
        loop_ub = Metrics[0].f1.size(0);
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          uMetric.data[0].f1[fUpdated] = Metrics[0].f1[fUpdated];
        }
      }
    }

    Metrics.set_size(&lub_emlrtRTEI, &sp, 2, 1);
    Metrics[0] = uMetric.data[0];
    Metrics[1] = uMetric.data[1];
    uMetric.size[0] = 2;
    uMetric.size[1] = 1;
    for (int32_T i{0}; i < 2; i++) {
      if (i + 1 > 1) {
        loop_ub = varargin_4.pScale.size(0);
        uMetric.data[1].f1.set_size(&nub_emlrtRTEI, &sp, varargin_4.pScale.size
          (0));
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          uMetric.data[1].f1[fUpdated] = varargin_4.pScale[fUpdated];
        }
      } else {
        uMetric.data[0].f1.set_size(&dvb_emlrtRTEI, &sp, Scale[0].f1.size(0));
        loop_ub = Scale[0].f1.size(0);
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          uMetric.data[0].f1[fUpdated] = Scale[0].f1[fUpdated];
        }
      }
    }

    Scale.set_size(&oub_emlrtRTEI, &sp, 2, 1);
    Scale[0] = uMetric.data[0];
    Scale[1] = uMetric.data[1];
    uMetric.size[0] = 2;
    uMetric.size[1] = 1;
    for (int32_T i{0}; i < 2; i++) {
      if (i + 1 > 1) {
        loop_ub = varargin_4.pOrientation.size(0);
        uMetric.data[1].f1.set_size(&qub_emlrtRTEI, &sp,
          varargin_4.pOrientation.size(0));
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          uMetric.data[1].f1[fUpdated] = varargin_4.pOrientation[fUpdated];
        }
      } else {
        uMetric.data[0].f1.set_size(&evb_emlrtRTEI, &sp, Orientation[0].f1.size
          (0));
        loop_ub = Orientation[0].f1.size(0);
        for (fUpdated = 0; fUpdated < loop_ub; fUpdated++) {
          uMetric.data[0].f1[fUpdated] = Orientation[0].f1[fUpdated];
        }
      }
    }

    Orientation.set_size(&rub_emlrtRTEI, &sp, 2, 1);
    Orientation[0] = uMetric.data[0];
    Orientation[1] = uMetric.data[1];
    fUpdated = ViewId.size(0);
    ViewId.set_size(&gub_emlrtRTEI, &sp, fUpdated + 1);
    ViewId[fUpdated] = 2U;
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::b_connectedViews(const emlrtStack &sp, real_T viewId, array<
    uint32_T, 1U> &viewTable_ViewId, b_rigidtform3d &viewTable_AbsolutePose,
    array<cell_wrap_8, 2U> &viewTable_Features, array<b_ORBPoints, 2U>
    &viewTable_Points, array<boolean_T, 1U> &connIdx) const
  {
    b_rigidtform3d views_AbsolutePose;
    imageviewset *tmp_this;
    array<b_ORBPoints, 2U> points;
    array<b_ORBPoints, 1U> views_Points;
    array<cell_wrap_8, 2U> features;
    array<cell_wrap_8, 2U> views_Features;
    array<real_T, 1U> viewIdx;
    array<int32_T, 1U> b_r;
    array<int32_T, 1U> r1;
    array<uint32_T, 1U> connectedViewIds;
    array<uint32_T, 1U> viewIdxPrime;
    array<boolean_T, 1U> toViewId;
    emlrtStack b_st;
    emlrtStack st;
    int32_T b_connectedViews_numThreads;
    int32_T b_i;
    int32_T b_loop_ub;
    int32_T c_i;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T j;
    int32_T loop_ub;
    int32_T loop_ub_tmp;
    int32_T trueCount;
    uint32_T b_viewId;
    boolean_T emlrtHadParallelError{ false };

    boolean_T viewIdxFirst;
    tmp_this = const_cast<imageviewset *>(this);
    st.prev = &sp;
    st.tls = sp.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &wrc_emlrtRSI;
    viewTable_AbsolutePose.init(st);
    viewTable_ViewId.set_size(&amb_emlrtRTEI, &sp, 0);
    viewTable_Features.set_size(&bmb_emlrtRTEI, &sp, 0, 0);
    viewTable_Points.set_size(&cmb_emlrtRTEI, &sp, 0, 0);
    st.site = &trc_emlrtRSI;
    b_viewId = ViewSetBaseImpl::checkViewId(st, viewId);
    loop_ub = tmp_this->ViewId1.size(0);
    connIdx.set_size(&dmb_emlrtRTEI, &sp, tmp_this->ViewId1.size(0));
    for (i = 0; i < loop_ub; i++) {
      connIdx[i] = (tmp_this->ViewId1[i] == b_viewId);
    }

    b_loop_ub = tmp_this->ViewId2.size(0);
    toViewId.set_size(&emb_emlrtRTEI, &sp, tmp_this->ViewId2.size(0));
    for (i = 0; i < b_loop_ub; i++) {
      toViewId[i] = (tmp_this->ViewId2[i] == b_viewId);
    }

    trueCount = 0;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (connIdx[b_i]) {
        trueCount++;
      }
    }

    b_r.set_size(&fmb_emlrtRTEI, &sp, trueCount);
    trueCount = 0;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (connIdx[b_i]) {
        b_r[trueCount] = b_i;
        trueCount++;
      }
    }

    trueCount = 0;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (toViewId[b_i]) {
        trueCount++;
      }
    }

    r1.set_size(&fmb_emlrtRTEI, &sp, trueCount);
    trueCount = 0;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (toViewId[b_i]) {
        r1[trueCount] = b_i;
        trueCount++;
      }
    }

    connectedViewIds.set_size(&gmb_emlrtRTEI, &sp, b_r.size(0) + r1.size(0));
    trueCount = b_r.size(0);
    for (i = 0; i < trueCount; i++) {
      if (b_r[i] > tmp_this->ViewId2.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[i], 0, tmp_this->ViewId2.size(0) - 1,
          &ht_emlrtBCI, (emlrtConstCTX)&sp);
      }

      connectedViewIds[i] = tmp_this->ViewId2[b_r[i]];
    }

    trueCount = r1.size(0);
    for (i = 0; i < trueCount; i++) {
      if (r1[i] > tmp_this->ViewId1.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[i], 0, tmp_this->ViewId1.size(0) - 1,
          &it_emlrtBCI, (emlrtConstCTX)&sp);
      }

      connectedViewIds[i + b_r.size(0)] = tmp_this->ViewId1[r1[i]];
    }

    viewIdx.set_size(&hmb_emlrtRTEI, &sp, 0);
    trueCount = tmp_this->ViewId.size(0);
    emlrtEnterParallelRegion((emlrtCTX)&sp, static_cast<boolean_T>
      (omp_in_parallel()));
    b_connectedViews_numThreads = emlrtAllocRegionTLSs(sp.tls,
      static_cast<boolean_T>(omp_in_parallel()), omp_get_max_threads(),
      omp_get_num_procs());

#pragma omp parallel \
 num_threads(b_connectedViews_numThreads) \
 private(viewIdxPrime,viewIdxFirst,b_st,i2,j,i3) \
 firstprivate(emlrtHadParallelError)

    {
      try {
        b_st.prev = &sp;
        b_st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
        b_st.site = nullptr;
        viewIdxFirst = true;
      } catch (...) {
        emlrtHadParallelError = true;
      }

#pragma omp for schedule(static)

      for (c_i = 0; c_i < trueCount; c_i++) {
        if (emlrtHadParallelError) {
          continue;
        }

        try {
          i2 = connectedViewIds.size(0);
          for (j = 0; j < i2; j++) {
            if (c_i + 1 > tmp_this->ViewId.size(0)) {
              emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, tmp_this->ViewId.size(0),
                &kt_emlrtBCI, &b_st);
            }

            if (j + 1 > connectedViewIds.size(0)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, connectedViewIds.size(0),
                &lt_emlrtBCI, &b_st);
            }

            if (tmp_this->ViewId[c_i] == connectedViewIds[j]) {
              if (viewIdxFirst) {
                viewIdxFirst = false;
                viewIdxPrime.set_size(&nmb_emlrtRTEI, &b_st, 1);
                viewIdxPrime[0] = static_cast<uint32_T>(c_i + 1);
              } else {
                i3 = viewIdxPrime.size(0);
                viewIdxPrime.set_size(&fmb_emlrtRTEI, &b_st, viewIdxPrime.size(0)
                                      + 1);
                viewIdxPrime[i3] = static_cast<uint32_T>(c_i + 1);
              }
            }
          }
        } catch (...) {
          emlrtHadParallelError = true;
        }
      }

#pragma omp for ordered schedule(static)

      for (c_i = 0; c_i < omp_get_num_threads(); ++c_i) {

#pragma omp ordered

        {
          {
            if (!emlrtHadParallelError) {
              try {
                if (!viewIdxFirst) {
                  i2 = viewIdx.size(0);
                  j = viewIdxPrime.size(0);
                  viewIdx.set_size(&fmb_emlrtRTEI, &b_st, viewIdx.size(0) +
                                   viewIdxPrime.size(0));
                  for (i3 = 0; i3 < j; i3++) {
                    viewIdx[i2 + i3] = viewIdxPrime[i3];
                  }
                }
              } catch (...) {
                emlrtHadParallelError = true;
              }
            }
          }
        }
      }

      if (!emlrtHadParallelError) {
        emlrtHeapReferenceStackLeaveScope(&b_st, 1);
      }
    }

    emlrtExitParallelRegion((emlrtCTX)&sp, static_cast<boolean_T>
      (omp_in_parallel()));
    if (viewIdx.size(0) != 0) {
      st.site = &urc_emlrtRSI;
      tmp_this->imageviewsetBase_get_Views(st, connectedViewIds, views_Features,
        views_Points, views_AbsolutePose);
      loop_ub_tmp = viewIdx.size(0);
      for (i = 0; i < loop_ub_tmp; i++) {
        i1 = static_cast<int32_T>(viewIdx[i]);
        if ((i1 < 1) || (i1 > connectedViewIds.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, connectedViewIds.size(0),
            &jt_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }

      st.site = &vrc_emlrtRSI;
      views_AbsolutePose.parenReference(st, viewIdx, viewTable_AbsolutePose);
      viewTable_ViewId.set_size(&imb_emlrtRTEI, &sp, viewIdx.size(0));
      for (i = 0; i < loop_ub_tmp; i++) {
        viewTable_ViewId[i] = connectedViewIds[static_cast<int32_T>(viewIdx[i])
          - 1];
      }

      features.set_size(&fmb_emlrtRTEI, &sp, viewIdx.size(0), 1);
      for (i = 0; i < loop_ub_tmp; i++) {
        if (i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, features.size(0) - 1, &et_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        features[i].f1.set_size(&fmb_emlrtRTEI, &sp, 0, features[i].f1.size(1));
        if (i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, features.size(0) - 1, &et_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        features[i].f1.set_size(&fmb_emlrtRTEI, &sp, features[i].f1.size(0), 0);
      }

      for (i = 0; i < loop_ub_tmp; i++) {
        if (i > loop_ub_tmp - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, loop_ub_tmp - 1, &et_emlrtBCI,
            (emlrtConstCTX)&sp);
        }
      }

      features.set_size(&jmb_emlrtRTEI, &sp, viewIdx.size(0), 1);
      points.set_size(&jmb_emlrtRTEI, &sp, viewIdx.size(0), 1);
      for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
        if (b_i + 1 > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub_tmp, &mt_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        i = static_cast<int32_T>(viewIdx[b_i]) - 1;
        if ((i < 0) || (i > views_Features.size(0) - 1)) {
          emlrtDynamicBoundsCheckR2012b(i, 0, views_Features.size(0) - 1,
            &gt_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (b_i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, features.size(0) - 1,
            &ft_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = views_Features[static_cast<int32_T>(viewIdx[b_i]) - 1].f1.size(0);
        trueCount = views_Features[static_cast<int32_T>(viewIdx[b_i]) - 1].
          f1.size(1);
        features[b_i].f1.set_size(&kmb_emlrtRTEI, &sp, i1, trueCount);
        trueCount *= i1;
        for (i1 = 0; i1 < trueCount; i1++) {
          features[b_i].f1[i1] = views_Features[i].f1[i1];
        }

        if (b_i + 1 > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub_tmp, &ot_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        if (i > views_Points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, views_Points.size(0) - 1,
            &nt_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (b_i > points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, points.size(0) - 1, &pt_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        points[b_i] = views_Points[i];
      }

      viewTable_Features.set_size(&lmb_emlrtRTEI, &sp, viewIdx.size(0), 1);
      viewTable_Points.set_size(&mmb_emlrtRTEI, &sp, points.size(0), 1);
      for (i = 0; i < loop_ub_tmp; i++) {
        viewTable_Features[i] = features[i];
        viewTable_Points[i] = points[i];
      }
    }

    if ((loop_ub != b_loop_ub) && ((loop_ub != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, b_loop_ub, &rd_emlrtECI,
        (emlrtConstCTX)&sp);
    }

    if (connIdx.size(0) == toViewId.size(0)) {
      for (i = 0; i < loop_ub; i++) {
        connIdx[i] = (connIdx[i] || toViewId[i]);
      }
    } else {
      st.site = &xid_emlrtRSI;
      b_or(st, connIdx, toViewId);
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::c_connectedViews(const emlrtStack &sp, real_T varargin_1,
    array<uint32_T, 1U> &viewTable_ViewId, b_rigidtform3d &
    viewTable_AbsolutePose, array<cell_wrap_8, 2U> &viewTable_Features, array<
    b_ORBPoints, 2U> &viewTable_Points) const
  {
    b_rigidtform3d abPose;
    b_rigidtform3d r1;
    array<b_ORBPoints, 2U> points;
    array<b_rigidtform3d, 1U> rPose;
    array<cell_wrap_8, 2U> features;
    array<int32_T, 1U> b_r;
    array<boolean_T, 1U> connIdx;
    array<boolean_T, 1U> isStrongConnection;
    emlrtStack b_st;
    emlrtStack st;
    int32_T abPose_tmp;
    int32_T b_i;
    int32_T i;
    int32_T id;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    isStrongConnection.set_size(&qlb_emlrtRTEI, &sp, 0);
    st.site = &nrc_emlrtRSI;
    b_connectedViews(st, varargin_1, viewTable_ViewId, viewTable_AbsolutePose,
                     viewTable_Features, viewTable_Points, connIdx);
    st.site = &orc_emlrtRSI;
    id = RrigidPoseSingle.Data.size(1);
    rPose.set_size(&rlb_emlrtRTEI, &st, RrigidPoseSingle.Data.size(1));
    for (i = 0; i < id; i++) {
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &vs_emlrtBCI, &st);
      }

      rPose[i].Data.set_size(&rlb_emlrtRTEI, &st, 0, rPose[i].Data.size(1));
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &vs_emlrtBCI, &st);
      }

      rPose[i].Data.set_size(&rlb_emlrtRTEI, &st, rPose[i].Data.size(0), 0);
    }

    rPose.set_size(&ojb_emlrtRTEI, &st, RrigidPoseSingle.Data.size(1));
    for (b_i = 0; b_i < id; b_i++) {
      real32_T b_abPose[16];
      b_st.site = &spb_emlrtRSI;
      RrigidPoseSingle.parenReference(b_st, static_cast<real_T>(b_i) + 1.0,
        &abPose);
      for (i = 0; i < 3; i++) {
        abPose_tmp = i << 2;
        b_abPose[abPose_tmp] = abPose.R[3 * i];
        b_abPose[abPose_tmp + 1] = abPose.R[3 * i + 1];
        b_abPose[abPose_tmp + 2] = abPose.R[3 * i + 2];
        b_abPose[i + 12] = abPose.Translation[i];
      }

      b_abPose[3] = 0.0F;
      b_abPose[7] = 0.0F;
      b_abPose[11] = 0.0F;
      b_abPose[15] = 1.0F;
      if (b_i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, rPose.size(0) - 1, &jq_emlrtBCI,
          &st);
      }

      b_st.site = &spb_emlrtRSI;
      rPose[b_i].b_init(b_st, b_abPose);
    }

    i = connIdx.size(0);
    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ws_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (connIdx[b_i]) {
        if (b_i > MatchesInt.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, MatchesInt.size(0) - 1,
            &rs_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (MatchesInt[b_i].f1.size(0) >= 50) {
          id = isStrongConnection.size(0);
          isStrongConnection.set_size(&slb_emlrtRTEI, &sp,
            isStrongConnection.size(0) + 1);
          isStrongConnection[id] = true;
        } else {
          id = isStrongConnection.size(0);
          isStrongConnection.set_size(&slb_emlrtRTEI, &sp,
            isStrongConnection.size(0) + 1);
          isStrongConnection[id] = false;
        }
      }
    }

    st.site = &prc_emlrtRSI;
    b_st.site = &aq_emlrtRSI;
    b_eml_find(b_st, isStrongConnection, b_r);
    if (b_r.size(0) > 0) {
      int32_T end_tmp;
      uint32_T k;
      boolean_T exitg1;
      end_tmp = isStrongConnection.size(0);
      id = 0;
      for (b_i = 0; b_i < end_tmp; b_i++) {
        if (isStrongConnection[b_i]) {
          id++;
        }
      }

      abPose_tmp = 0;
      for (b_i = 0; b_i < end_tmp; b_i++) {
        if (isStrongConnection[b_i]) {
          if (b_i > viewTable_ViewId.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, viewTable_ViewId.size(0) - 1,
              &xs_emlrtBCI, (emlrtConstCTX)&sp);
          }

          viewTable_ViewId[abPose_tmp] = viewTable_ViewId[b_i];
          abPose_tmp++;
        }
      }

      viewTable_ViewId.set_size(&slb_emlrtRTEI, &sp, id);
      id = 0;
      b_i = 1;
      exitg1 = false;
      while ((!exitg1) && (b_i - 1 <= isStrongConnection.size(0) - 1)) {
        if ((b_i < 1) || (b_i > end_tmp)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, end_tmp, &ys_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        if (isStrongConnection[b_i - 1]) {
          id = b_i;
          exitg1 = true;
        } else {
          b_i++;
        }
      }

      st.site = &qrc_emlrtRSI;
      viewTable_AbsolutePose.parenReference(st, static_cast<real_T>(id), &abPose);
      i = isStrongConnection.size(0) - id;
      emlrtForLoopVectorCheckR2021a(static_cast<real_T>(id) + 1.0, 1.0,
        static_cast<real_T>(isStrongConnection.size(0)), mxDOUBLE_CLASS, i,
        &we_emlrtRTEI, (emlrtConstCTX)&sp);
      for (b_i = 0; b_i < i; b_i++) {
        k = (static_cast<uint32_T>(id) + static_cast<uint32_T>(b_i)) + 1U;
        if ((static_cast<int32_T>(k) < 1) || (static_cast<int32_T>(k) > end_tmp))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k), 1, end_tmp,
            &at_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (isStrongConnection[static_cast<int32_T>(k) - 1]) {
          st.site = &rrc_emlrtRSI;
          viewTable_AbsolutePose.parenReference(st, static_cast<real_T>(k), &r1);
          st.site = &rrc_emlrtRSI;
          abPose.horzcat(st, r1);
        }
      }

      viewTable_AbsolutePose = abPose;
      abPose_tmp = b_r.size(0);
      features.set_size(&slb_emlrtRTEI, &sp, b_r.size(0), 1);
      for (i = 0; i < abPose_tmp; i++) {
        if (i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, features.size(0) - 1, &ss_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        features[i].f1.set_size(&slb_emlrtRTEI, &sp, 0, features[i].f1.size(1));
        if (i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, features.size(0) - 1, &ss_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        features[i].f1.set_size(&slb_emlrtRTEI, &sp, features[i].f1.size(0), 0);
      }

      points.set_size(&slb_emlrtRTEI, &sp, b_r.size(0), 1);
      for (i = 0; i < abPose_tmp; i++) {
        if (i > points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, points.size(0) - 1, &ss_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        points[i].pLocation.set_size(&slb_emlrtRTEI, &sp, 0, 0);
        points[i].pMetric.set_size(&slb_emlrtRTEI, &sp, 0);
        points[i].pScale.set_size(&slb_emlrtRTEI, &sp, 0);
        points[i].pOrientation.set_size(&slb_emlrtRTEI, &sp, 0);
      }

      k = 1U;
      for (b_i = 0; b_i < end_tmp; b_i++) {
        if (b_i + 1 > end_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, end_tmp, &bt_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        if (isStrongConnection[b_i]) {
          i = viewTable_Features.size(0) * viewTable_Features.size(1);
          if (b_i > i - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i - 1, &us_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (static_cast<real_T>(k) != static_cast<int32_T>(k)) {
            emlrtIntegerCheckR2012b(static_cast<real_T>(k), &bc_emlrtDCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(k) - 1 < 0) || (static_cast<int32_T>(k) - 1 >
               features.size(0) - 1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k) - 1, 0,
              features.size(0) - 1, &ts_emlrtBCI, (emlrtConstCTX)&sp);
          }

          features[static_cast<int32_T>(k) - 1].f1.set_size(&wlb_emlrtRTEI, &sp,
            viewTable_Features[b_i].f1.size(0), viewTable_Features[b_i].f1.size
            (1));
          id = viewTable_Features[b_i].f1.size(0) * viewTable_Features[b_i].
            f1.size(1);
          for (i = 0; i < id; i++) {
            features[static_cast<int32_T>(k) - 1].f1[i] = viewTable_Features[b_i]
              .f1[i];
          }

          i = viewTable_Points.size(0) * viewTable_Points.size(1);
          if (b_i > i - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i - 1, &ct_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (static_cast<real_T>(k) != static_cast<int32_T>(k)) {
            emlrtIntegerCheckR2012b(static_cast<real_T>(k), &cc_emlrtDCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(k) - 1 < 0) || (static_cast<int32_T>(k) - 1 >
               points.size(0) - 1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k) - 1, 0,
              points.size(0) - 1, &dt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          points[static_cast<int32_T>(k) - 1] = viewTable_Points[b_i];
          k++;
        }
      }

      viewTable_Features.set_size(&xlb_emlrtRTEI, &sp, b_r.size(0), 1);
      viewTable_Points.set_size(&ylb_emlrtRTEI, &sp, points.size(0), 1);
      for (i = 0; i < abPose_tmp; i++) {
        viewTable_Features[i] = features[i];
        viewTable_Points[i] = points[i];
      }
    } else {
      st.site = &src_emlrtRSI;
      viewTable_AbsolutePose.init(st);
      viewTable_ViewId.set_size(&tlb_emlrtRTEI, &sp, 0);
      viewTable_Features.set_size(&ulb_emlrtRTEI, &sp, 0, 0);
      viewTable_Points.set_size(&vlb_emlrtRTEI, &sp, 0, 0);
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::checkIfViewIsMissing(const emlrtStack &sp, const array<
    uint32_T, 1U> &viewId) const
  {
    b_rigidtform3d unusedExpr;
    array<b_ORBPoints, 1U> b_expl_temp;
    array<cell_wrap_8, 2U> expl_temp;
    array<int32_T, 1U> b_r;
    array<uint32_T, 1U> t36_ViewId;
    array<boolean_T, 1U> missingViewIdx;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack st;
    int32_T loop_ub_tmp;
    int32_T trueCount;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &wyb_emlrtRSI;
    b_st.site = &vyb_emlrtRSI;
    imageviewsetBase_get_Views(b_st, t36_ViewId, expl_temp, b_expl_temp,
      unusedExpr);
    b_st.site = &xyb_emlrtRSI;
    c_st.site = &adb_emlrtRSI;
    d_st.site = &bdb_emlrtRSI;
    b_isMember(d_st, viewId, t36_ViewId, missingViewIdx);
    loop_ub_tmp = missingViewIdx.size(0);
    for (trueCount = 0; trueCount < loop_ub_tmp; trueCount++) {
      missingViewIdx[trueCount] = !missingViewIdx[trueCount];
    }

    b_st.site = &ydc_emlrtRSI;
    if (any(b_st, missingViewIdx)) {
      trueCount = 0;
      for (int32_T i{0}; i < loop_ub_tmp; i++) {
        if (missingViewIdx[i]) {
          trueCount++;
        }
      }

      b_r.set_size(&fnb_emlrtRTEI, &st, trueCount);
      trueCount = 0;
      for (int32_T i{0}; i < loop_ub_tmp; i++) {
        if (missingViewIdx[i]) {
          b_r[trueCount] = i;
          trueCount++;
        }
      }

      loop_ub_tmp = b_r.size(0);
      for (trueCount = 0; trueCount < loop_ub_tmp; trueCount++) {
        if (b_r[trueCount] > viewId.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[trueCount], 0, viewId.size(0) - 1,
            &hn_emlrtBCI, &st);
        }
      }

      if (b_r.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_r.size(0), &wm_emlrtBCI, &st);
      }

      emlrtErrorWithMessageIdR2018a(&st, &yd_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        viewId[b_r[0]]);
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::checkMatchesOutOfBounds(const emlrtStack &sp, const array<
    uint32_T, 2U> &matches, uint32_T viewId1, uint32_T viewId2) const
  {
    b_rigidtform3d unusedExpr;
    array<b_ORBPoints, 1U> b_expl_temp;
    array<cell_wrap_8, 2U> expl_temp;
    array<uint32_T, 1U> t1_ViewId;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack h_st;
    emlrtStack st;
    int32_T c_size;
    int32_T ib_data;
    int32_T loop_ub;
    int32_T view1_data;
    int32_T view2_data;
    int32_T view2_size;
    uint32_T c_data;
    uint32_T u;
    boolean_T guard1;
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
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &teb_emlrtRSI;
    b_st.site = &afb_emlrtRSI;
    imageviewsetBase_get_Views(b_st, t1_ViewId, expl_temp, b_expl_temp,
      unusedExpr);
    b_st.site = &bfb_emlrtRSI;
    c_st.site = &dfb_emlrtRSI;
    d_st.site = &efb_emlrtRSI;
    do_vectors(d_st, t1_ViewId, viewId1, (uint32_T *)&c_data, (int32_T *)
               &view2_data, view2_size, (int32_T *)&ib_data, c_size);
    loop_ub = view2_size;
    for (c_size = 0; c_size < view2_size; c_size++) {
      view1_data = view2_data;
    }

    st.site = &ueb_emlrtRSI;
    b_st.site = &afb_emlrtRSI;
    imageviewsetBase_get_Views(b_st, t1_ViewId, expl_temp, b_expl_temp,
      unusedExpr);
    b_st.site = &bfb_emlrtRSI;
    c_st.site = &dfb_emlrtRSI;
    d_st.site = &efb_emlrtRSI;
    do_vectors(d_st, t1_ViewId, viewId2, (uint32_T *)&c_data, (int32_T *)
               &view2_data, view2_size, (int32_T *)&ib_data, c_size);
    st.site = &veb_emlrtRSI;
    if (loop_ub == 0) {
      emlrtErrorWithMessageIdR2018a(&st, &de_emlrtRTEI,
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }

    if ((view1_data - 1 < 0) || (view1_data - 1 > PointsSingle.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(view1_data - 1, 0, PointsSingle.size(0) - 1,
        &ns_emlrtBCI, (emlrtConstCTX)&sp);
    }

    st.site = &web_emlrtRSI;
    if (view2_size == 0) {
      emlrtErrorWithMessageIdR2018a(&st, &de_emlrtRTEI,
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces",
        "MATLAB:legacy_two_part:TooManyOutputsDueToMissingBraces", 0);
    }

    if ((view2_data - 1 < 0) || (view2_data - 1 > PointsSingle.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(view2_data - 1, 0, PointsSingle.size(0) - 1,
        &os_emlrtBCI, (emlrtConstCTX)&sp);
    }

    st.site = &xeb_emlrtRSI;
    b_st.site = &mbb_emlrtRSI;
    c_st.site = &nbb_emlrtRSI;
    d_st.site = &obb_emlrtRSI;
    if (matches.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &jfb_emlrtRSI;
    c_size = matches.size(0);
    f_st.site = &kfb_emlrtRSI;
    c_data = matches[0];
    g_st.site = &lfb_emlrtRSI;
    if (matches.size(0) > 2147483646) {
      h_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(h_st);
    }

    for (ib_data = 2; ib_data <= c_size; ib_data++) {
      u = matches[ib_data - 1];
      if (c_data < u) {
        c_data = u;
      }
    }

    guard1 = false;
    if (c_data > static_cast<uint32_T>(PointsSingle[view1_data - 1].f1.size(0)))
    {
      guard1 = true;
    } else {
      st.site = &yeb_emlrtRSI;
      b_st.site = &mbb_emlrtRSI;
      c_st.site = &nbb_emlrtRSI;
      d_st.site = &obb_emlrtRSI;
      e_st.site = &jfb_emlrtRSI;
      f_st.site = &kfb_emlrtRSI;
      c_data = matches[matches.size(0)];
      g_st.site = &lfb_emlrtRSI;
      for (ib_data = 2; ib_data <= c_size; ib_data++) {
        u = matches[(ib_data + matches.size(0)) - 1];
        if (c_data < u) {
          c_data = u;
        }
      }

      if (c_data > static_cast<uint32_T>(PointsSingle[view2_data - 1].f1.size(0)))
      {
        guard1 = true;
      }
    }

    if (guard1) {
      emlrtErrorWithMessageIdR2018a(&sp, &ve_emlrtRTEI,
        "vision:viewSet:matchIdxOutOfBounds",
        "vision:viewSet:matchIdxOutOfBounds", 0);
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::checkPoints(const emlrtStack &sp, const ORBPoints &points)
  {
    static real_T dv[2]{ 0.0, 2.0 };

    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
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
    dv[0U] = rtNaN;
    st.site = &wcb_emlrtRSI;
    b_st.site = &vf_emlrtRSI;
    c_st.site = &wf_emlrtRSI;
    d_st.site = &xf_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    p = true;
    for (int32_T k{0}; k < 2; k++) {
      if (p) {
        real_T d;
        d = dv[k];
        if ((!(d != d)) && (points.pLocation.size(k) != 2)) {
          p = false;
        }
      } else {
        p = false;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI,
        "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:imageviewset:incorrectSize", 3, 4, 6, "Points");
    }
  }

  void imageviewset::connectedViews(const emlrtStack &sp, real_T varargin_1,
    array<uint32_T, 1U> &viewTable_ViewId, b_rigidtform3d &
    viewTable_AbsolutePose, array<cell_wrap_8, 2U> &viewTable_Features, array<
    b_ORBPoints, 2U> &viewTable_Points) const
  {
    b_rigidtform3d abPose;
    b_rigidtform3d r1;
    array<b_ORBPoints, 2U> points;
    array<b_rigidtform3d, 1U> rPose;
    array<cell_wrap_8, 2U> features;
    array<int32_T, 1U> b_r;
    array<boolean_T, 1U> connIdx;
    array<boolean_T, 1U> isStrongConnection;
    emlrtStack b_st;
    emlrtStack st;
    int32_T abPose_tmp;
    int32_T b_i;
    int32_T i;
    int32_T id;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    isStrongConnection.set_size(&qlb_emlrtRTEI, &sp, 0);
    st.site = &nrc_emlrtRSI;
    b_connectedViews(st, varargin_1, viewTable_ViewId, viewTable_AbsolutePose,
                     viewTable_Features, viewTable_Points, connIdx);
    st.site = &orc_emlrtRSI;
    id = RrigidPoseSingle.Data.size(1);
    rPose.set_size(&rlb_emlrtRTEI, &st, RrigidPoseSingle.Data.size(1));
    for (i = 0; i < id; i++) {
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &vs_emlrtBCI, &st);
      }

      rPose[i].Data.set_size(&rlb_emlrtRTEI, &st, 0, rPose[i].Data.size(1));
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &vs_emlrtBCI, &st);
      }

      rPose[i].Data.set_size(&rlb_emlrtRTEI, &st, rPose[i].Data.size(0), 0);
    }

    rPose.set_size(&ojb_emlrtRTEI, &st, RrigidPoseSingle.Data.size(1));
    for (b_i = 0; b_i < id; b_i++) {
      real32_T b_abPose[16];
      b_st.site = &spb_emlrtRSI;
      RrigidPoseSingle.parenReference(b_st, static_cast<real_T>(b_i) + 1.0,
        &abPose);
      for (i = 0; i < 3; i++) {
        abPose_tmp = i << 2;
        b_abPose[abPose_tmp] = abPose.R[3 * i];
        b_abPose[abPose_tmp + 1] = abPose.R[3 * i + 1];
        b_abPose[abPose_tmp + 2] = abPose.R[3 * i + 2];
        b_abPose[i + 12] = abPose.Translation[i];
      }

      b_abPose[3] = 0.0F;
      b_abPose[7] = 0.0F;
      b_abPose[11] = 0.0F;
      b_abPose[15] = 1.0F;
      if (b_i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, rPose.size(0) - 1, &jq_emlrtBCI,
          &st);
      }

      b_st.site = &spb_emlrtRSI;
      rPose[b_i].b_init(b_st, b_abPose);
    }

    i = connIdx.size(0);
    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ws_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if (connIdx[b_i]) {
        if (b_i > MatchesInt.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, MatchesInt.size(0) - 1,
            &rs_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (MatchesInt[b_i].f1.size(0) >= 10) {
          id = isStrongConnection.size(0);
          isStrongConnection.set_size(&slb_emlrtRTEI, &sp,
            isStrongConnection.size(0) + 1);
          isStrongConnection[id] = true;
        } else {
          id = isStrongConnection.size(0);
          isStrongConnection.set_size(&slb_emlrtRTEI, &sp,
            isStrongConnection.size(0) + 1);
          isStrongConnection[id] = false;
        }
      }
    }

    st.site = &prc_emlrtRSI;
    b_st.site = &aq_emlrtRSI;
    b_eml_find(b_st, isStrongConnection, b_r);
    if (b_r.size(0) > 0) {
      int32_T end_tmp;
      uint32_T k;
      boolean_T exitg1;
      end_tmp = isStrongConnection.size(0);
      id = 0;
      for (b_i = 0; b_i < end_tmp; b_i++) {
        if (isStrongConnection[b_i]) {
          id++;
        }
      }

      abPose_tmp = 0;
      for (b_i = 0; b_i < end_tmp; b_i++) {
        if (isStrongConnection[b_i]) {
          if (b_i > viewTable_ViewId.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, viewTable_ViewId.size(0) - 1,
              &xs_emlrtBCI, (emlrtConstCTX)&sp);
          }

          viewTable_ViewId[abPose_tmp] = viewTable_ViewId[b_i];
          abPose_tmp++;
        }
      }

      viewTable_ViewId.set_size(&slb_emlrtRTEI, &sp, id);
      id = 0;
      b_i = 1;
      exitg1 = false;
      while ((!exitg1) && (b_i - 1 <= isStrongConnection.size(0) - 1)) {
        if ((b_i < 1) || (b_i > end_tmp)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, end_tmp, &ys_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        if (isStrongConnection[b_i - 1]) {
          id = b_i;
          exitg1 = true;
        } else {
          b_i++;
        }
      }

      st.site = &qrc_emlrtRSI;
      viewTable_AbsolutePose.parenReference(st, static_cast<real_T>(id), &abPose);
      i = isStrongConnection.size(0) - id;
      emlrtForLoopVectorCheckR2021a(static_cast<real_T>(id) + 1.0, 1.0,
        static_cast<real_T>(isStrongConnection.size(0)), mxDOUBLE_CLASS, i,
        &we_emlrtRTEI, (emlrtConstCTX)&sp);
      for (b_i = 0; b_i < i; b_i++) {
        k = (static_cast<uint32_T>(id) + static_cast<uint32_T>(b_i)) + 1U;
        if ((static_cast<int32_T>(k) < 1) || (static_cast<int32_T>(k) > end_tmp))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k), 1, end_tmp,
            &at_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (isStrongConnection[static_cast<int32_T>(k) - 1]) {
          st.site = &rrc_emlrtRSI;
          viewTable_AbsolutePose.parenReference(st, static_cast<real_T>(k), &r1);
          st.site = &rrc_emlrtRSI;
          abPose.horzcat(st, r1);
        }
      }

      viewTable_AbsolutePose = abPose;
      abPose_tmp = b_r.size(0);
      features.set_size(&slb_emlrtRTEI, &sp, b_r.size(0), 1);
      for (i = 0; i < abPose_tmp; i++) {
        if (i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, features.size(0) - 1, &ss_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        features[i].f1.set_size(&slb_emlrtRTEI, &sp, 0, features[i].f1.size(1));
        if (i > features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, features.size(0) - 1, &ss_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        features[i].f1.set_size(&slb_emlrtRTEI, &sp, features[i].f1.size(0), 0);
      }

      points.set_size(&slb_emlrtRTEI, &sp, b_r.size(0), 1);
      for (i = 0; i < abPose_tmp; i++) {
        if (i > points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, points.size(0) - 1, &ss_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        points[i].pLocation.set_size(&slb_emlrtRTEI, &sp, 0, 0);
        points[i].pMetric.set_size(&slb_emlrtRTEI, &sp, 0);
        points[i].pScale.set_size(&slb_emlrtRTEI, &sp, 0);
        points[i].pOrientation.set_size(&slb_emlrtRTEI, &sp, 0);
      }

      k = 1U;
      for (b_i = 0; b_i < end_tmp; b_i++) {
        if (b_i + 1 > end_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, end_tmp, &bt_emlrtBCI,
            (emlrtConstCTX)&sp);
        }

        if (isStrongConnection[b_i]) {
          i = viewTable_Features.size(0) * viewTable_Features.size(1);
          if (b_i > i - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i - 1, &us_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (static_cast<real_T>(k) != static_cast<int32_T>(k)) {
            emlrtIntegerCheckR2012b(static_cast<real_T>(k), &bc_emlrtDCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(k) - 1 < 0) || (static_cast<int32_T>(k) - 1 >
               features.size(0) - 1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k) - 1, 0,
              features.size(0) - 1, &ts_emlrtBCI, (emlrtConstCTX)&sp);
          }

          features[static_cast<int32_T>(k) - 1].f1.set_size(&wlb_emlrtRTEI, &sp,
            viewTable_Features[b_i].f1.size(0), viewTable_Features[b_i].f1.size
            (1));
          id = viewTable_Features[b_i].f1.size(0) * viewTable_Features[b_i].
            f1.size(1);
          for (i = 0; i < id; i++) {
            features[static_cast<int32_T>(k) - 1].f1[i] = viewTable_Features[b_i]
              .f1[i];
          }

          i = viewTable_Points.size(0) * viewTable_Points.size(1);
          if (b_i > i - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i - 1, &ct_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (static_cast<real_T>(k) != static_cast<int32_T>(k)) {
            emlrtIntegerCheckR2012b(static_cast<real_T>(k), &cc_emlrtDCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(k) - 1 < 0) || (static_cast<int32_T>(k) - 1 >
               points.size(0) - 1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k) - 1, 0,
              points.size(0) - 1, &dt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          points[static_cast<int32_T>(k) - 1] = viewTable_Points[b_i];
          k++;
        }
      }

      viewTable_Features.set_size(&xlb_emlrtRTEI, &sp, b_r.size(0), 1);
      viewTable_Points.set_size(&ylb_emlrtRTEI, &sp, points.size(0), 1);
      for (i = 0; i < abPose_tmp; i++) {
        viewTable_Features[i] = features[i];
        viewTable_Points[i] = points[i];
      }
    } else {
      st.site = &src_emlrtRSI;
      viewTable_AbsolutePose.init(st);
      viewTable_ViewId.set_size(&tlb_emlrtRTEI, &sp, 0);
      viewTable_Features.set_size(&ulb_emlrtRTEI, &sp, 0, 0);
      viewTable_Points.set_size(&vlb_emlrtRTEI, &sp, 0, 0);
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::connectedViews(const emlrtStack &sp, real_T varargin_1,
    array<uint32_T, 1U> &viewTable_ViewId, b_rigidtform3d &
    viewTable_AbsolutePose, array<cell_wrap_8, 2U> &viewTable_Features, array<
    b_ORBPoints, 2U> &viewTable_Points, array<real_T, 2U> &dist) const
  {
    b_rigidtform3d obj;
    c_graph G;
    array<b_ORBPoints, 1U> t35_Points;
    array<b_rigidtform3d, 1U> rPose;
    array<cell_wrap_8, 1U> t35_Features;
    array<real_T, 1U> b_dist;
    array<real_T, 1U> nearestViewIds;
    array<uint32_T, 1U> s;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack st;
    int32_T b_viewTable_Features;
    int32_T viewTable_Features_tmp;
    boolean_T exitg1;
    boolean_T tf;
    st.prev = &sp;
    st.tls = sp.tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &plc_emlrtRSI;
    viewTable_Features_tmp = RrigidPoseSingle.Data.size(1);
    b_viewTable_Features = RrigidPoseSingle.Data.size(1);
    rPose.set_size(&njb_emlrtRTEI, &st, RrigidPoseSingle.Data.size(1));
    for (int32_T i{0}; i < b_viewTable_Features; i++) {
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &iq_emlrtBCI, &st);
      }

      rPose[i].Data.set_size(&njb_emlrtRTEI, &st, 0, rPose[i].Data.size(1));
      if (i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &iq_emlrtBCI, &st);
      }

      rPose[i].Data.set_size(&njb_emlrtRTEI, &st, rPose[i].Data.size(0), 0);
    }

    rPose.set_size(&ojb_emlrtRTEI, &st, RrigidPoseSingle.Data.size(1));
    for (int32_T b_i{0}; b_i < viewTable_Features_tmp; b_i++) {
      real32_T b_obj[16];
      b_st.site = &spb_emlrtRSI;
      RrigidPoseSingle.parenReference(b_st, static_cast<real_T>(b_i) + 1.0, &obj);
      for (int32_T i{0}; i < 3; i++) {
        b_viewTable_Features = i << 2;
        b_obj[b_viewTable_Features] = obj.R[3 * i];
        b_obj[b_viewTable_Features + 1] = obj.R[3 * i + 1];
        b_obj[b_viewTable_Features + 2] = obj.R[3 * i + 2];
        b_obj[i + 12] = obj.Translation[i];
      }

      b_obj[3] = 0.0F;
      b_obj[7] = 0.0F;
      b_obj[11] = 0.0F;
      b_obj[15] = 1.0F;
      if (b_i > rPose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, rPose.size(0) - 1, &jq_emlrtBCI,
          &st);
      }

      b_st.site = &spb_emlrtRSI;
      rPose[b_i].b_init(b_st, b_obj);
    }

    st.site = &qlc_emlrtRSI;
    s.set_size(&pjb_emlrtRTEI, &st, ViewId1.size(0) + ViewId2.size(0));
    b_viewTable_Features = ViewId1.size(0);
    for (int32_T i{0}; i < b_viewTable_Features; i++) {
      s[i] = ViewId1[i];
    }

    b_viewTable_Features = ViewId2.size(0);
    for (int32_T i{0}; i < b_viewTable_Features; i++) {
      s[i + ViewId1.size(0)] = ViewId2[i];
    }

    b_st.site = &bdb_emlrtRSI;
    tf = false;
    c_st.site = &cdb_emlrtRSI;
    if (s.size(0) > 2147483646) {
      d_st.site = &qe_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }

    b_viewTable_Features = 0;
    exitg1 = false;
    while ((!exitg1) && (b_viewTable_Features <= s.size(0) - 1)) {
      if (varargin_1 == s[b_viewTable_Features]) {
        tf = true;
        exitg1 = true;
      } else {
        b_viewTable_Features++;
      }
    }

    if (!tf) {
      st.site = &tlc_emlrtRSI;
      viewTable_AbsolutePose.init(st);
      viewTable_ViewId.set_size(&tmb_emlrtRTEI, &sp, 0);
      viewTable_Features.set_size(&umb_emlrtRTEI, &sp, 0, 0);
      viewTable_Points.set_size(&vmb_emlrtRTEI, &sp, 0, 0);
      dist.set_size(&wmb_emlrtRTEI, &sp, 0, 0);
    } else {
      st.site = &ulc_emlrtRSI;
      G.init(st, ViewId1, ViewId2);
      st.site = &rlc_emlrtRSI;
      G.b_nearest(st, varargin_1, nearestViewIds, b_dist);
      b_viewTable_Features = b_dist.size(0);
      dist.set_size(&smb_emlrtRTEI, &sp, b_dist.size(0), 1);
      for (int32_T i{0}; i < b_viewTable_Features; i++) {
        dist[i] = b_dist[i];
      }

      st.site = &slc_emlrtRSI;
      findView(st, nearestViewIds, viewTable_ViewId, viewTable_AbsolutePose,
               t35_Features, t35_Points);
      viewTable_Features.set_size(&qjb_emlrtRTEI, &sp, t35_Features.size(0), 1);
      for (int32_T i{0}; i < t35_Features.size(0); i++) {
        if (i > t35_Features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, t35_Features.size(0) - 1,
            &hq_emlrtBCI, (emlrtConstCTX)&sp);
        }

        viewTable_Features_tmp = t35_Features[i].f1.size(0);
        b_viewTable_Features = t35_Features[i].f1.size(1);
        viewTable_Features[i].f1.set_size(&qjb_emlrtRTEI, &sp,
          viewTable_Features_tmp, b_viewTable_Features);
        b_viewTable_Features *= viewTable_Features_tmp;
        for (viewTable_Features_tmp = 0; viewTable_Features_tmp <
             b_viewTable_Features; viewTable_Features_tmp++) {
          viewTable_Features[i].f1[viewTable_Features_tmp] = t35_Features[i]
            .f1[viewTable_Features_tmp];
        }
      }

      viewTable_Points.set_size(&qjb_emlrtRTEI, &sp, t35_Points.size(0), 1);
      for (int32_T i{0}; i < t35_Points.size(0); i++) {
        if (i > t35_Points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, t35_Points.size(0) - 1,
            &hq_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (i > viewTable_Points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(i, 0, viewTable_Points.size(0) - 1,
            &hq_emlrtBCI, (emlrtConstCTX)&sp);
        }

        viewTable_Points[i] = t35_Points[i];
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::findTracks(const emlrtStack &sp, pointTrack &tracks)
  {
    b_rigidtform3d expl_temp;
    b_rigidtform3d mjd_emlrtRSI;
    b_table N;
    array<b_ORBPoints, 1U> viewTable_Points;
    array<cell_wrap_8, 2U> b_expl_temp;
    array<real_T, 2U> njd_emlrtRSI;
    array<real_T, 1U> b_tmp_data;
    array<real_T, 1U> b_y;
    array<real_T, 1U> tmp_data;
    array<real32_T, 2U> b_this;
    array<uint32_T, 2U> y;
    array<uint32_T, 1U> b_viewTable_ViewId;
    array<uint32_T, 1U> viewTable_ViewId;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
    int32_T i1;
    int32_T loop_ub;
    real32_T obj[16];
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
    st.site = &ipb_emlrtRSI;
    b_st.site = &jpb_emlrtRSI;
    st.site = &hpb_emlrtRSI;
    b_st.site = &hpb_emlrtRSI;
    get_Views(b_st, viewTable_ViewId, b_expl_temp, viewTable_Points, expl_temp);
    b_st.site = &qdb_emlrtRSI;
    for (int32_T i{0}; i < 2; i++) {
      int32_T b_i;
      b_i = viewTable_Points[i].pLocation.size(0);
      if (b_i != 0) {
        real_T varargin_1[2];
        int32_T sizes_idx_0;
        boolean_T b;
        boolean_T empty_non_axis_sizes;
        b_st.site = &rdb_emlrtRSI;
        varargin_1[0] = b_i;
        varargin_1[1] = 1.0;
        c_st.site = &ne_emlrtRSI;
        internal::assertValidSizeArg(c_st, varargin_1);
        if (b_i < 1) {
          y.set_size(&wm_emlrtRTEI, &st, 1, 0);
        } else {
          y.set_size(&wm_emlrtRTEI, &st, 1, b_i);
          loop_ub = b_i - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            y[i1] = static_cast<uint32_T>(i1) + 1U;
          }
        }

        b_st.site = &sdb_emlrtRSI;
        b_viewTable_ViewId.set_size(&fy_emlrtRTEI, &b_st, b_i);
        for (i1 = 0; i1 < b_i; i1++) {
          b_viewTable_ViewId[i1] = viewTable_ViewId[i];
        }

        b_i = y.size(1);
        b_y.set_size(&gy_emlrtRTEI, &b_st, y.size(1));
        for (i1 = 0; i1 < b_i; i1++) {
          b_y[i1] = y[i1];
        }

        c_st.site = &tdb_emlrtRSI;
        N.init(c_st, b_viewTable_ViewId, b_y, viewTable_Points[i].pLocation);
        c_st.site = &udb_emlrtRSI;
        d_st.site = &xdb_emlrtRSI;
        e_st.site = &aeb_emlrtRSI;
        e_st.site = &beb_emlrtRSI;
        f_st.site = &xab_emlrtRSI;
        i1 = FeatureGraphSingle.FeatureGraph.NodeProperties.data.f1.size(0);
        FeatureGraphSingle.FeatureGraph.NodeProperties.data.f1.set_size
          (&hy_emlrtRTEI, &d_st,
           FeatureGraphSingle.FeatureGraph.NodeProperties.data.f1.size(0) +
           N.data.f1.size(0));
        b_i = N.data.f1.size(0);
        for (int32_T i2{0}; i2 < b_i; i2++) {
          FeatureGraphSingle.FeatureGraph.NodeProperties.data.f1[i1 + i2] =
            N.data.f1[i2];
        }

        i1 = FeatureGraphSingle.FeatureGraph.NodeProperties.data.f2.size(0);
        FeatureGraphSingle.FeatureGraph.NodeProperties.data.f2.set_size
          (&hy_emlrtRTEI, &d_st,
           FeatureGraphSingle.FeatureGraph.NodeProperties.data.f2.size(0) +
           N.data.f2.size(0));
        b_i = N.data.f2.size(0);
        for (int32_T i2{0}; i2 < b_i; i2++) {
          FeatureGraphSingle.FeatureGraph.NodeProperties.data.f2[i1 + i2] =
            N.data.f2[i2];
        }

        e_st.site = &ceb_emlrtRSI;
        f_st.site = &kn_emlrtRSI;
        b = ((FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size(0) !=
              0) && (FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size
                     (1) != 0));
        if (b) {
          loop_ub = FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size
            (1);
        } else if ((N.data.f3.size(0) != 0) && (N.data.f3.size(1) != 0)) {
          loop_ub = N.data.f3.size(1);
        } else {
          loop_ub = FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size
            (1);
          if (N.data.f3.size(1) >
              FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size(1)) {
            loop_ub = N.data.f3.size(1);
          }
        }

        g_st.site = &jj_emlrtRSI;
        if ((FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size(1) !=
             loop_ub) &&
            ((FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size(0) !=
              0) && (FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size
                     (1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((N.data.f3.size(1) != loop_ub) && ((N.data.f3.size(0) != 0) &&
             (N.data.f3.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (loop_ub == 0);
        if (empty_non_axis_sizes || b) {
          b_i = FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.size(0);
        } else {
          b_i = 0;
        }

        if (empty_non_axis_sizes || ((N.data.f3.size(0) != 0) && (N.data.f3.size
              (1) != 0))) {
          sizes_idx_0 = N.data.f3.size(0);
        } else {
          sizes_idx_0 = 0;
        }

        i1 = b_i + sizes_idx_0;
        b_this.set_size(&iy_emlrtRTEI, &d_st, i1, loop_ub);
        for (int32_T i2{0}; i2 < loop_ub; i2++) {
          for (int32_T i3{0}; i3 < b_i; i3++) {
            b_this[i3 + b_this.size(0) * i2] =
              FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3[i3 + b_i *
              i2];
          }
        }

        for (int32_T i2{0}; i2 < loop_ub; i2++) {
          for (int32_T i3{0}; i3 < sizes_idx_0; i3++) {
            b_this[(i3 + b_i) + b_this.size(0) * i2] = N.data.f3[i3 +
              sizes_idx_0 * i2];
          }
        }

        FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.set_size
          (&jy_emlrtRTEI, &d_st, i1, b_this.size(1));
        loop_ub = b_this.size(0) * b_this.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3[i1] = b_this[i1];
        }

        FeatureGraphSingle.FeatureGraph.NodeProperties.nrows += N.data.f1.size(0);
        d_st.site = &ydb_emlrtRSI;
        if (N.data.f1.size(0) > 0) {
          c_st.site = &vdb_emlrtRSI;
          FeatureGraphSingle.FeatureGraph.Underlying.get_Edges(c_st,
            njd_emlrtRSI);
          c_st.site = &wdb_emlrtRSI;
          tmp_data.set(nullptr, 0);
          b_tmp_data.set(nullptr, 0);
          if (FeatureGraphSingle.FeatureGraph.Underlying.Jc.size(0) == 0) {
            b_i = 0;
          } else {
            b_i = FeatureGraphSingle.FeatureGraph.Underlying.Jc.size(0) - 1;
          }

          d_st.site = &deb_emlrtRSI;
          FeatureGraphSingle.FeatureGraph.Underlying.init(d_st, tmp_data,
            b_tmp_data, static_cast<real_T>(b_i) + static_cast<real_T>
            (N.data.f1.size(0)));
        }
      }
    }

    st.site = &gpb_emlrtRSI;
    b_st.site = &spb_emlrtRSI;
    RrigidPoseSingle.parenReference(b_st, 1.0, &expl_temp);
    for (i1 = 0; i1 < 3; i1++) {
      loop_ub = i1 << 2;
      obj[loop_ub] = expl_temp.R[3 * i1];
      obj[loop_ub + 1] = expl_temp.R[3 * i1 + 1];
      obj[loop_ub + 2] = expl_temp.R[3 * i1 + 2];
      obj[i1 + 12] = expl_temp.Translation[i1];
    }

    obj[3] = 0.0F;
    obj[7] = 0.0F;
    obj[11] = 0.0F;
    obj[15] = 1.0F;
    b_st.site = &spb_emlrtRSI;
    mjd_emlrtRSI.b_init(b_st, obj);
    st.site = &gpb_emlrtRSI;
    FeatureGraphSingle.addEdges(st, MatchesInt);
    st.site = &fpb_emlrtRSI;
    FeatureGraphSingle.createTracks(st, tracks);
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::findView(const emlrtStack &sp, const array<uint32_T, 1U>
    &viewIds, array<uint32_T, 1U> &views_ViewId, b_rigidtform3d &
    views_AbsolutePose, array<cell_wrap_8, 1U> &views_Features, array<
    b_ORBPoints, 1U> &views_Points) const
  {
    b_rigidtform3d b_views_AbsolutePose;
    b_rigidtform3d expl_temp;
    array<b_ORBPoints, 1U> b_views_Points;
    array<b_ORBPoints, 1U> c_expl_temp;
    array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
    array<cell_wrap_8, 2U> b_expl_temp;
    array<cell_wrap_8, 2U> b_views_Features;
    array<real_T, 1U> b_viewIdx_data;
    array<real_T, 1U> c_viewIdx_data;
    array<uint32_T, 1U> t37_ViewId;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
    real_T viewIdx_data;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T ia_data;
    int32_T ia_size;
    int32_T ib_data;
    int32_T ib_size;
    uint32_T c_data;
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
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &ymc_emlrtRSI;
    b_st.site = &anc_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    p = true;
    ia_data = 0;
    exitg1 = false;
    while ((!exitg1) && (ia_data <= viewIds.size(0) - 1)) {
      if (viewIds[ia_data] > 0U) {
        ia_data++;
      } else {
        p = false;
        exitg1 = true;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:findView:expectedPositive", 3, 4, 7, "viewIds");
    }

    b_st.site = &bnc_emlrtRSI;
    checkIfViewIsMissing(b_st, viewIds);
    b_st.site = &cnc_emlrtRSI;
    c_st.site = &afb_emlrtRSI;
    imageviewsetBase_get_Views(c_st, t37_ViewId, b_expl_temp, c_expl_temp,
      expl_temp);
    c_st.site = &bfb_emlrtRSI;
    d_st.site = &dfb_emlrtRSI;
    e_st.site = &efb_emlrtRSI;
    do_vectors(e_st, t37_ViewId, viewIds[0], (uint32_T *)&c_data, (int32_T *)
               &ia_data, ia_size, (int32_T *)&ib_data, ib_size);
    for (i = 0; i < ia_size; i++) {
      viewIdx_data = ia_data;
    }

    i = viewIds.size(0);
    views_ViewId.set_size(&lkb_emlrtRTEI, &st, viewIds.size(0));
    for (i1 = 0; i1 < ia_size; i1++) {
      if ((static_cast<int32_T>(viewIdx_data) < 1) || (static_cast<int32_T>
           (viewIdx_data) > ViewId.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data), 1,
          ViewId.size(0), &er_emlrtBCI, &st);
      }
    }

    if (ia_size != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, 0, &nd_emlrtECI, &st);
    }

    ib_data = static_cast<int32_T>(viewIdx_data) - 1;
    views_ViewId[0] = ViewId[static_cast<int32_T>(viewIdx_data) - 1];
    views_Features.set_size(&mkb_emlrtRTEI, &st, viewIds.size(0));
    views_Points.set_size(&nkb_emlrtRTEI, &st, viewIds.size(0));
    b_st.site = &dnc_emlrtRSI;
    imageviewsetBase_get_Views(b_st, t37_ViewId, b_views_Features,
      b_views_Points, b_views_AbsolutePose);
    b_viewIdx_data.set(&viewIdx_data, ia_size);
    b_st.site = &enc_emlrtRSI;
    b_views_AbsolutePose.parenReference(b_st, b_viewIdx_data, views_AbsolutePose);
    b_st.site = &fnc_emlrtRSI;
    i1 = b_views_Features.size(0) - 1;
    if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
         (viewIdx_data) - 1 > b_views_Features.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1, 0,
        b_views_Features.size(0) - 1, &wq_emlrtBCI, &st);
    }

    i2 = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].f1.size(0);
    ib_size = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].f1.size(1);
    views_Features[0].f1.set_size(&okb_emlrtRTEI, &st, i2, ib_size);
    ia_data = i2 * ib_size;
    for (i2 = 0; i2 < ia_data; i2++) {
      views_Features[0].f1[i2] = b_views_Features[ib_data].f1[i2];
    }

    b_st.site = &gnc_emlrtRSI;
    i2 = b_views_Points.size(0) - 1;
    if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
         (viewIdx_data) - 1 > b_views_Points.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1, 0,
        b_views_Points.size(0) - 1, &fr_emlrtBCI, &st);
    }

    views_Points[0] = b_views_Points[static_cast<int32_T>(viewIdx_data) - 1];
    if (viewIds.size(0) > 1) {
      for (int32_T b_i{0}; b_i <= i - 2; b_i++) {
        b_st.site = &hnc_emlrtRSI;
        if (b_i + 2 > i) {
          emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, i, &ar_emlrtBCI, &b_st);
        }

        c_st.site = &afb_emlrtRSI;
        imageviewsetBase_get_Views(c_st, t37_ViewId, b_expl_temp, c_expl_temp,
          expl_temp);
        c_st.site = &bfb_emlrtRSI;
        d_st.site = &dfb_emlrtRSI;
        e_st.site = &efb_emlrtRSI;
        do_vectors(e_st, t37_ViewId, viewIds[b_i + 1], (uint32_T *)&c_data,
                   (int32_T *)&ia_data, ia_size, (int32_T *)&ib_data, ib_size);
        for (ib_size = 0; ib_size < ia_size; ib_size++) {
          viewIdx_data = ia_data;
        }

        for (ib_size = 0; ib_size < ia_size; ib_size++) {
          if ((static_cast<int32_T>(viewIdx_data) < 1) || (static_cast<int32_T>
               (viewIdx_data) > ViewId.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data), 1,
              ViewId.size(0), &gr_emlrtBCI, &st);
          }
        }

        if (ia_size != 1) {
          emlrtSubAssignSizeCheck1dR2017a(1, 0, &md_emlrtECI, &st);
        }

        if (b_i + 2 > views_ViewId.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, views_ViewId.size(0),
            &hr_emlrtBCI, &st);
        }

        ib_data = static_cast<int32_T>(viewIdx_data) - 1;
        views_ViewId[b_i + 1] = ViewId[static_cast<int32_T>(viewIdx_data) - 1];
        b_st.site = &inc_emlrtRSI;
        if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
             (viewIdx_data) - 1 > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &tq_emlrtBCI, &st);
        }

        if (b_i + 1 > views_Features.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, views_Features.size(0) - 1,
            &uq_emlrtBCI, &st);
        }

        ib_size = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].
          f1.size(0);
        ia_data = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].
          f1.size(1);
        views_Features[b_i + 1].f1.set_size(&pkb_emlrtRTEI, &st, ib_size,
          ia_data);
        ia_data *= ib_size;
        for (ib_size = 0; ib_size < ia_data; ib_size++) {
          views_Features[b_i + 1].f1[ib_size] = b_views_Features[ib_data]
            .f1[ib_size];
        }

        b_st.site = &jnc_emlrtRSI;
        if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
             (viewIdx_data) - 1 > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i2, &ir_emlrtBCI, &st);
        }

        if (b_i + 1 > views_Points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, views_Points.size(0) - 1,
            &jr_emlrtBCI, &st);
        }

        views_Points[b_i + 1] = b_views_Points[static_cast<int32_T>(viewIdx_data)
          - 1];
        b_st.site = &knc_emlrtRSI;
        c_viewIdx_data.set(&viewIdx_data, ia_size);
        c_st.site = &knc_emlrtRSI;
        b_views_AbsolutePose.parenReference(c_st, c_viewIdx_data, expl_temp);
        ib_size = views_AbsolutePose.Data.size(1);
        if (b_i + 2 > views_AbsolutePose.Data.size(1)) {
          dataArray.set_size(&qkb_emlrtRTEI, &b_st, 1, b_i + 2);
          for (ia_data = 0; ia_data < ib_size; ia_data++) {
            if (ia_data > views_AbsolutePose.Data.size(1) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_data, 0,
                views_AbsolutePose.Data.size(1) - 1, &lr_emlrtBCI, &b_st);
            }

            if (ia_data > dataArray.size(1) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_data, 0, dataArray.size(1) - 1,
                &mr_emlrtBCI, &b_st);
            }

            dataArray[ia_data] = views_AbsolutePose.Data[ia_data];
          }

          if (expl_temp.Data.size(1) - 1 < 0) {
            emlrtDynamicBoundsCheckR2012b(0, 0, expl_temp.Data.size(1) - 1,
              &cr_emlrtBCI, &b_st);
          }

          if (b_i + 1 > dataArray.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, dataArray.size(1) - 1,
              &nr_emlrtBCI, &b_st);
          }

          dataArray[b_i + 1] = expl_temp.Data[0];
          ia_data = dataArray.size(1);
          views_AbsolutePose.Data.set_size(&rkb_emlrtRTEI, &b_st, 1,
            dataArray.size(1));
          for (ib_size = 0; ib_size < ia_data; ib_size++) {
            views_AbsolutePose.Data[ib_size] = dataArray[ib_size];
          }
        } else {
          if (expl_temp.Data.size(1) - 1 < 0) {
            emlrtDynamicBoundsCheckR2012b(0, 0, expl_temp.Data.size(1) - 1,
              &dr_emlrtBCI, &b_st);
          }

          if (b_i + 1 > views_AbsolutePose.Data.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 0,
              views_AbsolutePose.Data.size(1) - 1, &kr_emlrtBCI, &b_st);
          }

          views_AbsolutePose.Data[b_i + 1] = expl_temp.Data[0];
        }
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::findView(const emlrtStack &sp, const array<real_T, 1U>
    &viewIds, array<uint32_T, 1U> &views_ViewId, b_rigidtform3d &
    views_AbsolutePose, array<cell_wrap_8, 1U> &views_Features, array<
    b_ORBPoints, 1U> &views_Points) const
  {
    b_rigidtform3d b_views_AbsolutePose;
    b_rigidtform3d expl_temp;
    array<b_ORBPoints, 1U> b_views_Points;
    array<b_ORBPoints, 1U> c_expl_temp;
    array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
    array<cell_wrap_8, 2U> b_expl_temp;
    array<cell_wrap_8, 2U> b_views_Features;
    array<real_T, 1U> b_viewIdx_data;
    array<real_T, 1U> c_viewIdx_data;
    array<int32_T, 1U> b_r;
    array<uint32_T, 1U> t10_ViewId;
    array<uint32_T, 1U> viewId;
    array<boolean_T, 1U> missingViewIdx;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack st;
    real_T d;
    real_T viewIdx_data;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T ia_data;
    int32_T ia_size;
    int32_T ib_size;
    int32_T loop_ub;
    int32_T loop_ub_tmp;
    uint32_T u;
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
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &ymc_emlrtRSI;
    b_st.site = &anc_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    p = true;
    ia_data = 0;
    exitg1 = false;
    while ((!exitg1) && (ia_data <= viewIds.size(0) - 1)) {
      if ((!muDoubleScalarIsInf(viewIds[ia_data])) && (!muDoubleScalarIsNaN
           (viewIds[ia_data])) && (muDoubleScalarFloor(viewIds[ia_data]) ==
           viewIds[ia_data])) {
        ia_data++;
      } else {
        p = false;
        exitg1 = true;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &qc_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:findView:expectedInteger", 3, 4, 7, "viewIds");
    }

    c_st.site = &be_emlrtRSI;
    p = true;
    ia_data = 0;
    exitg1 = false;
    while ((!exitg1) && (ia_data <= viewIds.size(0) - 1)) {
      if (!(viewIds[ia_data] <= 0.0)) {
        ia_data++;
      } else {
        p = false;
        exitg1 = true;
      }
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:findView:expectedPositive", 3, 4, 7, "viewIds");
    }

    b_st.site = &bnc_emlrtRSI;
    loop_ub = viewIds.size(0);
    viewId.set_size(&ikb_emlrtRTEI, &b_st, viewIds.size(0));
    for (i = 0; i < loop_ub; i++) {
      d = muDoubleScalarRound(viewIds[i]);
      if (d < 4.294967296E+9) {
        if (d >= 0.0) {
          u = static_cast<uint32_T>(d);
        } else {
          u = 0U;
        }
      } else if (d >= 4.294967296E+9) {
        u = MAX_uint32_T;
      } else {
        u = 0U;
      }

      viewId[i] = u;
    }

    c_st.site = &wyb_emlrtRSI;
    d_st.site = &vyb_emlrtRSI;
    imageviewsetBase_get_Views(d_st, t10_ViewId, b_expl_temp, c_expl_temp,
      expl_temp);
    d_st.site = &xyb_emlrtRSI;
    e_st.site = &adb_emlrtRSI;
    f_st.site = &bdb_emlrtRSI;
    b_isMember(f_st, viewId, t10_ViewId, missingViewIdx);
    loop_ub_tmp = missingViewIdx.size(0);
    for (i = 0; i < loop_ub_tmp; i++) {
      missingViewIdx[i] = !missingViewIdx[i];
    }

    d_st.site = &ydc_emlrtRSI;
    if (any(d_st, missingViewIdx)) {
      ia_data = 0;
      for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
        if (missingViewIdx[b_i]) {
          ia_data++;
        }
      }

      b_r.set_size(&jkb_emlrtRTEI, &c_st, ia_data);
      ia_data = 0;
      for (int32_T b_i{0}; b_i < loop_ub_tmp; b_i++) {
        if (missingViewIdx[b_i]) {
          b_r[ia_data] = b_i;
          ia_data++;
        }
      }

      loop_ub_tmp = b_r.size(0);
      for (i = 0; i < loop_ub_tmp; i++) {
        if (b_r[i] > viewId.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_r[i], 0, viewId.size(0) - 1,
            &hn_emlrtBCI, &c_st);
        }
      }

      if (b_r.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_r.size(0), &wm_emlrtBCI, &c_st);
      }

      emlrtErrorWithMessageIdR2018a(&c_st, &yd_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        viewId[b_r[0]]);
    }

    if (viewIds.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, viewIds.size(0), &br_emlrtBCI, &st);
    }

    b_st.site = &cnc_emlrtRSI;
    c_st.site = &afb_emlrtRSI;
    imageviewsetBase_get_Views(c_st, t10_ViewId, b_expl_temp, c_expl_temp,
      expl_temp);
    c_st.site = &bfb_emlrtRSI;
    d_st.site = &dfb_emlrtRSI;
    d = muDoubleScalarRound(viewIds[0]);
    if (d < 4.294967296E+9) {
      if (d >= 0.0) {
        u = static_cast<uint32_T>(d);
      } else {
        u = 0U;
      }
    } else if (d >= 4.294967296E+9) {
      u = MAX_uint32_T;
    } else {
      u = 0U;
    }

    e_st.site = &efb_emlrtRSI;
    do_vectors(e_st, t10_ViewId, u, (uint32_T *)&u, (int32_T *)&ia_data, ia_size,
               (int32_T *)&loop_ub_tmp, ib_size);
    for (i = 0; i < ia_size; i++) {
      viewIdx_data = ia_data;
    }

    views_ViewId.set_size(&lkb_emlrtRTEI, &st, viewIds.size(0));
    for (i = 0; i < ia_size; i++) {
      if ((static_cast<int32_T>(viewIdx_data) < 1) || (static_cast<int32_T>
           (viewIdx_data) > ViewId.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data), 1,
          ViewId.size(0), &er_emlrtBCI, &st);
      }
    }

    if (ia_size != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, 0, &nd_emlrtECI, &st);
    }

    if (viewIds.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, viewIds.size(0), &yq_emlrtBCI, &st);
    }

    loop_ub_tmp = static_cast<int32_T>(viewIdx_data) - 1;
    views_ViewId[0] = ViewId[static_cast<int32_T>(viewIdx_data) - 1];
    views_Features.set_size(&mkb_emlrtRTEI, &st, viewIds.size(0));
    views_Points.set_size(&nkb_emlrtRTEI, &st, viewIds.size(0));
    b_st.site = &dnc_emlrtRSI;
    imageviewsetBase_get_Views(b_st, viewId, b_views_Features, b_views_Points,
      b_views_AbsolutePose);
    b_viewIdx_data.set(&viewIdx_data, ia_size);
    b_st.site = &enc_emlrtRSI;
    b_views_AbsolutePose.parenReference(b_st, b_viewIdx_data, views_AbsolutePose);
    i = viewIds.size(0) - 1;
    if (viewIds.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, viewIds.size(0) - 1, &xq_emlrtBCI, &st);
    }

    b_st.site = &fnc_emlrtRSI;
    i1 = b_views_Features.size(0) - 1;
    if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
         (viewIdx_data) - 1 > b_views_Features.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1, 0,
        b_views_Features.size(0) - 1, &wq_emlrtBCI, &st);
    }

    i2 = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].f1.size(0);
    ib_size = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].f1.size(1);
    views_Features[0].f1.set_size(&okb_emlrtRTEI, &st, i2, ib_size);
    ia_data = i2 * ib_size;
    for (i2 = 0; i2 < ia_data; i2++) {
      views_Features[0].f1[i2] = b_views_Features[loop_ub_tmp].f1[i2];
    }

    if (viewIds.size(0) - 1 < 0) {
      emlrtDynamicBoundsCheckR2012b(0, 0, viewIds.size(0) - 1, &vq_emlrtBCI, &st);
    }

    b_st.site = &gnc_emlrtRSI;
    i2 = b_views_Points.size(0) - 1;
    if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
         (viewIdx_data) - 1 > b_views_Points.size(0) - 1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1, 0,
        b_views_Points.size(0) - 1, &fr_emlrtBCI, &st);
    }

    views_Points[0] = b_views_Points[static_cast<int32_T>(viewIdx_data) - 1];
    if (viewIds.size(0) > 1) {
      for (int32_T b_i{0}; b_i <= loop_ub - 2; b_i++) {
        b_st.site = &hnc_emlrtRSI;
        if (b_i + 2 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, loop_ub, &ar_emlrtBCI, &b_st);
        }

        c_st.site = &afb_emlrtRSI;
        imageviewsetBase_get_Views(c_st, t10_ViewId, b_expl_temp, c_expl_temp,
          expl_temp);
        c_st.site = &bfb_emlrtRSI;
        d_st.site = &dfb_emlrtRSI;
        d = muDoubleScalarRound(viewIds[b_i + 1]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            u = static_cast<uint32_T>(d);
          } else {
            u = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          u = MAX_uint32_T;
        } else {
          u = 0U;
        }

        e_st.site = &efb_emlrtRSI;
        do_vectors(e_st, t10_ViewId, u, (uint32_T *)&u, (int32_T *)&ia_data,
                   ia_size, (int32_T *)&loop_ub_tmp, ib_size);
        for (ib_size = 0; ib_size < ia_size; ib_size++) {
          viewIdx_data = ia_data;
        }

        for (ib_size = 0; ib_size < ia_size; ib_size++) {
          if ((static_cast<int32_T>(viewIdx_data) < 1) || (static_cast<int32_T>
               (viewIdx_data) > ViewId.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data), 1,
              ViewId.size(0), &gr_emlrtBCI, &st);
          }
        }

        if (ia_size != 1) {
          emlrtSubAssignSizeCheck1dR2017a(1, 0, &md_emlrtECI, &st);
        }

        if (b_i + 2 > views_ViewId.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, views_ViewId.size(0),
            &hr_emlrtBCI, &st);
        }

        loop_ub_tmp = static_cast<int32_T>(viewIdx_data) - 1;
        views_ViewId[b_i + 1] = ViewId[static_cast<int32_T>(viewIdx_data) - 1];
        b_st.site = &inc_emlrtRSI;
        if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
             (viewIdx_data) - 1 > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &tq_emlrtBCI, &st);
        }

        if (b_i + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, i, &uq_emlrtBCI, &st);
        }

        ib_size = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].
          f1.size(0);
        ia_data = b_views_Features[static_cast<int32_T>(viewIdx_data) - 1].
          f1.size(1);
        views_Features[b_i + 1].f1.set_size(&pkb_emlrtRTEI, &st, ib_size,
          ia_data);
        ia_data *= ib_size;
        for (ib_size = 0; ib_size < ia_data; ib_size++) {
          views_Features[b_i + 1].f1[ib_size] = b_views_Features[loop_ub_tmp]
            .f1[ib_size];
        }

        b_st.site = &jnc_emlrtRSI;
        if ((static_cast<int32_T>(viewIdx_data) - 1 < 0) || (static_cast<int32_T>
             (viewIdx_data) - 1 > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i2, &ir_emlrtBCI, &st);
        }

        if (b_i + 1 > views_Points.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, views_Points.size(0) - 1,
            &jr_emlrtBCI, &st);
        }

        views_Points[b_i + 1] = b_views_Points[static_cast<int32_T>(viewIdx_data)
          - 1];
        b_st.site = &knc_emlrtRSI;
        c_viewIdx_data.set(&viewIdx_data, ia_size);
        c_st.site = &knc_emlrtRSI;
        b_views_AbsolutePose.parenReference(c_st, c_viewIdx_data, expl_temp);
        ib_size = views_AbsolutePose.Data.size(1);
        if (b_i + 2 > views_AbsolutePose.Data.size(1)) {
          dataArray.set_size(&qkb_emlrtRTEI, &b_st, 1, b_i + 2);
          for (ia_data = 0; ia_data < ib_size; ia_data++) {
            if (ia_data > views_AbsolutePose.Data.size(1) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_data, 0,
                views_AbsolutePose.Data.size(1) - 1, &lr_emlrtBCI, &b_st);
            }

            if (ia_data > dataArray.size(1) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_data, 0, dataArray.size(1) - 1,
                &mr_emlrtBCI, &b_st);
            }

            dataArray[ia_data] = views_AbsolutePose.Data[ia_data];
          }

          if (expl_temp.Data.size(1) - 1 < 0) {
            emlrtDynamicBoundsCheckR2012b(0, 0, expl_temp.Data.size(1) - 1,
              &cr_emlrtBCI, &b_st);
          }

          if (b_i + 1 > dataArray.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, dataArray.size(1) - 1,
              &nr_emlrtBCI, &b_st);
          }

          dataArray[b_i + 1] = expl_temp.Data[0];
          ia_data = dataArray.size(1);
          views_AbsolutePose.Data.set_size(&rkb_emlrtRTEI, &b_st, 1,
            dataArray.size(1));
          for (ib_size = 0; ib_size < ia_data; ib_size++) {
            views_AbsolutePose.Data[ib_size] = dataArray[ib_size];
          }
        } else {
          if (expl_temp.Data.size(1) - 1 < 0) {
            emlrtDynamicBoundsCheckR2012b(0, 0, expl_temp.Data.size(1) - 1,
              &dr_emlrtBCI, &b_st);
          }

          if (b_i + 1 > views_AbsolutePose.Data.size(1) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 0,
              views_AbsolutePose.Data.size(1) - 1, &kr_emlrtBCI, &b_st);
          }

          views_AbsolutePose.Data[b_i + 1] = expl_temp.Data[0];
        }
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::get_Connections(const emlrtStack &sp, array<uint32_T, 1U>
    &Connections_ViewId1, array<uint32_T, 1U> &Connections_ViewId2, array<
    b_rigidtform3d, 1U> &Connections_RelativePose, array<cell_wrap_7, 2U>
    &Connections_InformationMatrix, array<cell_wrap_11, 2U> &Connections_Matches)
    const
  {
    b_rigidtform3d obj;
    emlrtStack st;
    int32_T unnamed_idx_0_tmp;
    st.prev = &sp;
    st.tls = sp.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    unnamed_idx_0_tmp = RrigidPoseSingle.Data.size(1);
    Connections_RelativePose.set_size(&wjb_emlrtRTEI, &sp,
      RrigidPoseSingle.Data.size(1));
    for (int32_T i{0}; i < unnamed_idx_0_tmp; i++) {
      if (i > Connections_RelativePose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, Connections_RelativePose.size(0) - 1,
          &qq_emlrtBCI, (emlrtConstCTX)&sp);
      }

      Connections_RelativePose[i].Data.set_size(&wjb_emlrtRTEI, &sp, 0,
        Connections_RelativePose[i].Data.size(1));
      if (i > Connections_RelativePose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, Connections_RelativePose.size(0) - 1,
          &qq_emlrtBCI, (emlrtConstCTX)&sp);
      }

      Connections_RelativePose[i].Data.set_size(&wjb_emlrtRTEI, &sp,
        Connections_RelativePose[i].Data.size(0), 0);
    }

    Connections_RelativePose.set_size(&ojb_emlrtRTEI, &sp,
      RrigidPoseSingle.Data.size(1));
    for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp; b_i++) {
      real32_T b_obj[16];
      st.site = &spb_emlrtRSI;
      RrigidPoseSingle.parenReference(st, static_cast<real_T>(b_i) + 1.0, &obj);
      for (int32_T i{0}; i < 3; i++) {
        int32_T obj_tmp;
        obj_tmp = i << 2;
        b_obj[obj_tmp] = obj.R[3 * i];
        b_obj[obj_tmp + 1] = obj.R[3 * i + 1];
        b_obj[obj_tmp + 2] = obj.R[3 * i + 2];
        b_obj[i + 12] = obj.Translation[i];
      }

      b_obj[3] = 0.0F;
      b_obj[7] = 0.0F;
      b_obj[11] = 0.0F;
      b_obj[15] = 1.0F;
      if (b_i > Connections_RelativePose.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, Connections_RelativePose.size(0) -
          1, &jq_emlrtBCI, (emlrtConstCTX)&sp);
      }

      st.site = &spb_emlrtRSI;
      Connections_RelativePose[b_i].b_init(st, b_obj);
    }

    unnamed_idx_0_tmp = InfoMatDouble.size(0);
    Connections_InformationMatrix.set_size(&xjb_emlrtRTEI, &sp,
      InfoMatDouble.size(0), 1);
    for (int32_T i{0}; i < unnamed_idx_0_tmp; i++) {
      Connections_InformationMatrix[i] = InfoMatDouble[i];
    }

    unnamed_idx_0_tmp = MatchesInt.size(0);
    Connections_Matches.set_size(&yjb_emlrtRTEI, &sp, MatchesInt.size(0), 1);
    for (int32_T i{0}; i < unnamed_idx_0_tmp; i++) {
      Connections_Matches[i] = MatchesInt[i];
    }

    unnamed_idx_0_tmp = ViewId1.size(0);
    Connections_ViewId1.set_size(&akb_emlrtRTEI, &sp, ViewId1.size(0));
    for (int32_T i{0}; i < unnamed_idx_0_tmp; i++) {
      Connections_ViewId1[i] = ViewId1[i];
    }

    unnamed_idx_0_tmp = ViewId2.size(0);
    Connections_ViewId2.set_size(&akb_emlrtRTEI, &sp, ViewId2.size(0));
    for (int32_T i{0}; i < unnamed_idx_0_tmp; i++) {
      Connections_ViewId2[i] = ViewId2[i];
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::get_Views(const emlrtStack &sp, array<uint32_T, 1U>
    &views_ViewId, array<cell_wrap_8, 2U> &views_Features, array<b_ORBPoints, 1U>
    &views_Points, b_rigidtform3d &views_AbsolutePose) const
  {
    bounded_array<b_ORBPoints, 2U, 1U> c;
    bounded_array<cell_wrap_12, 2U, 2U> metric;
    bounded_array<cell_wrap_12, 2U, 2U> orientation;
    bounded_array<cell_wrap_12, 2U, 2U> scale;
    bounded_array<cell_wrap_6, 2U, 2U> pts;
    emlrtStack b_st;
    emlrtStack st;
    int32_T b_i;
    int32_T get_Views_numThreads;
    int32_T i;
    int32_T loop_ub;
    boolean_T emlrtHadParallelError{ false };

    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    views_AbsolutePose = AbsPosesSingle;
    pts.size[0] = PointsSingle.size(0);
    pts.size[1] = 1;
    metric.size[0] = Metrics.size(0);
    metric.size[1] = 1;
    scale.size[0] = Scale.size(0);
    scale.size[1] = 1;
    orientation.size[0] = Orientation.size(0);
    orientation.size[1] = 1;
    pts.data[0] = PointsSingle[0];
    metric.data[0] = Metrics[0];
    scale.data[0] = Scale[0];
    orientation.data[0] = Orientation[0];
    pts.data[1] = PointsSingle[1];
    metric.data[1] = Metrics[1];
    scale.data[1] = Scale[1];
    orientation.data[1] = Orientation[1];
    c.size[0] = 2;
    emlrtEnterParallelRegion((emlrtCTX)&sp, static_cast<boolean_T>
      (omp_in_parallel()));
    get_Views_numThreads = emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>
      (omp_in_parallel()), omp_get_max_threads(), omp_get_num_procs());

#pragma omp parallel \
 num_threads(get_Views_numThreads) \
 private(b_st) \
 firstprivate(st,emlrtHadParallelError)

    {
      try {
        st.prev = &sp;
        st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
        st.site = nullptr;
        b_st.prev = &st;
        b_st.tls = st.tls;
      } catch (...) {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (i = 0; i < 2; i++) {
        if (emlrtHadParallelError) {
          continue;
        }

        try {
          b_st.site = &cfb_emlrtRSI;
          c.data[i].init(b_st, pts.data[i].f1, metric.data[i].f1, scale.data[i].
                         f1, orientation.data[i].f1);
        } catch (...) {
          emlrtHadParallelError = true;
        }
      }
    }

    emlrtExitParallelRegion((emlrtCTX)&sp, static_cast<boolean_T>
      (omp_in_parallel()));
    loop_ub = ViewId.size(0);
    views_ViewId.set_size(&tu_emlrtRTEI, &sp, ViewId.size(0));
    for (b_i = 0; b_i < loop_ub; b_i++) {
      views_ViewId[b_i] = ViewId[b_i];
    }

    loop_ub = FeaturesBinary.size(0);
    views_Features.set_size(&uu_emlrtRTEI, &sp, FeaturesBinary.size(0), 1);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      views_Features[b_i] = FeaturesBinary[b_i];
    }

    views_Points.set_size(&vu_emlrtRTEI, &sp, 2);
    views_Points[0] = c.data[0];
    views_Points[1] = c.data[1];
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  boolean_T imageviewset::hasConnection(const emlrtStack &sp, uint32_T viewId1,
    uint32_T viewId2) const
  {
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
    int32_T connIdx_size[2];
    boolean_T tf;
    boolean_T x;
    st.prev = &sp;
    st.tls = sp.tls;
    st.site = &mfb_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    b_st.site = &kpc_emlrtRSI;
    c_st.site = &tyb_emlrtRSI;
    d_st.site = &uyb_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (viewId1 <= 0U) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
    }

    b_st.site = &lpc_emlrtRSI;
    c_st.site = &tyb_emlrtRSI;
    d_st.site = &uyb_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (viewId2 <= 0U) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
    }

    b_st.site = &nfb_emlrtRSI;
    tf = hasView(b_st, viewId1);
    b_st.site = &ofb_emlrtRSI;
    x = hasView(b_st, viewId2);
    if (tf && x) {
      real_T connIdx_data;
      int32_T i;
      b_st.site = &pfb_emlrtRSI;
      connIdx_size[0] = 1;
      connIdx_size[1] = 0;
      i = ViewId1.size(0);
      for (int32_T b_i{0}; b_i < i; b_i++) {
        if (b_i + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ps_emlrtBCI, &b_st);
        }

        if (viewId1 == ViewId1[b_i]) {
          if (b_i + 1 > ViewId2.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ViewId2.size(0),
              &qs_emlrtBCI, &b_st);
          }

          if (viewId2 == ViewId2[b_i]) {
            connIdx_size[0] = 1;
            connIdx_size[1] = 1;
            connIdx_data = static_cast<real_T>(b_i) + 1.0;
          }
        }
      }

      b_st.site = &pfb_emlrtRSI;
      if (b_any((const real_T *)&connIdx_data, connIdx_size)) {
        tf = true;
      } else {
        tf = false;
      }
    } else {
      tf = false;
    }

    return tf;
  }

  boolean_T imageviewset::hasView(const emlrtStack &sp, uint32_T viewIds) const
  {
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
    st.prev = &sp;
    st.tls = sp.tls;
    st.site = &xcb_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    b_st.site = &dpc_emlrtRSI;
    c_st.site = &epc_emlrtRSI;
    d_st.site = &edc_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (viewIds <= 0U) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 7, "viewIds");
    }

    b_st.site = &ycb_emlrtRSI;
    c_st.site = &adb_emlrtRSI;
    d_st.site = &bdb_emlrtRSI;
    return isMember(d_st, viewIds, ViewId);
  }

  void imageviewset::imageviewsetBase_get_Views(const emlrtStack &sp, array<
    uint32_T, 1U> &views_ViewId, array<cell_wrap_8, 2U> &views_Features, array<
    b_ORBPoints, 1U> &views_Points, b_rigidtform3d &views_AbsolutePose) const
  {
    imageviewset *tmp_this;
    emlrtStack b_st;
    emlrtStack st;
    int32_T b_i;
    int32_T i;
    int32_T imageviewsetBase_get_Views_numThreads;
    int32_T ub_loop;
    int32_T unnamed_idx_0_tmp;
    boolean_T emlrtHadParallelError{ false };

    tmp_this = const_cast<imageviewset *>(this);
    views_AbsolutePose = tmp_this->AbsPosesSingle;
    unnamed_idx_0_tmp = tmp_this->ViewId.size(0);
    for (i = 0; i < unnamed_idx_0_tmp; i++) {
      if (i > tmp_this->ViewId.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i, 0, tmp_this->ViewId.size(0) - 1,
          &in_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }

    views_Points.set_size(&su_emlrtRTEI, &sp, tmp_this->ViewId.size(0));
    ub_loop = tmp_this->ViewId.size(0);
    emlrtEnterParallelRegion((emlrtCTX)&sp, static_cast<boolean_T>
      (omp_in_parallel()));
    imageviewsetBase_get_Views_numThreads = emlrtAllocRegionTLSs(sp.tls,
      static_cast<boolean_T>(omp_in_parallel()), omp_get_max_threads(),
      omp_get_num_procs());

#pragma omp parallel \
 num_threads(imageviewsetBase_get_Views_numThreads) \
 private(b_st) \
 firstprivate(st,emlrtHadParallelError)

    {
      try {
        st.prev = &sp;
        st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
        st.site = nullptr;
        b_st.prev = &st;
        b_st.tls = st.tls;
      } catch (...) {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (b_i = 0; b_i < ub_loop; b_i++) {
        if (emlrtHadParallelError) {
          continue;
        }

        try {
          if (b_i > tmp_this->PointsSingle.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, tmp_this->PointsSingle.size(0)
              - 1, &jn_emlrtBCI, &st);
          }

          if (b_i > tmp_this->Metrics.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, tmp_this->Metrics.size(0) - 1,
              &kn_emlrtBCI, &st);
          }

          if (b_i > tmp_this->Scale.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, tmp_this->Scale.size(0) - 1,
              &ln_emlrtBCI, &st);
          }

          if (b_i > tmp_this->Orientation.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, tmp_this->Orientation.size(0)
              - 1, &mn_emlrtBCI, &st);
          }

          if (b_i > views_Points.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, views_Points.size(0) - 1,
              &nn_emlrtBCI, &st);
          }

          b_st.site = &cfb_emlrtRSI;
          views_Points[b_i].init(b_st, tmp_this->PointsSingle[b_i].f1,
            tmp_this->Metrics[b_i].f1, tmp_this->Scale[b_i].f1,
            tmp_this->Orientation[b_i].f1);
        } catch (...) {
          emlrtHadParallelError = true;
        }
      }
    }

    emlrtExitParallelRegion((emlrtCTX)&sp, static_cast<boolean_T>
      (omp_in_parallel()));
    ub_loop = tmp_this->FeaturesBinary.size(0);
    views_Features.set_size(&uu_emlrtRTEI, &sp, tmp_this->FeaturesBinary.size(0),
      1);
    for (i = 0; i < ub_loop; i++) {
      views_Features[i] = tmp_this->FeaturesBinary[i];
    }

    views_ViewId.set_size(&tu_emlrtRTEI, &sp, unnamed_idx_0_tmp);
    for (i = 0; i < unnamed_idx_0_tmp; i++) {
      views_ViewId[i] = tmp_this->ViewId[i];
    }
  }

  void imageviewset::init(const emlrtStack &sp)
  {
    b_graph G;
    images::geotrans::internal::b_rigidtform3dImpl b_r;
    array<real_T, 2U> mjd_emlrtRSI;
    array<real_T, 2U> njd_emlrtRSI;
    array<real_T, 1U> b_tmp_data;
    array<real_T, 1U> c_tmp_data;
    array<real_T, 1U> d_tmp_data;
    array<real_T, 1U> ind;
    array<real_T, 1U> tmp_data;
    cell_wrap_10 r6;
    cell_wrap_11 r7;
    cell_wrap_12 r10;
    cell_wrap_6 r1;
    cell_wrap_6 r4;
    cell_wrap_6 r8;
    cell_wrap_7 r2;
    cell_wrap_7 r5;
    cell_wrap_7 r9;
    cell_wrap_8 r3;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
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
    IncrementalBuilding = false;
    st.site = &cab_emlrtRSI;
    b_st.site = &dab_emlrtRSI;
    AbsPosesSingle.Translation[0] = 0.0F;
    AbsPosesSingle.Translation[1] = 0.0F;
    AbsPosesSingle.Translation[2] = 0.0F;
    for (int32_T i{0}; i < 9; i++) {
      int8_T i1;
      i1 = iv1[i];
      AbsPosesSingle.R[i] = i1;
      b_r.R[i] = i1;
    }

    b_r.Translation[0] = 0.0F;
    b_r.Translation[1] = 0.0F;
    b_r.Translation[2] = 0.0F;
    AbsPosesSingle.Data.set_size(&wk_emlrtRTEI, &b_st, 1, 1);
    AbsPosesSingle.Data[0] = b_r;
    AbsPosesSingle.Data.set_size(&it_emlrtRTEI, &b_st, 0, 0);
    c_st.site = &fab_emlrtRSI;
    d_st.site = &hab_emlrtRSI;
    e_st.site = &iab_emlrtRSI;
    f_st.site = &kab_emlrtRSI;
    e_st.site = &jab_emlrtRSI;
    f_st.site = &kab_emlrtRSI;
    c_st.site = &gab_emlrtRSI;
    d_st.site = &hab_emlrtRSI;
    e_st.site = &iab_emlrtRSI;
    f_st.site = &kab_emlrtRSI;
    e_st.site = &jab_emlrtRSI;
    f_st.site = &kab_emlrtRSI;
    r1.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 0);
    FeaturesSingle.size[0] = 1;
    FeaturesSingle.size[1] = 1;
    FeaturesSingle.data[0] = r1;
    r2.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 0);
    FeaturesDouble.size[0] = 1;
    FeaturesDouble.size[1] = 1;
    FeaturesDouble.data[0] = r2;
    r3.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 0);
    r4.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 2);
    r5.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 2);
    PointsDouble.size[0] = 1;
    PointsDouble.size[1] = 1;
    PointsDouble.data[0] = r5;
    MatchesSingle.data[0].f1.size[0] = 0;
    MatchesSingle.data[0].f1.size[1] = 2;
    MatchesSingle.size[0] = 1;
    MatchesSingle.size[1] = 1;
    r6.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 2);
    MatchesDouble.size[0] = 1;
    MatchesDouble.size[1] = 1;
    MatchesDouble.data[0] = r6;
    r7.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 2);
    r8.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 0);
    InfoMatSingle.size[0] = 1;
    InfoMatSingle.size[1] = 1;
    InfoMatSingle.data[0] = r8;
    r9.f1.set_size(&jt_emlrtRTEI, &b_st, 0, 0);
    ViewId.set_size(&kt_emlrtRTEI, &st, 0);
    FeaturesBinary.set_size(&lt_emlrtRTEI, &st, 1, 1);
    FeaturesBinary[0] = r3;
    PointsSingle.set_size(&mt_emlrtRTEI, &st, 1, 1);
    PointsSingle[0] = r4;
    ViewId1.set_size(&kt_emlrtRTEI, &st, 0);
    ViewId2.set_size(&kt_emlrtRTEI, &st, 0);
    RrigidPoseSingle = AbsPosesSingle;
    MatchesInt.set_size(&nt_emlrtRTEI, &st, 1, 1);
    MatchesInt[0] = r7;
    InfoMatDouble.set_size(&ot_emlrtRTEI, &st, 1, 1);
    InfoMatDouble[0] = r9;
    r10.f1.set_size(&pt_emlrtRTEI, &st, 0);
    Metrics.set_size(&qt_emlrtRTEI, &st, 1, 1);
    Metrics[0] = r10;
    Scale.set_size(&rt_emlrtRTEI, &st, 1, 1);
    Scale[0] = r10;
    Orientation.set_size(&st_emlrtRTEI, &st, 1, 1);
    Orientation[0] = r10;
    b_st.site = &eab_emlrtRSI;
    c_st.site = &lab_emlrtRSI;
    d_st.site = &nab_emlrtRSI;
    e_st.site = &pab_emlrtRSI;
    e_st.site = &qab_emlrtRSI;
    f_st.site = &rab_emlrtRSI;
    f_st.site = &sab_emlrtRSI;
    d_st.site = &oab_emlrtRSI;
    e_st.site = &gbb_emlrtRSI;
    f_st.site = &lbb_emlrtRSI;
    f_st.site = &hbb_emlrtRSI;
    g_st.site = &abb_emlrtRSI;
    FeatureGraphSingle.FeatureGraph.NodeProperties.nrows = 0;
    FeatureGraphSingle.FeatureGraph.NodeProperties.data.f1.set_size
      (&tt_emlrtRTEI, &g_st, 0);
    FeatureGraphSingle.FeatureGraph.NodeProperties.data.f2.set_size
      (&tt_emlrtRTEI, &g_st, 0);
    FeatureGraphSingle.FeatureGraph.NodeProperties.data.f3.set_size
      (&tt_emlrtRTEI, &g_st, 0, 2);
    f_st.site = &kbb_emlrtRSI;
    tmp_data.set(nullptr, 0);
    b_tmp_data.set(nullptr, 0);
    f_st.site = &ibb_emlrtRSI;
    matlab::internal::coder::MLGraph::edgesConstrWithIndex(f_st, tmp_data,
      b_tmp_data, 0.0, FeatureGraphSingle.FeatureGraph.Underlying, ind);
    e_st.site = &fbb_emlrtRSI;
    FeatureGraphSingle.FeatureGraph.Underlying.get_Edges(e_st, mjd_emlrtRSI);
    FeatureGraphSingle.FeatureGraph.EdgeProperties.nrows = 0;
    c_st.site = &mab_emlrtRSI;
    d_st.site = &nab_emlrtRSI;
    e_st.site = &pab_emlrtRSI;
    e_st.site = &qab_emlrtRSI;
    f_st.site = &rab_emlrtRSI;
    f_st.site = &sab_emlrtRSI;
    d_st.site = &oab_emlrtRSI;
    e_st.site = &gbb_emlrtRSI;
    f_st.site = &lbb_emlrtRSI;
    f_st.site = &hbb_emlrtRSI;
    f_st.site = &kbb_emlrtRSI;
    c_tmp_data.set(nullptr, 0);
    d_tmp_data.set(nullptr, 0);
    f_st.site = &ibb_emlrtRSI;
    matlab::internal::coder::MLGraph::edgesConstrWithIndex(f_st, c_tmp_data,
      d_tmp_data, 0.0, G.Underlying, ind);
    e_st.site = &fbb_emlrtRSI;
    G.Underlying.get_Edges(e_st, njd_emlrtRSI);
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::optimizePoses(const emlrtStack &sp)
  {
    static const char_T b_cv[8]{ 'F', 'e', 'a', 't', 'u', 'r', 'e', 's' };

    static const char_T b_cv1[6]{ 'P', 'o', 'i', 'n', 't', 's' };

    b_rigidtform3d unusedExpr;
    b_rigidtform3d varargin_2;
    digraph G;
    digraph b_G;
    e_table t;
    f_table poseTable;
    array<b_ORBPoints, 1U> b_expl_temp;
    array<b_rigidtform3d, 2U> rPose;
    array<cell_wrap_11, 2U> match;
    array<cell_wrap_7, 2U> iMats;
    array<cell_wrap_8, 2U> expl_temp;
    array<real_T, 2U> bins;
    array<real_T, 1U> b_ii;
    array<int32_T, 2U> c_ii;
    array<int32_T, 1U> ii;
    array<uint32_T, 1U> vId1;
    array<uint32_T, 1U> viewIds;
    array<boolean_T, 1U> b_t;
    bounded_array<cell_wrap_188, 2U, 2U> unsetColumns;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack h_st;
    emlrtStack i_st;
    emlrtStack st;
    real_T viewIdx_data;
    int32_T a;
    int32_T i;
    int32_T i1;
    int32_T ia_size;
    int32_T idx;
    int32_T k;
    int32_T last;
    uint32_T c_data;
    boolean_T tmp_data[2];
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
    i_st.prev = &h_st;
    i_st.tls = h_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &kdd_emlrtRSI;
    createPoseGraph(st, G);
    st.site = &ldd_emlrtRSI;
    G.get_Edges(st, t);
    st.site = &mdd_emlrtRSI;
    idx = t.data.f4.size(0);
    b_t.set_size(&pdc_emlrtRTEI, &st, t.data.f4.size(0));
    for (i = 0; i < idx; i++) {
      b_t[i] = (t.data.f4[i] < 30.0);
    }

    b_st.site = &aq_emlrtRSI;
    b_eml_find(b_st, b_t, ii);
    idx = ii.size(0);
    b_ii.set_size(&qdc_emlrtRTEI, &sp, ii.size(0));
    for (i = 0; i < idx; i++) {
      b_ii[i] = ii[i];
    }

    b_G = G;
    st.site = &mdd_emlrtRSI;
    b_G.rmedge(st, b_ii, G);
    st.site = &ndd_emlrtRSI;
    G.conncomp(st, bins);
    if (bins.size(1) != 0) {
      st.site = &odd_emlrtRSI;
      b_st.site = &mbb_emlrtRSI;
      c_st.site = &nbb_emlrtRSI;
      d_st.site = &obb_emlrtRSI;
      e_st.site = &pbb_emlrtRSI;
      f_st.site = &qbb_emlrtRSI;
      last = bins.size(1);
      if (bins.size(1) <= 2) {
        if (bins.size(1) == 1) {
          viewIdx_data = bins[0];
        } else if ((bins[0] < bins[1]) || (muDoubleScalarIsNaN(bins[0]) &&
                    (!muDoubleScalarIsNaN(bins[1])))) {
          viewIdx_data = bins[1];
        } else {
          viewIdx_data = bins[0];
        }
      } else {
        g_st.site = &if_emlrtRSI;
        if (!muDoubleScalarIsNaN(bins[0])) {
          idx = 1;
        } else {
          boolean_T exitg1;
          idx = 0;
          h_st.site = &jf_emlrtRSI;
          if (bins.size(1) > 2147483646) {
            i_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(i_st);
          }

          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= last)) {
            if (!muDoubleScalarIsNaN(bins[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          viewIdx_data = bins[0];
        } else {
          g_st.site = &hf_emlrtRSI;
          viewIdx_data = bins[idx - 1];
          a = idx + 1;
          h_st.site = &kf_emlrtRSI;
          if ((idx + 1 <= bins.size(1)) && (bins.size(1) > 2147483646)) {
            i_st.site = &qe_emlrtRSI;
            check_forloop_overflow_error(i_st);
          }

          for (k = a; k <= last; k++) {
            real_T d;
            d = bins[k - 1];
            if (viewIdx_data < d) {
              viewIdx_data = d;
            }
          }
        }
      }

      if (viewIdx_data > 1.0) {
        emlrtErrorWithMessageIdR2018a(&sp, &ph_emlrtRTEI,
          "vision:viewSet:disconnectedGraph", "vision:viewSet:disconnectedGraph",
          0);
      }
    }

    st.site = &pdd_emlrtRSI;
    ::coder::vision::internal::optimizePoses(st, G, poseTable);
    i = poseTable.data.f1.size(0);
    unsetColumns.size[0] = 1;
    unsetColumns.size[1] = 2;
    unsetColumns.data[0].f1.size[0] = 1;
    unsetColumns.data[0].f1.size[1] = 8;
    for (i1 = 0; i1 < 8; i1++) {
      unsetColumns.data[0].f1.data[i1] = b_cv[i1];
    }

    for (int32_T b_i{0}; b_i < i; b_i++) {
      real32_T b_poseTable[16];
      uint32_T t20_ViewId;
      boolean_T absPosesChanged;
      boolean_T featuresChanged;
      boolean_T pointsChanged;
      st.site = &qdd_emlrtRSI;
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &qkb_emlrtBCI, &st);
      }

      for (i1 = 0; i1 < 4; i1++) {
        if (b_i > poseTable.data.f2.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, poseTable.data.f2.size(0) - 1,
            &tkb_emlrtBCI, &st);
        }

        last = i1 << 2;
        b_poseTable[last] = poseTable.data.f2[b_i].f1[i1];
        if (b_i > poseTable.data.f2.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, poseTable.data.f2.size(0) - 1,
            &tkb_emlrtBCI, &st);
        }

        b_poseTable[last + 1] = poseTable.data.f2[b_i].f1[i1 + 4];
        if (b_i > poseTable.data.f2.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, poseTable.data.f2.size(0) - 1,
            &tkb_emlrtBCI, &st);
        }

        b_poseTable[last + 2] = poseTable.data.f2[b_i].f1[i1 + 8];
        if (b_i > poseTable.data.f2.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, poseTable.data.f2.size(0) - 1,
            &tkb_emlrtBCI, &st);
        }

        b_poseTable[last + 3] = poseTable.data.f2[b_i].f1[i1 + 12];
      }

      b_st.site = &qdd_emlrtRSI;
      varargin_2.b_init(b_st, b_poseTable);
      b_st.site = &qyb_emlrtRSI;
      t20_ViewId = poseTable.data.f1[b_i];
      c_st.site = &ryb_emlrtRSI;
      ViewSetBaseImpl::checkViewId(c_st, &poseTable.data.f1[b_i]);
      for (i1 = 0; i1 < 3; i1++) {
        last = i1 << 2;
        b_poseTable[last] = varargin_2.R[3 * i1];
        b_poseTable[last + 1] = varargin_2.R[3 * i1 + 1];
        b_poseTable[last + 2] = varargin_2.R[3 * i1 + 2];
        b_poseTable[i1 + 12] = varargin_2.Translation[i1];
      }

      b_poseTable[3] = 0.0F;
      b_poseTable[7] = 0.0F;
      b_poseTable[11] = 0.0F;
      b_poseTable[15] = 1.0F;
      c_st.site = &syb_emlrtRSI;
      varargin_2.b_init(c_st, b_poseTable);
      unsetColumns.data[1].f1.size[0] = 1;
      unsetColumns.data[1].f1.size[1] = 6;
      for (i1 = 0; i1 < 6; i1++) {
        unsetColumns.data[1].f1.data[i1] = b_cv1[i1];
      }

      b_st.site = &pyb_emlrtRSI;
      c_st.site = &vyb_emlrtRSI;
      imageviewsetBase_get_Views(c_st, viewIds, expl_temp, b_expl_temp,
        unusedExpr);
      c_st.site = &wyb_emlrtRSI;
      ::coder::vision::internal::inputValidation::checkIfViewIsMissing(c_st,
        viewIds, poseTable.data.f1[b_i]);
      b_st.site = &oyb_emlrtRSI;
      c_st.site = &afb_emlrtRSI;
      imageviewsetBase_get_Views(c_st, viewIds, expl_temp, b_expl_temp,
        unusedExpr);
      c_st.site = &bfb_emlrtRSI;
      d_st.site = &dfb_emlrtRSI;
      e_st.site = &efb_emlrtRSI;
      do_vectors(e_st, viewIds, poseTable.data.f1[b_i], (uint32_T *)&c_data,
                 (int32_T *)&k, ia_size, (int32_T *)&idx, a);
      for (i1 = 0; i1 < ia_size; i1++) {
        viewIdx_data = k;
      }

      int32_T tmp_size[2];
      b_st.site = &nyb_emlrtRSI;
      internal::c_strcmp(unsetColumns.data, tmp_data, tmp_size);
      b_st.site = &nyb_emlrtRSI;
      pointsChanged = !c_any(tmp_data);
      b_st.site = &myb_emlrtRSI;
      internal::d_strcmp(unsetColumns.data, tmp_data, tmp_size);
      b_st.site = &myb_emlrtRSI;
      featuresChanged = !c_any(tmp_data);
      b_st.site = &lyb_emlrtRSI;
      internal::e_strcmp(unsetColumns.data, tmp_data, tmp_size);
      b_st.site = &lyb_emlrtRSI;
      absPosesChanged = !c_any(tmp_data);
      if (featuresChanged) {
        b_st.site = &kyb_emlrtRSI;
        if (ia_size != 1) {
          emlrtErrorWithMessageIdR2018a(&b_st, &vg_emlrtRTEI,
            "MATLAB:index:expected_one_output_from_expression",
            "MATLAB:index:expected_one_output_from_expression", 2, 6, 0.0);
        }

        i1 = FeaturesBinary.size(0) - 1;
        a = static_cast<int32_T>(viewIdx_data) - 1;
        if ((a < 0) || (a > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &eeb_emlrtBCI, &st);
        }

        FeaturesBinary[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
          (&vwb_emlrtRTEI, &st, 0, 0);
      }

      if (pointsChanged) {
        b_st.site = &jyb_emlrtRSI;
        if (ia_size != 1) {
          emlrtErrorWithMessageIdR2018a(&b_st, &vg_emlrtRTEI,
            "MATLAB:index:expected_one_output_from_expression",
            "MATLAB:index:expected_one_output_from_expression", 2, 6, 0.0);
        }

        i1 = PointsSingle.size(0) - 1;
        a = static_cast<int32_T>(viewIdx_data) - 1;
        if ((a < 0) || (a > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &feb_emlrtBCI, &st);
        }

        PointsSingle[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
          (&wwb_emlrtRTEI, &st, 0, 2);
        b_st.site = &iyb_emlrtRSI;
        c_st.site = &yyb_emlrtRSI;
        i1 = Metrics.size(0) - 1;
        if ((a < 0) || (a > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &nkb_emlrtBCI, &b_st);
        }

        Metrics[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
          (&rdc_emlrtRTEI, &b_st, 0);
        c_st.site = &aac_emlrtRSI;
        i1 = Scale.size(0) - 1;
        if ((a < 0) || (a > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &nkb_emlrtBCI, &b_st);
        }

        Scale[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size(&rdc_emlrtRTEI,
          &b_st, 0);
        c_st.site = &bac_emlrtRSI;
        i1 = Orientation.size(0) - 1;
        if ((a < 0) || (a > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1,
            0, i1, &nkb_emlrtBCI, &b_st);
        }

        Orientation[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
          (&rdc_emlrtRTEI, &b_st, 0);
      }

      if (absPosesChanged) {
        b_st.site = &hyb_emlrtRSI;
        AbsPosesSingle.parenAssign(b_st, varargin_2, (real_T *)&viewIdx_data,
          ia_size);
      }

      if (pointsChanged || featuresChanged) {
        b_st.site = &gyb_emlrtRSI;
        c_st.site = &yhd_emlrtRSI;
        bins.set_size(&ywb_emlrtRTEI, &c_st, 1, 0);
        i1 = ViewId1.size(0);
        for (ia_size = 0; ia_size < i1; ia_size++) {
          boolean_T guard1;
          a = ViewId1.size(0);
          if (ia_size + 1 > a) {
            emlrtDynamicBoundsCheckR2012b(ia_size + 1, 1, a, &pkb_emlrtBCI,
              &c_st);
          }

          guard1 = false;
          if (t20_ViewId == ViewId1[ia_size]) {
            guard1 = true;
          } else {
            a = ViewId2.size(0);
            if (ia_size + 1 > a) {
              emlrtDynamicBoundsCheckR2012b(ia_size + 1, 1, a, &okb_emlrtBCI,
                &c_st);
            }

            if (t20_ViewId == ViewId2[ia_size]) {
              guard1 = true;
            }
          }

          if (guard1) {
            a = bins.size(1);
            bins.set_size(&sdc_emlrtRTEI, &c_st, bins.size(0), bins.size(1) + 1);
            bins[a] = static_cast<real_T>(ia_size) + 1.0;
          }
        }

        c_st.site = &eac_emlrtRSI;
        d_st.site = &aq_emlrtRSI;
        d_eml_find(d_st, bins, c_ii);
        idx = c_ii.size(1);
        bins.set_size(&axb_emlrtRTEI, &c_st, 1, c_ii.size(1));
        for (i1 = 0; i1 < idx; i1++) {
          bins[i1] = c_ii[i1];
        }

        if (bins.size(1) != 0) {
          rPose.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1), 1);
          for (i1 = 0; i1 < idx; i1++) {
            if (i1 > rPose.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, rPose.size(0) - 1,
                &geb_emlrtBCI, &b_st);
            }

            rPose[i1].Data.set_size(&bxb_emlrtRTEI, &b_st, 0, rPose[i1].
              Data.size(1));
            if (i1 > rPose.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, rPose.size(0) - 1,
                &geb_emlrtBCI, &b_st);
            }

            rPose[i1].Data.set_size(&bxb_emlrtRTEI, &b_st, rPose[i1].Data.size(0),
              0);
          }

          match.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1), 1);
          for (i1 = 0; i1 < idx; i1++) {
            if (i1 > match.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, match.size(0) - 1,
                &geb_emlrtBCI, &b_st);
            }

            match[i1].f1.set_size(&bxb_emlrtRTEI, &b_st, 0, match[i1].f1.size(1));
            if (i1 > match.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, match.size(0) - 1,
                &geb_emlrtBCI, &b_st);
            }

            match[i1].f1.set_size(&bxb_emlrtRTEI, &b_st, match[i1].f1.size(0), 2);
          }

          iMats.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1), 1);
          for (i1 = 0; i1 < idx; i1++) {
            if (i1 > iMats.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, iMats.size(0) - 1,
                &geb_emlrtBCI, &b_st);
            }

            iMats[i1].f1.set_size(&bxb_emlrtRTEI, &b_st, 0, iMats[i1].f1.size(1));
            if (i1 > iMats.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(i1, 0, iMats.size(0) - 1,
                &geb_emlrtBCI, &b_st);
            }

            iMats[i1].f1.set_size(&bxb_emlrtRTEI, &b_st, iMats[i1].f1.size(0), 0);
          }

          rPose.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1), 1);
          viewIds.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1));
          vId1.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1));
          iMats.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1), 1);
          match.set_size(&bxb_emlrtRTEI, &b_st, c_ii.size(1), 1);
          for (ia_size = 0; ia_size < idx; ia_size++) {
            c_st.site = &dac_emlrtRSI;
            if (ia_size + 1 > idx) {
              emlrtDynamicBoundsCheckR2012b(ia_size + 1, 1, idx, &aeb_emlrtBCI,
                &c_st);
            }

            if (ia_size + 1 > vId1.size(0)) {
              emlrtDynamicBoundsCheckR2012b(ia_size + 1, 1, vId1.size(0),
                &ieb_emlrtBCI, &c_st);
            }

            i1 = ViewId1.size(0);
            a = static_cast<int32_T>(bins[ia_size]);
            if ((a < 1) || (a > i1)) {
              emlrtDynamicBoundsCheckR2012b(a, 1, i1, &ydb_emlrtBCI, &c_st);
            }

            vId1[ia_size] = ViewId1[a - 1];
            if (ia_size + 1 > viewIds.size(0)) {
              emlrtDynamicBoundsCheckR2012b(ia_size + 1, 1, viewIds.size(0),
                &jeb_emlrtBCI, &c_st);
            }

            i1 = ViewId2.size(0);
            if (a > i1) {
              emlrtDynamicBoundsCheckR2012b(a, 1, i1, &mkb_emlrtBCI, &c_st);
            }

            viewIds[ia_size] = ViewId2[a - 1];
            d_st.site = &fac_emlrtRSI;
            RrigidPoseSingle.parenReference(d_st, bins[ia_size], &varargin_2);
            for (i1 = 0; i1 < 3; i1++) {
              last = i1 << 2;
              b_poseTable[last] = varargin_2.R[3 * i1];
              b_poseTable[last + 1] = varargin_2.R[3 * i1 + 1];
              b_poseTable[last + 2] = varargin_2.R[3 * i1 + 2];
              b_poseTable[i1 + 12] = varargin_2.Translation[i1];
            }

            b_poseTable[3] = 0.0F;
            b_poseTable[7] = 0.0F;
            b_poseTable[11] = 0.0F;
            b_poseTable[15] = 1.0F;
            d_st.site = &fac_emlrtRSI;
            varargin_2.b_init(d_st, b_poseTable);
            i1 = InfoMatDouble.size(0) - 1;
            if (a - 1 > i1) {
              emlrtDynamicBoundsCheckR2012b(a - 1, 0, i1, &skb_emlrtBCI, &c_st);
            }

            i1 = MatchesInt.size(0) - 1;
            if (a - 1 > i1) {
              emlrtDynamicBoundsCheckR2012b(a - 1, 0, i1, &rkb_emlrtBCI, &c_st);
            }

            if (ia_size > rPose.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_size, 0, rPose.size(0) - 1,
                &heb_emlrtBCI, &b_st);
            }

            rPose[ia_size] = varargin_2;
            if (ia_size > iMats.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_size, 0, iMats.size(0) - 1,
                &beb_emlrtBCI, &b_st);
            }

            iMats[ia_size].f1.set_size(&cxb_emlrtRTEI, &b_st, InfoMatDouble[
              static_cast<int32_T>(bins[bins.size(0) * ia_size]) - 1].f1.size(0),
              InfoMatDouble[static_cast<int32_T>(bins[bins.size(0) * ia_size]) -
              1].f1.size(1));
            last = InfoMatDouble[static_cast<int32_T>(bins[ia_size]) - 1].
              f1.size(0) * InfoMatDouble[static_cast<int32_T>(bins[ia_size]) - 1]
              .f1.size(1);
            for (i1 = 0; i1 < last; i1++) {
              iMats[ia_size].f1[i1] = InfoMatDouble[a - 1].f1[i1];
            }

            if (ia_size > iMats.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(ia_size, 0, iMats.size(0) - 1,
                &ceb_emlrtBCI, &b_st);
            }

            match[ia_size].f1.set_size(&tdc_emlrtRTEI, &b_st, MatchesInt[
              static_cast<int32_T>(bins[bins.size(0) * ia_size]) - 1].f1.size(0),
              2);
            last = MatchesInt[static_cast<int32_T>(bins[ia_size]) - 1].f1.size(0)
              << 1;
            for (i1 = 0; i1 < last; i1++) {
              match[ia_size].f1[i1] = MatchesInt[a - 1].f1[i1];
            }

            if (ia_size + 1 > idx) {
              emlrtDynamicBoundsCheckR2012b(ia_size + 1, 1, idx, &keb_emlrtBCI,
                &b_st);
            }

            i1 = MatchesInt.size(0) - 1;
            a = static_cast<int32_T>(bins[ia_size]) - 1;
            if ((a < 0) || (a > i1)) {
              emlrtDynamicBoundsCheckR2012b(a, 0, i1, &deb_emlrtBCI, &b_st);
            }

            MatchesInt[a].f1.set_size(&dxb_emlrtRTEI, &b_st, 0, 2);
          }
        }
      }
    }

    st.site = &rdd_emlrtRSI;
    b_st.site = &xab_emlrtRSI;
    c_st.site = &yab_emlrtRSI;
    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::parseMatches(const emlrtStack &sp, const array<uint32_T, 2U>
    &varargin_2)
  {
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack st;
    st.prev = &sp;
    st.tls = sp.tls;
    st.site = &reb_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    if (varargin_2.size(0) != 0) {
      int32_T i;
      int32_T k;
      boolean_T exitg1;
      boolean_T p;
      b_st.site = &seb_emlrtRSI;
      c_st.site = &be_emlrtRSI;
      p = true;
      i = varargin_2.size(0) << 1;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= i - 1)) {
        if (varargin_2[k] > 0U) {
          k++;
        } else {
          p = false;
          exitg1 = true;
        }
      }

      if (!p) {
        emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
          "Coder:toolbox:ValidateattributesexpectedPositive",
          "MATLAB:imageviewset:expectedPositive", 3, 4, 7, "Matches");
      }
    }
  }

  void imageviewset::updateConnection(const emlrtStack &sp, uint32_T varargin_1,
    real_T varargin_2, const array<uint32_T, 2U> &varargin_4)
  {
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
    int32_T conIdx_size_idx_1;
    int32_T i;
    int32_T i1;
    uint32_T conIdx_data;
    uint32_T viewId2;
    boolean_T missingConnection;
    st.prev = &sp;
    st.tls = sp.tls;
    st.site = &wbc_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    e_st.prev = &d_st;
    e_st.tls = d_st.tls;
    b_st.site = &ipc_emlrtRSI;
    c_st.site = &tyb_emlrtRSI;
    d_st.site = &uyb_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (varargin_1 <= 0U) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
    }

    b_st.site = &jpc_emlrtRSI;
    viewId2 = ViewSetBaseImpl::checkViewId(b_st, varargin_2);
    b_st.site = &tsc_emlrtRSI;
    imageviewset::parseMatches(b_st, varargin_4);
    b_st.site = &oeb_emlrtRSI;
    checkMatchesOutOfBounds(b_st, varargin_4, varargin_1, viewId2);
    b_st.site = &peb_emlrtRSI;
    if (!hasView(b_st, varargin_1)) {
      emlrtErrorWithMessageIdR2018a(&st, &jg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        varargin_1);
    }

    b_st.site = &qeb_emlrtRSI;
    if (!hasView(b_st, viewId2)) {
      emlrtErrorWithMessageIdR2018a(&st, &kg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        viewId2);
    }

    st.site = &xbc_emlrtRSI;
    b_st.site = &ccc_emlrtRSI;
    missingConnection = !hasConnection(b_st, varargin_1, viewId2);
    if (missingConnection) {
      emlrtErrorWithMessageIdR2018a(&st, &ah_emlrtRTEI,
        "vision:viewSet:missingConnection", "vision:viewSet:missingConnection",
        4, 13, varargin_1, 13, viewId2);
    }

    st.site = &ssc_emlrtRSI;
    conIdx_size_idx_1 = 0;
    i = ViewId1.size(0);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      if (b_i + 1 > i) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &ps_emlrtBCI, &st);
      }

      if (varargin_1 == ViewId1[b_i]) {
        i1 = ViewId2.size(0);
        if (b_i + 1 > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &qs_emlrtBCI, &st);
        }

        if (viewId2 == ViewId2[b_i]) {
          conIdx_size_idx_1 = 1;
          conIdx_data = static_cast<uint32_T>(b_i + 1);
        }
      }
    }

    if (conIdx_size_idx_1 < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 0, &leb_emlrtBCI, (emlrtConstCTX)&sp);
    }

    i = MatchesInt.size(0) - 1;
    i1 = static_cast<int32_T>(conIdx_data) - 1;
    if (static_cast<int32_T>(conIdx_data) - 1 > i) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(conIdx_data) - 1, 0, i,
        &bkb_emlrtBCI, (emlrtConstCTX)&sp);
    }

    conIdx_size_idx_1 = varargin_4.size(0) << 1;
    if (static_cast<int32_T>(conIdx_data) - 1 > i) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(conIdx_data) - 1, 0, i,
        &akb_emlrtBCI, (emlrtConstCTX)&sp);
    }

    MatchesInt[i1].f1.set_size(&ycc_emlrtRTEI, &sp, varargin_4.size(0), 2);
    for (i = 0; i < conIdx_size_idx_1; i++) {
      MatchesInt[i1].f1[i] = varargin_4[i];
    }
  }

  void imageviewset::updateConnection(const emlrtStack &sp, const rigidtform3d &
    varargin_3)
  {
    static const int8_T b_iv[4]{ 0, 0, 0, 1 };

    b_rigidtform3d connTable_RelativePose;
    array<images::geotrans::internal::b_rigidtform3dImpl, 2U> dataArray;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack f_st;
    emlrtStack g_st;
    emlrtStack st;
    int32_T connIdx_size[2];
    int32_T i;
    int32_T loop_ub;
    real32_T b_result_data[16];
    real32_T result_data[12];
    real32_T varargin_2_data[12];
    int8_T input_sizes_idx_1;
    boolean_T exitg1;
    boolean_T tf;
    boolean_T x;
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
    st.site = &wbc_emlrtRSI;
    b_st.site = &acc_emlrtRSI;
    c_st.site = &ieb_emlrtRSI;
    d_st.site = &be_emlrtRSI;
    if (varargin_3.Data.size[0] * varargin_3.Data.size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &ob_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedScalar",
        "MATLAB:imageviewset:expectedScalar", 3, 4, 7, "relPose");
    }

    b_st.site = &bcc_emlrtRSI;
    c_st.site = &hw_emlrtRSI;
    d_st.site = &iw_emlrtRSI;
    e_st.site = &jw_emlrtRSI;
    loop_ub = varargin_3.Translation.size[1];
    if (loop_ub - 1 >= 0) {
      std::copy(&varargin_3.Translation.data[0],
                &varargin_3.Translation.data[loop_ub], &varargin_2_data[0]);
    }

    f_st.site = &kn_emlrtRSI;
    g_st.site = &jj_emlrtRSI;
    if ((varargin_3.Translation.size[1] != 3) && (varargin_3.Translation.size[1]
         != 0)) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    input_sizes_idx_1 = static_cast<int8_T>(varargin_3.Translation.size[1] != 0);
    for (i = 0; i < 3; i++) {
      result_data[3 * i] = varargin_3.R[3 * i];
      loop_ub = 3 * i + 1;
      result_data[loop_ub] = varargin_3.R[loop_ub];
      loop_ub = 3 * i + 2;
      result_data[loop_ub] = varargin_3.R[loop_ub];
    }

    loop_ub = input_sizes_idx_1;
    if (loop_ub - 1 >= 0) {
      result_data[9] = varargin_2_data[0];
      result_data[10] = varargin_2_data[1];
      result_data[11] = varargin_2_data[2];
    }

    e_st.site = &jw_emlrtRSI;
    f_st.site = &kn_emlrtRSI;
    g_st.site = &jj_emlrtRSI;
    if (input_sizes_idx_1 + 3 != 4) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    for (i = 0; i < 4; i++) {
      b_result_data[4 * i] = result_data[3 * i];
      b_result_data[4 * i + 1] = result_data[3 * i + 1];
      b_result_data[4 * i + 2] = result_data[3 * i + 2];
      b_result_data[4 * i + 3] = b_iv[i];
    }

    b_st.site = &bcc_emlrtRSI;
    connTable_RelativePose.init(b_st, b_result_data);
    b_st.site = &peb_emlrtRSI;
    c_st.site = &xcb_emlrtRSI;
    d_st.site = &ycb_emlrtRSI;
    e_st.site = &adb_emlrtRSI;
    f_st.site = &bdb_emlrtRSI;
    tf = false;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (ViewId[loop_ub] == 1U) {
        tf = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }

    if (!tf) {
      emlrtErrorWithMessageIdR2018a(&st, &jg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        1U);
    }

    b_st.site = &qeb_emlrtRSI;
    if (!hasView()) {
      emlrtErrorWithMessageIdR2018a(&st, &kg_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        2U);
    }

    st.site = &xbc_emlrtRSI;
    b_st.site = &ccc_emlrtRSI;
    c_st.site = &mfb_emlrtRSI;
    d_st.site = &nfb_emlrtRSI;
    e_st.site = &xcb_emlrtRSI;
    f_st.site = &ycb_emlrtRSI;
    tf = false;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (ViewId[loop_ub] == 1U) {
        tf = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }

    d_st.site = &ofb_emlrtRSI;
    x = hasView();
    if (tf && x) {
      real_T connIdx_data;
      connIdx_size[0] = 1;
      connIdx_size[1] = 1;
      connIdx_data = 1.0;
      d_st.site = &pfb_emlrtRSI;
      if (b_any((const real_T *)&connIdx_data, connIdx_size)) {
        tf = true;
      } else {
        tf = false;
      }
    } else {
      tf = false;
    }

    if (!tf) {
      emlrtErrorWithMessageIdR2018a(&st, &ah_emlrtRTEI,
        "vision:viewSet:missingConnection", "vision:viewSet:missingConnection",
        4, 13, 1U, 13, 2U);
    }

    st.site = &ybc_emlrtRSI;
    if (RrigidPoseSingle.Data.size(1) < 1) {
      dataArray.set_size(&qkb_emlrtRTEI, &st, 1, 1);
      i = RrigidPoseSingle.Data.size(1);
      for (int32_T n{0}; n < i; n++) {
        if (n > 0) {
          emlrtDynamicBoundsCheckR2012b(n, 0, 0, &mr_emlrtBCI, &st);
        }

        loop_ub = RrigidPoseSingle.Data.size(1) - 1;
        if (loop_ub < 0) {
          emlrtDynamicBoundsCheckR2012b(0, 0, loop_ub, &lr_emlrtBCI, &st);
        }
      }

      if (connTable_RelativePose.Data.size(1) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, connTable_RelativePose.Data.size(1)
          - 1, &cr_emlrtBCI, &st);
      }

      dataArray[0] = connTable_RelativePose.Data[0];
      RrigidPoseSingle.Data.set_size(&rkb_emlrtRTEI, &st, 1, 1);
      RrigidPoseSingle.Data[0] = dataArray[0];
    } else {
      if (connTable_RelativePose.Data.size(1) - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, connTable_RelativePose.Data.size(1)
          - 1, &dr_emlrtBCI, &st);
      }

      i = RrigidPoseSingle.Data.size(1) - 1;
      if (i < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, i, &kr_emlrtBCI, &st);
      }

      RrigidPoseSingle.Data[0] = connTable_RelativePose.Data[0];
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }

  void imageviewset::updateView(const emlrtStack &sp, uint32_T varargin_1, const
    b_rigidtform3d &varargin_2)
  {
    static const char_T b_cv[8]{ 'F', 'e', 'a', 't', 'u', 'r', 'e', 's' };

    static const char_T b_cv1[6]{ 'P', 'o', 'i', 'n', 't', 's' };

    b_rigidtform3d t23_AbsolutePose;
    b_rigidtform3d unusedExpr;
    array<b_ORBPoints, 1U> b_expl_temp;
    array<b_rigidtform3d, 2U> rPose;
    array<cell_wrap_11, 2U> match;
    array<cell_wrap_7, 2U> iMats;
    array<cell_wrap_8, 2U> expl_temp;
    array<real_T, 2U> idx;
    array<int32_T, 2U> ii;
    array<uint32_T, 1U> t24_ViewId;
    array<int8_T, 1U> vId1;
    array<int8_T, 1U> vId2;
    bounded_array<cell_wrap_188, 2U, 2U> unsetColumns;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack e_st;
    emlrtStack st;
    real_T viewIdx_data;
    int32_T i;
    int32_T ia_data;
    int32_T ia_size;
    int32_T ib_data;
    int32_T ib_size;
    real32_T b_varargin_2[16];
    uint32_T c_data;
    boolean_T tmp_data[2];
    boolean_T absPosesChanged;
    boolean_T featuresChanged;
    boolean_T pointsChanged;
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
    emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
    st.site = &qyb_emlrtRSI;
    b_st.site = &ryb_emlrtRSI;
    c_st.site = &tyb_emlrtRSI;
    d_st.site = &uyb_emlrtRSI;
    e_st.site = &be_emlrtRSI;
    if (varargin_1 <= 0U) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedPositive",
        "MATLAB:imageviewset:expectedPositive", 3, 4, 6, "viewId");
    }

    for (i = 0; i < 3; i++) {
      ia_data = i << 2;
      b_varargin_2[ia_data] = varargin_2.R[3 * i];
      b_varargin_2[ia_data + 1] = varargin_2.R[3 * i + 1];
      b_varargin_2[ia_data + 2] = varargin_2.R[3 * i + 2];
      b_varargin_2[i + 12] = varargin_2.Translation[i];
    }

    b_varargin_2[3] = 0.0F;
    b_varargin_2[7] = 0.0F;
    b_varargin_2[11] = 0.0F;
    b_varargin_2[15] = 1.0F;
    b_st.site = &syb_emlrtRSI;
    t23_AbsolutePose.b_init(b_st, b_varargin_2);
    unsetColumns.size[0] = 1;
    unsetColumns.size[1] = 2;
    unsetColumns.data[0].f1.size[0] = 1;
    unsetColumns.data[0].f1.size[1] = 8;
    for (i = 0; i < 8; i++) {
      unsetColumns.data[0].f1.data[i] = b_cv[i];
    }

    unsetColumns.data[1].f1.size[0] = 1;
    unsetColumns.data[1].f1.size[1] = 6;
    for (i = 0; i < 6; i++) {
      unsetColumns.data[1].f1.data[i] = b_cv1[i];
    }

    st.site = &pyb_emlrtRSI;
    b_st.site = &vyb_emlrtRSI;
    get_Views(b_st, t24_ViewId, expl_temp, b_expl_temp, unusedExpr);
    b_st.site = &wyb_emlrtRSI;
    c_st.site = &xyb_emlrtRSI;
    d_st.site = &adb_emlrtRSI;
    e_st.site = &bdb_emlrtRSI;
    pointsChanged = isMember(e_st, varargin_1, t24_ViewId);
    if (!pointsChanged) {
      emlrtErrorWithMessageIdR2018a(&b_st, &yd_emlrtRTEI,
        "vision:viewSet:missingViewId", "vision:viewSet:missingViewId", 2, 13,
        varargin_1);
    }

    st.site = &oyb_emlrtRSI;
    b_st.site = &afb_emlrtRSI;
    get_Views(b_st, t24_ViewId, expl_temp, b_expl_temp, unusedExpr);
    b_st.site = &bfb_emlrtRSI;
    c_st.site = &dfb_emlrtRSI;
    d_st.site = &efb_emlrtRSI;
    do_vectors(d_st, t24_ViewId, varargin_1, (uint32_T *)&c_data, (int32_T *)
               &ia_data, ia_size, (int32_T *)&ib_data, ib_size);
    for (i = 0; i < ia_size; i++) {
      viewIdx_data = ia_data;
    }

    int32_T tmp_size[2];
    st.site = &nyb_emlrtRSI;
    internal::c_strcmp(unsetColumns.data, tmp_data, tmp_size);
    st.site = &nyb_emlrtRSI;
    pointsChanged = !c_any(tmp_data);
    st.site = &myb_emlrtRSI;
    internal::d_strcmp(unsetColumns.data, tmp_data, tmp_size);
    st.site = &myb_emlrtRSI;
    featuresChanged = !c_any(tmp_data);
    st.site = &lyb_emlrtRSI;
    internal::e_strcmp(unsetColumns.data, tmp_data, tmp_size);
    st.site = &lyb_emlrtRSI;
    absPosesChanged = !c_any(tmp_data);
    if (featuresChanged) {
      st.site = &kyb_emlrtRSI;
      if (ia_size != 1) {
        emlrtErrorWithMessageIdR2018a(&st, &vg_emlrtRTEI,
          "MATLAB:index:expected_one_output_from_expression",
          "MATLAB:index:expected_one_output_from_expression", 2, 6, 0.0);
      }

      i = static_cast<int32_T>(viewIdx_data) - 1;
      if ((i < 0) || (i > 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1, 0,
          1, &eeb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      FeaturesBinary[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
        (&vwb_emlrtRTEI, &sp, 0, 0);
    }

    if (pointsChanged) {
      st.site = &jyb_emlrtRSI;
      if (ia_size != 1) {
        emlrtErrorWithMessageIdR2018a(&st, &vg_emlrtRTEI,
          "MATLAB:index:expected_one_output_from_expression",
          "MATLAB:index:expected_one_output_from_expression", 2, 6, 0.0);
      }

      i = static_cast<int32_T>(viewIdx_data) - 1;
      if ((i < 0) || (i > 1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(viewIdx_data) - 1, 0,
          1, &feb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      PointsSingle[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
        (&wwb_emlrtRTEI, &sp, 0, 2);
      st.site = &iyb_emlrtRSI;
      b_st.site = &yyb_emlrtRSI;
      Metrics[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size(&xwb_emlrtRTEI,
        &st, 0);
      b_st.site = &aac_emlrtRSI;
      Scale[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size(&xwb_emlrtRTEI,
        &st, 0);
      b_st.site = &bac_emlrtRSI;
      Orientation[static_cast<int32_T>(viewIdx_data) - 1].f1.set_size
        (&xwb_emlrtRTEI, &st, 0);
    }

    if (absPosesChanged) {
      st.site = &hyb_emlrtRSI;
      AbsPosesSingle.parenAssign(st, t23_AbsolutePose, (real_T *)&viewIdx_data,
        ia_size);
    }

    if (pointsChanged || featuresChanged) {
      st.site = &gyb_emlrtRSI;
      idx.set_size(&ywb_emlrtRTEI, &st, 1, 1);
      idx[0] = 1.0;
      b_st.site = &eac_emlrtRSI;
      c_st.site = &aq_emlrtRSI;
      d_eml_find(c_st, idx, ii);
      ib_data = ii.size(1);
      idx.set_size(&axb_emlrtRTEI, &b_st, 1, ii.size(1));
      for (i = 0; i < ib_data; i++) {
        idx[i] = ii[i];
      }

      if (idx.size(1) != 0) {
        rPose.set_size(&bxb_emlrtRTEI, &st, ii.size(1), 1);
        for (i = 0; i < ib_data; i++) {
          if (i > rPose.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &geb_emlrtBCI,
              &st);
          }

          rPose[i].Data.set_size(&bxb_emlrtRTEI, &st, 0, rPose[i].Data.size(1));
          if (i > rPose.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, rPose.size(0) - 1, &geb_emlrtBCI,
              &st);
          }

          rPose[i].Data.set_size(&bxb_emlrtRTEI, &st, rPose[i].Data.size(0), 0);
        }

        match.set_size(&bxb_emlrtRTEI, &st, ii.size(1), 1);
        for (i = 0; i < ib_data; i++) {
          if (i > match.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, match.size(0) - 1, &geb_emlrtBCI,
              &st);
          }

          match[i].f1.set_size(&bxb_emlrtRTEI, &st, 0, match[i].f1.size(1));
          if (i > match.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, match.size(0) - 1, &geb_emlrtBCI,
              &st);
          }

          match[i].f1.set_size(&bxb_emlrtRTEI, &st, match[i].f1.size(0), 2);
        }

        iMats.set_size(&bxb_emlrtRTEI, &st, ii.size(1), 1);
        for (i = 0; i < ib_data; i++) {
          if (i > iMats.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, iMats.size(0) - 1, &geb_emlrtBCI,
              &st);
          }

          iMats[i].f1.set_size(&bxb_emlrtRTEI, &st, 0, iMats[i].f1.size(1));
          if (i > iMats.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, iMats.size(0) - 1, &geb_emlrtBCI,
              &st);
          }

          iMats[i].f1.set_size(&bxb_emlrtRTEI, &st, iMats[i].f1.size(0), 0);
        }

        rPose.set_size(&bxb_emlrtRTEI, &st, ii.size(1), 1);
        vId2.set_size(&bxb_emlrtRTEI, &st, ii.size(1));
        vId1.set_size(&bxb_emlrtRTEI, &st, ii.size(1));
        iMats.set_size(&bxb_emlrtRTEI, &st, ii.size(1), 1);
        for (ib_size = 0; ib_size < ib_data; ib_size++) {
          b_st.site = &dac_emlrtRSI;
          if (ib_size + 1 > ib_data) {
            emlrtDynamicBoundsCheckR2012b(ib_size + 1, 1, ib_data, &aeb_emlrtBCI,
              &b_st);
          }

          i = ViewId1.size(0);
          ia_data = static_cast<int32_T>(idx[ib_size]);
          if ((ia_data < 1) || (ia_data > i)) {
            emlrtDynamicBoundsCheckR2012b(ia_data, 1, i, &ydb_emlrtBCI, &b_st);
          }

          c_st.site = &fac_emlrtRSI;
          RrigidPoseSingle.parenReference(c_st, 1.0, &t23_AbsolutePose);
          for (i = 0; i < 3; i++) {
            ia_data = i << 2;
            b_varargin_2[ia_data] = t23_AbsolutePose.R[3 * i];
            b_varargin_2[ia_data + 1] = t23_AbsolutePose.R[3 * i + 1];
            b_varargin_2[ia_data + 2] = t23_AbsolutePose.R[3 * i + 2];
            b_varargin_2[i + 12] = t23_AbsolutePose.Translation[i];
          }

          b_varargin_2[3] = 0.0F;
          b_varargin_2[7] = 0.0F;
          b_varargin_2[11] = 0.0F;
          b_varargin_2[15] = 1.0F;
          if (ib_size > rPose.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(ib_size, 0, rPose.size(0) - 1,
              &heb_emlrtBCI, &b_st);
          }

          c_st.site = &fac_emlrtRSI;
          rPose[ib_size].b_init(c_st, b_varargin_2);
          if (ib_size + 1 > vId1.size(0)) {
            emlrtDynamicBoundsCheckR2012b(ib_size + 1, 1, vId1.size(0),
              &ieb_emlrtBCI, &st);
          }

          vId1[ib_size] = 1;
          if (ib_size + 1 > vId2.size(0)) {
            emlrtDynamicBoundsCheckR2012b(ib_size + 1, 1, vId2.size(0),
              &jeb_emlrtBCI, &st);
          }

          vId2[ib_size] = 2;
          if (ib_size > iMats.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(ib_size, 0, iMats.size(0) - 1,
              &beb_emlrtBCI, &st);
          }

          iMats[ib_size].f1.set_size(&cxb_emlrtRTEI, &st, InfoMatDouble[0].
            f1.size(0), InfoMatDouble[0].f1.size(1));
          ia_data = InfoMatDouble[0].f1.size(0) * InfoMatDouble[0].f1.size(1);
          for (i = 0; i < ia_data; i++) {
            iMats[ib_size].f1[i] = InfoMatDouble[0].f1[i];
          }

          if (ib_size > iMats.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(ib_size, 0, iMats.size(0) - 1,
              &ceb_emlrtBCI, &st);
          }

          if (ib_size + 1 > ib_data) {
            emlrtDynamicBoundsCheckR2012b(ib_size + 1, 1, ib_data, &keb_emlrtBCI,
              &st);
          }

          i = static_cast<int32_T>(idx[ib_size]) - 1;
          if ((i < 0) || (i > 0)) {
            emlrtDynamicBoundsCheckR2012b(i, 0, 0, &deb_emlrtBCI, &st);
          }

          MatchesInt[0].f1.set_size(&dxb_emlrtRTEI, &st, 0, 2);
        }
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  }
}

// End of code generation (imageviewset.cpp)
