//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ViewSetFeatureGraph.cpp
//
// Code generation for function 'ViewSetFeatureGraph'
//

// Include files
#include "ViewSetFeatureGraph.h"
#include "MLGraph.h"
#include "abs.h"
#include "any1.h"
#include "checkAndConvertPoints.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "graph.h"
#include "graphPropertyContainer.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "indexShapeCheck.h"
#include "ismember.h"
#include "pointTrack.h"
#include "pointTrackImpl.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "table.h"
#include "unique.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Type Definitions
namespace coder {
namespace vision {
namespace internal {
class b_ViewSetFeatureGraph {
public:
  static void makeEmptyPointTrack(const emlrtStack &sp, pointTrack &obj);
};

} // namespace internal
} // namespace vision
} // namespace coder

// Variable Definitions
static emlrtRSInfo qfb_emlrtRSI{
    98,                             // lineNo
    "ViewSetFeatureGraph/addEdges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo rfb_emlrtRSI{
    106,                            // lineNo
    "ViewSetFeatureGraph/addEdges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo sfb_emlrtRSI{
    108,                            // lineNo
    "ViewSetFeatureGraph/addEdges", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo tfb_emlrtRSI{
    256,                             // lineNo
    "ViewSetFeatureGraph/getEdgeId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo ufb_emlrtRSI{
    257,                             // lineNo
    "ViewSetFeatureGraph/getEdgeId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo vfb_emlrtRSI{
    259,                             // lineNo
    "ViewSetFeatureGraph/getEdgeId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo wfb_emlrtRSI{
    260,                             // lineNo
    "ViewSetFeatureGraph/getEdgeId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo xfb_emlrtRSI{
    261,                             // lineNo
    "ViewSetFeatureGraph/getEdgeId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo yfb_emlrtRSI{
    262,                             // lineNo
    "ViewSetFeatureGraph/getEdgeId", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo cgb_emlrtRSI{
    15,                       // lineNo
    "tabular/braceReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\braceRefe"
    "rence.m" // pathName
};

static emlrtRSInfo dgb_emlrtRSI{
    18,                       // lineNo
    "tabular/braceReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\braceRefe"
    "rence.m" // pathName
};

static emlrtRSInfo egb_emlrtRSI{
    24,                       // lineNo
    "tabular/braceReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\braceRefe"
    "rence.m" // pathName
};

static emlrtRSInfo igb_emlrtRSI{
    286,                     // lineNo
    "varNamesDim/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\"
    "varNamesDim.m" // pathName
};

static emlrtRSInfo jgb_emlrtRSI{
    15,                    // lineNo
    "tabular/extractData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\extractDa"
    "ta.m" // pathName
};

static emlrtRSInfo kgb_emlrtRSI{
    72,                    // lineNo
    "tabular/extractData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\extractDa"
    "ta.m" // pathName
};

static emlrtRSInfo lgb_emlrtRSI{
    35,         // lineNo
    "ismember", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pathName
};

static emlrtRSInfo xpb_emlrtRSI{
    246,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo ypb_emlrtRSI{
    240,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo aqb_emlrtRSI{
    245,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo bqb_emlrtRSI{
    243,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo cqb_emlrtRSI{
    239,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo dqb_emlrtRSI{
    237,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo eqb_emlrtRSI{
    227,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo fqb_emlrtRSI{
    220,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo gqb_emlrtRSI{
    217,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo hqb_emlrtRSI{
    213,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo iqb_emlrtRSI{
    212,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo jqb_emlrtRSI{
    204,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo kqb_emlrtRSI{
    196,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo lqb_emlrtRSI{
    195,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo mqb_emlrtRSI{
    192,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo nqb_emlrtRSI{
    189,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo oqb_emlrtRSI{
    188,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo pqb_emlrtRSI{
    187,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo qqb_emlrtRSI{
    186,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo rqb_emlrtRSI{
    181,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo sqb_emlrtRSI{
    180,                                // lineNo
    "ViewSetFeatureGraph/createTracks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo nrb_emlrtRSI{
    279,                                       // lineNo
    "ViewSetFeatureGraph/makeEmptyPointTrack", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo orb_emlrtRSI{
    285,                                       // lineNo
    "ViewSetFeatureGraph/makeEmptyPointTrack", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pathName
};

static emlrtRSInfo bsb_emlrtRSI{
    45,       // lineNo
    "unique", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pathName
};

static emlrtBCInfo jy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    243,                                // lineNo
    47,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo ky_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    243,                                // lineNo
    35,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo ly_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    237,                                // lineNo
    43,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo my_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    237,                                // lineNo
    31,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo ny_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    220,                                // lineNo
    67,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo oy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    213,                                // lineNo
    32,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo py_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    213,                                // lineNo
    30,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo qy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    204,                                // lineNo
    67,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo ry_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    197,                                // lineNo
    39,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtECInfo fe_emlrtECI{
    1,                                  // nDims
    196,                                // lineNo
    30,                                 // colNo
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtBCInfo sy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    196,                                // lineNo
    41,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtECInfo ge_emlrtECI{
    1,                                  // nDims
    195,                                // lineNo
    25,                                 // colNo
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtBCInfo ty_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    195,                                // lineNo
    58,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo uy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    195,                                // lineNo
    56,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo vy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    199,                                // lineNo
    35,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo wy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    208,                                // lineNo
    29,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo xy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    209,                                // lineNo
    31,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo yy_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    214,                                // lineNo
    23,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo aab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    217,                                // lineNo
    29,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo bab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    238,                                // lineNo
    38,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo cab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    240,                                // lineNo
    45,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo dab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    241,                                // lineNo
    47,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo eab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    241,                                // lineNo
    51,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo fab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    241,                                // lineNo
    80,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo gab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    241,                                // lineNo
    84,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo hab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    243,                                // lineNo
    42,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo iab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    243,                                // lineNo
    54,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo jab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    244,                                // lineNo
    42,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo kab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    246,                                // lineNo
    52,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo lab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    247,                                // lineNo
    54,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo mab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    247,                                // lineNo
    58,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo nab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    247,                                // lineNo
    87,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo oab_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    247,                                // lineNo
    91,                                 // colNo
    "",                                 // aName
    "ViewSetFeatureGraph/createTracks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtBCInfo pab_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    83,                            // lineNo
    31,                            // colNo
    "",                            // aName
    "pointTrackArray/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m", // pName
    0                             // checkKind
};

static emlrtBCInfo qab_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    77,                            // lineNo
    31,                            // colNo
    "",                            // aName
    "pointTrackArray/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m", // pName
    0                             // checkKind
};

static emlrtBCInfo rab_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    72,                            // lineNo
    46,                            // colNo
    "",                            // aName
    "pointTrackArray/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m", // pName
    0                             // checkKind
};

static emlrtBCInfo sab_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    72,                            // lineNo
    31,                            // colNo
    "",                            // aName
    "pointTrackArray/parenAssign", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m", // pName
    0                             // checkKind
};

static emlrtBCInfo vdb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    104,                            // lineNo
    45,                             // colNo
    "",                             // aName
    "ViewSetFeatureGraph/addEdges", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m", // pName
    0                                  // checkKind
};

static emlrtRTEInfo rg_emlrtRTEI{
    41,                    // lineNo
    27,                    // colNo
    "tabular/extractData", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\extractDa"
    "ta.m" // pName
};

static emlrtBCInfo wdb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    60,                       // lineNo
    17,                       // colNo
    "",                       // aName
    "tabular/braceReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\braceRefe"
    "rence.m", // pName
    0          // checkKind
};

static emlrtRTEInfo py_emlrtRTEI{
    283,                   // lineNo
    17,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo qy_emlrtRTEI{
    285,                   // lineNo
    17,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo uy_emlrtRTEI{
    146,               // lineNo
    13,                // colNo
    "pointTrackArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pName
};

static emlrtRTEInfo dsb_emlrtRTEI{
    195,                   // lineNo
    13,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo esb_emlrtRTEI{
    196,                   // lineNo
    30,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo fsb_emlrtRTEI{
    196,                   // lineNo
    52,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo gsb_emlrtRTEI{
    196,                   // lineNo
    29,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo hsb_emlrtRTEI{
    159,                   // lineNo
    27,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo isb_emlrtRTEI{
    209,                   // lineNo
    22,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo jsb_emlrtRTEI{
    209,                   // lineNo
    13,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo ksb_emlrtRTEI{
    212,                   // lineNo
    13,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo lsb_emlrtRTEI{
    213,                   // lineNo
    40,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo msb_emlrtRTEI{
    213,                   // lineNo
    13,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo nsb_emlrtRTEI{
    217,                   // lineNo
    33,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo osb_emlrtRTEI{
    217,                   // lineNo
    22,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo psb_emlrtRTEI{
    217,                   // lineNo
    13,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo qsb_emlrtRTEI{
    238,                   // lineNo
    17,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo rsb_emlrtRTEI{
    46,       // lineNo
    9,        // colNo
    "unique", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" // pName
};

static emlrtRTEInfo ssb_emlrtRTEI{
    240,                   // lineNo
    37,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo tsb_emlrtRTEI{
    241,                   // lineNo
    37,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo usb_emlrtRTEI{
    241,                   // lineNo
    62,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo vsb_emlrtRTEI{
    244,                   // lineNo
    21,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo wsb_emlrtRTEI{
    246,                   // lineNo
    44,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo xsb_emlrtRTEI{
    247,                   // lineNo
    44,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo ysb_emlrtRTEI{
    247,                   // lineNo
    69,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo atb_emlrtRTEI{
    67,                // lineNo
    57,                // colNo
    "pointTrackArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pName
};

static emlrtRTEInfo btb_emlrtRTEI{
    79,                // lineNo
    17,                // colNo
    "pointTrackArray", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+"
    "codegen\\pointTrackArray.m" // pName
};

static emlrtRTEInfo mwb_emlrtRTEI{
    24,               // lineNo
    5,                // colNo
    "braceReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\braceRefe"
    "rence.m" // pName
};

static emlrtRTEInfo nwb_emlrtRTEI{
    257,                   // lineNo
    13,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo pwb_emlrtRTEI{
    36,         // lineNo
    15,         // colNo
    "ismember", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\ismember.m" // pName
};

static emlrtRTEInfo hfc_emlrtRTEI{
    196,                   // lineNo
    28,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

static emlrtRTEInfo ifc_emlrtRTEI{
    195,                   // lineNo
    25,                    // colNo
    "ViewSetFeatureGraph", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+"
    "internal\\ViewSetFeatureGraph.m" // pName
};

// Function Declarations
static void binary_expand_op_52(const emlrtStack &sp,
                                coder::array<boolean_T, 1U> &in1,
                                const coder::array<boolean_T, 1U> &in2,
                                const coder::array<boolean_T, 1U> &in3,
                                const coder::array<real_T, 1U> &in4);

static void binary_expand_op_53(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                int32_T in3, int32_T in4, int32_T in5);

// Function Definitions
namespace coder {
namespace vision {
namespace internal {
void b_ViewSetFeatureGraph::makeEmptyPointTrack(const emlrtStack &sp,
                                                pointTrack &obj)
{
  pointTrackImpl b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &nrb_emlrtRSI;
  obj.Points.set_size(&py_emlrtRTEI, &sp, 0, 2);
  st.site = &orb_emlrtRSI;
  b_st.site = &kpb_emlrtRSI;
  c_st.site = &mpb_emlrtRSI;
  obj.ViewIds.set_size(&qy_emlrtRTEI, &c_st, 1, 0);
  c_st.site = &npb_emlrtRSI;
  d_st.site = &qpb_emlrtRSI;
  inputValidation::checkAndConvertPoints(d_st, obj.Points);
  c_st.site = &opb_emlrtRSI;
  b_st.site = &lpb_emlrtRSI;
  c_st.site = &mpb_emlrtRSI;
  b_r.ViewIds.set_size(&ry_emlrtRTEI, &c_st, 1, 0);
  c_st.site = &npb_emlrtRSI;
  b_r.Points.set_size(&sy_emlrtRTEI, &c_st, 0, 2);
  d_st.site = &qpb_emlrtRSI;
  inputValidation::checkAndConvertPoints(d_st, b_r.Points);
  c_st.site = &opb_emlrtRSI;
  b_r.FeatureIndices.set_size(&ry_emlrtRTEI, &c_st, 1, 0);
  obj.Data.set_size(&ty_emlrtRTEI, &st, 1, 1);
  obj.Data[0] = b_r;
  obj.Data.set_size(&uy_emlrtRTEI, &sp, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace vision
} // namespace coder
static void binary_expand_op_52(const emlrtStack &sp,
                                coder::array<boolean_T, 1U> &in1,
                                const coder::array<boolean_T, 1U> &in2,
                                const coder::array<boolean_T, 1U> &in3,
                                const coder::array<real_T, 1U> &in4)
{
  coder::array<boolean_T, 1U> b_in2;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  b_in2.set_size(&hfc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = ((!in2[i * stride_0_0]) || (!in3[i * stride_1_0]));
  }
  in1.set_size(&gsb_emlrtRTEI, &sp, b_in2.size(0) + 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  in1[loop_ub] = !(in4[in4.size(0) - 1] > 0.0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_53(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                int32_T in3, int32_T in4, int32_T in5)
{
  coder::array<real_T, 1U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i = in4 - in3;
  if (in5 == 1) {
    loop_ub = i;
  } else {
    loop_ub = in5;
  }
  b_in2.set_size(&ifc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (i != 1);
  stride_1_0 = (in5 != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[in3 + i * stride_0_0] - in2[i * stride_1_0];
  }
  in1.set_size(&dsb_emlrtRTEI, &sp, b_in2.size(0) + 1);
  in1[0] = 1.0;
  for (i = 0; i < loop_ub; i++) {
    in1[i + 1] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
namespace vision {
namespace internal {
void ViewSetFeatureGraph::addEdges(
    const emlrtStack &sp, const array<cell_wrap_11, 2U> &connTable_Matches)
{
  b_table allNodes;
  graph b_this;
  array<real_T, 1U> c_iloc;
  array<real_T, 1U> d_iloc;
  array<int32_T, 1U> b_iloc;
  array<int32_T, 1U> iloc;
  array<uint32_T, 2U> b1;
  array<uint32_T, 2U> viewIdsAndPointIdx;
  array<boolean_T, 1U> tf;
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
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &qfb_emlrtRSI;
  if (connTable_Matches.size(0) - 1 < 0) {
    emlrtDynamicBoundsCheckR2012b(0, 0, connTable_Matches.size(0) - 1,
                                  &vdb_emlrtBCI, (emlrtConstCTX)&sp);
  }
  if (connTable_Matches[0].f1.size(0) != 0) {
    int32_T loop_ub;
    int32_T maxIndex;
    st.site = &rfb_emlrtRSI;
    b_st.site = &tfb_emlrtRSI;
    c_st.site = &agb_emlrtRSI;
    d_st.site = &bgb_emlrtRSI;
    allNodes.init(d_st, FeatureGraph.NodeProperties.data.f1,
                  FeatureGraph.NodeProperties.data.f2,
                  FeatureGraph.NodeProperties.data.f3);
    b_st.site = &ufb_emlrtRSI;
    c_st.site = &cgb_emlrtRSI;
    loop_ub = allNodes.data.f1.size(0);
    tf.set_size(&lpb_emlrtRTEI, &c_st, allNodes.data.f1.size(0));
    for (int32_T k{0}; k < loop_ub; k++) {
      tf[k] = false;
    }
    d_st.site = &fgb_emlrtRSI;
    if (any(d_st, tf)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &qd_emlrtRTEI,
                                    "MATLAB:badsubscriptTextRange",
                                    "MATLAB:badsubscript", 0);
    }
    if (allNodes.data.f1.size(0) == 0) {
      maxIndex = 0;
    } else {
      d_st.site = &ggb_emlrtRSI;
      e_st.site = &mbb_emlrtRSI;
      f_st.site = &nbb_emlrtRSI;
      g_st.site = &obb_emlrtRSI;
      h_st.site = &jfb_emlrtRSI;
      i_st.site = &kfb_emlrtRSI;
      maxIndex = 1;
      j_st.site = &lfb_emlrtRSI;
      if (allNodes.data.f1.size(0) > 2147483646) {
        k_st.site = &qe_emlrtRSI;
        check_forloop_overflow_error(k_st);
      }
      for (int32_T k{2}; k <= loop_ub; k++) {
        if (maxIndex < k) {
          maxIndex = k;
        }
      }
    }
    if (maxIndex > allNodes.rowDim.length) {
      emlrtErrorWithMessageIdR2018a(&c_st, &pd_emlrtRTEI,
                                    "MATLAB:table:RowIndexOutOfRange",
                                    "MATLAB:table:RowIndexOutOfRange", 0);
    }
    d_st.site = &hgb_emlrtRSI;
    c_st.site = &dgb_emlrtRSI;
    d_st.site = &igb_emlrtRSI;
    e_st.site = &hgb_emlrtRSI;
    c_st.site = &egb_emlrtRSI;
    d_st.site = &jgb_emlrtRSI;
    e_st.site = &igb_emlrtRSI;
    f_st.site = &hgb_emlrtRSI;
    if (allNodes.data.f2.size(0) != allNodes.data.f1.size(0)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &rg_emlrtRTEI,
                                    "MATLAB:table:ExtractDataSizeMismatch",
                                    "MATLAB:table:ExtractDataSizeMismatch", 0);
    }
    d_st.site = &kgb_emlrtRSI;
    e_st.site = &ij_emlrtRSI;
    f_st.site = &jj_emlrtRSI;
    if (allNodes.data.f2.size(0) != allNodes.data.f1.size(0)) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    b1.set_size(&mwb_emlrtRTEI, &e_st, allNodes.data.f1.size(0), 2);
    for (int32_T k{0}; k < loop_ub; k++) {
      b1[k] = allNodes.data.f1[k];
    }
    maxIndex = allNodes.data.f2.size(0);
    for (int32_T k{0}; k < maxIndex; k++) {
      real_T d;
      uint32_T u;
      d = muDoubleScalarRound(allNodes.data.f2[k]);
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
      b1[k + b1.size(0)] = u;
    }
    viewIdsAndPointIdx.set_size(&nwb_emlrtRTEI, &b_st, allNodes.data.f1.size(0),
                                2);
    for (int32_T k{0}; k < 2; k++) {
      for (maxIndex = 0; maxIndex < loop_ub; maxIndex++) {
        if (maxIndex + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(maxIndex + 1, 1, loop_ub, &wdb_emlrtBCI,
                                        &b_st);
        }
        viewIdsAndPointIdx[maxIndex + viewIdsAndPointIdx.size(0) * k] =
            b1[maxIndex + b1.size(0) * k];
      }
    }
    b_st.site = &vfb_emlrtRSI;
    c_st.site = &ne_emlrtRSI;
    b_st.site = &wfb_emlrtRSI;
    c_st.site = &ne_emlrtRSI;
    b_st.site = &xfb_emlrtRSI;
    c_st.site = &ij_emlrtRSI;
    d_st.site = &jj_emlrtRSI;
    b_st.site = &xfb_emlrtRSI;
    maxIndex = connTable_Matches[0].f1.size(0);
    b1.set_size(&owb_emlrtRTEI, &b_st, connTable_Matches[0].f1.size(0), 2);
    for (int32_T k{0}; k < maxIndex; k++) {
      b1[k] = 1U;
    }
    for (int32_T k{0}; k < maxIndex; k++) {
      b1[k + b1.size(0)] = connTable_Matches[0].f1[k];
    }
    c_st.site = &lgb_emlrtRSI;
    isMemberRows(c_st, b1, viewIdsAndPointIdx, tf, iloc);
    b_st.site = &yfb_emlrtRSI;
    c_st.site = &ij_emlrtRSI;
    d_st.site = &jj_emlrtRSI;
    b_st.site = &yfb_emlrtRSI;
    b1.set_size(&owb_emlrtRTEI, &b_st, connTable_Matches[0].f1.size(0), 2);
    for (int32_T k{0}; k < maxIndex; k++) {
      b1[k] = 2U;
    }
    for (int32_T k{0}; k < maxIndex; k++) {
      b1[k + b1.size(0)] =
          connTable_Matches[0].f1[k + connTable_Matches[0].f1.size(0)];
    }
    c_st.site = &lgb_emlrtRSI;
    isMemberRows(c_st, b1, viewIdsAndPointIdx, tf, b_iloc);
    maxIndex = iloc.size(0);
    c_iloc.set_size(&pwb_emlrtRTEI, &sp, iloc.size(0));
    for (int32_T k{0}; k < maxIndex; k++) {
      c_iloc[k] = iloc[k];
    }
    maxIndex = b_iloc.size(0);
    d_iloc.set_size(&pwb_emlrtRTEI, &sp, b_iloc.size(0));
    for (int32_T k{0}; k < maxIndex; k++) {
      d_iloc[k] = b_iloc[k];
    }
    b_this = FeatureGraph;
    st.site = &sfb_emlrtRSI;
    b_this.addedge(st, c_iloc, d_iloc, FeatureGraph);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void ViewSetFeatureGraph::createTracks(const emlrtStack &sp,
                                       pointTrack &tracks) const
{
  b_table N;
  b_table b_N;
  b_table c_N;
  b_table mjd_emlrtRSI;
  pointTrack rhs;
  array<pointTrackImpl, 2U> dataArray;
  array<real_T, 2U> binInx;
  array<real_T, 2U> c_binInx;
  array<real_T, 2U> indices;
  array<real_T, 1U> b_binInx;
  array<real_T, 1U> b_diffBins;
  array<real_T, 1U> diffBins;
  array<int32_T, 1U> ii;
  array<int32_T, 1U> r5;
  array<int32_T, 1U> r6;
  array<int32_T, 1U> sortInx;
  array<real32_T, 2U> d_N;
  array<uint32_T, 1U> b;
  array<uint32_T, 1U> viewIds;
  array<boolean_T, 1U> r2;
  array<boolean_T, 1U> r3;
  array<boolean_T, 1U> r4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T b_i;
  int32_T c_loop_ub;
  int32_T e_N;
  int32_T f_N;
  int32_T g_N;
  int32_T i;
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
  st.site = &sqb_emlrtRSI;
  b_st.site = &krb_emlrtRSI;
  FeatureGraph.Underlying.get_Edges(b_st, binInx);
  b_st.site = &lrb_emlrtRSI;
  c_st.site = &mrb_emlrtRSI;
  d_st.site = &qab_emlrtRSI;
  e_st.site = &rab_emlrtRSI;
  f_st.site = &tab_emlrtRSI;
  g_st.site = &uab_emlrtRSI;
  i = binInx.size(0);
  indices.set_size(&dv_emlrtRTEI, &g_st, 1, binInx.size(0));
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, indices.size(1), &dh_emlrtBCI,
                                    &g_st);
    }
    indices[b_i] = static_cast<real_T>(b_i) + 1.0;
  }
  e_st.site = &sab_emlrtRSI;
  f_st.site = &vab_emlrtRSI;
  if (binInx.size(0) == 0) {
    st.site = &rqb_emlrtRSI;
    b_st.site = &agb_emlrtRSI;
    c_st.site = &bgb_emlrtRSI;
    mjd_emlrtRSI.init(c_st, FeatureGraph.NodeProperties.data.f1,
                      FeatureGraph.NodeProperties.data.f2,
                      FeatureGraph.NodeProperties.data.f3);
    st.site = &rqb_emlrtRSI;
    b_ViewSetFeatureGraph::makeEmptyPointTrack(st, tracks);
  } else {
    __m128d b_r;
    __m128d r1;
    int32_T b_iv[2];
    int32_T i1;
    int32_T i2;
    int32_T loop_ub;
    int32_T loop_ub_tmp;
    int32_T scalarLB;
    int32_T vectorUB;
    st.site = &qqb_emlrtRSI;
    FeatureGraph.conncomp(st, indices);
    st.site = &pqb_emlrtRSI;
    b_st.site = &agb_emlrtRSI;
    c_st.site = &bgb_emlrtRSI;
    N.init(c_st, FeatureGraph.NodeProperties.data.f1,
           FeatureGraph.NodeProperties.data.f2,
           FeatureGraph.NodeProperties.data.f3);
    st.site = &oqb_emlrtRSI;
    b_st.site = &agb_emlrtRSI;
    c_st.site = &bgb_emlrtRSI;
    b_N.init(c_st, FeatureGraph.NodeProperties.data.f1,
             FeatureGraph.NodeProperties.data.f2,
             FeatureGraph.NodeProperties.data.f3);
    st.site = &nqb_emlrtRSI;
    b_st.site = &agb_emlrtRSI;
    c_st.site = &bgb_emlrtRSI;
    c_N.init(c_st, FeatureGraph.NodeProperties.data.f1,
             FeatureGraph.NodeProperties.data.f2,
             FeatureGraph.NodeProperties.data.f3);
    st.site = &mqb_emlrtRSI;
    loop_ub = indices.size(1);
    b_binInx.set_size(&tr_emlrtRTEI, &st, indices.size(1));
    for (i = 0; i < loop_ub; i++) {
      b_binInx[i] = indices[i];
    }
    b_st.site = &li_emlrtRSI;
    ::coder::internal::sort(b_st, b_binInx, ii);
    loop_ub = ii.size(0);
    sortInx.set_size(&jnb_emlrtRTEI, &st, ii.size(0));
    for (i = 0; i < loop_ub; i++) {
      sortInx[i] = ii[i];
    }
    if (b_binInx.size(0) < 2) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = b_binInx.size(0);
    }
    b_iv[0] = 1;
    loop_ub = i1 - i;
    b_iv[1] = loop_ub;
    st.site = &lqb_emlrtRSI;
    ::coder::internal::indexShapeCheck(st, b_binInx.size(0), b_iv);
    if (b_binInx.size(0) - 1 < 1) {
      i2 = 0;
    } else {
      if (b_binInx.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_binInx.size(0), &uy_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((b_binInx.size(0) - 1 < 1) ||
          (b_binInx.size(0) - 1 > b_binInx.size(0))) {
        emlrtDynamicBoundsCheckR2012b(b_binInx.size(0) - 1, 1, b_binInx.size(0),
                                      &ty_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = b_binInx.size(0) - 1;
    }
    b_iv[0] = 1;
    b_iv[1] = i2;
    st.site = &lqb_emlrtRSI;
    ::coder::internal::indexShapeCheck(st, b_binInx.size(0), b_iv);
    if ((loop_ub != i2) && ((loop_ub != 1) && (i2 != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, i2, &ge_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (loop_ub == i2) {
      diffBins.set_size(&dsb_emlrtRTEI, &sp, loop_ub + 1);
      diffBins[0] = 1.0;
      scalarLB = (loop_ub / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        b_r = _mm_loadu_pd(&b_binInx[i + i1]);
        r1 = _mm_loadu_pd(&b_binInx[i1]);
        _mm_storeu_pd(&diffBins[i1 + 1], _mm_sub_pd(b_r, r1));
      }
      for (i1 = scalarLB; i1 < loop_ub; i1++) {
        diffBins[i1 + 1] = b_binInx[i + i1] - b_binInx[i1];
      }
    } else {
      st.site = &lqb_emlrtRSI;
      binary_expand_op_53(st, diffBins, b_binInx, i, i1, i2);
    }
    if (diffBins.size(0) - 1 < 1) {
      loop_ub = 0;
    } else {
      if ((diffBins.size(0) - 1 < 1) ||
          (diffBins.size(0) - 1 > diffBins.size(0))) {
        emlrtDynamicBoundsCheckR2012b(diffBins.size(0) - 1, 1, diffBins.size(0),
                                      &sy_emlrtBCI, (emlrtConstCTX)&sp);
      }
      loop_ub = diffBins.size(0) - 1;
    }
    b_iv[0] = 1;
    b_iv[1] = loop_ub;
    st.site = &kqb_emlrtRSI;
    ::coder::internal::indexShapeCheck(st, diffBins.size(0), b_iv);
    if (diffBins.size(0) < 2) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = diffBins.size(0);
    }
    b_iv[0] = 1;
    b_i = i1 - i;
    b_iv[1] = b_i;
    st.site = &kqb_emlrtRSI;
    ::coder::internal::indexShapeCheck(st, diffBins.size(0), b_iv);
    r2.set_size(&esb_emlrtRTEI, &sp, loop_ub);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2[i1] = (diffBins[i1] > 0.0);
    }
    r3.set_size(&fsb_emlrtRTEI, &sp, b_i);
    for (i1 = 0; i1 < b_i; i1++) {
      r3[i1] = (diffBins[i + i1] > 0.0);
    }
    loop_ub = r2.size(0);
    if ((r2.size(0) != b_i) && ((r2.size(0) != 1) && (b_i != 1))) {
      emlrtDimSizeImpxCheckR2021b(r2.size(0), b_i, &fe_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (diffBins.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(diffBins.size(0), 1, diffBins.size(0),
                                    &ry_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (r2.size(0) == r3.size(0)) {
      r4.set_size(&gsb_emlrtRTEI, &sp, r2.size(0) + 1);
      for (i = 0; i < loop_ub; i++) {
        r4[i] = ((!r2[i]) || (!r3[i]));
      }
      r4[r2.size(0)] = !(diffBins[diffBins.size(0) - 1] > 0.0);
    } else {
      st.site = &kqb_emlrtRSI;
      binary_expand_op_52(st, r4, r2, r3, diffBins);
    }
    vectorUB = r4.size(0);
    scalarLB = 0;
    for (b_i = 0; b_i < vectorUB; b_i++) {
      if (r4[b_i]) {
        scalarLB++;
      }
    }
    r5.set_size(&hsb_emlrtRTEI, &sp, scalarLB);
    scalarLB = 0;
    for (b_i = 0; b_i < vectorUB; b_i++) {
      if (r4[b_i]) {
        r5[scalarLB] = b_i;
        scalarLB++;
      }
    }
    loop_ub_tmp = r5.size(0);
    for (i = 0; i < loop_ub_tmp; i++) {
      if (r5[i] > b_binInx.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r5[i], 0, b_binInx.size(0) - 1,
                                      &vy_emlrtBCI, (emlrtConstCTX)&sp);
      }
    }
    if (r5.size(0) == 0) {
      i = c_N.data.f3.size(0) * c_N.data.f3.size(1);
      if (i < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i, &qy_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      st.site = &jqb_emlrtRSI;
      b_ViewSetFeatureGraph::makeEmptyPointTrack(st, tracks);
    } else {
      for (i = 0; i < loop_ub_tmp; i++) {
        if (r5[i] > sortInx.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r5[i], 0, sortInx.size(0) - 1,
                                        &wy_emlrtBCI, (emlrtConstCTX)&sp);
        }
      }
      b_diffBins.set_size(&isb_emlrtRTEI, &sp, r5.size(0));
      for (i = 0; i < loop_ub_tmp; i++) {
        if (r5[i] > diffBins.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(r5[i], 0, diffBins.size(0) - 1,
                                        &xy_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_diffBins[i] = diffBins[r5[i]];
      }
      loop_ub = b_diffBins.size(0);
      diffBins.set_size(&jsb_emlrtRTEI, &sp, b_diffBins.size(0));
      for (i = 0; i < loop_ub; i++) {
        diffBins[i] = b_diffBins[i];
      }
      st.site = &iqb_emlrtRSI;
      b_st.site = &aq_emlrtRSI;
      d_eml_find(b_st, diffBins, ii);
      loop_ub = ii.size(0);
      b_binInx.set_size(&ksb_emlrtRTEI, &st, ii.size(0));
      for (i = 0; i < loop_ub; i++) {
        b_binInx[i] = ii[i];
      }
      if (b_binInx.size(0) - 1 < 1) {
        loop_ub = 0;
      } else {
        if (ii.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, ii.size(0), &py_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if ((b_binInx.size(0) - 1 < 1) || (b_binInx.size(0) - 1 > ii.size(0))) {
          emlrtDynamicBoundsCheckR2012b(b_binInx.size(0) - 1, 1, ii.size(0),
                                        &oy_emlrtBCI, (emlrtConstCTX)&sp);
        }
        loop_ub = b_binInx.size(0) - 1;
      }
      b_iv[0] = 1;
      b_iv[1] = loop_ub;
      st.site = &hqb_emlrtRSI;
      ::coder::internal::indexShapeCheck(st, b_binInx.size(0), b_iv);
      if (b_binInx.size(0) < 2) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = ii.size(0);
      }
      b_iv[0] = 1;
      b_i = i1 - i;
      b_iv[1] = b_i;
      st.site = &hqb_emlrtRSI;
      ::coder::internal::indexShapeCheck(st, b_binInx.size(0), b_iv);
      st.site = &hqb_emlrtRSI;
      diffBins.set_size(&lsb_emlrtRTEI, &st, b_i);
      scalarLB = (b_i / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        b_r = _mm_loadu_pd(&b_binInx[i + i1]);
        _mm_storeu_pd(&diffBins[i1], _mm_sub_pd(b_r, _mm_set1_pd(1.0)));
      }
      for (i1 = scalarLB; i1 < b_i; i1++) {
        diffBins[i1] = b_binInx[i + i1] - 1.0;
      }
      b_st.site = &ij_emlrtRSI;
      c_st.site = &jj_emlrtRSI;
      if (diffBins.size(0) != loop_ub) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      binInx.set_size(&msb_emlrtRTEI, &sp, loop_ub + 1, 2);
      for (i = 0; i < loop_ub; i++) {
        binInx[i] = b_binInx[i];
      }
      b_i = diffBins.size(0);
      for (i = 0; i < b_i; i++) {
        binInx[i + binInx.size(0)] = diffBins[i];
      }
      if (ii.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(ii.size(0), 1, ii.size(0), &yy_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      binInx[loop_ub] = b_binInx[ii.size(0) - 1];
      binInx[loop_ub + binInx.size(0)] = r5.size(0);
      loop_ub = binInx.size(0);
      b_diffBins.set_size(&nsb_emlrtRTEI, &sp, binInx.size(0));
      scalarLB = (binInx.size(0) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        b_r = _mm_loadu_pd(&binInx[i]);
        r1 = _mm_loadu_pd(&binInx[i + binInx.size(0)]);
        _mm_storeu_pd(&b_diffBins[i], _mm_sub_pd(b_r, r1));
      }
      for (i = scalarLB; i < loop_ub; i++) {
        b_diffBins[i] = binInx[i] - binInx[i + binInx.size(0)];
      }
      st.site = &gqb_emlrtRSI;
      b_abs(st, b_diffBins, b_binInx);
      vectorUB = b_binInx.size(0);
      scalarLB = 0;
      for (b_i = 0; b_i < vectorUB; b_i++) {
        if (b_binInx[b_i] + 1.0 >= 2.0) {
          scalarLB++;
        }
      }
      r6.set_size(&hsb_emlrtRTEI, &sp, scalarLB);
      scalarLB = 0;
      for (b_i = 0; b_i < vectorUB; b_i++) {
        if (b_binInx[b_i] + 1.0 >= 2.0) {
          r6[scalarLB] = b_i;
          scalarLB++;
        }
      }
      loop_ub = r6.size(0);
      c_binInx.set_size(&osb_emlrtRTEI, &sp, r6.size(0), 2);
      for (i = 0; i < 2; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          if (r6[i1] > binInx.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(r6[i1], 0, binInx.size(0) - 1,
                                          &aab_emlrtBCI, (emlrtConstCTX)&sp);
          }
          c_binInx[i1 + c_binInx.size(0) * i] =
              binInx[r6[i1] + binInx.size(0) * i];
        }
      }
      i = c_binInx.size(0);
      binInx.set_size(&psb_emlrtRTEI, &sp, c_binInx.size(0), 2);
      scalarLB = c_binInx.size(0) << 1;
      for (i1 = 0; i1 < scalarLB; i1++) {
        binInx[i1] = c_binInx[i1];
      }
      if (binInx.size(0) == 0) {
        i = c_N.data.f3.size(0) * c_N.data.f3.size(1);
        if (i < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i, &ny_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        st.site = &fqb_emlrtRSI;
        b_ViewSetFeatureGraph::makeEmptyPointTrack(st, tracks);
      } else {
        real_T d;
        real_T d1;
        int32_T b_loop_ub;
        int32_T i3;
        st.site = &eqb_emlrtRSI;
        d = binInx[0];
        d1 = binInx[binInx.size(0)];
        if (d > d1) {
          i1 = 0;
          i2 = 0;
        } else {
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > r5.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          r5.size(0), &my_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d) - 1;
          if ((static_cast<int32_T>(d1) < 1) ||
              (static_cast<int32_T>(d1) > r5.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                          r5.size(0), &ly_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d1);
        }
        b_iv[0] = 1;
        loop_ub = i2 - i1;
        b_iv[1] = loop_ub;
        st.site = &dqb_emlrtRSI;
        ::coder::internal::indexShapeCheck(st, r5.size(0), b_iv);
        viewIds.set_size(&qsb_emlrtRTEI, &sp, loop_ub);
        for (i2 = 0; i2 < loop_ub; i2++) {
          i3 = sortInx[r5[i1 + i2]];
          if ((i3 < 1) || (i3 > N.data.f1.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, N.data.f1.size(0),
                                          &bab_emlrtBCI, (emlrtConstCTX)&sp);
          }
          viewIds[i2] = N.data.f1[i3 - 1];
        }
        st.site = &cqb_emlrtRSI;
        b_st.site = &bsb_emlrtRSI;
        unique_vector(b_st, viewIds, b, ii);
        b_i = ii.size(0);
        b_binInx.set_size(&rsb_emlrtRTEI, &st, ii.size(0));
        for (i2 = 0; i2 < b_i; i2++) {
          b_binInx[i2] = ii[i2];
        }
        b.set_size(&ssb_emlrtRTEI, &sp, ii.size(0));
        for (i2 = 0; i2 < b_i; i2++) {
          i3 = static_cast<int32_T>(b_binInx[i2]);
          if ((i3 < 1) || (i3 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub, &cab_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          b[i2] = viewIds[i3 - 1];
        }
        b_loop_ub = c_N.data.f3.size(1);
        d_N.set_size(&tsb_emlrtRTEI, &sp, ii.size(0), c_N.data.f3.size(1));
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          for (i3 = 0; i3 < b_i; i3++) {
            vectorUB = static_cast<int32_T>(b_binInx[i3]);
            if ((vectorUB < 1) || (vectorUB > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &eab_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            vectorUB = sortInx[r5[(i1 + vectorUB) - 1]];
            if ((vectorUB < 1) || (vectorUB > c_N.data.f3.size(0))) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, c_N.data.f3.size(0),
                                            &dab_emlrtBCI, (emlrtConstCTX)&sp);
            }
            d_N[i3 + d_N.size(0) * i2] =
                c_N.data.f3[(vectorUB + c_N.data.f3.size(0) * i2) - 1];
          }
        }
        b_diffBins.set_size(&usb_emlrtRTEI, &sp, ii.size(0));
        for (i2 = 0; i2 < b_i; i2++) {
          i3 = static_cast<int32_T>(b_binInx[i2]);
          if ((i3 < 1) || (i3 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub, &gab_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i3 = sortInx[r5[(i1 + i3) - 1]];
          if ((i3 < 1) || (i3 > b_N.data.f2.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, b_N.data.f2.size(0),
                                          &fab_emlrtBCI, (emlrtConstCTX)&sp);
          }
          b_diffBins[i2] = b_N.data.f2[i3 - 1];
        }
        st.site = &ypb_emlrtRSI;
        tracks.init(st, b, d_N, b_diffBins);
        if (binInx.size(0) - 2 >= 0) {
          b_iv[0] = 1;
          e_N = N.data.f1.size(0);
          f_N = c_N.data.f3.size(0);
          g_N = b_N.data.f2.size(0);
          c_loop_ub = c_N.data.f3.size(1);
        }
        for (b_i = 0; b_i <= i - 2; b_i++) {
          if (b_i + 2 > i) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, i, &hab_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          d = binInx[b_i + 1];
          if (b_i + 2 > i) {
            emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, i, &iab_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          d1 = binInx[(b_i + binInx.size(0)) + 1];
          if (d > d1) {
            i1 = 0;
            i2 = 0;
          } else {
            if ((static_cast<int32_T>(d) < 1) ||
                (static_cast<int32_T>(d) > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            loop_ub_tmp, &ky_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i1 = static_cast<int32_T>(d) - 1;
            if ((static_cast<int32_T>(d1) < 1) ||
                (static_cast<int32_T>(d1) > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                            loop_ub_tmp, &jy_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i2 = static_cast<int32_T>(d1);
          }
          loop_ub = i2 - i1;
          b_iv[1] = loop_ub;
          st.site = &bqb_emlrtRSI;
          ::coder::internal::indexShapeCheck(st, r5.size(0), b_iv);
          viewIds.set_size(&vsb_emlrtRTEI, &sp, loop_ub);
          for (i2 = 0; i2 < loop_ub; i2++) {
            i3 = sortInx[r5[i1 + i2]];
            if ((i3 < 1) || (i3 > e_N)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, e_N, &jab_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            viewIds[i2] = N.data.f1[i3 - 1];
          }
          st.site = &aqb_emlrtRSI;
          b_st.site = &bsb_emlrtRSI;
          unique_vector(b_st, viewIds, b, ii);
          scalarLB = ii.size(0);
          b_binInx.set_size(&rsb_emlrtRTEI, &st, ii.size(0));
          for (i2 = 0; i2 < scalarLB; i2++) {
            b_binInx[i2] = ii[i2];
          }
          st.site = &xpb_emlrtRSI;
          b.set_size(&wsb_emlrtRTEI, &st, ii.size(0));
          for (i2 = 0; i2 < scalarLB; i2++) {
            i3 = static_cast<int32_T>(b_binInx[i2]);
            if ((i3 < 1) || (i3 > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub, &kab_emlrtBCI, &st);
            }
            b[i2] = viewIds[i3 - 1];
          }
          d_N.set_size(&xsb_emlrtRTEI, &st, ii.size(0), b_loop_ub);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            for (i3 = 0; i3 < scalarLB; i3++) {
              vectorUB = static_cast<int32_T>(b_binInx[i3]);
              if ((vectorUB < 1) || (vectorUB > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub,
                                              &mab_emlrtBCI, &st);
              }
              vectorUB = sortInx[r5[(i1 + vectorUB) - 1]];
              if ((vectorUB < 1) || (vectorUB > f_N)) {
                emlrtDynamicBoundsCheckR2012b(vectorUB, 1, f_N, &lab_emlrtBCI,
                                              &st);
              }
              d_N[i3 + d_N.size(0) * i2] =
                  c_N.data.f3[(vectorUB + c_N.data.f3.size(0) * i2) - 1];
            }
          }
          b_diffBins.set_size(&ysb_emlrtRTEI, &st, ii.size(0));
          for (i2 = 0; i2 < scalarLB; i2++) {
            i3 = static_cast<int32_T>(b_binInx[i2]);
            if ((i3 < 1) || (i3 > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub, &oab_emlrtBCI, &st);
            }
            i3 = sortInx[r5[(i1 + i3) - 1]];
            if ((i3 < 1) || (i3 > g_N)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, g_N, &nab_emlrtBCI, &st);
            }
            b_diffBins[i2] = b_N.data.f2[i3 - 1];
          }
          b_st.site = &xpb_emlrtRSI;
          rhs.init(b_st, b, d_N, b_diffBins);
          i1 = tracks.Data.size(0) * tracks.Data.size(1);
          if (b_i + 2 > i1) {
            dataArray.set_size(&atb_emlrtRTEI, &st, 1, b_i + 2);
            for (scalarLB = 0; scalarLB < i1; scalarLB++) {
              if (scalarLB > tracks.Data.size(1) - 1) {
                emlrtDynamicBoundsCheckR2012b(
                    scalarLB, 0, tracks.Data.size(1) - 1, &rab_emlrtBCI, &st);
              }
              if (scalarLB > dataArray.size(1) - 1) {
                emlrtDynamicBoundsCheckR2012b(
                    scalarLB, 0, dataArray.size(1) - 1, &sab_emlrtBCI, &st);
              }
              dataArray[scalarLB] = tracks.Data[scalarLB];
            }
            if (b_i + 1 > dataArray.size(1) - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, dataArray.size(1) - 1,
                                            &qab_emlrtBCI, &st);
            }
            dataArray[b_i + 1] = rhs.Data[0];
            loop_ub = dataArray.size(1);
            tracks.Data.set_size(&btb_emlrtRTEI, &st, 1, dataArray.size(1));
            for (i1 = 0; i1 < loop_ub; i1++) {
              tracks.Data[i1] = dataArray[i1];
            }
          } else {
            if (b_i + 1 > tracks.Data.size(1) - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 0, tracks.Data.size(1) - 1,
                                            &pab_emlrtBCI, &st);
            }
            tracks.Data[b_i + 1] = rhs.Data[0];
          }
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (ViewSetFeatureGraph.cpp)
