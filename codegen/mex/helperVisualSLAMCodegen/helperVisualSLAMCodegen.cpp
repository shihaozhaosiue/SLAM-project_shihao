//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// helperVisualSLAMCodegen.cpp
//
// Code generation for function 'helperVisualSLAMCodegen'
//

// Include files
#include "helperVisualSLAMCodegen.h"
#include "EncoderBinaryFeatures.h"
#include "EncoderVocabularyTree.h"
#include "ORBPoints.h"
#include "PointTracker.h"
#include "all.h"
#include "bagOfFeatures.h"
#include "binaryFeatures.h"
#include "bundleAdjustment.h"
#include "cameraIntrinsics.h"
#include "cameraIntrinsicsArray.h"
#include "cameraProjection.h"
#include "checkTransformationMatrixCondition.h"
#include "constrainToRotationMatrix3D.h"
#include "cosd.h"
#include "detectORBFeatures.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "epipolarLine.h"
#include "error.h"
#include "estgeotform2d.h"
#include "estimateEssentialMatrix.h"
#include "estrelpose.h"
#include "extractFeatures.h"
#include "find.h"
#include "helperAddLoopConnections.h"
#include "helperAddNewKeyFrame.h"
#include "helperCheckLoopClosureCg.h"
#include "helperCreateNewMapPoints.h"
#include "helperTrackLastKeyFrameKLT.h"
#include "helperTrackLocalMapCg.h"
#include "helperVisualSLAMCodegen_data.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "helperVisualSLAMCodegen_mexutil.h"
#include "helperVisualSLAMCodegen_types.h"
#include "imageviewset.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "invertedImageIndex.h"
#include "ismember.h"
#include "matchFeatures.h"
#include "median.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "norm.h"
#include "nullAssignment.h"
#include "pointTrack.h"
#include "pose2extr.h"
#include "projtform2d.h"
#include "rigidtform3d.h"
#include "rigidtform3dImpl.h"
#include "rng.h"
#include "rt_nonfinite.h"
#include "sparse1.h"
#include "string1.h"
#include "sum.h"
#include "svd.h"
#include "table.h"
#include "triangulate.h"
#include "vecnorm.h"
#include "warning.h"
#include "worldpointset.h"
#include "blas.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "extractORBCore_api.hpp"
#include "mwmathutil.h"
#include "omp.h"
#include <algorithm>
#include <cstddef>
#include <emmintrin.h>
#include <xmmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{ 3,        // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo b_emlrtRSI{ 14,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo c_emlrtRSI{ 20,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo d_emlrtRSI{ 35,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo e_emlrtRSI{ 40,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo f_emlrtRSI{ 53,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo g_emlrtRSI{ 56,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo h_emlrtRSI{ 66,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo i_emlrtRSI{ 67,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo j_emlrtRSI{ 68,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo k_emlrtRSI{ 74,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo l_emlrtRSI{ 75,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo m_emlrtRSI{ 76,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo n_emlrtRSI{ 88,     // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo o_emlrtRSI{ 101,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo p_emlrtRSI{ 111,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo q_emlrtRSI{ 116,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo r_emlrtRSI{ 120,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo s_emlrtRSI{ 123,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo t_emlrtRSI{ 126,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo u_emlrtRSI{ 129,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo v_emlrtRSI{ 138,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo w_emlrtRSI{ 141,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo x_emlrtRSI{ 142,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo y_emlrtRSI{ 145,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ab_emlrtRSI{ 146,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo bb_emlrtRSI{ 150,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo cb_emlrtRSI{ 153,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo db_emlrtRSI{ 159,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo eb_emlrtRSI{ 164,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo fb_emlrtRSI{ 166,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo gb_emlrtRSI{ 167,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo hb_emlrtRSI{ 169,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ib_emlrtRSI{ 172,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo jb_emlrtRSI{ 175,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo kb_emlrtRSI{ 178,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo lb_emlrtRSI{ 202,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo mb_emlrtRSI{ 203,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo nb_emlrtRSI{ 207,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ob_emlrtRSI{ 210,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo pb_emlrtRSI{ 209,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo qb_emlrtRSI{ 226,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo rb_emlrtRSI{ 243,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo sb_emlrtRSI{ 246,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo tb_emlrtRSI{ 250,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ub_emlrtRSI{ 254,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo vb_emlrtRSI{ 257,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo wb_emlrtRSI{ 259,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo xb_emlrtRSI{ 265,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo yb_emlrtRSI{ 268,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ac_emlrtRSI{ 271,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo bc_emlrtRSI{ 272,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo cc_emlrtRSI{ 280,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo dc_emlrtRSI{ 285,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ec_emlrtRSI{ 293,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo fc_emlrtRSI{ 306,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo gc_emlrtRSI{ 308,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo hc_emlrtRSI{ 311,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ic_emlrtRSI{ 316,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo jc_emlrtRSI{ 318,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo kc_emlrtRSI{ 324,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo lc_emlrtRSI{ 325,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo mc_emlrtRSI{ 326,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo nc_emlrtRSI{ 327,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo oc_emlrtRSI{ 348,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo pc_emlrtRSI{ 354,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo qc_emlrtRSI{ 26,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo rc_emlrtRSI{ 28,    // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo sc_emlrtRSI{ 103,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo tc_emlrtRSI{ 106,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo uc_emlrtRSI{ 152,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo vc_emlrtRSI{ 241,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo wc_emlrtRSI{ 136,   // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo id_emlrtRSI{ 448,   // lineNo
  "helperDetectAndExtractFeatures",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo jd_emlrtRSI{ 451,   // lineNo
  "helperDetectAndExtractFeatures",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo kd_emlrtRSI{ 454,   // lineNo
  "helperDetectAndExtractFeatures",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo fk_emlrtRSI{ 367,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo gk_emlrtRSI{ 371,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo hk_emlrtRSI{ 374,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ik_emlrtRSI{ 375,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo jk_emlrtRSI{ 376,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo kk_emlrtRSI{ 377,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo lk_emlrtRSI{ 381,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo mk_emlrtRSI{ 382,   // lineNo
  "helperComputeHomography",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo iq_emlrtRSI{ 398,   // lineNo
  "MatrixTransformation/transformPackedPoints",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pathName
};

static emlrtRSInfo jq_emlrtRSI{ 404,   // lineNo
  "MatrixTransformation/transformPackedPoints",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pathName
};

static emlrtRSInfo kq_emlrtRSI{ 409,   // lineNo
  "MatrixTransformation/transformPackedPoints",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pathName
};

static emlrtRSInfo lq_emlrtRSI{ 241,   // lineNo
  "MatrixTransformation/transformPointsInverse",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pathName
};

static emlrtRSInfo mq_emlrtRSI{ 395,   // lineNo
  "MatrixTransformation/transformPackedPoints",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pathName
};

static emlrtRSInfo nq_emlrtRSI{ 406,   // lineNo
  "MatrixTransformation/transformPackedPoints",// fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pathName
};

static emlrtRSInfo wq_emlrtRSI{ 388,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo xq_emlrtRSI{ 391,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo yq_emlrtRSI{ 396,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ar_emlrtRSI{ 399,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo br_emlrtRSI{ 400,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo cr_emlrtRSI{ 401,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo dr_emlrtRSI{ 402,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo er_emlrtRSI{ 403,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo fr_emlrtRSI{ 404,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo gr_emlrtRSI{ 405,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo hr_emlrtRSI{ 406,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ir_emlrtRSI{ 407,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo jr_emlrtRSI{ 408,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo kr_emlrtRSI{ 412,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo lr_emlrtRSI{ 413,   // lineNo
  "helperComputeFundamentalMatrix",    // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ww_emlrtRSI{ 422,   // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo xw_emlrtRSI{ 423,   // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo yw_emlrtRSI{ 424,   // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ax_emlrtRSI{ 435,   // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo bx_emlrtRSI{ 438,   // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ux_emlrtRSI{ 11,    // lineNo
  "cameraMatrixImpl",                  // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+calibration\\cameraMatrixImpl.m"// pathName
};

static emlrtRSInfo vx_emlrtRSI{ 48,    // lineNo
  "parseInputs",                       // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+calibration\\cameraMatrixImpl.m"// pathName
};

static emlrtRSInfo wx_emlrtRSI{ 6,     // lineNo
  "constructCameraMatrix",             // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\constructCameraMatrix.m"// pathName
};

static emlrtRSInfo csb_emlrtRSI{ 760,  // lineNo
  "imageviewset/poses",                // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\+imageviewset\\imageviewset.m"// pathName
};

static emlrtRSInfo opc_emlrtRSI{ 358,  // lineNo
  "helperCullRecentMapPoints",         // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ppc_emlrtRSI{ 360,  // lineNo
  "helperCullRecentMapPoints",         // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo qpc_emlrtRSI{ 385,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo rpc_emlrtRSI{ 384,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo spc_emlrtRSI{ 380,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo tpc_emlrtRSI{ 379,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo upc_emlrtRSI{ 373,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo vpc_emlrtRSI{ 368,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo wpc_emlrtRSI{ 367,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo xpc_emlrtRSI{ 361,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo ypc_emlrtRSI{ 360,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo aqc_emlrtRSI{ 353,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo bqc_emlrtRSI{ 345,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo cqc_emlrtRSI{ 342,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo dqc_emlrtRSI{ 341,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtRSInfo eqc_emlrtRSI{ 340,  // lineNo
  "worldpointset/removeWorldPoints",   // fcnName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pathName
};

static emlrtBCInfo emlrtBCI{ -1,       // iFirst
  -1,                                  // iLast
  272,                                 // lineNo
  52,                                  // colNo
  "index2d",                           // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtECInfo emlrtECI{ 1,        // nDims
  339,                                 // lineNo
  15,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtBCInfo b_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  257,                                 // lineNo
  35,                                  // colNo
  "fixedViewIds",                      // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo c_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  257,                                 // lineNo
  33,                                  // colNo
  "fixedViewIds",                      // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  43,                                  // lineNo
  43,                                  // colNo
  "prePoints.Location",                // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo e_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  44,                                  // lineNo
  45,                                  // colNo
  "currPoints.Location",               // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo f_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  44,                                  // colNo
  "preMatchedPoints",                  // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo g_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  66,                                  // lineNo
  44,                                  // colNo
  "preMatchedPoints",                  // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo h_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  75,                                  // lineNo
  46,                                  // colNo
  "currMatchedPoints",                 // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo i_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  67,                                  // lineNo
  46,                                  // colNo
  "currMatchedPoints",                 // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo j_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  86,                                  // lineNo
  35,                                  // colNo
  "preMatchedPoints",                  // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo k_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  87,                                  // lineNo
  36,                                  // colNo
  "currMatchedPoints",                 // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo l_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  29,                                  // colNo
  "indexPairs",                        // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo m_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  44,                                  // colNo
  "inlierTformIdx",                    // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo n_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  203,                                 // lineNo
  41,                                  // colNo
  "currPoints.Location",               // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo o_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  256,                                 // lineNo
  39,                                  // colNo
  "refinedKeyFrameIds",                // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo p_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  272,                                 // lineNo
  44,                                  // colNo
  "currPoints.Location",               // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo emlrtDCI{ 272,      // lineNo
  44,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo q_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  343,                                 // lineNo
  25,                                  // colNo
  "xyzPoints",                         // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo r_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  348,                                 // lineNo
  1,                                   // colNo
  "pose",                              // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo s_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  5,                                   // colNo
  "optimizedPose",                     // aName
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtECInfo m_emlrtECI{ -1,     // nDims
  409,                                 // lineNo
  17,                                  // colNo
  "MatrixTransformation/transformPackedPoints",// fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pName
};

static emlrtECInfo n_emlrtECI{ 1,      // nDims
  377,                                 // lineNo
  19,                                  // colNo
  "helperComputeHomography",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtECInfo o_emlrtECI{ 1,      // nDims
  376,                                 // lineNo
  19,                                  // colNo
  "helperComputeHomography",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtBCInfo fd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  372,                                 // lineNo
  29,                                  // colNo
  "matchedPoints1",                    // aName
  "helperComputeHomography",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  373,                                 // lineNo
  29,                                  // colNo
  "matchedPoints2",                    // aName
  "helperComputeHomography",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtECInfo v_emlrtECI{ 2,      // nDims
  406,                                 // lineNo
  21,                                  // colNo
  "helperComputeFundamentalMatrix",    // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtECInfo w_emlrtECI{ 1,      // nDims
  406,                                 // lineNo
  21,                                  // colNo
  "helperComputeFundamentalMatrix",    // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtECInfo x_emlrtECI{ 2,      // nDims
  401,                                 // lineNo
  21,                                  // colNo
  "helperComputeFundamentalMatrix",    // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtECInfo y_emlrtECI{ 1,      // nDims
  401,                                 // lineNo
  21,                                  // colNo
  "helperComputeFundamentalMatrix",    // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtBCInfo rd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  393,                                 // lineNo
  29,                                  // colNo
  "matchedPoints1",                    // aName
  "helperComputeFundamentalMatrix",    // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  394,                                 // lineNo
  29,                                  // colNo
  "matchedPoints2",                    // aName
  "helperComputeFundamentalMatrix",    // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtECInfo eb_emlrtECI{ 1,     // nDims
  435,                                 // lineNo
  39,                                  // colNo
  "helperTriangulateTwoFrames",        // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtECInfo fb_emlrtECI{ 2,     // nDims
  434,                                 // lineNo
  14,                                  // colNo
  "helperTriangulateTwoFrames",        // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtECInfo gb_emlrtECI{ 1,     // nDims
  429,                                 // lineNo
  14,                                  // colNo
  "helperTriangulateTwoFrames",        // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtBCInfo bf_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  430,                                 // lineNo
  24,                                  // colNo
  "xyzPoints",                         // aName
  "helperTriangulateTwoFrames",        // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ld_emlrtDCI{ 366,   // lineNo
  48,                                  // colNo
  "worldpointset/removeWorldPoints",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo lib_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  369,                                 // lineNo
  33,                                  // colNo
  "",                                  // aName
  "worldpointset/removeWorldPoints",   // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo th_emlrtRTEI{ 27,  // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo vh_emlrtRTEI{ 30,  // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo wh_emlrtRTEI{ 43,  // lineNo
  5,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo xh_emlrtRTEI{ 44,  // lineNo
  5,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo yh_emlrtRTEI{ 74,  // lineNo
  9,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ai_emlrtRTEI{ 75,  // lineNo
  9,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo bi_emlrtRTEI{ 63,  // lineNo
  9,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ci_emlrtRTEI{ 66,  // lineNo
  9,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo di_emlrtRTEI{ 67,  // lineNo
  9,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ei_emlrtRTEI{ 86,  // lineNo
  18,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo fi_emlrtRTEI{ 87,  // lineNo
  18,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo gi_emlrtRTEI{ 1,   // lineNo
  16,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo hi_emlrtRTEI{ 96,  // lineNo
  18,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ii_emlrtRTEI{ 96,  // lineNo
  5,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ji_emlrtRTEI{ 126, // lineNo
  73,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ki_emlrtRTEI{ 129, // lineNo
  74,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo li_emlrtRTEI{ 159, // lineNo
  32,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo mi_emlrtRTEI{ 34,  // lineNo
  1,                                   // colNo
  "rdivide_helper",                    // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"// pName
};

static emlrtRTEInfo oi_emlrtRTEI{ 190, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo pi_emlrtRTEI{ 197, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo qi_emlrtRTEI{ 199, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ri_emlrtRTEI{ 203, // lineNo
  21,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo si_emlrtRTEI{ 309, // lineNo
  69,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ti_emlrtRTEI{ 316, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ui_emlrtRTEI{ 339, // lineNo
  15,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo vi_emlrtRTEI{ 340, // lineNo
  5,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo wi_emlrtRTEI{ 340, // lineNo
  28,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo xi_emlrtRTEI{ 341, // lineNo
  5,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo yi_emlrtRTEI{ 341, // lineNo
  28,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo aj_emlrtRTEI{ 342, // lineNo
  5,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo bj_emlrtRTEI{ 345, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo cj_emlrtRTEI{ 346, // lineNo
  54,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo dj_emlrtRTEI{ 352, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ej_emlrtRTEI{ 353, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo fj_emlrtRTEI{ 260, // lineNo
  37,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo gj_emlrtRTEI{ 272, // lineNo
  24,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ln_emlrtRTEI{ 371, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo mn_emlrtRTEI{ 365, // lineNo
  37,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo nn_emlrtRTEI{ 372, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo on_emlrtRTEI{ 372, // lineNo
  14,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo qn_emlrtRTEI{ 409, // lineNo
  28,                                  // colNo
  "MatrixTransformation",              // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pName
};

static emlrtRTEInfo rn_emlrtRTEI{ 409, // lineNo
  40,                                  // colNo
  "MatrixTransformation",              // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pName
};

static emlrtRTEInfo sn_emlrtRTEI{ 374, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo wn_emlrtRTEI{ 373, // lineNo
  14,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo xn_emlrtRTEI{ 375, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo yn_emlrtRTEI{ 395, // lineNo
  26,                                  // colNo
  "MatrixTransformation",              // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+geotrans\\+internal\\MatrixTransformation.m"// pName
};

static emlrtRTEInfo fq_emlrtRTEI{ 386, // lineNo
  46,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo gq_emlrtRTEI{ 396, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo hq_emlrtRTEI{ 394, // lineNo
  14,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo iq_emlrtRTEI{ 393, // lineNo
  14,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo jq_emlrtRTEI{ 400, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo kq_emlrtRTEI{ 401, // lineNo
  21,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo lq_emlrtRTEI{ 402, // lineNo
  13,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo mq_emlrtRTEI{ 405, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo nq_emlrtRTEI{ 406, // lineNo
  21,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo fs_emlrtRTEI{ 429, // lineNo
  26,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo gs_emlrtRTEI{ 419, // lineNo
  44,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo hs_emlrtRTEI{ 430, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo is_emlrtRTEI{ 433, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo js_emlrtRTEI{ 434, // lineNo
  1,                                   // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ks_emlrtRTEI{ 435, // lineNo
  18,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ls_emlrtRTEI{ 438, // lineNo
  15,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo ms_emlrtRTEI{ 438, // lineNo
  46,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo fbc_emlrtRTEI{ 345,// lineNo
  29,                                  // colNo
  "worldpointset",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pName
};

static emlrtRTEInfo gbc_emlrtRTEI{ 345,// lineNo
  13,                                  // colNo
  "worldpointset",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pName
};

static emlrtRTEInfo hbc_emlrtRTEI{ 366,// lineNo
  42,                                  // colNo
  "worldpointset",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pName
};

static emlrtRTEInfo ibc_emlrtRTEI{ 379,// lineNo
  17,                                  // colNo
  "worldpointset",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pName
};

static emlrtRTEInfo jbc_emlrtRTEI{ 380,// lineNo
  17,                                  // colNo
  "worldpointset",                     // fName
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\worldpointset.m"// pName
};

static emlrtRTEInfo tec_emlrtRTEI{ 377,// lineNo
  19,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo vec_emlrtRTEI{ 412,// lineNo
  18,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo wec_emlrtRTEI{ 413,// lineNo
  13,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRTEInfo yec_emlrtRTEI{ 435,// lineNo
  39,                                  // colNo
  "helperVisualSLAMCodegen",           // fName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pName
};

static emlrtRSInfo lid_emlrtRSI{ 339,  // lineNo
  "helperVisualSLAMCodegen",           // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo rid_emlrtRSI{ 429,  // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

static emlrtRSInfo ajd_emlrtRSI{ 434,  // lineNo
  "helperTriangulateTwoFrames",        // fcnName
  "C:\\Shihao_research\\Robotic Vision-ME-462-001-202515\\SLAM project_shihao\\helperVisualSLAMCodegen.m"// pathName
};

// Function Declarations
static void b_helperDetectAndExtractFeature(c_helperVisualSLAMCodegenStackD *SD,
  const emlrtStack &sp, const uint8_T Irgb[307200], coder::b_binaryFeatures &
  features, coder::ORBPoints &validPoints);
static void b_helperDetectAndExtractFeature(c_helperVisualSLAMCodegenStackD *SD,
  const emlrtStack &sp, const uint8_T Irgb[307200], coder::binaryFeatures &
  features, coder::ORBPoints &validPoints);
static void binary_expand_op_1(const emlrtStack &sp, coder::array<real32_T, 1U>
  &in1, const emlrtRSInfo in2, const coder::array<real32_T, 2U> &in4, const
  coder::array<int32_T, 1U> &in5, const coder::array<real32_T, 2U> &in6);
static real32_T binary_expand_op_11(const emlrtStack &sp, const emlrtRSInfo in1,
  const coder::array<real32_T, 1U> &in3, const coder::array<real_T, 1U> &in4,
  const emlrtRSInfo in5, const coder::array<real32_T, 1U> &in6, const coder::
  array<real_T, 1U> &in7);
static void binary_expand_op_12(const emlrtStack &sp, coder::array<real32_T, 1U>
  &in1, const emlrtRSInfo in2, const coder::array<real32_T, 2U> &in3, const
  coder::array<real_T, 2U> &in4);
static void binary_expand_op_15(const emlrtStack &sp, coder::array<real32_T, 2U>
  &in1, const coder::array<real32_T, 2U> &in2, const coder::array<int32_T, 1U>
  &in3, const coder::rigidtform3d &in4);
static real32_T helperComputeFundamentalMatrix(const emlrtStack &sp, const coder::
  array<real32_T, 2U> &matchedPoints1, const coder::array<real32_T, 2U>
  &matchedPoints2, const coder::cameraIntrinsics &intrinsics, real32_T FActual[9],
  coder::array<real_T, 1U> &inliersIndex);
static real32_T helperComputeHomography(const emlrtStack &sp, const coder::array<
  real32_T, 2U> &matchedPoints1, const coder::array<real32_T, 2U>
  &matchedPoints2, coder::projtform2d &H, coder::array<real_T, 1U> &inliersIndex);
static void helperCullRecentMapPoints(const emlrtStack &sp, coder::worldpointset
  &mapPointSet, const coder::array<real_T, 1U> &mapPointsIdx, const coder::array<
  real_T, 1U> &newPointIdx);
static boolean_T helperTriangulateTwoFrames(const emlrtStack &sp, const coder::
  c_rigidtform3d &pose1, const coder::rigidtform3d &pose2, const coder::array<
  real32_T, 2U> &matchedPoints1, const coder::array<real32_T, 2U>
  &matchedPoints2, const coder::cameraIntrinsics &intrinsics, coder::array<
  real32_T, 2U> &xyzPoints, coder::array<boolean_T, 1U> &inlierIdx);

// Function Definitions
static void b_helperDetectAndExtractFeature(c_helperVisualSLAMCodegenStackD *SD,
  const emlrtStack &sp, const uint8_T Irgb[307200], coder::b_binaryFeatures &
  features, coder::ORBPoints &validPoints)
{
  void *pFtrs;
  void *pVPts;
  coder::b_ORBPoints b_points;
  coder::b_ORBPoints points;
  coder::array<real32_T, 2U> vLoc;
  coder::array<real32_T, 1U> vMet;
  coder::array<real32_T, 1U> vOri;
  coder::array<real32_T, 1U> vScl;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ptsStruct_Location_size[2];
  int32_T PatchSize;
  int32_T inMet_size;
  int32_T inOri_size;
  int32_T numPtsOut;
  real32_T ptsStruct_Location_data[2000];
  real32_T inMet_data[1000];
  real32_T inOri_data[1000];
  real32_T inScl_data[1000];
  real32_T ScaleFactor;
  uint8_T NumLevels;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // --------------------------------------------------------------------------
  //  Detect ORB features
  st.site = &id_emlrtRSI;
  coder::b_detectORBFeatures(SD, st, Irgb, points);

  //  Select a subset of features, uniformly distributed throughout the image
  st.site = &jd_emlrtRSI;
  points.selectUniform(st, b_points);

  //  Extract features
  st.site = &kd_emlrtRSI;
  b_st.site = &sf_emlrtRSI;
  coder::parseInputs(b_st, b_points);
  b_st.site = &tf_emlrtRSI;
  std::copy(&Irgb[0], &Irgb[307200], &SD->f4.Iu8[0]);
  c_st.site = &yf_emlrtRSI;
  coder::parseORBInputs(c_st, b_points, ptsStruct_Location_data,
                        ptsStruct_Location_size, inScl_data, inMet_data,
                        inMet_size, inOri_data, inOri_size, ScaleFactor,
                        NumLevels, PatchSize);
  c_st.site = &ag_emlrtRSI;
  pVPts = nullptr;
  pFtrs = nullptr;
  numPtsOut = extractORBComputeCM(&SD->f4.Iu8[0], 480, 640,
    &ptsStruct_Location_data[0], &inOri_data[0], &inMet_data[0], &inScl_data[0],
    ptsStruct_Location_size[0], 307200, 1.2F, 8, 31, 0, 2, 0, 31, 20, &pVPts,
    &pFtrs);
  if (numPtsOut < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(numPtsOut), &g_emlrtDCI,
      &c_st);
  }

  vLoc.set_size(&rk_emlrtRTEI, &c_st, numPtsOut, 2);
  vMet.set_size(&sk_emlrtRTEI, &c_st, numPtsOut);
  vScl.set_size(&tk_emlrtRTEI, &c_st, numPtsOut);
  vOri.set_size(&uk_emlrtRTEI, &c_st, numPtsOut);
  features.Features.set_size(&vk_emlrtRTEI, &c_st, numPtsOut, 32);
  extractORBAssignOutputCM(pVPts, pFtrs, &vLoc[0], &(vOri.data())[0],
    &(vMet.data())[0], &(vScl.data())[0], &features.Features[0]);
  features.NumBits = 256.0;
  numPtsOut = vScl.size(0);
  inMet_size = (vScl.size(0) / 4) << 2;
  inOri_size = inMet_size - 4;
  for (PatchSize = 0; PatchSize <= inOri_size; PatchSize += 4) {
    __m128 b_r;
    b_r = _mm_loadu_ps(&vScl[PatchSize]);
    _mm_storeu_ps(&vScl[PatchSize], _mm_div_ps(b_r, _mm_set1_ps(31.0F)));
  }

  for (PatchSize = inMet_size; PatchSize < numPtsOut; PatchSize++) {
    vScl[PatchSize] = vScl[PatchSize] / 31.0F;
  }

  c_st.site = &bg_emlrtRSI;
  validPoints.init(c_st, vLoc, vScl, vOri, vMet);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void b_helperDetectAndExtractFeature(c_helperVisualSLAMCodegenStackD *SD,
  const emlrtStack &sp, const uint8_T Irgb[307200], coder::binaryFeatures &
  features, coder::ORBPoints &validPoints)
{
  coder::b_ORBPoints b_points;
  coder::b_ORBPoints points;
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // --------------------------------------------------------------------------
  //  Detect ORB features
  st.site = &id_emlrtRSI;
  coder::b_detectORBFeatures(SD, st, Irgb, points);

  //  Select a subset of features, uniformly distributed throughout the image
  st.site = &jd_emlrtRSI;
  points.selectUniform(st, b_points);

  //  Extract features
  st.site = &kd_emlrtRSI;
  b_st.site = &sf_emlrtRSI;
  coder::parseInputs(b_st, b_points);
  b_st.site = &tf_emlrtRSI;
  coder::b_extractORBFeatures(SD, b_st, Irgb, b_points, features, validPoints);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_1(const emlrtStack &sp, coder::array<real32_T, 1U>
  &in1, const emlrtRSInfo in2, const coder::array<real32_T, 2U> &in4, const
  coder::array<int32_T, 1U> &in5, const coder::array<real32_T, 2U> &in6)
{
  coder::array<real32_T, 2U> b_in4;
  coder::array<real32_T, 2U> b_r;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in6.size(0) == 1) {
    loop_ub = in5.size(0);
  } else {
    loop_ub = in6.size(0);
  }

  b_in4.set_size(&tec_emlrtRTEI, &sp, loop_ub, 2);
  stride_0_0 = (in5.size(0) != 1);
  stride_1_0 = (in6.size(0) != 1);
  for (int32_T i{0}; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in4[i1 + b_in4.size(0) * i] = in4[in5[i1 * stride_0_0] + in4.size(0) * i]
        - in6[i1 * stride_1_0 + in6.size(0) * i];
    }
  }

  b_r.set_size(&ao_emlrtRTEI, &sp, loop_ub, 2);
  loop_ub = b_in4.size(0) << 1;
  for (int32_T i{0}; i < loop_ub; i++) {
    real32_T varargin_1;
    varargin_1 = b_in4[i];
    b_r[i] = varargin_1 * varargin_1;
  }

  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::sum(st, b_r, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static real32_T binary_expand_op_11(const emlrtStack &sp, const emlrtRSInfo in1,
  const coder::array<real32_T, 1U> &in3, const coder::array<real_T, 1U> &in4,
  const emlrtRSInfo in5, const coder::array<real32_T, 1U> &in6, const coder::
  array<real_T, 1U> &in7)
{
  coder::array<real32_T, 1U> b_r;
  coder::array<real32_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  real32_T out1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &sp;
  b_st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }

  b_r.set_size(&vec_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_r[i] = 4.0F - in3[i * stride_0_0] / static_cast<real32_T>(in4[i *
      stride_1_0]);
  }

  for (int32_T i{0}; i < loop_ub; i++) {
    out1 = b_r[i];
    b_r[i] = muSingleScalarMax(out1, 0.0F);
  }

  if (in7.size(0) == 1) {
    loop_ub = in6.size(0);
  } else {
    loop_ub = in7.size(0);
  }

  r1.set_size(&wec_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in6.size(0) != 1);
  stride_1_0 = (in7.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r1[i] = 4.0F - in6[i * stride_0_0] / static_cast<real32_T>(in7[i *
      stride_1_0]);
  }

  for (int32_T i{0}; i < loop_ub; i++) {
    out1 = r1[i];
    r1[i] = muSingleScalarMax(out1, 0.0F);
  }

  st.site = const_cast<emlrtRSInfo *>(&in1);
  b_st.site = const_cast<emlrtRSInfo *>(&in5);
  out1 = coder::sum(st, b_r) + coder::sum(b_st, r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return out1;
}

static void binary_expand_op_12(const emlrtStack &sp, coder::array<real32_T, 1U>
  &in1, const emlrtRSInfo in2, const coder::array<real32_T, 2U> &in3, const
  coder::array<real_T, 2U> &in4)
{
  coder::array<real32_T, 2U> b_in3;
  emlrtStack st;
  int32_T aux_0_1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }

  b_in3.set_size(&nq_emlrtRTEI, &sp, loop_ub, 3);
  stride_0_0 = (in3.size(0) != 1);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_0 = (in4.size(0) != 1);
  aux_0_1 = 0;
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] = in3[i1 * stride_0_0 + in3.size(0) *
        aux_0_1] * static_cast<real32_T>(in4[i1 * stride_1_0 + in4.size(0) * i]);
    }

    aux_0_1 += stride_0_1;
  }

  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_sum(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_15(const emlrtStack &sp, coder::array<real32_T, 2U>
  &in1, const coder::array<real32_T, 2U> &in2, const coder::array<int32_T, 1U>
  &in3, const coder::rigidtform3d &in4)
{
  int32_T aux_0_1;
  int32_T loop_ub;
  int32_T stride_0_1;
  loop_ub = in3.size(0);
  in1.set_size(&js_emlrtRTEI, &sp, loop_ub, 3);
  stride_0_1 = (in4.Translation.size[1] != 1);
  aux_0_1 = 0;
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = in2[in3[i1] + in2.size(0) * i] -
        in4.Translation.data[aux_0_1];
    }

    aux_0_1 += stride_0_1;
  }
}

static real32_T helperComputeFundamentalMatrix(const emlrtStack &sp, const coder::
  array<real32_T, 2U> &matchedPoints1, const coder::array<real32_T, 2U>
  &matchedPoints2, const coder::cameraIntrinsics &intrinsics, real32_T FActual[9],
  coder::array<real_T, 1U> &inliersIndex)
{
  __m128d b_r;
  __m128d b_r1;
  coder::array<real_T, 2U> b_r3;
  coder::array<real_T, 2U> lineIn1;
  coder::array<real_T, 1U> b_y;
  coder::array<real_T, 1U> y;
  coder::array<int32_T, 1U> b_r2;
  coder::array<int32_T, 1U> ii;
  coder::array<real32_T, 2U> b_matchedPoints2;
  coder::array<real32_T, 2U> b_updatedLocations1;
  coder::array<real32_T, 2U> updatedLocations1;
  coder::array<real32_T, 1U> r4;
  coder::array<real32_T, 1U> sumLocations1;
  coder::array<real32_T, 1U> x;
  coder::array<boolean_T, 1U> inliersLogicalIndex;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T A_data[9];
  real_T F[9];
  real_T b_intrinsics[9];
  real_T a21;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T maxval;
  int32_T A_size[2];
  int32_T E_size[2];
  int32_T F_tmp;
  int32_T i;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  real32_T scoreOut;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
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
  g_st.prev = &sp;
  g_st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // --------------------------------------------------------------------------
  st.site = &wq_emlrtRSI;
  coder::estimateEssentialMatrix(st, matchedPoints1, matchedPoints2, intrinsics,
    F, E_size, inliersLogicalIndex);
  st.site = &xq_emlrtRSI;
  for (i = 0; i < 3; i++) {
    b_intrinsics[3 * i] = intrinsics.K[i];
    b_intrinsics[3 * i + 1] = intrinsics.K[i + 3];
    b_intrinsics[3 * i + 2] = intrinsics.K[i + 6];
  }

  b_st.site = &xq_emlrtRSI;
  coder::mldivide(b_st, b_intrinsics, F, E_size, A_data, A_size);
  std::copy(&intrinsics.K[0], &intrinsics.K[9], &b_intrinsics[0]);
  if (A_size[1] != 3) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  b_st.site = &oq_emlrtRSI;
  c_st.site = &pq_emlrtRSI;
  d_st.site = &an_emlrtRSI;
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muDoubleScalarAbs(intrinsics.K[0]);
  a21 = muDoubleScalarAbs(intrinsics.K[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (muDoubleScalarAbs(intrinsics.K[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  b_intrinsics[r2] = intrinsics.K[r2] / intrinsics.K[r1];
  b_intrinsics[r3] /= b_intrinsics[r1];
  b_intrinsics[r2 + 3] -= b_intrinsics[r2] * b_intrinsics[r1 + 3];
  b_intrinsics[r3 + 3] -= b_intrinsics[r3] * b_intrinsics[r1 + 3];
  b_intrinsics[r2 + 6] -= b_intrinsics[r2] * b_intrinsics[r1 + 6];
  b_intrinsics[r3 + 6] -= b_intrinsics[r3] * b_intrinsics[r1 + 6];
  if (muDoubleScalarAbs(b_intrinsics[r3 + 3]) > muDoubleScalarAbs
      (b_intrinsics[r2 + 3])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  b_intrinsics[r3 + 3] /= b_intrinsics[r2 + 3];
  b_intrinsics[r3 + 6] -= b_intrinsics[r3 + 3] * b_intrinsics[r2 + 6];
  if ((b_intrinsics[r1] == 0.0) || (b_intrinsics[r2 + 3] == 0.0) ||
      (b_intrinsics[r3 + 6] == 0.0)) {
    e_st.site = &bn_emlrtRSI;
    if (!emlrtSetWarningFlag(&e_st)) {
      f_st.site = &cn_emlrtRSI;
      coder::internal::b_warning(f_st);
    }
  }

  b_r = _mm_loadu_pd(&A_data[0]);
  _mm_storeu_pd(&F[3 * r1], _mm_div_pd(b_r, _mm_set1_pd(b_intrinsics[r1])));
  b_r = _mm_loadu_pd(&F[3 * r1]);
  b_r1 = _mm_loadu_pd(&A_data[3]);
  maxval = b_intrinsics[r1 + 3];
  _mm_storeu_pd(&F[3 * r2], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(maxval))));
  b_r = _mm_loadu_pd(&F[3 * r1]);
  b_r1 = _mm_loadu_pd(&A_data[6]);
  a21 = b_intrinsics[r1 + 6];
  _mm_storeu_pd(&F[3 * r3], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(a21))));
  b_r = _mm_loadu_pd(&F[3 * r2]);
  d = b_intrinsics[r2 + 3];
  _mm_storeu_pd(&F[3 * r2], _mm_div_pd(b_r, _mm_set1_pd(d)));
  b_r = _mm_loadu_pd(&F[3 * r2]);
  b_r1 = _mm_loadu_pd(&F[3 * r3]);
  d1 = b_intrinsics[r2 + 6];
  _mm_storeu_pd(&F[3 * r3], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(d1))));
  b_r = _mm_loadu_pd(&F[3 * r3]);
  d2 = b_intrinsics[r3 + 6];
  _mm_storeu_pd(&F[3 * r3], _mm_div_pd(b_r, _mm_set1_pd(d2)));
  b_r = _mm_loadu_pd(&F[3 * r3]);
  b_r1 = _mm_loadu_pd(&F[3 * r2]);
  d3 = b_intrinsics[r3 + 3];
  _mm_storeu_pd(&F[3 * r2], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd(d3))));
  b_r = _mm_loadu_pd(&F[3 * r3]);
  b_r1 = _mm_loadu_pd(&F[3 * r1]);
  _mm_storeu_pd(&F[3 * r1], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd
    (b_intrinsics[r3]))));
  b_r = _mm_loadu_pd(&F[3 * r2]);
  b_r1 = _mm_loadu_pd(&F[3 * r1]);
  _mm_storeu_pd(&F[3 * r1], _mm_sub_pd(b_r1, _mm_mul_pd(b_r, _mm_set1_pd
    (b_intrinsics[r2]))));
  F_tmp = 3 * r1 + 2;
  F[F_tmp] = A_data[2] / b_intrinsics[r1];
  rtemp = 3 * r2 + 2;
  F[rtemp] = A_data[5] - F[F_tmp] * maxval;
  r1 = 3 * r3 + 2;
  F[r1] = A_data[8] - F[F_tmp] * a21;
  F[rtemp] /= d;
  F[r1] -= F[rtemp] * d1;
  F[r1] /= d2;
  F[rtemp] -= F[r1] * d3;
  F[F_tmp] -= F[r1] * b_intrinsics[r3];
  F[F_tmp] -= F[rtemp] * b_intrinsics[r2];
  r1 = inliersLogicalIndex.size(0);
  rtemp = 0;
  for (F_tmp = 0; F_tmp < r1; F_tmp++) {
    if (inliersLogicalIndex[F_tmp]) {
      rtemp++;
    }
  }

  b_r2.set_size(&fq_emlrtRTEI, &sp, rtemp);
  rtemp = 0;
  for (F_tmp = 0; F_tmp < r1; F_tmp++) {
    if (inliersLogicalIndex[F_tmp]) {
      b_r2[rtemp] = F_tmp;
      rtemp++;
    }
  }

  F_tmp = b_r2.size(0);
  for (i = 0; i < F_tmp; i++) {
    if (b_r2[i] > matchedPoints1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_r2[i], 0, matchedPoints1.size(0) - 1,
        &rd_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }

  for (i = 0; i < F_tmp; i++) {
    if (b_r2[i] > matchedPoints2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_r2[i], 0, matchedPoints2.size(0) - 1,
        &sd_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }

  st.site = &yq_emlrtRSI;
  b_st.site = &aq_emlrtRSI;
  coder::b_eml_find(b_st, inliersLogicalIndex, ii);
  rtemp = ii.size(0);
  inliersIndex.set_size(&gq_emlrtRTEI, &st, ii.size(0));
  for (i = 0; i < rtemp; i++) {
    inliersIndex[i] = ii[i];
  }

  //  Distance from points to epipolar line
  for (i = 0; i < 3; i++) {
    b_intrinsics[3 * i] = F[i];
    b_intrinsics[3 * i + 1] = F[i + 3];
    b_intrinsics[3 * i + 2] = F[i + 6];
  }

  b_matchedPoints2.set_size(&hq_emlrtRTEI, &sp, b_r2.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (r3 = 0; r3 < F_tmp; r3++) {
      b_matchedPoints2[r3 + b_matchedPoints2.size(0) * i] =
        matchedPoints2[b_r2[r3] + matchedPoints2.size(0) * i];
    }
  }

  st.site = &ar_emlrtRSI;
  coder::epipolarLine(st, b_intrinsics, b_matchedPoints2, lineIn1);
  st.site = &br_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  if (b_r2.size(0) != 0) {
    r2 = b_r2.size(0);
  } else {
    r2 = 0;
  }

  c_st.site = &jj_emlrtRSI;
  if ((b_r2.size(0) != r2) && (b_r2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((b_r2.size(0) != r2) && (b_r2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (r2 == 0);
  if (empty_non_axis_sizes || (b_r2.size(0) != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (b_r2.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  b_matchedPoints2.set_size(&iq_emlrtRTEI, &b_st, b_r2.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (r3 = 0; r3 < F_tmp; r3++) {
      b_matchedPoints2[r3 + b_matchedPoints2.size(0) * i] =
        matchedPoints1[b_r2[r3] + matchedPoints1.size(0) * i];
    }
  }

  i = input_sizes_idx_1 + sizes_idx_1;
  updatedLocations1.set_size(&jq_emlrtRTEI, &b_st, r2, i);
  rtemp = input_sizes_idx_1;
  for (r3 = 0; r3 < rtemp; r3++) {
    for (int32_T i1{0}; i1 < r2; i1++) {
      updatedLocations1[i1 + updatedLocations1.size(0) * r3] =
        b_matchedPoints2[i1 + r2 * r3];
    }
  }

  rtemp = sizes_idx_1;
  for (r3 = 0; r3 < rtemp; r3++) {
    for (int32_T i1{0}; i1 < r2; i1++) {
      updatedLocations1[i1 + updatedLocations1.size(0) * input_sizes_idx_1] =
        1.0F;
    }
  }

  if ((r2 != lineIn1.size(0)) && ((r2 != 1) && (lineIn1.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(r2, lineIn1.size(0), &y_emlrtECI, (emlrtConstCTX)
      &sp);
  }

  if ((i != 3) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(i, 3, &x_emlrtECI, (emlrtConstCTX)&sp);
  }

  if ((updatedLocations1.size(0) == lineIn1.size(0)) && (updatedLocations1.size
       (1) == 3)) {
    b_updatedLocations1.set_size(&kq_emlrtRTEI, &sp, r2, 3);
    rtemp = updatedLocations1.size(0) * 3;
    for (i = 0; i < rtemp; i++) {
      b_updatedLocations1[i] = updatedLocations1[i] * static_cast<real32_T>
        (lineIn1[i]);
    }

    st.site = &cr_emlrtRSI;
    coder::b_sum(st, b_updatedLocations1, sumLocations1);
  } else {
    st.site = &cr_emlrtRSI;
    binary_expand_op_12(st, sumLocations1, cr_emlrtRSI, updatedLocations1,
                        lineIn1);
  }

  st.site = &dr_emlrtRSI;
  b_st.site = &dr_emlrtRSI;
  c_st.site = &fo_emlrtRSI;
  rtemp = sumLocations1.size(0);
  x.set_size(&lq_emlrtRTEI, &c_st, sumLocations1.size(0));
  for (i = 0; i < rtemp; i++) {
    scoreOut = sumLocations1[i];
    x[i] = scoreOut * scoreOut;
  }

  r1 = lineIn1.size(0);
  b_r3.set_size(&ao_emlrtRTEI, &st, lineIn1.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (r3 = 0; r3 < r1; r3++) {
      maxval = lineIn1[r3 + lineIn1.size(0) * i];
      b_r3[r3 + b_r3.size(0) * i] = maxval * maxval;
    }
  }

  b_st.site = &er_emlrtRSI;
  coder::sum(b_st, b_r3, y);
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((x.size(0) != 1) && (y.size(0) != 1) && (x.size(0) != y.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
      "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
  }

  b_matchedPoints2.set_size(&iq_emlrtRTEI, &sp, b_r2.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (r3 = 0; r3 < F_tmp; r3++) {
      b_matchedPoints2[r3 + b_matchedPoints2.size(0) * i] =
        matchedPoints1[b_r2[r3] + matchedPoints1.size(0) * i];
    }
  }

  st.site = &fr_emlrtRSI;
  coder::epipolarLine(st, F, b_matchedPoints2, lineIn1);
  st.site = &gr_emlrtRSI;
  b_st.site = &kn_emlrtRSI;
  c_st.site = &jj_emlrtRSI;
  if ((b_r2.size(0) != r2) && (b_r2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((b_r2.size(0) != r2) && (b_r2.size(0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (r2 == 0);
  if (empty_non_axis_sizes || (b_r2.size(0) != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (b_r2.size(0) != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }

  b_matchedPoints2.set_size(&hq_emlrtRTEI, &b_st, b_r2.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (r3 = 0; r3 < F_tmp; r3++) {
      b_matchedPoints2[r3 + b_matchedPoints2.size(0) * i] =
        matchedPoints2[b_r2[r3] + matchedPoints2.size(0) * i];
    }
  }

  i = input_sizes_idx_1 + sizes_idx_1;
  updatedLocations1.set_size(&mq_emlrtRTEI, &b_st, r2, i);
  r1 = input_sizes_idx_1;
  for (r3 = 0; r3 < r1; r3++) {
    for (int32_T i1{0}; i1 < r2; i1++) {
      updatedLocations1[i1 + updatedLocations1.size(0) * r3] =
        b_matchedPoints2[i1 + r2 * r3];
    }
  }

  r1 = sizes_idx_1;
  for (r3 = 0; r3 < r1; r3++) {
    for (int32_T i1{0}; i1 < r2; i1++) {
      updatedLocations1[i1 + updatedLocations1.size(0) * input_sizes_idx_1] =
        1.0F;
    }
  }

  if ((r2 != lineIn1.size(0)) && ((r2 != 1) && (lineIn1.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(r2, lineIn1.size(0), &w_emlrtECI, (emlrtConstCTX)
      &sp);
  }

  if ((i != 3) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(i, 3, &v_emlrtECI, (emlrtConstCTX)&sp);
  }

  if ((updatedLocations1.size(0) == lineIn1.size(0)) && (updatedLocations1.size
       (1) == 3)) {
    b_updatedLocations1.set_size(&nq_emlrtRTEI, &sp, r2, 3);
    F_tmp = updatedLocations1.size(0) * 3;
    for (i = 0; i < F_tmp; i++) {
      b_updatedLocations1[i] = updatedLocations1[i] * static_cast<real32_T>
        (lineIn1[i]);
    }

    st.site = &hr_emlrtRSI;
    coder::b_sum(st, b_updatedLocations1, sumLocations1);
  } else {
    st.site = &hr_emlrtRSI;
    binary_expand_op_12(st, sumLocations1, hr_emlrtRSI, updatedLocations1,
                        lineIn1);
  }

  st.site = &ir_emlrtRSI;
  b_st.site = &ir_emlrtRSI;
  c_st.site = &fo_emlrtRSI;
  F_tmp = sumLocations1.size(0);
  for (i = 0; i < F_tmp; i++) {
    scoreOut = sumLocations1[i];
    sumLocations1[i] = scoreOut * scoreOut;
  }

  r1 = lineIn1.size(0);
  b_r3.set_size(&ao_emlrtRTEI, &st, lineIn1.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (r3 = 0; r3 < r1; r3++) {
      maxval = lineIn1[r3 + lineIn1.size(0) * i];
      b_r3[r3 + b_r3.size(0) * i] = maxval * maxval;
    }
  }

  b_st.site = &jr_emlrtRSI;
  coder::sum(b_st, b_r3, b_y);
  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((sumLocations1.size(0) != 1) && (b_y.size(0) != 1) && (sumLocations1.size
       (0) != b_y.size(0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
      "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
  }

  if ((sumLocations1.size(0) == b_y.size(0)) && (x.size(0) == y.size(0))) {
    r4.set_size(&ao_emlrtRTEI, &sp, sumLocations1.size(0));
    for (i = 0; i < F_tmp; i++) {
      scoreOut = 4.0F - sumLocations1[i] / static_cast<real32_T>(b_y[i]);
      r4[i] = muSingleScalarMax(scoreOut, 0.0F);
    }

    sumLocations1.set_size(&ao_emlrtRTEI, &sp, rtemp);
    for (i = 0; i < rtemp; i++) {
      scoreOut = 4.0F - x[i] / static_cast<real32_T>(y[i]);
      sumLocations1[i] = muSingleScalarMax(scoreOut, 0.0F);
    }

    st.site = &kr_emlrtRSI;
    g_st.site = &lr_emlrtRSI;
    scoreOut = coder::sum(st, r4) + coder::sum(g_st, sumLocations1);
  } else {
    st.site = &kr_emlrtRSI;
    scoreOut = binary_expand_op_11(st, kr_emlrtRSI, sumLocations1, b_y,
      lr_emlrtRSI, x, y);
  }

  for (i = 0; i < 9; i++) {
    FActual[i] = static_cast<real32_T>(F[i]);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return scoreOut;
}

static real32_T helperComputeHomography(const emlrtStack &sp, const coder::array<
  real32_T, 2U> &matchedPoints1, const coder::array<real32_T, 2U>
  &matchedPoints2, coder::projtform2d &H, coder::array<real_T, 1U> &inliersIndex)
{
  __m128 r1;
  __m128 r2;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  coder::array<int32_T, 1U> b_r;
  coder::array<int32_T, 1U> ii;
  coder::array<real32_T, 2U> b_X;
  coder::array<real32_T, 2U> b_matchedPoints1;
  coder::array<real32_T, 2U> locations1;
  coder::array<real32_T, 2U> result;
  coder::array<real32_T, 2U> xy1In2;
  coder::array<real32_T, 1U> X;
  coder::array<real32_T, 1U> error1in2;
  coder::array<real32_T, 1U> error2in1;
  coder::array<boolean_T, 2U> inliersLogicalIndex;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  int32_T sizes[2];
  int32_T b_i;
  int32_T end_tmp;
  int32_T i;
  int32_T loop_ub;
  int32_T trueCount;
  real32_T A_linear_part[4];
  real32_T beta1;
  real32_T score;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T input_sizes_idx_1;
  boolean_T x[2];
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
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
  h_st.prev = &sp;
  h_st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // --------------------------------------------------------------------------
  st.site = &fk_emlrtRSI;
  coder::estgeotform2d(st, matchedPoints1, matchedPoints2, H,
                       inliersLogicalIndex);
  st.site = &gk_emlrtRSI;
  b_st.site = &aq_emlrtRSI;
  coder::eml_find(b_st, inliersLogicalIndex, ii);
  loop_ub = ii.size(0);
  inliersIndex.set_size(&ln_emlrtRTEI, &st, ii.size(0));
  for (i = 0; i < loop_ub; i++) {
    inliersIndex[i] = ii[i];
  }

  end_tmp = inliersLogicalIndex.size(0) * inliersLogicalIndex.size(1);
  trueCount = 0;
  for (b_i = 0; b_i < end_tmp; b_i++) {
    if (inliersLogicalIndex[b_i]) {
      trueCount++;
    }
  }

  b_r.set_size(&mn_emlrtRTEI, &sp, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i < end_tmp; b_i++) {
    if (inliersLogicalIndex[b_i]) {
      b_r[trueCount] = b_i;
      trueCount++;
    }
  }

  loop_ub = b_r.size(0);
  locations1.set_size(&nn_emlrtRTEI, &sp, b_r.size(0), 2);
  for (i = 0; i < 2; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      if (b_r[i1] > matchedPoints1.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_r[i1], 0, matchedPoints1.size(0) - 1,
          &fd_emlrtBCI, (emlrtConstCTX)&sp);
      }

      locations1[i1 + locations1.size(0) * i] = matchedPoints1[b_r[i1] +
        matchedPoints1.size(0) * i];
    }
  }

  for (i = 0; i < loop_ub; i++) {
    if (b_r[i] > matchedPoints2.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_r[i], 0, matchedPoints2.size(0) - 1,
        &gd_emlrtBCI, (emlrtConstCTX)&sp);
    }
  }

  st.site = &hk_emlrtRSI;
  b_st.site = &fq_emlrtRSI;
  c_st.site = &gq_emlrtRSI;
  guard1 = false;
  if (H.A_[8] == 1.0F) {
    x[0] = (H.A_[2] == 0.0F);
    x[1] = (H.A_[5] == 0.0F);
    empty_non_axis_sizes = true;
    trueCount = 0;
    exitg1 = false;
    while ((!exitg1) && (trueCount <= 1)) {
      if (!x[trueCount]) {
        empty_non_axis_sizes = false;
        exitg1 = true;
      } else {
        trueCount++;
      }
    }

    if (empty_non_axis_sizes) {
      A_linear_part[0] = H.A_[0];
      A_linear_part[1] = H.A_[1];
      A_linear_part[2] = H.A_[3];
      A_linear_part[3] = H.A_[4];
      d_st.site = &hq_emlrtRSI;
      e_st.site = &ln_emlrtRSI;
      if (b_r.size(0) == 0) {
        xy1In2.set_size(&un_emlrtRTEI, &e_st, 0, 2);
      } else {
        f_st.site = &nn_emlrtRSI;
        g_st.site = &on_emlrtRSI;
        TRANSB1 = 'T';
        TRANSA1 = 'N';
        score = 1.0F;
        beta1 = 0.0F;
        m_t = (ptrdiff_t)b_r.size(0);
        n_t = (ptrdiff_t)2;
        k_t = (ptrdiff_t)2;
        lda_t = (ptrdiff_t)b_r.size(0);
        ldb_t = (ptrdiff_t)2;
        ldc_t = (ptrdiff_t)b_r.size(0);
        xy1In2.set_size(&tn_emlrtRTEI, &g_st, b_r.size(0), 2);
        sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &score, &(locations1.data())
              [0], &lda_t, &A_linear_part[0], &ldb_t, &beta1, &(xy1In2.data())[0],
              &ldc_t);
      }

      b_i = xy1In2.size(0);
      b_matchedPoints1.set_size(&vn_emlrtRTEI, &c_st, xy1In2.size(0), 2);
      trueCount = (b_i / 4) << 2;
      end_tmp = trueCount - 4;
      for (i = 0; i < 2; i++) {
        for (int32_T i1{0}; i1 <= end_tmp; i1 += 4) {
          r1 = _mm_loadu_ps(&xy1In2[i1 + xy1In2.size(0) * i]);
          _mm_storeu_ps(&b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i],
                        _mm_add_ps(r1, _mm_set1_ps(H.A_[i + 6])));
        }

        for (int32_T i1{trueCount}; i1 < b_i; i1++) {
          b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] = xy1In2[i1 +
            xy1In2.size(0) * i] + H.A_[i + 6];
        }
      }

      xy1In2.set_size(&sn_emlrtRTEI, &c_st, b_matchedPoints1.size(0), 2);
      trueCount = b_matchedPoints1.size(0) << 1;
      for (i = 0; i < trueCount; i++) {
        xy1In2[i] = b_matchedPoints1[i];
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    d_st.site = &iq_emlrtRSI;
    e_st.site = &kn_emlrtRSI;
    if (b_r.size(0) != 0) {
      trueCount = b_r.size(0);
    } else {
      trueCount = 0;
    }

    f_st.site = &jj_emlrtRSI;
    if ((b_r.size(0) != trueCount) && (b_r.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((b_r.size(0) != trueCount) && (b_r.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || (b_r.size(0) != 0)) {
      input_sizes_idx_1 = 2;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (b_r.size(0) != 0)) {
      sizes[1] = 1;
    } else {
      sizes[1] = 0;
    }

    b_matchedPoints1.set_size(&on_emlrtRTEI, &e_st, b_r.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] =
          matchedPoints1[b_r[i1] + matchedPoints1.size(0) * i];
      }
    }

    i = input_sizes_idx_1 + sizes[1];
    result.set_size(&pn_emlrtRTEI, &e_st, trueCount, i);
    b_i = input_sizes_idx_1;
    for (int32_T i1{0}; i1 < b_i; i1++) {
      for (end_tmp = 0; end_tmp < trueCount; end_tmp++) {
        result[end_tmp + result.size(0) * i1] = b_matchedPoints1[end_tmp +
          trueCount * i1];
      }
    }

    b_i = sizes[1];
    for (int32_T i1{0}; i1 < b_i; i1++) {
      for (end_tmp = 0; end_tmp < trueCount; end_tmp++) {
        result[end_tmp + result.size(0) * input_sizes_idx_1] = 1.0F;
      }
    }

    d_st.site = &jq_emlrtRSI;
    e_st.site = &mn_emlrtRSI;
    if (result.size(1) != 3) {
      if ((trueCount == 1) && (i == 1)) {
        emlrtErrorWithMessageIdR2018a(&e_st, &u_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&e_st, &v_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    e_st.site = &ln_emlrtRSI;
    coder::internal::blas::mtimes(e_st, result, H.A_, b_X);
    d_st.site = &kq_emlrtRSI;
    e_st.site = &lf_emlrtRSI;
    b_i = b_X.size(0);
    b_matchedPoints1.set_size(&qn_emlrtRTEI, &e_st, b_X.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < b_i; i1++) {
        b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] = b_X[i1 + b_X.size
          (0) * i];
      }
    }

    X.set_size(&rn_emlrtRTEI, &e_st, b_X.size(0));
    for (i = 0; i < b_i; i++) {
      X[i] = b_X[i + b_X.size(0) * 2];
    }

    f_st.site = &mf_emlrtRSI;
    if ((b_matchedPoints1.size(0) != 1) && (X.size(0) != 1) &&
        (b_matchedPoints1.size(0) != X.size(0))) {
      emlrtErrorWithMessageIdR2018a(&f_st, &hb_emlrtRTEI,
        "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
    }

    locations1.set_size(&qn_emlrtRTEI, &e_st, b_X.size(0), 2);
    trueCount = (b_i / 4) << 2;
    end_tmp = trueCount - 4;
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 <= end_tmp; i1 += 4) {
        r1 = _mm_loadu_ps(&b_X[i1 + b_X.size(0) * i]);
        r2 = _mm_loadu_ps(&b_X[i1 + b_X.size(0) * 2]);
        _mm_storeu_ps(&locations1[i1 + locations1.size(0) * i], _mm_div_ps(r1,
          r2));
      }

      for (int32_T i1{trueCount}; i1 < b_i; i1++) {
        locations1[i1 + locations1.size(0) * i] = b_X[i1 + b_X.size(0) * i] /
          b_X[i1 + b_X.size(0) * 2];
      }
    }

    sizes[0] = b_X.size(0);
    sizes[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, locations1.size(), 2,
      &m_emlrtECI, &c_st);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < b_i; i1++) {
        b_X[i1 + b_X.size(0) * i] = locations1[i1 + locations1.size(0) * i];
      }
    }

    xy1In2.set_size(&sn_emlrtRTEI, &c_st, b_X.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < b_i; i1++) {
        xy1In2[i1 + xy1In2.size(0) * i] = b_X[i1 + b_X.size(0) * i];
      }
    }
  }

  st.site = &ik_emlrtRSI;
  b_st.site = &lq_emlrtRSI;
  c_st.site = &gq_emlrtRSI;
  guard1 = false;
  if (H.A_[8] == 1.0F) {
    x[0] = (H.A_[2] == 0.0F);
    x[1] = (H.A_[5] == 0.0F);
    empty_non_axis_sizes = true;
    trueCount = 0;
    exitg1 = false;
    while ((!exitg1) && (trueCount <= 1)) {
      if (!x[trueCount]) {
        empty_non_axis_sizes = false;
        exitg1 = true;
      } else {
        trueCount++;
      }
    }

    if (empty_non_axis_sizes) {
      d_st.site = &mq_emlrtRSI;
      b_matchedPoints1.set_size(&yn_emlrtRTEI, &d_st, b_r.size(0), 2);
      for (i = 0; i < 2; i++) {
        for (int32_T i1{0}; i1 < loop_ub; i1++) {
          b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] =
            matchedPoints2[b_r[i1] + matchedPoints2.size(0) * i] - H.A_[i + 6];
        }

        trueCount = i << 1;
        A_linear_part[trueCount] = H.A_[i];
        A_linear_part[trueCount + 1] = H.A_[i + 3];
      }

      e_st.site = &oq_emlrtRSI;
      coder::internal::mrdiv(e_st, b_matchedPoints1, A_linear_part, locations1);
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    real32_T b_H[9];
    d_st.site = &iq_emlrtRSI;
    e_st.site = &kn_emlrtRSI;
    if (b_r.size(0) != 0) {
      trueCount = b_r.size(0);
    } else {
      trueCount = 0;
    }

    f_st.site = &jj_emlrtRSI;
    if ((b_r.size(0) != trueCount) && (b_r.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((b_r.size(0) != trueCount) && (b_r.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || (b_r.size(0) != 0)) {
      input_sizes_idx_1 = 2;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (b_r.size(0) != 0)) {
      sizes[1] = 1;
    } else {
      sizes[1] = 0;
    }

    b_matchedPoints1.set_size(&wn_emlrtRTEI, &e_st, b_r.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] =
          matchedPoints2[b_r[i1] + matchedPoints2.size(0) * i];
      }
    }

    result.set_size(&pn_emlrtRTEI, &e_st, trueCount, input_sizes_idx_1 + sizes[1]);
    b_i = input_sizes_idx_1;
    for (i = 0; i < b_i; i++) {
      for (int32_T i1{0}; i1 < trueCount; i1++) {
        result[i1 + result.size(0) * i] = b_matchedPoints1[i1 + trueCount * i];
      }
    }

    b_i = sizes[1];
    for (i = 0; i < b_i; i++) {
      for (int32_T i1{0}; i1 < trueCount; i1++) {
        result[i1 + result.size(0) * input_sizes_idx_1] = 1.0F;
      }
    }

    d_st.site = &nq_emlrtRSI;
    if (result.size(1) != 3) {
      emlrtErrorWithMessageIdR2018a(&d_st, &w_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    for (i = 0; i < 3; i++) {
      b_H[3 * i] = H.A_[i];
      b_H[3 * i + 1] = H.A_[i + 3];
      b_H[3 * i + 2] = H.A_[i + 6];
    }

    e_st.site = &oq_emlrtRSI;
    coder::internal::b_mrdiv(e_st, result, b_H, b_X);
    d_st.site = &kq_emlrtRSI;
    e_st.site = &lf_emlrtRSI;
    b_i = b_X.size(0);
    b_matchedPoints1.set_size(&qn_emlrtRTEI, &e_st, b_X.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < b_i; i1++) {
        b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] = b_X[i1 + b_X.size
          (0) * i];
      }
    }

    X.set_size(&rn_emlrtRTEI, &e_st, b_X.size(0));
    for (i = 0; i < b_i; i++) {
      X[i] = b_X[i + b_X.size(0) * 2];
    }

    f_st.site = &mf_emlrtRSI;
    if ((b_matchedPoints1.size(0) != 1) && (X.size(0) != 1) &&
        (b_matchedPoints1.size(0) != X.size(0))) {
      emlrtErrorWithMessageIdR2018a(&f_st, &hb_emlrtRTEI,
        "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
    }

    locations1.set_size(&qn_emlrtRTEI, &e_st, b_X.size(0), 2);
    trueCount = (b_i / 4) << 2;
    end_tmp = trueCount - 4;
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 <= end_tmp; i1 += 4) {
        r1 = _mm_loadu_ps(&b_X[i1 + b_X.size(0) * i]);
        r2 = _mm_loadu_ps(&b_X[i1 + b_X.size(0) * 2]);
        _mm_storeu_ps(&locations1[i1 + locations1.size(0) * i], _mm_div_ps(r1,
          r2));
      }

      for (int32_T i1{trueCount}; i1 < b_i; i1++) {
        locations1[i1 + locations1.size(0) * i] = b_X[i1 + b_X.size(0) * i] /
          b_X[i1 + b_X.size(0) * 2];
      }
    }

    sizes[0] = b_X.size(0);
    sizes[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, locations1.size(), 2,
      &m_emlrtECI, &c_st);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < b_i; i1++) {
        b_X[i1 + b_X.size(0) * i] = locations1[i1 + locations1.size(0) * i];
      }
    }

    locations1.set_size(&xn_emlrtRTEI, &c_st, b_X.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < b_i; i1++) {
        locations1[i1 + locations1.size(0) * i] = b_X[i1 + b_X.size(0) * i];
      }
    }
  }

  if ((b_r.size(0) != xy1In2.size(0)) && ((b_r.size(0) != 1) && (xy1In2.size(0)
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_r.size(0), xy1In2.size(0), &o_emlrtECI,
      (emlrtConstCTX)&sp);
  }

  if (b_r.size(0) == xy1In2.size(0)) {
    b_matchedPoints1.set_size(&ao_emlrtRTEI, &sp, b_r.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        score = matchedPoints2[b_r[i1] + matchedPoints2.size(0) * i] - xy1In2[i1
          + xy1In2.size(0) * i];
        b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] = score * score;
      }
    }

    st.site = &jk_emlrtRSI;
    coder::sum(st, b_matchedPoints1, error1in2);
  } else {
    st.site = &jk_emlrtRSI;
    binary_expand_op_1(st, error1in2, jk_emlrtRSI, matchedPoints2, b_r, xy1In2);
  }

  loop_ub = b_r.size(0);
  if ((b_r.size(0) != locations1.size(0)) && ((b_r.size(0) != 1) &&
       (locations1.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_r.size(0), locations1.size(0), &n_emlrtECI,
      (emlrtConstCTX)&sp);
  }

  if (b_r.size(0) == locations1.size(0)) {
    b_matchedPoints1.set_size(&ao_emlrtRTEI, &sp, b_r.size(0), 2);
    for (i = 0; i < 2; i++) {
      for (int32_T i1{0}; i1 < loop_ub; i1++) {
        score = matchedPoints1[b_r[i1] + matchedPoints1.size(0) * i] -
          locations1[i1 + locations1.size(0) * i];
        b_matchedPoints1[i1 + b_matchedPoints1.size(0) * i] = score * score;
      }
    }

    st.site = &kk_emlrtRSI;
    coder::sum(st, b_matchedPoints1, error2in1);
  } else {
    st.site = &kk_emlrtRSI;
    binary_expand_op_1(st, error2in1, kk_emlrtRSI, matchedPoints1, b_r,
                       locations1);
  }

  loop_ub = error1in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    score = 6.0F - error1in2[i];
    error1in2[i] = muSingleScalarMax(score, 0.0F);
  }

  loop_ub = error2in1.size(0);
  X.set_size(&ao_emlrtRTEI, &sp, error2in1.size(0));
  for (i = 0; i < loop_ub; i++) {
    score = 6.0F - error2in1[i];
    X[i] = muSingleScalarMax(score, 0.0F);
  }

  st.site = &lk_emlrtRSI;
  h_st.site = &mk_emlrtRSI;
  score = coder::sum(st, error1in2) + coder::sum(h_st, X);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return score;
}

static void helperCullRecentMapPoints(const emlrtStack &sp, coder::worldpointset
  &mapPointSet, const coder::array<real_T, 1U> &mapPointsIdx, const coder::array<
  real_T, 1U> &newPointIdx)
{
  coder::sparse b_mapPointSet;
  coder::array<real_T, 2U> pointIndices;
  coder::array<real_T, 1U> outlierIdx;
  coder::array<int32_T, 2U> obj_tmp;
  coder::array<int32_T, 1U> ia;
  coder::array<real32_T, 2U> b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  // --------------------------------------------------------------------------
  st.site = &opc_emlrtRSI;
  b_st.site = &mnc_emlrtRSI;
  c_st.site = &efb_emlrtRSI;
  coder::do_vectors(c_st, newPointIdx, mapPointsIdx, outlierIdx, ia);
  if (outlierIdx.size(0) != 0) {
    int32_T correspondencesSize;
    uint32_T k;
    uint32_T numRows;
    boolean_T tf;
    st.site = &ppc_emlrtRSI;
    b_st.site = &eqc_emlrtRSI;
    if (mapPointSet.WorldPoints.size(0) == 0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &pe_emlrtRTEI,
        "vision:worldpointset:noWorldPoints",
        "vision:worldpointset:noWorldPoints", 0);
    }

    b_st.site = &dqc_emlrtRSI;
    coder::worldpointset::pointIdOrPointIndex(b_st, outlierIdx, pointIndices);
    b_st.site = &cqc_emlrtRSI;
    mapPointSet.checkPointIndices(b_st, pointIndices);
    correspondencesSize = pointIndices.size(1);
    obj_tmp.set_size(&fbc_emlrtRTEI, &st, 1, pointIndices.size(1));
    for (int32_T i{0}; i < correspondencesSize; i++) {
      obj_tmp[i] = static_cast<int32_T>(pointIndices[i]);
    }

    b_r.set_size(&gbc_emlrtRTEI, &st, mapPointSet.WorldPoints.size(0), 3);
    correspondencesSize = mapPointSet.WorldPoints.size(0) * 3;
    for (int32_T i{0}; i < correspondencesSize; i++) {
      b_r[i] = mapPointSet.WorldPoints[i];
    }

    b_st.site = &bqc_emlrtRSI;
    coder::internal::nullAssignment(b_st, b_r, obj_tmp);
    mapPointSet.WorldPoints.set_size(&gbc_emlrtRTEI, &st, b_r.size(0), b_r.size
      (1));
    correspondencesSize = b_r.size(0) * b_r.size(1);
    for (int32_T i{0}; i < correspondencesSize; i++) {
      mapPointSet.WorldPoints[i] = b_r[i];
    }

    b_st.site = &aqc_emlrtRSI;
    correspondencesSize = mapPointSet.CorrespondencesInternal.m;
    numRows = 0U;
    b_st.site = &ypc_emlrtRSI;
    if (mapPointSet.CorrespondencesInternal.m > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      coder::check_forloop_overflow_error(c_st);
    }

    for (int32_T i{0}; i < correspondencesSize; i++) {
      b_st.site = &xpc_emlrtRSI;
      c_st.site = &bdb_emlrtRSI;
      tf = coder::isMember(c_st, i + 1, pointIndices);
      if (!tf) {
        numRows++;
      }
    }

    k = 1U;
    if (static_cast<real_T>(numRows) != static_cast<int32_T>(numRows)) {
      emlrtIntegerCheckR2012b(static_cast<real_T>(numRows), &ld_emlrtDCI, &st);
    }

    outlierIdx.set_size(&hbc_emlrtRTEI, &st, static_cast<int32_T>(numRows));
    b_st.site = &wpc_emlrtRSI;
    if (mapPointSet.CorrespondencesInternal.m > 2147483646) {
      c_st.site = &qe_emlrtRSI;
      coder::check_forloop_overflow_error(c_st);
    }

    for (int32_T i{0}; i < correspondencesSize; i++) {
      b_st.site = &vpc_emlrtRSI;
      c_st.site = &bdb_emlrtRSI;
      tf = coder::isMember(c_st, i + 1, pointIndices);
      if (!tf) {
        if ((static_cast<int32_T>(k) < 1) || (static_cast<int32_T>(k) >
             outlierIdx.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k), 1,
            outlierIdx.size(0), &lib_emlrtBCI, &st);
        }

        outlierIdx[static_cast<int32_T>(k) - 1] = i + 1;
        k++;
      }
    }

    b_mapPointSet = mapPointSet.CorrespondencesInternal;
    b_st.site = &upc_emlrtRSI;
    b_mapPointSet.b_parenReference(b_st, outlierIdx,
      mapPointSet.CorrespondencesInternal);
    if (mapPointSet.ViewingDirection.size(0) != 0) {
      b_r.set_size(&ibc_emlrtRTEI, &st, mapPointSet.ViewingDirection.size(0), 3);
      correspondencesSize = mapPointSet.ViewingDirection.size(0) * 3;
      for (int32_T i{0}; i < correspondencesSize; i++) {
        b_r[i] = mapPointSet.ViewingDirection[i];
      }

      b_st.site = &tpc_emlrtRSI;
      coder::internal::nullAssignment(b_st, b_r, obj_tmp);
      mapPointSet.ViewingDirection.set_size(&ibc_emlrtRTEI, &st, b_r.size(0),
        b_r.size(1));
      correspondencesSize = b_r.size(0) * b_r.size(1);
      for (int32_T i{0}; i < correspondencesSize; i++) {
        mapPointSet.ViewingDirection[i] = b_r[i];
      }

      b_r.set_size(&jbc_emlrtRTEI, &st, mapPointSet.DistanceLimits.size(0), 2);
      correspondencesSize = mapPointSet.DistanceLimits.size(0) << 1;
      for (int32_T i{0}; i < correspondencesSize; i++) {
        b_r[i] = mapPointSet.DistanceLimits[i];
      }

      b_st.site = &spc_emlrtRSI;
      coder::internal::nullAssignment(b_st, b_r, obj_tmp);
      mapPointSet.DistanceLimits.set_size(&jbc_emlrtRTEI, &st, b_r.size(0),
        b_r.size(1));
      correspondencesSize = b_r.size(0) * b_r.size(1);
      for (int32_T i{0}; i < correspondencesSize; i++) {
        mapPointSet.DistanceLimits[i] = b_r[i];
      }
    }

    if ((mapPointSet.RepresentativeViewId.size(0) != 0) &&
        (mapPointSet.RepresentativeViewId.size(1) != 0)) {
      b_st.site = &rpc_emlrtRSI;
      coder::internal::nullAssignment(b_st, mapPointSet.RepresentativeViewId,
        obj_tmp);
      b_st.site = &qpc_emlrtRSI;
      coder::internal::nullAssignment(b_st,
        mapPointSet.RepresentativeFeatureIndex, obj_tmp);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static boolean_T helperTriangulateTwoFrames(const emlrtStack &sp, const coder::
  c_rigidtform3d &pose1, const coder::rigidtform3d &pose2, const coder::array<
  real32_T, 2U> &matchedPoints1, const coder::array<real32_T, 2U>
  &matchedPoints2, const coder::cameraIntrinsics &intrinsics, coder::array<
  real32_T, 2U> &xyzPoints, coder::array<boolean_T, 1U> &inlierIdx)
{
  static const real_T dv[16]{ 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  __m128 r2;
  __m128 r3;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  coder::rigidtform3d tform;
  coder::array<int32_T, 1U> r1;
  coder::array<real32_T, 2U> b_xyzPoints;
  coder::array<real32_T, 2U> ray1;
  coder::array<real32_T, 2U> ray2;
  coder::array<real32_T, 1U> cosAngle;
  coder::array<real32_T, 1U> reprojectionErrors;
  coder::array<real32_T, 1U> y;
  coder::array<boolean_T, 1U> b_r;
  coder::array<boolean_T, 1U> r4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T camMatrix1[12];
  real_T d;
  int32_T camMatrix2_size[2];
  int32_T b_i;
  int32_T end;
  int32_T loop_ub;
  int32_T result_data_tmp;
  real32_T camMatrix2_data[12];
  real32_T result_data[12];
  real32_T K[9];
  real32_T tform_data[3];
  real32_T alpha1;
  real32_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T isValid;
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

  // --------------------------------------------------------------------------
  st.site = &ww_emlrtRSI;
  b_st.site = &cx_emlrtRSI;
  c_st.site = &dx_emlrtRSI;
  d_st.site = &ex_emlrtRSI;
  coder::checkcond(d_st, dv, dv);
  c_st.site = &dx_emlrtRSI;
  d_st.site = &fg_emlrtRSI;
  d_st.site = &gg_emlrtRSI;
  st.site = &ww_emlrtRSI;
  coder::cameraProjection(st, intrinsics, camMatrix1);
  st.site = &xw_emlrtRSI;
  tform = pose2;
  b_st.site = &xw_emlrtRSI;
  coder::pose2extr(b_st, tform);
  b_st.site = &dv_emlrtRSI;
  c_st.site = &ev_emlrtRSI;
  d_st.site = &fv_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  if (intrinsics.cameraIntrinsicsArrayData.size(0) *
      intrinsics.cameraIntrinsicsArrayData.size(1) != 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &ob_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedScalar",
      "MATLAB:cameraProjection:expectedScalar", 3, 4, 16, "cameraProjection");
  }

  d_st.site = &vx_emlrtRSI;
  e_st.site = &be_emlrtRSI;
  if (tform.Data.size[0] * tform.Data.size[1] != 1) {
    emlrtErrorWithMessageIdR2018a(&e_st, &ob_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedScalar",
      "MATLAB:cameraProjection:expectedScalar", 3, 4, 5, "tform");
  }

  for (int32_T i{0}; i < 9; i++) {
    K[i] = static_cast<real32_T>(intrinsics.K[i]);
  }

  c_st.site = &ux_emlrtRSI;
  d_st.site = &wx_emlrtRSI;
  loop_ub = tform.Translation.size[1];
  if (loop_ub - 1 >= 0) {
    std::copy(&tform.Translation.data[0], &tform.Translation.data[loop_ub],
              &tform_data[0]);
  }

  for (int32_T i{0}; i < 3; i++) {
    result_data[3 * i] = tform.R[3 * i];
    result_data_tmp = 3 * i + 1;
    result_data[result_data_tmp] = tform.R[result_data_tmp];
    result_data_tmp = 3 * i + 2;
    result_data[result_data_tmp] = tform.R[result_data_tmp];
  }

  result_data[9] = tform_data[0];
  result_data[10] = tform_data[1];
  result_data[11] = tform_data[2];
  d_st.site = &wx_emlrtRSI;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0F;
  beta1 = 0.0F;
  m_t = (ptrdiff_t)3;
  n_t = (ptrdiff_t)4;
  k_t = (ptrdiff_t)3;
  lda_t = (ptrdiff_t)3;
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)3;
  camMatrix2_size[0] = 3;
  camMatrix2_size[1] = 4;
  sgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &K[0], &lda_t,
        &result_data[0], &ldb_t, &beta1, &camMatrix2_data[0], &ldc_t);
  st.site = &yw_emlrtRSI;
  coder::triangulate(st, matchedPoints1, matchedPoints2, camMatrix1,
                     camMatrix2_data, camMatrix2_size, b_xyzPoints,
                     reprojectionErrors, inlierIdx);

  //  Filter points by view direction and reprojection error
  loop_ub = reprojectionErrors.size(0);
  b_r.set_size(&fs_emlrtRTEI, &sp, reprojectionErrors.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_r[i] = (reprojectionErrors[i] < 1.0F);
  }

  loop_ub = inlierIdx.size(0);
  if ((inlierIdx.size(0) != reprojectionErrors.size(0)) && ((inlierIdx.size(0)
        != 1) && (reprojectionErrors.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlierIdx.size(0), reprojectionErrors.size(0),
      &gb_emlrtECI, (emlrtConstCTX)&sp);
  }

  if (inlierIdx.size(0) == b_r.size(0)) {
    for (int32_T i{0}; i < loop_ub; i++) {
      inlierIdx[i] = (inlierIdx[i] && b_r[i]);
    }
  } else {
    st.site = &rid_emlrtRSI;
    c_and(st, inlierIdx, b_r);
  }

  end = inlierIdx.size(0);
  result_data_tmp = 0;
  for (b_i = 0; b_i < end; b_i++) {
    if (inlierIdx[b_i]) {
      result_data_tmp++;
    }
  }

  r1.set_size(&gs_emlrtRTEI, &sp, result_data_tmp);
  result_data_tmp = 0;
  for (b_i = 0; b_i < end; b_i++) {
    if (inlierIdx[b_i]) {
      r1[result_data_tmp] = b_i;
      result_data_tmp++;
    }
  }

  loop_ub = r1.size(0);
  xyzPoints.set_size(&hs_emlrtRTEI, &sp, r1.size(0), 3);
  for (int32_T i{0}; i < 3; i++) {
    for (result_data_tmp = 0; result_data_tmp < loop_ub; result_data_tmp++) {
      if (r1[result_data_tmp] > b_xyzPoints.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r1[result_data_tmp], 0, b_xyzPoints.size(0)
          - 1, &bf_emlrtBCI, (emlrtConstCTX)&sp);
      }

      xyzPoints[result_data_tmp + xyzPoints.size(0) * i] =
        b_xyzPoints[r1[result_data_tmp] + b_xyzPoints.size(0) * i];
    }
  }

  //  A good two-view with significant parallax
  ray1.set_size(&is_emlrtRTEI, &sp, r1.size(0), 3);
  for (int32_T i{0}; i < 3; i++) {
    for (result_data_tmp = 0; result_data_tmp < loop_ub; result_data_tmp++) {
      ray1[result_data_tmp + ray1.size(0) * i] = b_xyzPoints[r1[result_data_tmp]
        + b_xyzPoints.size(0) * i] - static_cast<real32_T>(pose1.Translation[i]);
    }
  }

  if ((pose2.Translation.size[1] != 3) && (pose2.Translation.size[1] != 1)) {
    emlrtDimSizeImpxCheckR2021b(3, pose2.Translation.size[1], &fb_emlrtECI,
      (emlrtConstCTX)&sp);
  }

  if (pose2.Translation.size[1] == 3) {
    ray2.set_size(&js_emlrtRTEI, &sp, r1.size(0), 3);
    for (int32_T i{0}; i < 3; i++) {
      for (result_data_tmp = 0; result_data_tmp < loop_ub; result_data_tmp++) {
        ray2[result_data_tmp + ray2.size(0) * i] =
          b_xyzPoints[r1[result_data_tmp] + b_xyzPoints.size(0) * i] -
          pose2.Translation.data[i];
      }
    }
  } else {
    st.site = &ajd_emlrtRSI;
    binary_expand_op_15(st, ray2, b_xyzPoints, r1, pose2);
  }

  st.site = &ax_emlrtRSI;
  coder::vecnorm(st, ray1, y);
  st.site = &ax_emlrtRSI;
  coder::vecnorm(st, ray2, reprojectionErrors);
  loop_ub = y.size(0);
  if ((y.size(0) != reprojectionErrors.size(0)) && ((y.size(0) != 1) &&
       (reprojectionErrors.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(y.size(0), reprojectionErrors.size(0),
      &eb_emlrtECI, (emlrtConstCTX)&sp);
  }

  st.site = &ax_emlrtRSI;
  b_xyzPoints.set_size(&ks_emlrtRTEI, &st, r1.size(0), 3);
  result_data_tmp = ray1.size(0) * 3;
  end = (result_data_tmp / 4) << 2;
  b_i = end - 4;
  for (int32_T i{0}; i <= b_i; i += 4) {
    r2 = _mm_loadu_ps(&ray1[i]);
    r3 = _mm_loadu_ps(&ray2[i]);
    _mm_storeu_ps(&b_xyzPoints[i], _mm_mul_ps(r2, r3));
  }

  for (int32_T i{end}; i < result_data_tmp; i++) {
    b_xyzPoints[i] = ray1[i] * ray2[i];
  }

  b_st.site = &ax_emlrtRSI;
  coder::b_sum(b_st, b_xyzPoints, cosAngle);
  if (y.size(0) == reprojectionErrors.size(0)) {
    end = (y.size(0) / 4) << 2;
    b_i = end - 4;
    for (int32_T i{0}; i <= b_i; i += 4) {
      r2 = _mm_loadu_ps(&y[i]);
      r3 = _mm_loadu_ps(&reprojectionErrors[i]);
      _mm_storeu_ps(&y[i], _mm_mul_ps(r2, r3));
    }

    for (int32_T i{end}; i < loop_ub; i++) {
      y[i] = y[i] * reprojectionErrors[i];
    }
  } else {
    b_st.site = &ax_emlrtRSI;
    times(b_st, y, reprojectionErrors);
  }

  b_st.site = &lf_emlrtRSI;
  c_st.site = &mf_emlrtRSI;
  if ((cosAngle.size(0) != 1) && (y.size(0) != 1) && (cosAngle.size(0) != y.size
       (0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
      "MATLAB:sizeDimensionsMustMatch", "MATLAB:sizeDimensionsMustMatch", 0);
  }

  if (cosAngle.size(0) == y.size(0)) {
    loop_ub = cosAngle.size(0);
    end = (cosAngle.size(0) / 4) << 2;
    b_i = end - 4;
    for (int32_T i{0}; i <= b_i; i += 4) {
      r2 = _mm_loadu_ps(&cosAngle[i]);
      r3 = _mm_loadu_ps(&y[i]);
      _mm_storeu_ps(&cosAngle[i], _mm_div_ps(r2, r3));
    }

    for (int32_T i{end}; i < loop_ub; i++) {
      cosAngle[i] = cosAngle[i] / y[i];
    }
  } else {
    c_st.site = &uid_emlrtRSI;
    rdivide(c_st, cosAngle, y);
  }

  //  Check parallax
  d = 1.0;
  coder::b_cosd(d);
  loop_ub = cosAngle.size(0);
  b_r.set_size(&ls_emlrtRTEI, &sp, cosAngle.size(0));
  r4.set_size(&ms_emlrtRTEI, &sp, cosAngle.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_r[i] = (cosAngle[i] < d);
    r4[i] = (cosAngle[i] > 0.0F);
  }

  for (int32_T i{0}; i < loop_ub; i++) {
    b_r[i] = (b_r[i] && r4[i]);
  }

  st.site = &bx_emlrtRSI;
  isValid = coder::all(st, b_r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return isValid;
}

void b_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1, const coder::
           array<boolean_T, 1U> &in2, const coder::array<boolean_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }

  in1.set_size(&ui_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] && in3[i * stride_1_0]);
  }
}

void c_and(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1, const coder::
           array<boolean_T, 1U> &in2)
{
  coder::array<boolean_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }

  b_in1.set_size(&ui_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = (in1[i * stride_0_0] && in2[i * stride_1_0]);
  }

  in1.set_size(&ui_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS, void
  *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void helperVisualSLAMCodegen(c_helperVisualSLAMCodegenStackD *SD, const
  emlrtStack *sp, const cell_wrap_0 imagesCell[128], struct0_T *out)
{
  static const real_T bagObj_Encoder_VocabularySizes[111]{ 1000.0, 100.0, 100.0,
    100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0 };

  static const uint8_T uv[320]{ 66U, 223U, 125U, 1U, 76U, 43U, 2U, 56U, 63U, 57U,
    184U, 30U, 101U, 157U, 176U, 186U, 141U, 249U, 95U, 95U, 182U, 254U, 253U,
    27U, 188U, 114U, 50U, 58U, 99U, 107U, 186U, 247U, 103U, 249U, 112U, 217U,
    154U, 236U, 206U, 237U, 233U, 174U, 188U, 244U, 169U, 245U, 213U, 93U, 118U,
    118U, 245U, 118U, 15U, 175U, 237U, 253U, 213U, 205U, 147U, 2U, 184U, 253U,
    71U, 233U, 81U, 249U, 190U, 83U, 238U, 111U, 199U, 186U, 184U, 119U, 143U,
    87U, 231U, 96U, 240U, 112U, 159U, 189U, 113U, 62U, 171U, 95U, 159U, 135U,
    85U, 117U, 31U, 254U, 234U, 9U, 191U, 77U, 5U, 4U, 200U, 200U, 144U, 214U,
    MAX_uint8_T, 90U, 164U, 124U, 88U, 252U, 222U, 254U, 19U, 183U, 72U, 82U,
    24U, 191U, 3U, 11U, 230U, 230U, 172U, 221U, 211U, 189U, 158U, 168U, 172U,
    47U, 121U, 115U, 254U, 127U, 113U, 179U, 247U, 156U, 254U, 223U, 204U, 47U,
    102U, 159U, 153U, 176U, 72U, 246U, 54U, 34U, 183U, 177U, 75U, 107U, 50U, 96U,
    26U, 164U, 196U, 16U, 228U, 96U, 239U, 247U, 88U, 119U, 129U, MAX_uint8_T,
    249U, 248U, 126U, 126U, 59U, 247U, 196U, 59U, 215U, 187U, 59U, 185U, 233U,
    236U, 251U, 253U, 124U, 31U, 237U, 151U, 147U, 207U, 23U, 23U, 145U, 167U,
    106U, 152U, 16U, 149U, 129U, 66U, 239U, 238U, 22U, 181U, 233U, 179U, 26U,
    151U, 86U, 74U, 205U, 233U, 79U, 213U, 242U, 152U, 107U, 58U, 187U, 43U,
    179U, 178U, 146U, 191U, 249U, 1U, 251U, 118U, 18U, 82U, 44U, 37U, 241U, 234U,
    46U, MAX_uint8_T, 17U, 215U, MAX_uint8_T, 189U, MAX_uint8_T, 142U, 159U,
    223U, 239U, 236U, 219U, 95U, 63U, 243U, 54U, 246U, 82U, 251U, 239U, 190U,
    211U, 93U, 118U, 213U, 108U, 239U, 222U, MAX_uint8_T, 101U, 186U, 85U, 154U,
    158U, 0U, 171U, 162U, 251U, 135U, 20U, 192U, 127U, 235U, 203U, 59U, 128U,
    128U, 144U, 175U, 105U, 156U, 192U, 223U, 23U, 115U, 63U, 47U, 76U, 245U,
    251U, 136U, 64U, 140U, 12U, 10U, 191U, 186U, 173U, 165U, 82U, 161U, 135U,
    MAX_uint8_T, 189U, 102U, 120U, 112U, 223U, 119U, 32U, 169U, 35U, 223U, 222U,
    202U, 245U, 249U };

  static const uint8_T uv1[320]{ 130U, 166U, 2U, 74U, 14U, 210U, 194U, 202U, 66U,
    194U, 184U, 112U, 176U, 184U, 188U, 220U, 8U, 184U, 186U, 172U, 191U, 176U,
    180U, 178U, 182U, 190U, 150U, 182U, 150U, 150U, 187U, 154U, 154U, 184U, 154U,
    190U, 188U, 152U, 153U, 154U, 237U, 237U, 205U, 169U, 235U, 171U, 141U, 109U,
    235U, 205U, 229U, 245U, 253U, 253U, 245U, 192U, 100U, 245U, 176U, 233U, 185U,
    184U, 176U, 48U, 188U, 60U, 184U, 184U, 184U, 180U, 199U, 200U, 207U, 71U,
    207U, 231U, 67U, 71U, 7U, 207U, 158U, 143U, 159U, 175U, 159U, 191U, 191U,
    143U, 191U, 191U, 27U, MAX_uint8_T, 63U, 29U, 95U, 31U, 151U, 95U, 31U, 23U,
    80U, 145U, 144U, 132U, 156U, 194U, 194U, 148U, 82U, 160U, 19U, 27U, 27U, 25U,
    183U, 179U, 19U, 63U, 183U, 25U, 188U, 140U, 172U, 172U, 172U, 172U, 172U,
    172U, 172U, 172U, 223U, 222U, 222U, 158U, 254U, MAX_uint8_T, 186U, 158U,
    174U, 250U, 96U, 127U, 110U, 102U, 110U, 34U, 37U, 102U, 102U, 100U, 73U,
    11U, 10U, 222U, 207U, 75U, 203U, 207U, 203U, 203U, 239U, 207U, 201U, 167U,
    239U, 231U, 233U, 239U, 231U, 233U, 59U, 217U, 27U, 59U, 123U, 115U, 247U,
    51U, 63U, 123U, 59U, 251U, 251U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 251U,
    MAX_uint8_T, 251U, 235U, 145U, 211U, 17U, 17U, 145U, 129U, 129U, 145U, 149U,
    17U, 18U, 6U, 22U, 22U, 182U, 102U, 52U, 150U, 54U, 54U, 79U, 103U, 111U,
    75U, 79U, 79U, 207U, 79U, 221U, 111U, 146U, 218U, 218U, 146U, 186U, 130U,
    147U, 178U, 131U, 218U, 241U, 240U, 241U, 241U, 243U, 247U, 192U, 209U, 241U,
    243U, 205U, 31U, 31U, 155U, 31U, 243U, 149U, 159U, 140U, 157U, 18U, 80U, 18U,
    209U, 87U, 243U, 114U, 81U, 54U, 22U, 222U, 223U, 218U, 26U, 223U, 222U,
    218U, 218U, 222U, 95U, 234U, MAX_uint8_T, 127U, 123U, 235U, 155U, 27U, 251U,
    195U, 123U, 144U, 149U, 144U, 146U, 150U, 16U, 128U, 150U, 132U, 144U, 72U,
    125U, 76U, 4U, 92U, 84U, 108U, 12U, 68U, 92U, 165U, 63U, 141U, 175U, 173U,
    173U, 45U, 173U, 173U, 175U, 187U, 215U, 222U, 95U, 223U, 91U, 14U, 223U,
    223U, 142U };

  static const uint8_T uv10[320]{ 53U, 49U, 25U, 25U, 63U, 217U, 60U, 57U, 61U,
    41U, 67U, 207U, 31U, 91U, 83U, 95U, 77U, 22U, 87U, 223U, 107U, 75U, 107U,
    123U, 107U, 111U, 106U, 239U, 107U, 123U, 237U, 239U, 237U, 101U, 229U, 237U,
    236U, 229U, 231U, 77U, 116U, 22U, 118U, 114U, 118U, 38U, 84U, 246U, 246U,
    116U, 10U, 130U, 130U, 14U, 86U, 2U, 70U, 58U, 2U, 143U, 239U, 111U, 235U,
    111U, MAX_uint8_T, 111U, 111U, 239U, 239U, 239U, 120U, 244U, 119U, 48U, 112U,
    48U, 112U, 119U, 248U, 117U, 100U, 84U, 117U, 109U, 101U, 116U, 85U, 117U,
    117U, 117U, 224U, 0U, 72U, 200U, 236U, 202U, 132U, 235U, 234U, 104U, 251U,
    218U, 254U, 126U, MAX_uint8_T, 214U, 254U, 254U, MAX_uint8_T, 126U, 198U,
    198U, 230U, 228U, 230U, 230U, 2U, 246U, 230U, 102U, 83U, 115U, 57U,
    MAX_uint8_T, 91U, 115U, 83U, 83U, 91U, 115U, 1U, 99U, 15U, 23U, 31U, 39U,
    125U, 45U, 111U, 17U, 177U, 176U, 176U, 129U, 183U, 177U, 49U, 148U, 185U,
    148U, 96U, 96U, 96U, 112U, 96U, 97U, 96U, 96U, 96U, 52U, 126U, 122U, 126U,
    54U, 126U, 126U, 120U, 127U, 126U, 126U, 204U, 238U, 172U, 252U, 221U, 228U,
    252U, 238U, 204U, 172U, 22U, 30U, 23U, 86U, 151U, 61U, 23U, 55U, 23U, 22U,
    238U, 238U, 236U, 110U, 238U, 238U, 234U, 172U, 238U, 108U, 201U, 233U, 201U,
    193U, 201U, 233U, 232U, 185U, 233U, 201U, 178U, 187U, 186U, 176U, 178U, 149U,
    179U, 184U, 178U, 184U, 101U, 5U, 37U, 37U, 37U, 37U, 49U, 101U, 109U, 101U,
    14U, 191U, 207U, 76U, 204U, 236U, 142U, 142U, 238U, 31U, 244U, 240U, 246U,
    230U, 246U, 240U, 243U, 126U, 246U, 102U, 173U, 175U, 237U, 237U, 237U, 235U,
    239U, 239U, 239U, 173U, 163U, 166U, 170U, 34U, 162U, 234U, 162U, 246U, 167U,
    32U, 132U, 128U, 128U, 128U, 132U, 128U, 1U, 128U, 132U, 128U, 109U, 61U,
    63U, 110U, 111U, 45U, 103U, 239U, 47U, 111U, 187U, 186U, 138U, 178U, 191U,
    179U, 187U, 232U, 251U, 138U, 112U, 112U, 112U, 99U, 116U, 112U, 116U, 240U,
    112U, 82U, 160U, 40U, 249U, 249U, 241U, 121U, 162U, 249U, 241U, 185U };

  static const uint8_T uv100[320]{ 58U, 63U, 62U, 63U, 63U, 127U, 62U, 58U, 31U,
    43U, 91U, 88U, 81U, 93U, 83U, 95U, 93U, 75U, 123U, 91U, 98U, 98U, 114U, 106U,
    122U, 102U, 98U, 98U, 102U, 98U, 204U, 222U, 231U, 238U, 237U, 206U, 206U,
    158U, 206U, 222U, 119U, 79U, 119U, 119U, 127U, 125U, 127U, 93U, 127U, 127U,
    210U, 214U, 86U, 215U, 95U, 214U, 215U, 209U, 215U, 149U, 254U, 254U, 254U,
    223U, MAX_uint8_T, 94U, 222U, 222U, 186U, 190U, 112U, 64U, 112U, 240U, 120U,
    240U, 248U, 224U, 120U, 240U, 205U, 205U, 77U, 197U, 45U, 197U, 207U, 197U,
    175U, 205U, 204U, 196U, 204U, 204U, 236U, 204U, 204U, 68U, 204U, 72U, 254U,
    213U, MAX_uint8_T, 252U, MAX_uint8_T, 254U, 252U, 220U, 223U, 252U, 167U,
    135U, 3U, 167U, 167U, 39U, 175U, 135U, 167U, 231U, 104U, 104U, 75U, 121U,
    223U, 106U, 104U, 104U, 108U, 40U, 220U, 204U, 95U, 221U, 223U, 252U, 220U,
    204U, 222U, 220U, 183U, 55U, 63U, 183U, 191U, 183U, 191U, 183U, 183U, 183U,
    228U, 237U, 212U, 228U, 228U, 244U, 164U, 196U, 228U, 228U, 254U, 252U, 254U,
    254U, 254U, 252U, 254U, 120U, 254U, 254U, 249U, 233U, 221U, 249U, 221U, 244U,
    249U, 232U, 253U, 249U, 151U, 179U, 151U, 151U, 223U, 190U, 151U, 151U,
    MAX_uint8_T, 151U, 231U, 231U, 227U, 239U, 239U, 230U, 231U, 231U, 231U,
    199U, 204U, 204U, 204U, 205U, 205U, 237U, 204U, 204U, 196U, 199U, 179U, 163U,
    179U, 163U, 179U, 163U, 35U, 171U, 147U, 171U, 36U, 62U, 57U, 60U, 125U, 62U,
    62U, 46U, 190U, 46U, 236U, 232U, 204U, 253U, 204U, 253U, MAX_uint8_T, 253U,
    253U, 253U, 50U, 19U, 179U, 115U, 247U, 51U, 51U, 50U, 119U, 54U, 125U, 120U,
    253U, 253U, 253U, 127U, 93U, 125U, 125U, 124U, 138U, 203U, 131U, 171U, 171U,
    133U, 143U, 138U, 139U, 138U, 139U, 139U, 135U, 139U, 135U, 155U, 191U, 139U,
    139U, 139U, 119U, 55U, 103U, 119U, 119U, 127U, 119U, 55U, 23U, 95U, 191U,
    191U, 191U, 191U, 191U, 191U, 191U, 191U, 191U, 191U, 124U, 124U, 124U, 124U,
    127U, 124U, 124U, 124U, 61U, 121U, 215U, 214U, 215U, MAX_uint8_T, 247U, 95U,
    215U, 222U, 215U, 221U };

  static const uint8_T uv101[320]{ 53U, 49U, 49U, 53U, 1U, 49U, 54U, 61U, 21U,
    53U, 67U, 107U, 0U, 99U, 66U, 6U, 65U, 71U, 71U, 83U, 107U, 75U, 107U, 105U,
    75U, 75U, 82U, 107U, 75U, 75U, 237U, 101U, 197U, 233U, 161U, 173U, 229U,
    101U, 229U, 237U, 86U, 84U, 68U, 124U, 76U, 84U, 100U, 116U, 52U, 54U, 2U,
    11U, 2U, 3U, 11U, 11U, 10U, 10U, 10U, 2U, 239U, 239U, 233U, 203U, 233U, 235U,
    238U, 111U, 111U, 111U, 120U, 116U, 80U, 248U, 80U, 120U, 96U, 120U, 48U,
    120U, 68U, 100U, 101U, 86U, 108U, 116U, 45U, 117U, 116U, 100U, 192U, 160U,
    160U, 224U, 32U, 160U, 160U, 224U, 224U, 232U, MAX_uint8_T, 250U, 243U, 249U,
    243U, 250U, 243U, MAX_uint8_T, 122U, 251U, 198U, 202U, 194U, 238U, 198U,
    198U, 66U, 198U, 198U, 230U, 83U, 115U, 83U, 83U, 147U, 83U, 223U, 83U, 211U,
    83U, 73U, 1U, 9U, 73U, 3U, 1U, 10U, 1U, 35U, 67U, 177U, 145U, 189U, 185U,
    145U, 176U, 53U, 145U, 145U, 185U, 96U, 48U, 104U, 32U, 96U, 64U, 64U, 112U,
    96U, 96U, 126U, 122U, 122U, 126U, 106U, 120U, 122U, 126U, 126U, 126U, 236U,
    236U, 140U, 136U, 140U, 140U, 133U, 204U, 204U, 204U, 22U, 6U, 23U, 22U, 78U,
    6U, 95U, 22U, 30U, 30U, 238U, 238U, 172U, 254U, 238U, 172U, 235U, 238U, 238U,
    238U, 201U, 201U, 137U, 201U, 137U, 169U, 72U, 201U, 201U, 201U, 179U, 178U,
    182U, 178U, 178U, 178U, 179U, 178U, 176U, 178U, 37U, 69U, 101U, 109U, 197U,
    69U, 69U, 101U, 101U, 101U, 12U, 12U, 200U, 158U, 192U, 30U, 204U, 14U, 14U,
    12U, 112U, 116U, 84U, 252U, 212U, 244U, 180U, 118U, 228U, 244U, 173U, 172U,
    168U, 141U, 168U, 174U, 184U, 237U, 174U, 172U, 163U, 165U, 162U, 163U, 162U,
    163U, 138U, 161U, 163U, 163U, 132U, 0U, 4U, 244U, 0U, 4U, 132U, 132U, 132U,
    132U, 125U, 109U, 101U, 125U, 45U, 109U, 101U, 111U, 45U, 45U, 187U, 186U,
    170U, 171U, 139U, 170U, 187U, 187U, 187U, 187U, 112U, 114U, 112U, 112U, 113U,
    112U, 113U, 114U, 112U, 112U, 160U, 168U, 160U, 177U, 160U, 160U, 128U, 160U,
    160U, 177U };

  static const uint8_T uv102[320]{ 17U, 49U, 48U, 16U, 17U, 17U, 49U, 49U, 49U,
    49U, 207U, 207U, 141U, 207U, 223U, 143U, 77U, 205U, 143U, 79U, 79U, 75U, 66U,
    78U, 91U, 79U, 79U, 79U, 75U, 79U, 239U, 236U, 237U, 174U, 175U, 237U, 239U,
    238U, 239U, 238U, 150U, 22U, 20U, 22U, 50U, 20U, 22U, 20U, 150U, 54U, 130U,
    131U, 130U, 130U, 130U, 10U, 2U, 134U, 131U, 131U, 111U, 239U, 110U, 79U,
    111U, 111U, 111U, 79U, 111U, 79U, 245U, 244U, 103U, 245U, 246U, 55U, 244U,
    117U, MAX_uint8_T, 240U, 84U, 84U, 84U, 132U, 52U, 116U, 116U, 68U, 84U,
    212U, 0U, 0U, 0U, 4U, 128U, 0U, 128U, 64U, 160U, 72U, 218U, 218U, 250U, 218U,
    218U, 250U, 250U, 250U, 250U, 222U, 198U, 198U, 66U, 131U, 230U, 198U, 66U,
    70U, 230U, 230U, 113U, 115U, 115U, 115U, 117U, 243U, 115U, 115U, 115U, 115U,
    99U, 201U, 99U, 107U, 99U, 35U, 99U, 115U, 97U, 227U, 176U, 176U, 48U, 48U,
    161U, 176U, 177U, 176U, 176U, 177U, 97U, 96U, 64U, 64U, 64U, 96U, 96U, 96U,
    96U, 96U, 126U, 122U, 120U, 120U, 118U, 122U, 122U, 120U, 123U, 126U, 230U,
    234U, 174U, 226U, 239U, 238U, 236U, 228U, 238U, 224U, 31U, 22U, 14U, 31U,
    31U, 14U, 30U, 30U, 6U, 30U, 238U, 238U, 232U, 239U, 238U, 236U, 234U, 238U,
    238U, 238U, 233U, 201U, 104U, 104U, 233U, 233U, 233U, 233U, 249U, 233U, 153U,
    187U, 187U, 139U, 153U, 184U, 179U, 187U, 186U, 171U, 5U, 4U, 5U, 5U, 5U,
    69U, 5U, 53U, 77U, 44U, 191U, 191U, 191U, 191U, 47U, 47U, 175U, 61U, 63U,
    191U, 240U, 240U, 176U, 240U, 240U, 228U, 240U, 241U, 252U, 240U, 175U, 173U,
    174U, 231U, 167U, 175U, 239U, 173U, 175U, 175U, 174U, 166U, 162U, 174U, 174U,
    166U, 166U, 162U, 167U, 162U, 128U, 128U, 0U, 128U, 128U, 0U, 128U, 0U, 128U,
    128U, 61U, 61U, 53U, 53U, 60U, 45U, 61U, 61U, 61U, 61U, 186U, 154U, 170U,
    186U, 178U, 170U, 186U, 186U, 250U, 187U, 240U, 112U, 240U, 180U, 33U, 240U,
    112U, 112U, 240U, 112U, 40U, 168U, 8U, 104U, 57U, 40U, 40U, 40U, 168U, 57U };

  static const uint8_T uv103[320]{ 25U, 57U, 58U, 49U, 25U, 27U, 25U, 25U, 27U,
    57U, 159U, 223U, 15U, 75U, 0U, 95U, 18U, 159U, 95U, 157U, 107U, 107U, 74U,
    107U, 107U, 107U, 107U, 107U, 107U, 107U, 237U, 236U, 236U, 237U, 237U, 237U,
    225U, 173U, 252U, 237U, 54U, 118U, 114U, 118U, 86U, 118U, 102U, 50U, 54U,
    118U, 130U, 131U, 130U, 130U, 2U, 146U, 10U, 130U, 130U, 214U, 107U, 239U,
    123U, 235U, 233U, 239U, 233U, 107U, MAX_uint8_T, MAX_uint8_T, 119U, 119U,
    114U, 112U, 83U, 119U, 83U, 117U, 119U, 119U, 117U, 85U, 53U, 101U, 117U,
    125U, 109U, 36U, 149U, 117U, 72U, 72U, 140U, 64U, 64U, 72U, 72U, 72U, 72U,
    76U, 254U, 254U, 254U, 246U, 214U, 94U, 246U, 222U, 222U, 254U, 230U, 230U,
    231U, 230U, 198U, 230U, 230U, 231U, 230U, 166U, 121U, 49U, 41U, 59U, 25U,
    57U, 153U, 125U, 57U, 121U, 47U, 207U, 143U, 11U, 15U, 15U, 15U, 7U, 175U,
    63U, 176U, 176U, 163U, 180U, 176U, 180U, 144U, 178U, 176U, 182U, 96U, 96U,
    80U, 96U, 96U, 96U, 96U, 96U, 96U, 96U, 126U, 126U, 126U, 126U, 126U, 126U,
    110U, 118U, 110U, 126U, 174U, 168U, 189U, 173U, 172U, 173U, 141U, 173U, 187U,
    190U, 31U, 23U, 151U, 31U, 23U, 23U, 31U, 31U, 31U, 151U, 172U, 236U, 228U,
    237U, 173U, 237U, 140U, 237U, 205U, 236U, 217U, 201U, 72U, 201U, 137U, 193U,
    137U, 217U, 233U, 233U, 184U, 187U, 155U, 186U, 186U, 184U, 184U, 153U, 155U,
    186U, 37U, 36U, 4U, 101U, 37U, 37U, 101U, 37U, 36U, 53U, 207U, MAX_uint8_T,
    206U, 221U, 206U, 207U, 192U, 207U, 239U, MAX_uint8_T, 246U, 242U, 242U,
    246U, 214U, 118U, 214U, 240U, 242U, 119U, 239U, 237U, 229U, 233U, 237U, 237U,
    233U, 237U, 239U, 237U, 162U, 162U, 170U, 170U, 170U, 170U, 186U, 170U, 170U,
    162U, 192U, 128U, 129U, 128U, 128U, 128U, 128U, 192U, 128U, 128U, 63U, 63U,
    39U, 61U, 47U, 47U, 47U, 45U, 61U, 55U, 138U, 138U, 164U, 138U, 136U, 136U,
    136U, 130U, 152U, 142U, 240U, 112U, 46U, 112U, 112U, 113U, 113U, 161U, 49U,
    244U, 249U, 249U, 219U, 185U, 248U, 249U, 249U, 121U, 249U, 249U };

  static const uint8_T uv104[320]{ 28U, 81U, 25U, 40U, 9U, 89U, 92U, 1U, 9U, 88U,
    91U, 115U, 115U, 123U, 93U, 95U, 95U, 91U, 95U, 91U, 123U, 91U, 123U, 123U,
    115U, 95U, 123U, 127U, 123U, 123U, 239U, 165U, 101U, 101U, 69U, 101U, 229U,
    229U, 229U, 228U, 114U, 50U, 114U, 112U, 116U, 50U, 50U, 52U, 114U, 50U,
    202U, 10U, 14U, 78U, 14U, 14U, 74U, 14U, 30U, 202U, 127U, 43U, 107U, 119U,
    111U, 111U, 127U, 111U, 127U, 63U, 240U, 48U, 112U, 54U, 52U, 54U, 48U, 48U,
    54U, 116U, 61U, 44U, 105U, 97U, 125U, 101U, 33U, 108U, 61U, 172U, 204U, 232U,
    232U, 204U, 72U, 200U, 200U, 200U, 200U, 140U, 127U, 90U, 126U, 126U, 126U,
    126U, 126U, 126U, 126U, 126U, 229U, 228U, 236U, 108U, 68U, 228U, 224U, 228U,
    228U, 224U, MAX_uint8_T, 221U, 95U, 183U, MAX_uint8_T, MAX_uint8_T, 95U,
    MAX_uint8_T, 189U, 63U, 215U, 7U, 7U, 23U, 23U, 39U, 23U, 23U, 63U, 151U,
    163U, 129U, 145U, 129U, 149U, 145U, 129U, 145U, 147U, 161U, 112U, 112U, 48U,
    48U, 116U, 112U, 112U, 112U, 112U, 112U, 54U, 54U, 54U, 54U, 182U, 54U, 54U,
    118U, 54U, 54U, 249U, 125U, 252U, 252U, 124U, 228U, 253U, 244U, 125U, 253U,
    23U, 93U, 84U, 86U, 86U, 124U, 93U, 62U, 23U, 77U, 106U, 238U, 110U, 104U,
    110U, 110U, 234U, 238U, 110U, 226U, 193U, 193U, 193U, 201U, 193U, 233U, 193U,
    193U, 193U, 65U, 144U, 144U, 176U, 184U, 176U, 152U, 144U, 176U, 152U, 153U,
    40U, 165U, 37U, 113U, 49U, 37U, 165U, 37U, 37U, 32U, 110U, 76U, 76U, 12U,
    111U, 46U, 78U, 76U, 238U, 108U, 230U, 228U, 246U, 231U, 103U, 230U, 246U,
    228U, 230U, 242U, 237U, 173U, 237U, 237U, 252U, 239U, 237U, 169U, 253U, 229U,
    35U, 42U, 33U, 32U, 32U, 36U, 35U, 34U, 38U, 34U, 128U, 128U, 128U, 128U, 0U,
    128U, 128U, 128U, 128U, 128U, 108U, 44U, 111U, 106U, 74U, 110U, 38U, 44U,
    46U, 32U, 179U, 178U, 162U, 176U, 178U, 178U, 179U, 179U, 182U, 178U, 39U,
    35U, 67U, 70U, 67U, 98U, 39U, 97U, 1U, 39U, 241U, 113U, 177U, 251U, 185U,
    121U, 113U, 57U, 249U, 121U };

  static const uint8_T uv105[320]{ 31U, 59U, 59U, 59U, 61U, 127U, 29U, 189U, 63U,
    61U, 83U, 95U, 81U, 18U, 83U, 115U, 81U, 89U, 87U, 83U, 107U, 122U, 123U,
    123U, 107U, 105U, 106U, 107U, 123U, 107U, 229U, 237U, 224U, 225U, 236U, 229U,
    229U, 229U, 229U, 229U, 118U, 118U, 116U, 102U, 118U, 54U, 118U, 102U, 118U,
    118U, 18U, 86U, 15U, 94U, 86U, 94U, 86U, 86U, 94U, 86U, 235U, MAX_uint8_T,
    219U, 249U, 95U, 95U, 251U, MAX_uint8_T, MAX_uint8_T, 127U, 112U, 116U, 88U,
    80U, 120U, 56U, 112U, 112U, 120U, 112U, 101U, 109U, 73U, 109U, 69U, 97U,
    101U, 97U, 125U, 101U, 232U, 204U, 232U, 108U, 204U, 236U, 228U, 236U, 236U,
    236U, MAX_uint8_T, 254U, 253U, 247U, MAX_uint8_T, 254U, 127U, 246U,
    MAX_uint8_T, MAX_uint8_T, 230U, 167U, 110U, 230U, 230U, 239U, 130U, 166U,
    231U, 230U, 89U, 123U, 27U, 27U, 91U, 91U, 89U, 91U, 91U, 91U, 15U, 31U, 31U,
    31U, 93U, 31U, 31U, 29U, 63U, 31U, 183U, 183U, 181U, 150U, 187U, 151U, 159U,
    183U, 159U, 191U, 96U, 100U, 48U, 96U, 96U, 48U, 96U, 113U, 116U, 96U, 126U,
    126U, 254U, 126U, 126U, 126U, 126U, 126U, 126U, 126U, 141U, 253U, 157U, 157U,
    220U, 213U, 156U, 252U, 221U, 220U, 23U, 159U, 23U, 159U, 151U, 221U, 151U,
    23U, 159U, 151U, 239U, 239U, 239U, 237U, 238U, 238U, 238U, 238U, 239U, 238U,
    201U, 205U, 201U, 137U, 201U, 205U, 200U, 201U, 237U, 201U, 176U, 179U, 179U,
    178U, 179U, 178U, 176U, 183U, 178U, 178U, 37U, 53U, 112U, 101U, 37U, 229U,
    53U, 53U, 109U, 53U, 204U, 204U, 204U, 200U, 140U, 140U, 204U, 204U, 206U,
    140U, 118U, 247U, 243U, 214U, 242U, 246U, 119U, 115U, 246U, 246U, 237U, 253U,
    217U, 249U, 237U, 253U, 237U, 233U, MAX_uint8_T, 237U, 170U, 162U, 162U,
    162U, 163U, 161U, 162U, 163U, 167U, 162U, 132U, 129U, 180U, 128U, 132U, 148U,
    133U, 128U, 132U, 132U, 47U, 103U, 127U, 111U, 127U, 111U, 39U, 103U, 111U,
    111U, 171U, 190U, 171U, 142U, 187U, 191U, 167U, 187U, 191U, 191U, 112U, 116U,
    114U, 116U, 116U, 86U, 116U, 118U, 116U, 116U, 241U, 251U, 241U, 241U, 241U,
    113U, 241U, 241U, 241U, 241U };

  static const uint8_T uv106[320]{ 216U, 249U, 217U, 219U, 91U, 213U, 209U, 217U,
    213U, 217U, 89U, 95U, 95U, 95U, 95U, 75U, 72U, 94U, 86U, 223U, 127U, 111U,
    111U, 111U, 79U, 79U, 79U, 239U, 239U, 79U, 236U, 236U, 237U, 252U, 165U,
    237U, 237U, 229U, 229U, 237U, 34U, 38U, 38U, 38U, 50U, 38U, 4U, 38U, 38U,
    54U, 70U, 2U, 18U, 130U, 2U, 2U, 6U, 10U, 2U, 2U, 95U, 79U, 111U, 127U, 111U,
    111U, 111U, 111U, 111U, 111U, 48U, 112U, 112U, 118U, 48U, 112U, 48U, 52U,
    48U, 53U, 164U, 148U, 117U, 180U, 52U, 164U, 100U, 116U, 116U, 36U, 200U,
    202U, 202U, 202U, 200U, 194U, 194U, 202U, 234U, 72U, 214U, 214U, 246U, 214U,
    218U, 210U, 214U, 86U, 215U, 222U, 226U, 230U, 230U, 230U, 231U, 230U, 198U,
    230U, 230U, 230U, 119U, 115U, 115U, 125U, 125U, 113U, 115U, 249U, 83U, 247U,
    119U, 231U, 39U, 175U, 39U, 107U, 35U, 39U, 39U, 39U, 161U, 177U, 177U, 179U,
    179U, 177U, 177U, 145U, 145U, 176U, 115U, 97U, 97U, 97U, 64U, 99U, 99U, 99U,
    99U, 97U, 118U, 126U, 126U, 102U, 118U, 126U, 122U, 118U, 126U, 118U, 245U,
    228U, 228U, 245U, 229U, 229U, 228U, 228U, 196U, 228U, 61U, 63U, 62U, 63U,
    61U, 63U, 60U, 61U, 61U, 61U, 234U, 238U, 238U, 239U, 239U, 239U, 238U, 238U,
    238U, 238U, 233U, 233U, 233U, 233U, 237U, 233U, 233U, 225U, 233U, 233U, 129U,
    135U, 181U, 157U, 145U, 149U, 149U, 212U, 213U, 153U, 49U, 37U, 37U, 36U, 5U,
    5U, 53U, 165U, 37U, 37U, 44U, 175U, 204U, 238U, 206U, 236U, 12U, 234U, 138U,
    45U, 241U, 240U, 242U, 242U, 240U, 240U, 240U, 230U, 240U, 224U, 235U, 235U,
    235U, 235U, 239U, 171U, 235U, 235U, 235U, 235U, 234U, 234U, 226U, 234U, 170U,
    234U, 226U, 230U, 235U, 234U, 128U, 128U, 128U, 128U, 128U, 128U, 128U, 128U,
    132U, 128U, 36U, 61U, 47U, 45U, 45U, 45U, 45U, 47U, 45U, 44U, 179U, 187U,
    187U, 176U, 182U, 179U, 179U, 241U, 243U, 178U, 37U, 112U, 112U, 33U, 33U,
    49U, 112U, 97U, 112U, 161U, 121U, 121U, 121U, 121U, 89U, 49U, 40U, 121U,
    113U, 121U };

  static const uint8_T uv107[320]{ 56U, 57U, 60U, 60U, 188U, 56U, 20U, 188U, 56U,
    184U, 77U, 77U, 85U, 69U, 4U, 77U, 93U, 76U, 77U, 93U, 98U, 107U, 123U, 106U,
    239U, 106U, 123U, 110U, 123U, 118U, 237U, 236U, 236U, 236U, 205U, 237U, 236U,
    236U, 108U, 236U, 85U, 84U, 84U, 84U, 196U, 84U, 22U, 4U, 84U, 85U, 2U, 198U,
    70U, 86U, 102U, 86U, 70U, 66U, 198U, 86U, 110U, 207U, 107U, 95U, 239U,
    MAX_uint8_T, 127U, 111U, 103U, 126U, 96U, 112U, 112U, 120U, 80U, 119U, 112U,
    112U, 112U, 116U, 85U, 85U, 53U, 85U, 84U, 85U, 52U, 213U, 117U, 117U, 128U,
    192U, 128U, 132U, 134U, 132U, 132U, 130U, 132U, 134U, 250U, 254U,
    MAX_uint8_T, MAX_uint8_T, 247U, 254U, 222U, 246U, 254U, 246U, 2U, 2U, 2U, 2U,
    18U, 2U, 3U, 2U, 2U, 3U, 75U, 115U, 83U, 91U, 81U, 123U, 119U, 83U, 115U,
    107U, 41U, 221U, 215U, 93U, 125U, 61U, MAX_uint8_T, 235U, 151U, 63U, 53U,
    177U, 49U, 187U, 181U, 48U, 33U, 49U, 161U, 55U, 80U, 96U, 112U, 96U, 105U,
    96U, 64U, 97U, 112U, 209U, 120U, 120U, 120U, 120U, 120U, 120U, 126U, 120U,
    120U, 122U, 236U, 248U, 252U, 252U, 252U, 254U, 253U, 228U, 252U, 244U, 23U,
    23U, 23U, 151U, 19U, 23U, 31U, 63U, 6U, 151U, 234U, 234U, 234U, 234U, 170U,
    232U, 226U, 234U, 234U, 234U, 104U, 201U, 73U, 232U, 168U, 232U, 72U, 104U,
    104U, 236U, 179U, 179U, 179U, 179U, 182U, 187U, 147U, 183U, 179U, 183U, 1U,
    52U, 49U, 53U, 53U, 49U, 49U, 53U, 48U, 49U, 142U, 174U, 142U, 142U, 138U,
    142U, 46U, 142U, 46U, 142U, 243U, 115U, 243U, 115U, 87U, 243U, 241U, 243U,
    115U, 243U, 239U, 237U, 237U, 237U, 171U, 239U, 231U, 235U, 173U, 235U, 130U,
    162U, 162U, 163U, 226U, 166U, 170U, 226U, 160U, 226U, 1U, 0U, 0U, 133U, 4U,
    1U, 128U, 1U, 0U, 129U, 103U, 119U, 39U, 119U, 231U, 103U, 37U, 39U, 99U,
    103U, 187U, 187U, 187U, 187U, 251U, 186U, 187U, 187U, 179U, 188U, 112U, 116U,
    116U, 116U, 116U, 244U, 36U, 116U, 102U, 124U, 130U, 232U, 162U, 226U, 224U,
    234U, 115U, 34U, 170U, 202U };

  static const uint8_T uv108[320]{ 89U, 57U, 185U, 49U, 149U, 57U, 188U, 185U,
    57U, 184U, 159U, 159U, 22U, 158U, 22U, 6U, 20U, 134U, 31U, 4U, 239U, 235U,
    239U, 239U, 239U, 110U, 238U, 229U, 97U, 238U, 229U, 229U, 229U, 253U, 229U,
    69U, 229U, 85U, 69U, 229U, 182U, 246U, 118U, 246U, 230U, 86U, 228U, 116U,
    118U, 214U, 58U, 58U, 42U, 35U, 34U, 58U, 118U, 58U, 27U, 34U, 111U, 239U,
    233U, 239U, 237U, 104U, MAX_uint8_T, 107U, 207U, 237U, 55U, 247U, 83U, 127U,
    83U, 119U, 119U, 55U, 63U, 119U, 117U, 117U, 125U, 86U, 116U, 117U, 85U,
    117U, 81U, 85U, 235U, 235U, 235U, 227U, 203U, 231U, 206U, 235U, 234U, 163U,
    126U, 126U, 246U, 254U, 119U, 254U, 254U, 118U, 254U, 126U, 230U, 230U, 246U,
    246U, 246U, 151U, 54U, 246U, 238U, 146U, 123U, 123U, 155U, 115U, 81U, 99U,
    89U, 243U, 115U, 91U, 47U, 45U, 47U, 109U, 47U, 41U, 61U, 40U, 44U, 41U,
    146U, 148U, 148U, 180U, 188U, 150U, 190U, 148U, 148U, 180U, 112U, 96U, 105U,
    96U, 105U, 84U, 107U, 244U, 164U, 105U, 119U, 127U, 127U, 127U, 126U, 122U,
    126U, 127U, 126U, 123U, 230U, 238U, 140U, 238U, 132U, 174U, 212U, 238U, 230U,
    206U, 61U, 23U, 63U, 55U, 55U, 166U, 183U, 54U, 86U, 55U, 172U, 172U, 172U,
    173U, 172U, 172U, 170U, 172U, 173U, 168U, 249U, 249U, 169U, 185U, 185U, 188U,
    185U, 185U, 253U, 184U, 184U, 184U, 252U, 250U, 180U, 184U, 180U, 252U, 186U,
    252U, 101U, 101U, 101U, 109U, 37U, 101U, 53U, 101U, 101U, 37U, 142U, 238U,
    206U, 159U, 202U, 142U, 138U, 143U, 142U, 142U, 238U, 126U, 214U, 126U, 86U,
    126U, 119U, 46U, 62U, 118U, 239U, 239U, 239U, 175U, 175U, 239U, 239U, 238U,
    110U, 239U, 182U, 182U, 242U, 247U, 242U, 176U, 246U, 177U, 165U, 246U, 128U,
    128U, 128U, 132U, 132U, 1U, 132U, 192U, 144U, 132U, 175U, 239U, 239U, 237U,
    173U, 103U, 231U, 239U, 111U, 231U, 224U, 248U, 232U, 232U, 232U, 172U, 248U,
    232U, 232U, 248U, 240U, 240U, 112U, 240U, 240U, 126U, 244U, 208U, 82U, 240U,
    121U, 249U, 249U, 249U, 241U, 204U, 241U, 189U, 253U, 168U };

  static const uint8_T uv109[320]{ 63U, 61U, 21U, 29U, 189U, 61U, 189U, 61U,
    149U, 61U, 87U, 95U, 87U, 223U, 86U, 79U, MAX_uint8_T, 87U, 79U, 87U, 123U,
    107U, 107U, 235U, 239U, 107U, 233U, 107U, 121U, 107U, 231U, 103U, 231U, 231U,
    229U, 239U, 239U, 236U, 227U, 231U, 246U, 244U, 182U, 246U, 102U, 118U, 254U,
    54U, 230U, 118U, 26U, 27U, 2U, 42U, 34U, 2U, 3U, 6U, 40U, 3U, MAX_uint8_T,
    79U, 239U, 239U, 239U, 111U, 207U, 239U, 239U, 239U, 248U, 248U, 248U, 248U,
    248U, 248U, 252U, 120U, 212U, 248U, 125U, 85U, 52U, 117U, 117U, 117U, 87U,
    84U, 109U, 85U, 232U, 234U, 232U, 234U, 234U, 194U, 234U, 202U, 74U, 232U,
    MAX_uint8_T, MAX_uint8_T, 95U, 127U, 247U, MAX_uint8_T, 252U, 223U, 191U,
    MAX_uint8_T, 230U, 238U, 230U, 230U, 230U, 230U, 238U, 230U, 246U, 230U, 91U,
    83U, 81U, 89U, 91U, 91U, 115U, 83U, 159U, 91U, 127U, 109U, 111U, 111U, 111U,
    107U, 109U, 125U, 43U, 77U, 157U, 155U, 185U, 185U, 189U, 185U, 249U, 185U,
    157U, 185U, 112U, 48U, 96U, 96U, 107U, 96U, 32U, 96U, 97U, 96U, 126U, 126U,
    126U, 127U, 126U, 126U, 127U, 126U, 111U, 126U, 221U, 204U, 205U, 206U, 196U,
    236U, 238U, 236U, 195U, 204U, 31U, 22U, 23U, 55U, 63U, 23U, 23U, 23U, 95U,
    23U, 239U, 238U, 239U, 238U, 238U, 238U, 238U, 238U, 239U, 238U, 233U, 233U,
    225U, 249U, 233U, 233U, 233U, 233U, 241U, 201U, 178U, 178U, 144U, 176U, 247U,
    178U, 242U, 179U, 54U, 178U, 109U, 109U, 45U, 109U, 45U, 45U, 109U, 61U,
    108U, 109U, 238U, 174U, 206U, 238U, 202U, 238U, 190U, 142U, 226U, 206U, 246U,
    118U, 244U, 254U, 246U, 118U, 254U, 242U, 246U, 118U, MAX_uint8_T, 239U,
    175U, 239U, 235U, 239U, 207U, 239U, 221U, 237U, 167U, 165U, 175U, 167U, 231U,
    167U, 167U, 167U, 174U, 167U, 132U, 132U, 132U, 132U, 132U, 132U, 180U, 132U,
    128U, 132U, 47U, 111U, 45U, 175U, 47U, 47U, 61U, 63U, 173U, 111U, 251U, 251U,
    243U, 251U, 251U, 251U, 251U, 251U, 251U, 187U, 112U, 114U, 49U, 240U, 112U,
    112U, 240U, 112U, 225U, 112U, 241U, 241U, 241U, 241U, 241U, 177U, 241U, 241U,
    177U, 241U };

  static const uint8_T uv11[320]{ 130U, 134U, 2U, 134U, 131U, 2U, 130U, 2U, 130U,
    162U, 168U, 249U, 188U, 176U, 184U, 184U, 184U, 184U, 184U, 188U, 150U, 155U,
    191U, 185U, 191U, 191U, 191U, 146U, 157U, 189U, 155U, 186U, 250U, 187U, 250U,
    248U, 187U, 155U, 187U, 244U, 236U, 234U, 219U, 205U, 236U, 108U, 235U, 237U,
    237U, 236U, 169U, 197U, 229U, 229U, 173U, 229U, 229U, 229U, 229U, 101U, 168U,
    189U, 177U, 185U, 185U, 185U, 185U, 184U, 177U, 189U, 199U, 204U, 199U, 203U,
    215U, 71U, 199U, 199U, 207U, 119U, 190U, 142U, 158U, 158U, 142U, 143U, 158U,
    158U, 158U, 154U, 19U, 26U, 95U, 23U, 91U, 25U, 95U, 25U, 27U, 250U, 80U,
    81U, 68U, 65U, 16U, 208U, 80U, 80U, 80U, 144U, 18U, 98U, 19U, 19U, 116U, 19U,
    51U, 19U, 19U, 123U, 172U, 188U, 188U, 148U, 188U, 188U, 188U, 172U, 188U,
    188U, 138U, 223U, MAX_uint8_T, 223U, 223U, 159U, MAX_uint8_T, 222U,
    MAX_uint8_T, 191U, 112U, 105U, 96U, 104U, 96U, 100U, 96U, 96U, 96U, 100U,
    75U, 75U, 104U, 73U, 43U, 75U, 75U, 72U, 73U, 43U, 235U, 239U, 231U, 201U,
    199U, 239U, 231U, 239U, 205U, 207U, 43U, 123U, 59U, 27U, 59U, 59U, 59U, 59U,
    59U, 59U, 59U, 51U, 187U, 51U, 127U, 127U, 187U, 179U, 51U, 119U, 145U, 211U,
    145U, 145U, 17U, 145U, 145U, 145U, 17U, 129U, 18U, 67U, 51U, 50U, 147U, 18U,
    50U, 18U, 50U, 241U, 92U, 71U, 77U, 94U, 79U, 111U, 77U, 92U, 92U, 111U,
    194U, 154U, 50U, 90U, 154U, 146U, 178U, 18U, 82U, 210U, 241U, 241U, 243U,
    211U, 241U, 241U, 241U, 241U, 243U, 194U, 140U, 93U, 221U, 205U, 205U, 221U,
    205U, 13U, 205U, 93U, 18U, 16U, 215U, 18U, 152U, 24U, 18U, 20U, 146U, 26U,
    222U, MAX_uint8_T, 30U, 218U, 126U, 218U, 94U, 154U, 222U, MAX_uint8_T, 104U,
    170U, 107U, 111U, 234U, 234U, 235U, 235U, 107U, 186U, 148U, 144U, 144U, 144U,
    152U, 148U, 144U, 144U, 144U, 29U, 72U, 91U, 64U, 72U, 72U, 8U, 64U, 8U, 72U,
    104U, 161U, 165U, 165U, 165U, 161U, 165U, 165U, 165U, 165U, 167U, 136U, 179U,
    251U, 242U, 187U, 187U, 251U, 155U, 187U, 187U };

  static const uint8_T uv110[320]{ 161U, 33U, 57U, 33U, 33U, 41U, 57U, 41U, 41U,
    57U, 223U, 223U, MAX_uint8_T, 125U, 89U, 223U, 221U, 157U, 7U, 15U, 127U,
    115U, 91U, 123U, 123U, 105U, 123U, 123U, 97U, 107U, 79U, 69U, 105U, 69U, 77U,
    73U, 109U, 101U, 69U, 109U, 116U, 116U, 112U, 116U, 116U, 244U, 116U, 116U,
    116U, 116U, 207U, 15U, 143U, 79U, 207U, 139U, 207U, 143U, 27U, 139U, 231U,
    239U, 79U, 239U, 103U, 239U, 111U, 107U, 234U, 107U, 244U, 53U, 117U, 112U,
    116U, 253U, 117U, 55U, 51U, 113U, 84U, 125U, 53U, 117U, 101U, 84U, 85U, 117U,
    117U, 117U, 72U, 104U, 72U, 232U, 8U, 104U, 72U, 104U, 96U, 96U, 118U, 126U,
    124U, 126U, 126U, 124U, 126U, 126U, 126U, 126U, 102U, 100U, 236U, 110U, 64U,
    238U, 70U, 68U, 198U, 78U, 115U, 243U, 115U, 115U, 51U, 115U, 115U, 243U,
    179U, 115U, 85U, 17U, 7U, 21U, 17U, 73U, 21U, 57U, 8U, 1U, 180U, 148U, 128U,
    149U, 180U, 148U, 176U, 144U, 148U, 144U, 37U, 52U, 48U, 52U, 52U, 32U, 112U,
    112U, 180U, 48U, 126U, 30U, 62U, 126U, 120U, 94U, 126U, 126U, 122U, 122U,
    248U, 44U, 168U, 252U, 184U, 170U, 184U, 174U, 172U, 172U, 22U, 22U, 22U,
    22U, 6U, 22U, 22U, 22U, 22U, 6U, 106U, 108U, 108U, 110U, 104U, 110U, 110U,
    44U, 44U, 108U, 225U, 193U, 233U, 201U, 201U, 217U, 201U, 185U, 205U, 201U,
    188U, 184U, 186U, 178U, 186U, 186U, 184U, 184U, 184U, 186U, 117U, 101U, 97U,
    117U, 48U, 109U, 117U, 117U, 101U, 101U, 63U, 79U, 31U, 14U, 13U, 63U, 63U,
    15U, 14U, 31U, 103U, 38U, 106U, 119U, 103U, 110U, 103U, 102U, 38U, 118U,
    170U, 188U, 207U, 173U, 173U, 141U, 237U, 239U, 236U, 237U, 32U, 32U, 36U,
    33U, 32U, 165U, 160U, 32U, 160U, 160U, 0U, 128U, 192U, 128U, 0U, 228U, 128U,
    192U, 128U, 0U, 119U, 79U, 107U, 111U, 99U, 127U, 127U, 111U, 111U, 111U,
    154U, 170U, 130U, 186U, 138U, 138U, 138U, 138U, 136U, 138U, 84U, 66U, 194U,
    82U, 98U, 210U, 240U, 210U, 90U, 82U, 249U, 185U, 249U, 249U, 169U, 249U,
    249U, 185U, 172U, 168U };

  static const uint8_T uv12[320]{ 238U, 166U, 198U, 230U, 135U, 70U, 142U, 166U,
    166U, 246U, 121U, 112U, 253U, 96U, 98U, 114U, 112U, 48U, 121U, 112U, 180U,
    232U, 176U, 240U, 144U, 132U, 176U, 176U, 185U, 244U, 218U, 154U, 154U, 242U,
    155U, 154U, 186U, 154U, 186U, 179U, 239U, 205U, 237U, 237U, 237U, 237U, 239U,
    109U, 207U, 237U, 213U, 241U, 165U, 45U, 173U, 149U, 245U, 229U, 69U, 125U,
    156U, 152U, 190U, 248U, 184U, 186U, 184U, 184U, 159U, 248U, 200U, 200U, 204U,
    200U, 200U, 200U, 200U, 200U, 200U, 200U, 139U, 155U, 139U, 139U, 222U, 143U,
    159U, 143U, 138U, 175U, 254U, 247U, 26U, 179U, 187U, 252U, 31U, 61U, 254U,
    191U, 181U, 149U, 153U, 177U, 81U, 145U, 149U, 145U, 145U, 179U, 43U, 155U,
    43U, 27U, 95U, 239U, 19U, 27U, 11U, 27U, 12U, 8U, 204U, 140U, 140U, 204U,
    140U, 140U, 28U, 206U, 222U, 220U, 254U, 218U, 200U, 206U, 222U, 222U, 223U,
    254U, 127U, 127U, 125U, 125U, 125U, 127U, 111U, 111U, 109U, 95U, 143U, 11U,
    11U, 11U, 143U, 202U, 11U, 11U, 11U, 207U, 239U, 201U, 207U, 239U, 207U,
    239U, 239U, 207U, 205U, 239U, 209U, 217U, 83U, 217U, 73U, 73U, 25U, 153U,
    217U, 213U, MAX_uint8_T, 243U, 223U, 127U, 51U, 251U, 179U, 219U, 243U,
    MAX_uint8_T, 211U, 147U, 243U, 211U, 87U, 215U, 211U, 145U, 211U, 147U, 198U,
    14U, 210U, 2U, 134U, 134U, 6U, 6U, 66U, 14U, 103U, 103U, 67U, 103U, 118U,
    67U, 71U, 103U, 103U, 103U, 186U, 250U, 138U, 202U, 202U, 202U, 154U, 218U,
    218U, 219U, 240U, 240U, 241U, 240U, 240U, 240U, 240U, 208U, 240U, 224U, 27U,
    31U, 61U, 157U, 12U, 156U, 159U, 31U, 93U, 159U, 88U, 83U, 24U, 152U, 16U,
    16U, 81U, 16U, 16U, 210U, 207U, 223U, 207U, 223U, 223U, 207U, 223U, 219U,
    207U, 223U, 191U, MAX_uint8_T, 190U, 254U, 174U, MAX_uint8_T, 239U,
    MAX_uint8_T, 191U, 191U, 215U, 215U, 148U, 149U, 156U, 156U, 146U, 149U,
    149U, 135U, 127U, 125U, 127U, 121U, 125U, 63U, 93U, 13U, 123U, 125U, 63U,
    126U, 163U, 99U, 25U, 57U, 45U, 47U, 55U, 109U, 215U, 214U, 131U, 131U, 133U,
    215U, 215U, 215U, 243U, 199U };

  static const uint8_T uv13[320]{ 34U, 2U, 2U, 134U, 6U, 98U, 2U, 6U, 98U, 170U,
    176U, 168U, 176U, 176U, 178U, 168U, 176U, 132U, 188U, 188U, 176U, 148U, 184U,
    180U, 180U, 180U, 176U, 164U, 172U, 188U, 154U, 152U, 186U, 154U, 155U, 218U,
    155U, 187U, 152U, 187U, 221U, 205U, 237U, 205U, 237U, 205U, 205U, 157U, 205U,
    205U, 253U, 253U, 237U, 253U, 173U, 253U, 245U, 245U, 253U, 253U, 144U, 176U,
    176U, 176U, 184U, 144U, 176U, 184U, 176U, 144U, 207U, 207U, 207U, 202U, 207U,
    207U, 207U, 203U, 71U, 207U, 143U, 143U, 143U, 159U, 143U, 203U, 159U, 159U,
    155U, 159U, 125U, 21U, 61U, 55U, 123U, 87U, 31U, 55U, 119U, 127U, 185U, 144U,
    144U, 145U, 145U, 180U, 80U, 129U, 144U, 148U, 27U, 27U, 27U, 27U, 127U, 27U,
    19U, 19U, 27U, 25U, 140U, 172U, 172U, 140U, 140U, 172U, 172U, 140U, 40U,
    172U, 220U, 154U, 222U, 222U, 222U, 252U, 222U, 254U, 188U, 188U, 110U, 102U,
    108U, 110U, 108U, 126U, 110U, 110U, 118U, 110U, 140U, 142U, 10U, 11U, 11U,
    143U, 140U, 200U, 11U, 11U, 201U, 201U, 205U, 201U, 207U, 201U, 201U, 201U,
    201U, 201U, 27U, 59U, 27U, 27U, 27U, 147U, 27U, 27U, 179U, 27U, 211U, 235U,
    251U, 251U, MAX_uint8_T, 251U, 179U, 187U, 243U, 251U, 17U, 17U, 17U, 17U,
    17U, 17U, 17U, 145U, 17U, 17U, 22U, 22U, 18U, 22U, 150U, 22U, 22U, 54U, 54U,
    54U, 107U, 107U, 107U, 111U, 111U, 111U, 94U, 77U, 111U, 111U, 218U, 210U,
    218U, 218U, 202U, 250U, 90U, 91U, 242U, 122U, 209U, 241U, 241U, 209U, 209U,
    241U, 243U, 211U, 243U, 243U, 31U, 29U, 29U, 31U, 12U, 31U, 15U, 143U, 31U,
    207U, 84U, 16U, 16U, 16U, 18U, 90U, 22U, 87U, 18U, 83U, 159U, 90U, 30U, 91U,
    223U, 222U, 154U, 219U, 216U, 94U, 127U, 123U, 127U, 127U, 254U, 123U, 111U,
    127U, 123U, 123U, 210U, 144U, 144U, 144U, 156U, 211U, 146U, 144U, 213U, 208U,
    76U, 12U, 12U, 77U, 76U, 76U, 76U, 76U, 76U, 76U, 159U, 141U, 133U, 13U,
    129U, 223U, 141U, 189U, 214U, 157U, 215U, 142U, 219U, 198U, 215U, 206U, 222U,
    198U, 222U, 222U };

  static const uint8_T uv14[320]{ 218U, 90U, 74U, 66U, 90U, 74U, 74U, 82U, 74U,
    90U, 184U, 58U, 184U, 184U, 184U, 185U, 184U, 249U, 184U, 177U, 50U, 50U,
    178U, 18U, 150U, 190U, 190U, 146U, 150U, 178U, 184U, 184U, 152U, 184U, 186U,
    186U, 248U, 186U, 184U, 176U, 169U, 43U, 251U, 107U, 171U, 169U, 41U, 59U,
    137U, 187U, 253U, 217U, 253U, 201U, 253U, 221U, 253U, 221U, 252U, 244U, 16U,
    56U, 176U, 48U, 16U, 56U, 49U, 26U, 48U, 56U, 71U, 66U, 71U, 71U, 199U, 199U,
    71U, 204U, 7U, 71U, 191U, 175U, 175U, 175U, 171U, 175U, 175U, 175U, 175U,
    171U, 31U, 29U, 29U, 29U, 31U, 93U, 93U, 93U, 21U, 221U, 160U, 148U, 172U,
    64U, 136U, 132U, 164U, 136U, 134U, 138U, 25U, 169U, 25U, 49U, 57U, 41U, 25U,
    45U, 25U, 57U, 174U, 172U, 172U, 172U, 174U, 172U, 188U, 174U, 172U, 140U,
    158U, 158U, 158U, 150U, 254U, 222U, 159U, 222U, 190U, 190U, 102U, 102U, 102U,
    96U, 98U, 102U, 102U, 70U, 70U, 66U, 220U, 220U, 220U, 88U, 222U, 94U, 122U,
    214U, 222U, 218U, 229U, 166U, 167U, 167U, 167U, 135U, 167U, 167U, 161U, 167U,
    187U, 57U, 59U, 59U, 179U, 59U, 59U, 115U, 55U, 191U, 223U, 239U, 251U, 235U,
    237U, MAX_uint8_T, MAX_uint8_T, 253U, 235U, 253U, 17U, 145U, 17U, 16U, 17U,
    17U, 17U, 81U, 17U, 145U, 30U, 6U, 22U, 18U, 30U, 22U, 18U, 70U, 22U, 22U,
    79U, 11U, 75U, 9U, 75U, 73U, 79U, 75U, 73U, 75U, 146U, 130U, 146U, 146U,
    146U, 186U, 178U, 154U, 146U, 146U, 241U, 209U, 241U, 209U, 241U, 241U, 241U,
    241U, 241U, 192U, 155U, 147U, 159U, 157U, 155U, 223U, 219U, 185U, 159U, 155U,
    209U, 241U, 85U, 144U, 215U, 81U, 209U, 212U, 115U, 245U, 26U, 26U, 26U, 26U,
    94U, 31U, 90U, 15U, 90U, 30U, 123U, 251U, 123U, 107U, 123U, 251U, 123U, 251U,
    123U, 251U, 146U, 18U, 146U, 144U, 146U, 146U, 146U, 16U, 130U, 130U, 4U, 4U,
    4U, 0U, 68U, 4U, 4U, 6U, 4U, 68U, 175U, 47U, 175U, 167U, 175U, 143U, 167U,
    15U, 143U, 175U, 95U, 95U, 223U, 139U, 95U, 95U, 123U, 95U, 78U, 95U };

  static const uint8_T uv15[320]{ 70U, 206U, 142U, 106U, 135U, 10U, 141U, 142U,
    10U, 142U, 188U, 190U, 188U, 189U, 190U, 188U, 239U, 253U, 184U, 180U, 182U,
    230U, 246U, 164U, 181U, 178U, 154U, 178U, 182U, 188U, 154U, 150U, 250U, 154U,
    154U, 154U, 154U, 218U, 219U, 186U, 235U, 239U, 237U, 235U, 236U, 251U, 237U,
    239U, 235U, 235U, 245U, 240U, 253U, 245U, 189U, 245U, 241U, 245U, 244U, 245U,
    188U, 188U, 252U, 156U, 188U, 184U, 175U, 190U, 188U, 189U, 239U, 199U, 223U,
    239U, 223U, 199U, 220U, 254U, 215U, 207U, 159U, 155U, 191U, 155U, 159U, 159U,
    202U, 155U, 191U, 159U, 223U, 223U, 95U, 95U, 91U, 95U, 87U, 222U, 95U, 95U,
    152U, 148U, 180U, 156U, 24U, 92U, 29U, 28U, 86U, 149U, 179U, 183U, 59U, 191U,
    MAX_uint8_T, 51U, 150U, 55U, 183U, 55U, 236U, 172U, 172U, 44U, 172U, 172U,
    237U, 172U, 172U, 140U, 254U, 238U, MAX_uint8_T, 252U, 254U, 254U, 226U,
    254U, 254U, 254U, 110U, 119U, 126U, 110U, 254U, 102U, 251U, 111U, 102U, 110U,
    207U, 207U, 111U, 143U, 239U, 204U, 143U, 175U, 239U, 75U, 231U, 239U, 239U,
    143U, 207U, 239U, 99U, 239U, 231U, 239U, 123U, 115U, 251U, 243U, 123U, 59U,
    99U, 123U, 123U, 91U, 251U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 179U, 74U, 151U, 191U, 191U, 145U, 149U, 149U, 145U, 149U, 145U,
    222U, 211U, 149U, 145U, 54U, 182U, 182U, 182U, 183U, 54U, 119U, 246U, 182U,
    182U, 75U, 79U, 111U, 75U, 79U, 79U, 71U, 71U, 77U, 79U, 154U, 174U, 250U,
    186U, 234U, 58U, 190U, 186U, 186U, 186U, 243U, 226U, 243U, 243U, 243U, 243U,
    243U, 243U, 241U, 243U, 63U, 30U, 223U, 59U, 62U, 31U, 238U, 63U, 79U, 223U,
    86U, 83U, 219U, 87U, 30U, 87U, 215U, 89U, 123U, 87U, 223U, 223U, 223U, 223U,
    MAX_uint8_T, 158U, 239U, 79U, 222U, 223U, 235U, 171U, 251U, 251U, 250U, 235U,
    105U, 175U, 203U, MAX_uint8_T, 150U, 135U, 151U, 215U, 156U, 150U, 150U,
    150U, 150U, 150U, 84U, 125U, 220U, 92U, 92U, 76U, 251U, 127U, 84U, 76U, 173U,
    189U, 239U, 159U, 137U, 173U, 173U, 173U, 173U, 173U, 223U, 223U, 223U, 223U,
    221U, 223U, 196U, 215U, 223U, 215U };

  static const uint8_T uv16[320]{ 194U, 130U, 218U, 82U, 82U, 210U, 218U, 218U,
    210U, 218U, 222U, 158U, 156U, 159U, 251U, 220U, 220U, 217U, 254U, 156U, 182U,
    190U, 190U, 158U, 190U, 30U, 60U, 62U, 158U, 190U, 190U, 191U, 254U, 180U,
    190U, 191U, 190U, 190U, 190U, 186U, 107U, 171U, 43U, 171U, 187U, 9U, 45U,
    43U, 171U, 139U, 208U, 224U, 228U, 224U, 192U, 196U, 221U, 196U, 225U, 224U,
    188U, 189U, 61U, 60U, 63U, 28U, 20U, 157U, 28U, 24U, 231U, 231U, 103U, 135U,
    230U, 175U, 166U, 230U, 231U, 199U, 191U, 190U, 189U, 175U, 174U, 158U, 159U,
    141U, 191U, 159U, 31U, 31U, 95U, 159U, 29U, 23U, 94U, 94U, 31U, 23U, 208U,
    86U, 198U, 138U, 136U, 130U, 132U, 148U, 128U, 132U, 179U, 179U, 49U, 179U,
    163U, 19U, 17U, 163U, 185U, 179U, 172U, 172U, 188U, 172U, 236U, 236U, 174U,
    172U, 172U, 44U, 238U, MAX_uint8_T, 191U, 191U, MAX_uint8_T, 254U, 254U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 38U, 34U, 34U, 98U, 98U, 42U, 35U,
    35U, 98U, 34U, 67U, 73U, 91U, 74U, 66U, 75U, 75U, 67U, 91U, 75U, 231U, 231U,
    231U, 231U, 231U, 225U, 193U, 230U, 167U, 231U, 115U, 123U, 51U, 119U, 115U,
    51U, 115U, 243U, 243U, 179U, MAX_uint8_T, 191U, MAX_uint8_T, 253U,
    MAX_uint8_T, 251U, MAX_uint8_T, MAX_uint8_T, 237U, 191U, 129U, 129U, 129U,
    145U, 211U, 129U, 3U, 195U, 129U, 145U, 102U, 114U, 34U, 22U, 66U, 102U,
    110U, 100U, 118U, 62U, 79U, 205U, 205U, 73U, 75U, 77U, 77U, 79U, 79U, 79U,
    130U, 2U, 178U, 131U, 138U, 19U, 83U, 178U, 138U, 146U, 241U, 247U, 227U,
    225U, 241U, 245U, 189U, 249U, 247U, 243U, 179U, 239U, 211U, 219U, 249U, 225U,
    195U, 243U, 251U, 219U, 114U, 247U, 243U, 247U, 247U, 243U, 243U, 243U, 243U,
    243U, 222U, 254U, 90U, 222U, 143U, 222U, 90U, 222U, 94U, 218U, 139U, 203U,
    139U, 219U, 251U, 27U, 27U, 155U, 251U, 219U, 20U, 148U, 0U, 128U, 144U, 16U,
    16U, 20U, 144U, 176U, 84U, 84U, 64U, 84U, 22U, 20U, 92U, 52U, 84U, 68U, 173U,
    165U, 165U, 173U, 165U, 173U, 13U, 37U, 175U, 173U, 95U, 219U, 123U, 91U,
    91U, 90U, 91U, 91U, 91U, 90U };

  static const uint8_T uv17[320]{ 194U, 86U, 250U, 198U, 194U, 194U, 130U, 202U,
    82U, 82U, 12U, 32U, 0U, 4U, 40U, 8U, 12U, 8U, 8U, 62U, 150U, 150U, 246U,
    182U, 214U, 150U, 134U, 182U, 150U, 134U, 157U, 184U, 253U, 188U, 189U, 156U,
    189U, 188U, 180U, 180U, 137U, 203U, 205U, 141U, 108U, 77U, 13U, 13U, 141U,
    13U, 228U, 98U, 124U, 116U, 169U, 228U, 230U, 244U, 116U, 38U, 180U, 184U,
    248U, 188U, 232U, 184U, 184U, 184U, 60U, 156U, 7U, 65U, 71U, 11U, 66U, 66U,
    35U, 66U, 7U, 103U, 190U, 189U, 189U, 159U, 175U, 173U, 156U, 189U, 175U,
    185U, 151U, 135U, 23U, 151U, 147U, 22U, 18U, 151U, 151U, 138U, 194U, 195U,
    242U, 131U, 242U, 226U, 194U, 198U, 130U, 210U, 17U, 147U, 19U, 19U, 18U,
    19U, 19U, 19U, 19U, 79U, 236U, 76U, 142U, 204U, 172U, 172U, 236U, 172U, 140U,
    174U, 186U, 238U, 186U, 254U, 170U, 154U, 250U, 254U, 186U, 170U, 32U, 40U,
    54U, 111U, 117U, 37U, 35U, 39U, 102U, 53U, 203U, 89U, 223U, 207U, 75U, 207U,
    75U, 203U, 203U, 75U, 225U, 251U, 233U, 225U, 234U, 232U, 201U, 225U, 225U,
    236U, 119U, 189U, 151U, 119U, 165U, 181U, 35U, 119U, 247U, 231U, 235U, 235U,
    MAX_uint8_T, 251U, 127U, 235U, 187U, 251U, 233U, MAX_uint8_T, 129U, 177U,
    129U, 145U, 129U, 129U, 129U, 129U, 145U, 133U, 52U, 28U, 60U, 52U, 0U, 4U,
    36U, 36U, 28U, 44U, 205U, 199U, MAX_uint8_T, 69U, MAX_uint8_T, 71U, 205U,
    207U, 201U, 207U, 147U, 147U, 211U, 155U, 195U, 146U, 83U, 146U, 147U, 146U,
    224U, 192U, 192U, 192U, 192U, 192U, 221U, 224U, 192U, 202U, 141U, 145U, 151U,
    153U, 148U, 149U, 129U, 147U, 153U, 144U, 50U, 50U, 250U, 114U, 178U, 50U,
    114U, 115U, 242U, 50U, 222U, 218U, 218U, 223U, 218U, 218U, 218U, 218U, 222U,
    222U, 3U, 79U, 19U, 31U, 8U, 27U, 19U, 11U, 83U, 155U, 128U, 129U, 199U,
    128U, 133U, 16U, 144U, 130U, 128U, 136U, 100U, 100U, 76U, 125U, 104U, 109U,
    108U, 117U, 100U, 108U, 173U, 39U, 252U, 189U, 97U, 45U, 57U, 45U, 173U, 59U,
    14U, 134U, 142U, 70U, 136U, 134U, 10U, 78U, 14U, 31U };

  static const uint8_T uv18[320]{ 234U, 138U, 74U, 250U, 66U, 202U, 10U, 234U,
    203U, 202U, 170U, 184U, 48U, 184U, 186U, 56U, 152U, 48U, 184U, 186U, 230U,
    182U, 54U, 246U, 178U, 62U, 54U, 182U, 190U, 182U, 152U, 152U, 152U, 216U,
    216U, 248U, 152U, 152U, 248U, 148U, 207U, 239U, 109U, 109U, 108U, 109U, 109U,
    109U, 237U, 107U, 241U, 245U, 213U, 245U, 173U, 213U, 245U, 245U, 253U, 244U,
    184U, 184U, 184U, 216U, 184U, 185U, 184U, 152U, 249U, 184U, 71U, 71U, 72U,
    71U, 71U, 71U, 71U, 67U, 87U, 71U, 139U, 143U, 143U, 139U, 143U, 143U, 143U,
    139U, 175U, 171U, 87U, 95U, 92U, 95U, 89U, 93U, 93U, 93U, 95U, 95U, 148U,
    148U, 212U, 180U, 176U, 148U, 212U, 148U, 180U, 148U, 191U, 63U, 167U, 63U,
    127U, 59U, 51U, 59U, 55U, 189U, 44U, 172U, 172U, 42U, 172U, 172U, 172U, 172U,
    188U, 172U, 140U, 158U, 222U, 156U, 158U, 159U, 158U, 158U, 159U, 190U, 118U,
    102U, 102U, 118U, 116U, 102U, 102U, 102U, 246U, 70U, 143U, 143U, 206U, 159U,
    74U, 75U, 205U, 143U, 111U, 159U, 239U, 239U, 238U, 205U, 239U, 238U, 239U,
    239U, 239U, 167U, 179U, 59U, 57U, 179U, 51U, 49U, 59U, 179U, 51U, 55U, 251U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 187U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 149U, 145U, 209U, 145U, 149U, 145U,
    145U, 145U, 149U, 149U, 22U, 150U, 134U, 158U, 150U, 134U, 22U, 150U, 183U,
    150U, 111U, 79U, 3U, 111U, 111U, 79U, 15U, 79U, 111U, 79U, 166U, 178U, 178U,
    242U, 194U, 178U, 50U, 178U, 242U, 178U, 241U, 209U, 209U, 209U, 209U, 209U,
    241U, 209U, 241U, 193U, 27U, 31U, 151U, 27U, 158U, 215U, 23U, 147U, 223U,
    159U, 80U, 81U, 113U, 91U, 24U, 81U, 81U, 81U, 219U, 115U, 218U, 90U, 138U,
    216U, 218U, 218U, 218U, 218U, 250U, 90U, 251U, 251U, 187U, 251U, 250U, 251U,
    235U, 251U, 251U, 251U, 151U, 150U, 22U, 215U, 156U, 22U, 150U, 150U, 150U,
    134U, 76U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 204U, 68U, 191U, 175U, 45U,
    254U, 161U, 37U, 173U, 47U, 165U, 175U, 222U, 223U, 215U, 95U, 159U, 219U,
    223U, 223U, MAX_uint8_T, 223U };

  static const uint8_T uv19[320]{ 3U, 67U, 66U, 74U, 130U, 2U, 2U, 66U, 130U,
    194U, 154U, 186U, 58U, 152U, 168U, 174U, 186U, 174U, 142U, 190U, 134U, 149U,
    134U, 182U, 214U, 150U, 150U, 150U, 134U, 142U, 153U, 147U, 153U, 145U, 185U,
    153U, 153U, 151U, 153U, 177U, 235U, 170U, 106U, 227U, 236U, 251U, 235U, 171U,
    207U, 171U, 180U, 184U, 128U, 244U, 169U, 224U, 161U, 176U, 179U, 160U, 184U,
    184U, 184U, 184U, 248U, 56U, 184U, 188U, 184U, 188U, 7U, 135U, 66U, 7U, 71U,
    7U, 71U, 135U, 71U, 135U, 191U, 174U, 174U, 191U, 191U, 190U, 190U, 190U,
    158U, 190U, 91U, 251U, 29U, 95U, 51U, 23U, 29U, 159U, 23U, 183U, 82U, 2U,
    210U, 86U, 242U, 66U, 88U, 66U, 210U, 130U, 247U, 245U, 231U, 183U, 147U,
    177U, 183U, 177U, 183U, 183U, 172U, 172U, 172U, 172U, 172U, 172U, 172U, 172U,
    172U, 140U, 170U, 174U, 142U, 190U, 170U, 166U, 174U, 170U, 174U, 174U, 54U,
    198U, 98U, 102U, 86U, 98U, 102U, 70U, 54U, 66U, 207U, 206U, 202U, 207U, 75U,
    73U, 200U, 203U, 75U, 75U, 231U, 167U, 230U, 231U, 239U, 231U, 231U, 167U,
    239U, 231U, 43U, 103U, 61U, 63U, 175U, 59U, 59U, 119U, 47U, 87U, 187U, 251U,
    239U, 187U, 127U, 171U, 171U, 235U, 171U, 251U, 149U, 149U, 149U, 145U, 149U,
    145U, 149U, 145U, 149U, 149U, 182U, 151U, 6U, 182U, 182U, 54U, 22U, 54U, 54U,
    54U, 220U, 73U, 217U, 220U, MAX_uint8_T, 220U, 88U, 221U, 221U, 77U, 7U,
    139U, 131U, 179U, 199U, 131U, 130U, 131U, 71U, 131U, 241U, 241U, 209U, 225U,
    241U, 247U, 241U, 225U, 243U, 224U, 12U, 140U, 148U, 15U, 158U, 13U, 12U,
    140U, 156U, 140U, 50U, 54U, 48U, 119U, 122U, 54U, 22U, 54U, 50U, 50U, 218U,
    95U, 154U, 222U, 218U, 90U, 158U, 94U, 222U, 222U, 195U, 234U, 203U, 195U,
    195U, 195U, 235U, 195U, 195U, 199U, 156U, 140U, 4U, 134U, 133U, 144U, 148U,
    128U, 148U, 132U, 68U, 68U, 4U, 68U, 204U, 68U, 68U, 68U, 76U, 68U, 169U,
    137U, 45U, 173U, 233U, 173U, 173U, 173U, 189U, 173U, 223U, 93U, 223U, 223U,
    141U, 223U, 223U, 15U, 222U, 91U };

  static const uint8_T uv2[320]{ 79U, 222U, 223U, 220U, MAX_uint8_T, 207U, 219U,
    203U, 190U, 199U, MAX_uint8_T, 94U, 22U, 28U, 116U, 223U, 90U, 30U, 156U,
    158U, 253U, 238U, MAX_uint8_T, 191U, 254U, 253U, 254U, MAX_uint8_T, 246U,
    230U, 119U, 190U, 229U, 245U, 246U, 254U, 244U, 245U, 247U, 151U, 186U, 170U,
    166U, 170U, 239U, 236U, 43U, 166U, 165U, 170U, 126U, 66U, 58U, 102U, 127U,
    52U, 86U, 118U, 118U, 50U, 127U, 31U, 125U, 61U, MAX_uint8_T, MAX_uint8_T,
    125U, 253U, 254U, 188U, 188U, 184U, 24U, 18U, 216U, 254U, 114U, 23U, 191U,
    159U, 63U, 181U, 61U, 188U, 187U, 159U, 173U, 61U, 57U, 191U, 254U, 222U,
    250U, 222U, 254U, 218U, 206U, 223U, MAX_uint8_T, MAX_uint8_T, 95U, 151U, 87U,
    150U, 183U, 188U, 214U, 86U, 254U, 22U, 229U, 167U, 246U, 48U, 191U, 246U,
    167U, 183U, 19U, 247U, 253U, 205U, 221U, 221U, 95U, 253U, 125U, 221U, 75U,
    204U, 127U, 239U, 47U, 119U, MAX_uint8_T, MAX_uint8_T, 191U, 63U, 127U, 110U,
    223U, 43U, 155U, 1U, 223U, MAX_uint8_T, 183U, 150U, 31U, 223U, 247U, 75U,
    107U, 107U, 63U, 107U, MAX_uint8_T, 111U, 207U, 207U, 183U, 247U, 119U, 231U,
    MAX_uint8_T, MAX_uint8_T, 230U, 231U, MAX_uint8_T, 231U, 119U, 245U, 213U,
    117U, 213U, 243U, 245U, 119U, 215U, 71U, 253U, 253U, 125U, 125U, MAX_uint8_T,
    191U, 253U, 191U, 183U, MAX_uint8_T, 239U, 231U, 175U, 131U, 247U, 239U,
    199U, 141U, 163U, 149U, 245U, 108U, 161U, 33U, 173U, 241U, 229U, 181U, 188U,
    181U, 208U, 197U, 212U, 197U, 103U, 103U, 197U, 220U, 252U, 221U, 191U, 139U,
    173U, 179U, 251U, 170U, 179U, 181U, 121U, 175U, MAX_uint8_T, 234U, 202U,
    232U, 226U, 251U, 232U, 194U, 238U, 226U, 238U, 242U, 214U, 193U, 223U, 254U,
    211U, 207U, MAX_uint8_T, 142U, MAX_uint8_T, 227U, 235U, 227U, 219U, 223U,
    251U, 123U, MAX_uint8_T, 114U, 111U, 239U, 239U, MAX_uint8_T, 239U, 239U,
    234U, 254U, 223U, MAX_uint8_T, 134U, 151U, 132U, 144U, 191U, 174U, 131U,
    130U, 135U, 198U, 174U, 36U, 175U, 128U, 231U, 159U, 47U, 175U, 167U, 142U,
    247U, 247U, 241U, 113U, MAX_uint8_T, MAX_uint8_T, 245U, 244U, 253U, 245U,
    143U, 45U, 33U, 37U, 127U, 225U, 45U, 165U, 252U, 185U, 117U, 83U, 113U,
    115U, 247U, 241U, 127U, 125U, 87U, 85U };

  static const uint8_T uv20[320]{ 198U, 66U, 242U, 194U, 198U, 130U, 198U, 66U,
    192U, 194U, 237U, 168U, 172U, 172U, 236U, 172U, 172U, 172U, 172U, 172U, 150U,
    150U, 150U, 210U, 150U, 150U, 150U, 148U, 150U, 150U, 154U, 154U, 186U, 186U,
    158U, 154U, 159U, 155U, 153U, 154U, 205U, 73U, 205U, 237U, 217U, 205U, 205U,
    201U, 204U, 137U, 233U, 201U, 253U, 169U, 229U, 233U, 171U, 237U, 169U, 233U,
    182U, 176U, 212U, 252U, 54U, 176U, 164U, 180U, 160U, 20U, 238U, 206U, 207U,
    199U, 239U, 199U, 239U, 175U, 199U, 207U, 159U, 175U, 159U, 191U, 190U, 158U,
    191U, 190U, 190U, 191U, 151U, 21U, 23U, 19U, 151U, 23U, 179U, 51U, 19U, 23U,
    169U, 160U, 160U, 176U, 136U, 64U, 242U, 8U, 224U, 128U, 27U, 9U, 27U, 26U,
    25U, 19U, 19U, 17U, 26U, 25U, 236U, 172U, 46U, 172U, 228U, 172U, 236U, 172U,
    164U, 172U, 250U, 218U, 248U, 234U, 242U, 250U, 234U, 250U, 162U, 250U, 109U,
    100U, 102U, 116U, 105U, 100U, 108U, 68U, 96U, 102U, 139U, 210U, 159U, 75U,
    219U, 201U, 75U, 207U, 75U, 223U, 233U, 233U, 233U, 235U, 217U, 201U, 249U,
    129U, 233U, 129U, 115U, 59U, 251U, 163U, 123U, 59U, 239U, 123U, 171U, 115U,
    235U, 235U, 235U, 95U, 234U, 235U, 106U, 235U, 106U, 235U, 83U, 17U, 17U,
    145U, 18U, 17U, 145U, 17U, 144U, 17U, 118U, 6U, 62U, 50U, 118U, 54U, 50U,
    54U, 50U, 54U, 111U, 75U, 111U, 111U, 79U, 111U, MAX_uint8_T, 73U, 111U, 79U,
    154U, 218U, 218U, 202U, 218U, 210U, 203U, 218U, 194U, 218U, 243U, 241U, 243U,
    243U, 127U, 243U, 243U, 243U, 115U, 243U, 189U, 157U, 155U, 157U, 185U, 29U,
    189U, 173U, 156U, 153U, 22U, 16U, 210U, 154U, 54U, 22U, 54U, 22U, 18U, 82U,
    95U, 31U, 223U, 222U, 95U, 94U, 223U, 95U, 222U, 95U, 123U, 123U, 123U, 123U,
    59U, 107U, 111U, 123U, 104U, 123U, 208U, 144U, 211U, 149U, 144U, 144U, 145U,
    144U, 144U, 144U, 127U, 12U, 92U, 72U, 113U, 76U, 120U, 84U, 72U, 84U, 175U,
    47U, 254U, 227U, 175U, 173U, 227U, 141U, 163U, 175U, 142U, 142U, 142U, 138U,
    142U, 142U, 138U, 142U, 136U, 14U };

  static const uint8_T uv21[320]{ 95U, 79U, 143U, 71U, 79U, 79U, 77U, 15U, 95U,
    79U, 151U, MAX_uint8_T, 247U, MAX_uint8_T, 114U, 95U, 190U, MAX_uint8_T,
    253U, 191U, 253U, 252U, 118U, 239U, 253U, MAX_uint8_T, 173U, 237U, 252U,
    253U, 239U, 127U, 99U, 23U, 83U, 103U, 31U, 247U, 247U, 247U, 187U, 187U,
    226U, 186U, 170U, 178U, 185U, 190U, 183U, 170U, 126U, 223U, 31U, 30U, 126U,
    126U, MAX_uint8_T, 214U, 222U, 252U, 95U, 95U, MAX_uint8_T, 63U, 63U, 127U,
    55U, MAX_uint8_T, 127U, 127U, 187U, 188U, 245U, 188U, 152U, 188U, 191U, 184U,
    188U, 191U, 47U, 251U, 45U, 186U, 59U, 57U, 182U, 63U, 187U, 191U, 125U,
    254U, 126U, 250U, 254U, 238U, MAX_uint8_T, 254U, 223U, MAX_uint8_T, 159U,
    126U, 127U, 27U, 23U, 95U, 86U, 95U, 127U, 30U, 237U, 173U, 245U, 229U, 237U,
    229U, 245U, 230U, 167U, 245U, 223U, MAX_uint8_T, 93U, 253U, 221U, 221U, 252U,
    253U, 253U, 253U, 127U, 253U, 63U, 118U, 127U, 127U, 244U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 158U, 223U, 158U, 159U, 223U, 159U, 203U, 223U,
    223U, 202U, 246U, 183U, 53U, 115U, 191U, 246U, 239U, 99U, 247U, 123U, 183U,
    151U, 183U, 55U, 151U, 55U, 21U, 55U, 183U, 167U, 215U, 127U, 87U, 119U, 85U,
    87U, 126U, 127U, MAX_uint8_T, 119U, 253U, 245U, 213U, 125U, 253U, 253U, 254U,
    191U, 189U, 253U, 175U, 111U, 47U, 239U, 127U, 239U, 46U, MAX_uint8_T, 222U,
    158U, 221U, 229U, 245U, 245U, 165U, 245U, 247U, 243U, 247U, 243U, 9U, 224U,
    244U, 193U, 84U, 208U, 216U, 208U, 216U, 88U, 253U, 187U, 45U, 175U,
    MAX_uint8_T, 173U, MAX_uint8_T, 239U, 191U, 171U, MAX_uint8_T, MAX_uint8_T,
    247U, 111U, 224U, 238U, 63U, MAX_uint8_T, MAX_uint8_T, 243U, 251U, 107U,
    102U, 172U, 78U, 238U, 111U, 110U, 239U, 238U, MAX_uint8_T, MAX_uint8_T,
    219U, 62U, 91U, MAX_uint8_T, 103U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    111U, 101U, 101U, 111U, 109U, 111U, 119U, 239U, 239U, 127U, 214U, 191U, 198U,
    132U, 166U, 134U, 135U, 196U, 199U, 196U, 190U, 238U, 103U, 140U, 142U, 174U,
    138U, 174U, 166U, 174U, 230U, 247U, 214U, 247U, 247U, 247U, 244U, 247U, 247U,
    244U, 135U, 207U, 199U, 131U, 15U, 143U, 141U, 149U, 205U, 133U, 119U, 119U,
    247U, 117U, 117U, 117U, 253U, 113U, 127U, 121U };

  static const uint8_T uv22[320]{ 222U, 94U, 214U, 223U, 94U, 220U, 222U, 222U,
    212U, 222U, 78U, 223U, 94U, 223U, 115U, 94U, 223U, 116U, 90U, 223U, 142U,
    254U, 206U, 63U, 222U, 190U, 236U, 174U, 46U, 238U, 190U, 190U, 182U, 190U,
    164U, 182U, 190U, 182U, 191U, 190U, 43U, 170U, 162U, 42U, 42U, 170U, 186U,
    139U, 46U, 143U, 34U, 98U, 2U, 70U, 2U, 102U, 2U, 98U, 66U, 82U, 28U, 63U,
    62U, 95U, 63U, 95U, 95U, 30U, 95U, 158U, 162U, 252U, 240U, 184U, 184U, 184U,
    184U, 136U, 184U, 236U, 189U, 189U, 188U, 165U, 169U, 180U, 147U, 179U, 148U,
    151U, 150U, 150U, 134U, 90U, 172U, 222U, 254U, 246U, 222U, 246U, 146U, 223U,
    211U, 147U, 159U, 135U, 158U, 131U, 151U, 159U, 183U, 163U, 231U, 231U, 167U,
    181U, 175U, 179U, 167U, 167U, 237U, 109U, 77U, MAX_uint8_T, 77U, 223U, 109U,
    205U, 215U, 105U, 238U, 239U, 239U, 119U, 239U, 127U, 111U, MAX_uint8_T, 95U,
    238U, 35U, 43U, 163U, 169U, 139U, 11U, 219U, 75U, 59U, 63U, 75U, 75U, 75U,
    99U, 82U, 91U, 67U, 75U, 75U, 67U, 231U, 119U, 118U, 246U, 54U, 247U, 87U,
    247U, 230U, MAX_uint8_T, 245U, 247U, 245U, 245U, 245U, 245U, 231U, 213U,
    245U, 247U, 253U, 191U, 189U, 125U, 237U, 253U, 253U, 253U, 125U, 253U, 231U,
    227U, 231U, 231U, 226U, 227U, 231U, 243U, 231U, 231U, 108U, 112U, 228U, 233U,
    76U, 108U, 236U, 44U, 232U, 236U, 197U, 193U, 213U, 197U, 193U, 197U, 67U,
    71U, 197U, 67U, 139U, 139U, 141U, 59U, 137U, 155U, 207U, 155U, 11U, 175U,
    234U, 234U, 234U, 237U, 200U, 42U, 191U, 194U, 172U, 238U, 210U, 250U, 240U,
    241U, 242U, 243U, 250U, 219U, 241U, 250U, 243U, 231U, 99U, 227U, 227U, 227U,
    231U, 227U, 227U, 119U, 223U, 239U, 239U, 239U, 111U, 239U, 239U, 207U, 239U,
    207U, 147U, 135U, 129U, 148U, 151U, 149U, 189U, 159U, 149U, 159U, 36U, 166U,
    37U, 60U, 38U, 160U, 180U, 164U, 52U, 183U, 117U, 247U, 247U, 179U, 183U,
    243U, 247U, 119U, 185U, 127U, 45U, 165U, 45U, 165U, 47U, 45U, 188U, 45U, 53U,
    189U, 91U, 83U, 81U, 113U, 83U, 83U, 83U, 83U, 83U, 86U };

  static const uint8_T uv23[320]{ 223U, 213U, 223U, 159U, 215U, 223U, 223U, 197U,
    223U, 159U, 22U, 22U, 50U, 18U, 4U, 52U, 86U, 22U, 22U, 22U, 239U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 239U, 253U, 237U, 253U, MAX_uint8_T,
    239U, 229U, 165U, 101U, 241U, 213U, 225U, 165U, 247U, 225U, 247U, 38U, 34U,
    34U, 102U, 134U, 162U, 162U, 166U, 166U, 166U, 118U, 42U, 58U, 54U, 54U,
    126U, 58U, 42U, 58U, 34U, 127U, 61U, 121U, 249U, 237U, 121U, 191U, 109U,
    249U, 239U, 24U, 16U, 24U, 88U, 26U, 25U, 152U, 154U, 25U, 187U, 117U, 60U,
    57U, 61U, 124U, 57U, 60U, 62U, 125U, 60U, 238U, 238U, 234U, 250U, 242U,
    MAX_uint8_T, 250U, 251U, 251U, 250U, 215U, 87U, 119U, 87U, 215U, 23U, 23U,
    83U, 247U, 87U, 230U, 247U, 245U, 246U, 214U, 246U, 247U, 246U, 246U, 246U,
    89U, 221U, 221U, 221U, 89U, 221U, 221U, 221U, 221U, 221U, 127U, 39U, 63U,
    31U, 46U, 63U, 46U, 103U, 47U, 111U, 159U, 131U, 159U, 191U, 157U, 218U,
    155U, 217U, 220U, 185U, 107U, 91U, 127U, 107U, 111U, 123U, 107U, 107U, 107U,
    107U, 118U, 54U, 54U, 127U, 127U, 55U, 55U, 119U, 127U, 119U, 213U, 245U,
    213U, 157U, 197U, 213U, 197U, 85U, 213U, 199U, 61U, 125U, 253U, 63U, 63U,
    125U, 125U, 125U, 127U, 63U, 239U, 166U, 175U, 191U, 175U, 188U, 239U, 191U,
    189U, 175U, 169U, 161U, 165U, 161U, 161U, 177U, 229U, 177U, 185U, 177U, 213U,
    213U, 212U, 212U, 213U, 212U, 212U, 212U, 244U, 212U, 189U, 165U, 165U, 45U,
    181U, 189U, 173U, 239U, 237U, 45U, 202U, 74U, 200U, 192U, 202U, 194U, 202U,
    192U, 194U, 234U, 214U, 212U, 198U, 214U, 20U, 223U, 198U, 204U, 222U, 254U,
    235U, 227U, 251U, 251U, 42U, 235U, 107U, 171U, 251U, 239U, 235U, 107U, 107U,
    251U, MAX_uint8_T, 239U, 239U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 132U,
    132U, 132U, 132U, 132U, 196U, 132U, 132U, 196U, 132U, 175U, 172U, 174U, 175U,
    173U, 174U, 173U, 172U, 175U, 173U, 247U, 241U, 245U, 229U, 241U, 225U, 247U,
    241U, 225U, 241U, 117U, 37U, 3U, 33U, 113U, 135U, 1U, 33U, 225U, 177U, 113U,
    113U, 113U, 241U, 116U, 113U, 117U, 49U, 113U, 113U };

  static const uint8_T uv24[320]{ 84U, 135U, 220U, 209U, 216U, 222U, 220U, 212U,
    222U, 197U, 20U, 12U, 28U, 92U, 92U, 28U, 12U, 28U, 28U, 28U, 191U, 175U,
    189U, 159U, 63U, 191U, 159U, 191U, 190U, 189U, 181U, 223U, 181U, 252U, 247U,
    246U, 245U, 245U, 180U, 247U, 162U, 140U, 40U, 42U, 42U, 171U, 13U, 34U, 9U,
    168U, 102U, 102U, 110U, 38U, 70U, 100U, 102U, 102U, 118U, 110U, 61U, 165U,
    29U, 61U, 93U, 61U, 109U, 61U, 60U, 61U, 183U, 2U, 18U, 182U, 180U, 2U, 2U,
    18U, 2U, 154U, 188U, 220U, 188U, 188U, 180U, 191U, 188U, 188U, 188U, 190U,
    MAX_uint8_T, 210U, 254U, 218U, 222U, 223U, 146U, 206U, 222U, 251U, 142U,
    215U, 150U, 146U, 134U, 135U, 131U, 214U, 130U, 23U, 179U, 18U, 53U, 116U,
    48U, 49U, 18U, 179U, 19U, 116U, 213U, 208U, 223U, 252U, 247U, 220U, 223U,
    221U, 237U, 221U, 55U, 124U, 63U, 119U, 119U, MAX_uint8_T, 123U, 183U, 254U,
    119U, 8U, 181U, 3U, 33U, 1U, 67U, 17U, 33U, 35U, 201U, 75U, 111U, 107U, 107U,
    123U, 107U, 107U, 75U, 75U, 107U, 231U, 105U, 167U, 231U, 230U, 231U, 225U,
    102U, 225U, 167U, 87U, 116U, 117U, 117U, 245U, 119U, 229U, 117U, 117U, 87U,
    125U, 58U, 125U, 125U, 125U, 253U, 125U, 61U, 253U, 125U, 177U, 171U, 35U,
    130U, 226U, 131U, 171U, 130U, 131U, 26U, 48U, 161U, 169U, 225U, 105U, 48U,
    40U, 32U, 44U, 177U, 217U, 229U, 197U, 197U, 197U, 69U, 197U, 213U, 197U,
    197U, 177U, 63U, 243U, 147U, 51U, 187U, 147U, 177U, 147U, 187U, 66U, 232U,
    8U, 104U, 44U, 226U, 234U, 232U, 232U, 98U, 201U, 69U, 193U, 209U, 241U,
    211U, 209U, 209U, 211U, 205U, 167U, 42U, 227U, 251U, 227U, 243U, 235U, 227U,
    243U, 187U, MAX_uint8_T, 219U, 123U, 126U, 126U, 95U, 219U, 250U, 218U, 127U,
    197U, 0U, 144U, 146U, 144U, 147U, 0U, 128U, 19U, 132U, 160U, 149U, 136U, 8U,
    32U, 128U, 160U, 164U, 128U, 136U, 112U, 121U, 113U, 113U, 240U, 113U, 113U,
    241U, 117U, 241U, 165U, 117U, 5U, 33U, 37U, 37U, 33U, 37U, 45U, 133U, 115U,
    98U, 115U, 59U, 123U, 115U, 34U, 115U, 82U, 115U };

  static const uint8_T uv25[320]{ 254U, MAX_uint8_T, 238U, 191U, 239U, 254U,
    239U, MAX_uint8_T, 207U, 254U, 125U, 117U, 84U, 118U, 114U, 96U, 48U, 114U,
    188U, 252U, 236U, 250U, 238U, 236U, 253U, 246U, 253U, 252U, 254U, 254U, 230U,
    231U, 214U, 227U, 224U, 247U, 245U, 118U, 243U, 246U, 239U, 239U, 239U, 175U,
    108U, 109U, 237U, 171U, 239U, 237U, 86U, 95U, 116U, 119U, 93U, 126U, 124U,
    126U, 125U, 127U, 223U, MAX_uint8_T, MAX_uint8_T, 223U, 249U, 248U, 249U,
    93U, MAX_uint8_T, MAX_uint8_T, 248U, 248U, 216U, 216U, 216U, 200U, 152U,
    152U, 222U, 248U, 139U, 61U, 155U, 23U, 171U, 191U, 123U, 187U, 191U, 187U,
    254U, 238U, 254U, 254U, 254U, 182U, 254U, 254U, MAX_uint8_T, 254U, 189U,
    MAX_uint8_T, 181U, 181U, 181U, 183U, 55U, 181U, 247U, 189U, 175U, 175U, 191U,
    191U, 239U, 27U, 191U, 189U, 191U, 63U, 74U, 223U, 72U, 91U, 221U, 207U,
    223U, 78U, 221U, 238U, 125U, 127U, 252U, 125U, 223U, MAX_uint8_T,
    MAX_uint8_T, 253U, MAX_uint8_T, MAX_uint8_T, 223U, 159U, 127U, 223U, 223U,
    95U, 223U, 223U, 223U, 95U, 191U, 117U, 175U, 43U, 43U, 223U, 191U, 191U,
    111U, 191U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 239U,
    MAX_uint8_T, 191U, 151U, 239U, MAX_uint8_T, 213U, 221U, 213U, 213U, 213U,
    213U, 213U, 213U, 223U, 247U, 253U, MAX_uint8_T, 247U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 253U, MAX_uint8_T, MAX_uint8_T, 231U,
    239U, 231U, 247U, 247U, 243U, 191U, 103U, 151U, 243U, 237U, 237U, 164U, 173U,
    133U, 172U, 165U, 173U, 183U, 236U, 99U, 247U, 103U, 119U, 103U, 247U, 118U,
    103U, 119U, 103U, 254U, 249U, 190U, 125U, 250U, 219U, MAX_uint8_T, 251U,
    251U, 250U, 232U, 234U, 226U, 146U, 192U, 192U, 194U, 192U, 226U, 250U, 123U,
    247U, 87U, 219U, 223U, 159U, 223U, 211U, 223U, MAX_uint8_T, 91U, MAX_uint8_T,
    91U, 219U, 217U, 251U, 219U, 251U, 219U, 223U, 205U, 239U, 207U, 237U, 239U,
    207U, 127U, 101U, MAX_uint8_T, 207U, 191U, 151U, 191U, 183U, 190U, 183U,
    191U, 191U, MAX_uint8_T, 191U, 231U, 103U, 199U, MAX_uint8_T, 143U, 231U,
    207U, 239U, 135U, 199U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    191U, 253U, 245U, 245U, 253U, MAX_uint8_T, 126U, 103U, 127U, 92U, 71U, 127U,
    79U, 78U, 231U, 239U, 119U, 247U, 215U, 247U, 247U, 198U, 247U, 119U, 247U,
    247U };

  static const uint8_T uv26[320]{ 207U, 143U, 143U, 143U, 207U, 199U, 199U, 143U,
    207U, 207U, 223U, 252U, 223U, 223U, 222U, 223U, 207U, 222U, 190U, 223U, 249U,
    253U, 249U, MAX_uint8_T, 249U, 191U, 253U, MAX_uint8_T, MAX_uint8_T, 254U,
    246U, 251U, 246U, MAX_uint8_T, 250U, 254U, 246U, 254U, MAX_uint8_T, 254U,
    252U, 236U, 180U, 252U, 228U, 238U, 246U, 236U, 236U, 237U, 32U, 116U, 54U,
    54U, 252U, 36U, 42U, 245U, 173U, 117U, MAX_uint8_T, MAX_uint8_T, 223U,
    MAX_uint8_T, MAX_uint8_T, 159U, 239U, 191U, MAX_uint8_T, MAX_uint8_T, 252U,
    152U, 190U, 254U, 247U, 252U, 190U, 254U, MAX_uint8_T, 252U, 155U, 159U, 25U,
    159U, 189U, 139U, 155U, 159U, 191U, 159U, 218U, 222U, 218U, 218U, 94U, 218U,
    146U, 222U, 251U, 222U, 189U, 85U, 61U, 223U, 180U, 152U, 184U, 20U, 246U,
    189U, 254U, 118U, 247U, 247U, 118U, 111U, 254U, 247U, 246U, 183U, 253U, 221U,
    253U, 253U, 253U, 124U, 253U, 252U, 253U, 253U, 239U, MAX_uint8_T, 127U,
    MAX_uint8_T, 127U, MAX_uint8_T, 107U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    249U, MAX_uint8_T, 157U, 191U, 191U, 253U, 253U, MAX_uint8_T, 220U,
    MAX_uint8_T, 35U, 107U, 33U, 107U, 123U, 35U, 35U, 107U, 107U, 103U, 191U,
    223U, 151U, MAX_uint8_T, 239U, MAX_uint8_T, 127U, 231U, 239U, MAX_uint8_T,
    227U, 91U, 243U, MAX_uint8_T, 243U, 83U, 227U, 115U, MAX_uint8_T, 243U, 31U,
    191U, 149U, 191U, 223U, 127U, 55U, 191U, 127U, 191U, 239U, MAX_uint8_T, 239U,
    239U, 143U, 231U, 239U, 7U, 159U, 231U, 241U, 163U, 241U, 241U, 243U, 241U,
    241U, 231U, 179U, 245U, 103U, 100U, 108U, 247U, 103U, 67U, 100U, 69U, 127U,
    103U, 42U, 250U, 40U, 111U, 122U, 170U, 14U, 58U, 239U, 186U, 235U, 243U,
    239U, MAX_uint8_T, 227U, 234U, 239U, 243U, 243U, 251U, 254U, 207U, 234U,
    254U, 247U, 123U, 254U, 239U, 254U, MAX_uint8_T, 223U, 219U, 223U, 127U,
    223U, 26U, 223U, 219U, MAX_uint8_T, 223U, 239U, 239U, MAX_uint8_T, 239U,
    254U, 239U, 239U, 127U, MAX_uint8_T, 239U, 188U, 172U, 158U, 132U, 136U,
    190U, 188U, 174U, 172U, 191U, 158U, 158U, 207U, 159U, 158U, 156U, 141U, 158U,
    159U, 159U, 251U, MAX_uint8_T, 247U, MAX_uint8_T, 253U, 243U, 251U, 253U,
    248U, MAX_uint8_T, 129U, 117U, 195U, 241U, 231U, 161U, 209U, 165U, 227U,
    253U, 241U, 241U, 125U, 241U, 249U, 115U, 33U, 243U, 249U, 247U };

  static const uint8_T uv27[320]{ 223U, 219U, 218U, 222U, 219U, 219U, 91U, 219U,
    222U, 219U, 90U, 90U, 92U, 88U, 94U, 50U, 114U, 89U, 90U, 26U, 254U,
    MAX_uint8_T, 254U, 246U, 166U, 254U, MAX_uint8_T, 127U, 238U, 126U, 228U,
    244U, 244U, 244U, 188U, 117U, 100U, 252U, 220U, 253U, 35U, 34U, 39U, 47U,
    47U, 43U, 43U, 47U, 99U, 47U, 86U, 86U, 246U, 86U, 54U, 94U, 86U, 86U, 210U,
    214U, 127U, 61U, 253U, 92U, 188U, 89U, 89U, 95U, 189U, 249U, 112U, 54U, 118U,
    48U, 34U, 83U, 24U, 180U, 114U, 82U, 169U, 169U, 189U, 169U, 189U, 169U,
    171U, 173U, 173U, 173U, 206U, 206U, 198U, 206U, 202U, 238U, 236U, 94U, 206U,
    78U, 214U, 214U, 214U, 182U, 210U, 246U, 150U, 150U, 214U, 214U, 167U, 229U,
    131U, 3U, 247U, 189U, 173U, 166U, 167U, 183U, 93U, 125U, 61U, 111U, 237U,
    27U, 93U, MAX_uint8_T, 108U, 189U, 191U, 191U, 191U, 63U, 174U, 31U, 159U,
    127U, 254U, 159U, 183U, 163U, 55U, 55U, 183U, 150U, 215U, 179U, 183U, 183U,
    MAX_uint8_T, 115U, 107U, MAX_uint8_T, 239U, MAX_uint8_T, 254U, 231U, 239U,
    239U, 230U, 166U, 238U, 238U, 230U, 166U, 134U, 230U, 230U, 230U, 245U, 245U,
    247U, 245U, 229U, 181U, 117U, 245U, 245U, 181U, 253U, 253U, 191U, 253U, 253U,
    253U, 253U, 253U, 191U, MAX_uint8_T, 231U, 199U, 199U, 227U, 199U, 133U, 69U,
    239U, 199U, 133U, 237U, 229U, 236U, 236U, 229U, 173U, 133U, 233U, 228U, 165U,
    213U, 205U, 221U, 231U, 197U, 221U, 69U, 197U, 197U, 205U, 181U, 178U, 178U,
    179U, 183U, 241U, 179U, 51U, 38U, 51U, 232U, 232U, 234U, 232U, 232U, 200U,
    200U, 237U, 232U, 200U, 243U, 243U, 243U, 211U, 146U, 211U, 211U, 243U, 82U,
    215U, 251U, 251U, 251U, 251U, 115U, 251U, 251U, 251U, 123U, 251U, 239U, 110U,
    222U, 202U, 218U, 112U, 105U, 234U, 234U, 250U, 131U, 130U, 131U, 147U, 131U,
    147U, 155U, 146U, 131U, 131U, 47U, 46U, 39U, 39U, 14U, 111U, 14U, 62U, 39U,
    47U, 247U, 244U, 245U, 253U, 117U, 164U, 164U, 181U, 245U, 164U, 45U, 39U,
    37U, 124U, 57U, 46U, 15U, 37U, 45U, 45U, 119U, 123U, 123U, 95U, 93U, 127U,
    119U, 123U, 95U, 127U };

  static const uint8_T uv28[320]{ 139U, 223U, 203U, 218U, 203U, 203U, 139U, 219U,
    155U, 203U, 30U, 148U, 126U, 30U, 158U, 18U, 12U, 22U, 188U, 190U, 239U,
    254U, 239U, 254U, 253U, MAX_uint8_T, 238U, 254U, 254U, MAX_uint8_T, 213U,
    241U, 117U, 181U, 245U, 213U, 213U, 245U, 245U, 243U, 166U, 167U, 226U, 162U,
    166U, 98U, 134U, 167U, 167U, 236U, 118U, 118U, 126U, 226U, 126U, 126U, 118U,
    126U, 246U, 252U, 189U, 249U, 253U, 189U, 253U, 185U, 237U, 249U, 253U, 253U,
    55U, 19U, 23U, 55U, 183U, 19U, 55U, 23U, 151U, 151U, 189U, 63U, 57U, 188U,
    61U, 61U, 116U, 61U, 63U, 191U, 206U, MAX_uint8_T, 238U, 223U, MAX_uint8_T,
    223U, 215U, 79U, MAX_uint8_T, 95U, 86U, 87U, 118U, 86U, 94U, 86U, 86U, 246U,
    86U, 86U, 247U, 183U, 245U, 183U, 246U, 247U, 146U, 183U, 179U, 247U, 253U,
    221U, 25U, 253U, 221U, 157U, 217U, 159U, 253U, 189U, 62U, 63U, 63U, 47U, 63U,
    62U, 63U, 63U, 191U, 191U, 182U, 254U, 215U, 162U, 146U, 150U, 150U, 150U,
    214U, 214U, 111U, 107U, 59U, 75U, 107U, 239U, 107U, 239U, 111U, 111U, 231U,
    231U, 39U, 103U, 39U, 167U, 103U, 239U, 167U, 231U, 119U, 23U, 247U, 119U,
    87U, 53U, 230U, 151U, MAX_uint8_T, 127U, 191U, 191U, 245U, 191U, 189U, 191U,
    59U, MAX_uint8_T, 189U, MAX_uint8_T, 133U, 149U, 141U, 133U, 157U, 141U,
    141U, 141U, 157U, 157U, 181U, 181U, 229U, 176U, 177U, 181U, 176U, 189U, 180U,
    183U, 221U, 220U, 220U, 221U, 220U, 220U, 220U, 252U, 220U, 220U, 53U, 177U,
    181U, 37U, 181U, 183U, 53U, 245U, 183U, 243U, 234U, 194U, 202U, 234U, 226U,
    192U, 194U, 194U, 226U, 227U, 102U, 207U, 71U, 222U, 238U, 70U, 79U, 215U,
    207U, 207U, 123U, MAX_uint8_T, 123U, 103U, MAX_uint8_T, 123U, 107U, 251U,
    251U, 251U, 254U, 250U, 254U, 254U, 254U, 250U, 254U, 250U, MAX_uint8_T,
    254U, 130U, 199U, 128U, 129U, 196U, 130U, 128U, 131U, 195U, 194U, 143U, 166U,
    239U, 164U, 174U, 142U, 167U, 175U, 167U, 142U, 244U, 196U, 244U, 244U, 244U,
    196U, 244U, 196U, 228U, 212U, 181U, 165U, 231U, 165U, 133U, 45U, 245U, 237U,
    229U, 165U, 125U, 115U, 253U, 123U, 121U, 253U, 248U, 127U, 127U,
    MAX_uint8_T };

  static const uint8_T uv29[320]{ 190U, 254U, 254U, 190U, 254U, 182U, 158U, 175U,
    158U, 188U, 4U, 156U, 149U, 221U, 4U, 140U, 205U, 148U, 156U, 148U, 246U,
    236U, 246U, 244U, 246U, 212U, 244U, 236U, 254U, 246U, 245U, 182U, 231U, 247U,
    245U, 247U, 247U, 215U, 247U, 247U, 197U, 159U, 245U, 245U, 133U, 135U, 183U,
    197U, 183U, 229U, 118U, 118U, 126U, 126U, 118U, 42U, 50U, 118U, 118U, 118U,
    252U, 94U, 254U, 254U, 124U, 254U, 254U, 253U, MAX_uint8_T, 252U, 72U, 175U,
    251U, 175U, 3U, 167U, 183U, 191U, 247U, 183U, 85U, 19U, 57U, 59U, 57U, 57U,
    121U, 85U, 61U, 81U, 150U, 230U, 238U, MAX_uint8_T, 183U, 179U, 147U, 247U,
    207U, 191U, 247U, 158U, MAX_uint8_T, 126U, 247U, 250U, 126U, 87U, 254U, 118U,
    19U, 191U, 19U, 19U, 19U, 19U, 147U, 18U, 183U, 19U, 75U, 107U, 75U, 111U,
    75U, 75U, 105U, 89U, 95U, 75U, 127U, 108U, 127U, 127U, 63U, 43U, 127U, 125U,
    127U, 61U, 63U, 31U, 31U, 95U, 30U, 29U, 157U, 191U, 191U, 30U, 207U, 71U,
    247U, 207U, 223U, 75U, 239U, 111U, 109U, 203U, 251U, 253U, MAX_uint8_T,
    MAX_uint8_T, 251U, 251U, 55U, 121U, MAX_uint8_T, 123U, 213U, 247U, 215U,
    247U, 215U, 215U, 247U, 214U, 215U, 214U, 183U, 253U, MAX_uint8_T, 181U,
    253U, 53U, 181U, 179U, 191U, 181U, 163U, 167U, 163U, 147U, 177U, 163U, 175U,
    175U, 167U, 186U, 44U, 252U, 252U, 254U, 60U, 56U, 244U, 188U, 252U, 188U,
    247U, 207U, 243U, 252U, 247U, 252U, 252U, 244U, 253U, 252U, 25U, 125U, 121U,
    123U, 241U, 9U, 45U, 125U, 57U, 57U, 202U, 175U, 238U, 239U, 194U, 234U,
    238U, 234U, 238U, 162U, 151U, 251U, MAX_uint8_T, 191U, 219U, 191U, 111U, 79U,
    251U, 111U, 251U, 127U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 254U,
    MAX_uint8_T, 123U, MAX_uint8_T, 239U, 211U, 221U, 207U, 223U, 223U, 222U,
    223U, 215U, MAX_uint8_T, 246U, 135U, 151U, 151U, 199U, 71U, 7U, 135U, 197U,
    135U, 197U, 231U, 167U, 231U, 167U, 167U, 165U, 167U, 183U, 167U, 231U, 253U,
    252U, MAX_uint8_T, 253U, 236U, 249U, 245U, 253U, 253U, 253U, 124U, 252U,
    252U, 253U, 252U, 244U, 249U, 244U, 252U, 252U, 198U, 94U, 87U, 95U, 70U, 2U,
    15U, 246U, 119U, 211U };

  static const uint8_T uv3[320]{ 85U, 37U, 252U, 45U, 124U, 205U, 245U, 121U,
    109U, 53U, 237U, 113U, 69U, 172U, 117U, 116U, 102U, 205U, 113U, 101U, 221U,
    241U, 127U, 237U, 252U, 157U, 237U, 109U, 121U, 105U, 103U, 67U, 230U, 119U,
    102U, 103U, 103U, 69U, 101U, 103U, 176U, 252U, 12U, 244U, 141U, 164U, 172U,
    156U, 48U, 116U, 10U, 31U, 78U, 47U, 95U, 46U, 15U, 95U, 78U, 15U, 102U,
    199U, 71U, 103U, 87U, 103U, 79U, 71U, 103U, 103U, 184U, 152U, 184U, 191U,
    248U, 184U, 184U, 191U, 56U, 248U, 118U, 75U, 97U, 119U, 83U, 120U, 82U, 81U,
    97U, 116U, 162U, 232U, 162U, 227U, 238U, 234U, 250U, 226U, 232U, 160U, 235U,
    189U, 231U, 126U, 189U, 55U, 181U, 254U, 126U, MAX_uint8_T, 72U, 76U, 10U,
    88U, 10U, 92U, 206U, 10U, 72U, 72U, 211U, 211U, 83U, 243U, 83U, 215U, 211U,
    115U, 215U, 83U, 99U, 89U, 115U, 97U, 125U, 113U, 97U, 105U, 55U, 97U, 137U,
    221U, 25U, 152U, 91U, 153U, 217U, 151U, 129U, 153U, 82U, 180U, 115U, 48U,
    50U, 59U, 59U, 52U, 48U, 48U, 51U, 152U, 120U, 89U, 217U, 149U, 93U, 88U,
    22U, 88U, 198U, 204U, 212U, 206U, 212U, 68U, 196U, 230U, 212U, 204U, 108U,
    86U, 124U, 102U, 125U, 124U, 124U, 124U, 124U, 70U, 106U, 126U, 234U, 44U,
    106U, 110U, 110U, 110U, 106U, 110U, 105U, 201U, 104U, 185U, 232U, 233U, 233U,
    233U, 201U, 233U, 240U, 114U, 231U, 248U, 99U, 244U, 118U, 250U, 176U, 178U,
    205U, 249U, 249U, 125U, 249U, 249U, 237U, 253U, 249U, 125U, 46U, 24U, 44U,
    47U, 186U, 10U, 10U, 46U, 12U, 14U, 172U, 47U, 243U, 111U, 251U, 229U, 236U,
    127U, 231U, 244U, 174U, 156U, 235U, 239U, 207U, 251U, 139U, 239U, 253U, 175U,
    101U, 37U, 229U, 117U, 229U, 101U, 229U, 229U, 37U, 37U, 20U, 60U, 20U, 68U,
    61U, 20U, 180U, 20U, 20U, 20U, 232U, 75U, 97U, 239U, 243U, 200U, 237U, 103U,
    106U, 109U, 243U, 187U, 251U, 248U, 251U, 243U, 251U, 250U, 179U, 187U, 194U,
    82U, 118U, 210U, 86U, 66U, 82U, 210U, 66U, 82U, 32U, 165U, 34U, 168U, 114U,
    33U, 49U, 104U, 49U, 160U };

  static const uint8_T uv30[320]{ 203U, 207U, 199U, 143U, 198U, 199U, 71U, 135U,
    207U, 239U, 158U, 54U, 140U, 158U, 150U, 178U, 26U, 22U, 174U, 166U, 230U,
    180U, 135U, 230U, 172U, 173U, 198U, 231U, 228U, 228U, 151U, 151U, 151U, 147U,
    183U, 151U, 149U, 159U, 215U, 149U, 170U, 171U, 141U, 226U, 170U, 170U, 170U,
    238U, 236U, 172U, 50U, 60U, 54U, 178U, 34U, 40U, 50U, 50U, 58U, 50U, 188U,
    188U, 172U, 188U, 188U, 173U, 188U, 188U, 236U, 204U, 191U, 154U, 175U, 159U,
    159U, 159U, 18U, 218U, 191U, 139U, 191U, 187U, 254U, 191U, 190U, 190U, 173U,
    31U, 127U, 27U, MAX_uint8_T, MAX_uint8_T, 243U, 223U, MAX_uint8_T, 251U,
    251U, 251U, 243U, 247U, 214U, 151U, 131U, 87U, 18U, 18U, 146U, 83U, 86U,
    150U, 247U, 245U, 214U, 247U, 247U, 244U, 247U, 247U, 214U, MAX_uint8_T,
    236U, 204U, 204U, 204U, 205U, 220U, 204U, 204U, 201U, 201U, 110U, 254U, 106U,
    238U, 110U, 102U, 174U, 110U, 104U, 44U, 182U, 223U, 93U, MAX_uint8_T, 202U,
    222U, 215U, 191U, 222U, 223U, 207U, 239U, 239U, 239U, 75U, 111U, 207U, 239U,
    239U, 207U, 231U, 167U, 227U, 247U, 167U, 39U, 231U, MAX_uint8_T, 111U, 79U,
    103U, 87U, 71U, 95U, 87U, 71U, 101U, 69U, 70U, 199U, MAX_uint8_T, 253U, 122U,
    191U, 253U, 127U, MAX_uint8_T, 183U, 127U, 253U, 165U, 23U, 183U, 149U, 149U,
    157U, 149U, 167U, 157U, 181U, 245U, 181U, 181U, 183U, 182U, 179U, 149U, 165U,
    181U, 188U, 221U, 69U, 213U, 220U, 220U, 220U, 213U, 212U, 252U, 68U, 143U,
    239U, 191U, 175U, 143U, 239U, 135U, 47U, 239U, 239U, 239U, 226U, 226U, 226U,
    226U, 224U, 192U, 192U, 226U, 130U, 190U, 142U, 140U, 14U, 204U, 140U, 156U,
    14U, 14U, 14U, 114U, 115U, 50U, 127U, 119U, 58U, 114U, 58U, 123U, 91U,
    MAX_uint8_T, 127U, 223U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 223U, 135U, 151U, 198U, 199U, 199U, 196U, 134U,
    134U, 196U, 245U, 142U, 142U, 140U, 142U, 140U, 140U, 140U, 159U, 143U, 143U,
    244U, 245U, 117U, 245U, 244U, 245U, 117U, 253U, 252U, 253U, 169U, 141U, 177U,
    173U, 173U, 129U, 41U, 57U, 249U, 216U, 93U, 85U, 84U, 213U, 83U, 117U, 85U,
    213U, 197U, 84U };

  static const uint8_T uv31[320]{ 69U, 85U, 117U, 85U, 81U, 244U, 181U, 85U,
    116U, 116U, 237U, 237U, 103U, 103U, 143U, 237U, 237U, 197U, 205U, 237U, 157U,
    157U, 205U, 221U, 93U, 132U, 199U, 157U, 213U, 199U, 103U, 38U, 103U, 167U,
    103U, 23U, 119U, 231U, 247U, 159U, 176U, 184U, 176U, 178U, 176U, 152U, 148U,
    152U, 244U, 220U, 14U, 10U, 10U, 10U, 10U, 43U, 43U, 46U, 42U, 11U, 103U,
    70U, 102U, 111U, 71U, 70U, 102U, 71U, 238U, 230U, 184U, 184U, 184U, 184U,
    191U, 236U, 172U, 184U, 172U, 232U, 126U, 50U, 112U, 52U, 116U, 114U, 118U,
    54U, 121U, 254U, 170U, 162U, 162U, 162U, 160U, 178U, 162U, 162U, 178U, 178U,
    107U, 170U, 235U, 235U, 234U, 171U, 235U, 171U, 187U, 235U, 72U, 72U, 236U,
    192U, 68U, 24U, 80U, 64U, 74U, 74U, 215U, 215U, 211U, 215U, 243U, 67U, 243U,
    215U, 223U, 247U, 115U, 227U, 97U, 99U, 99U, 96U, 97U, 115U, 107U, 226U,
    137U, 73U, 153U, 137U, 144U, 9U, 153U, 9U, 93U, 41U, 114U, 82U, 114U, 82U,
    112U, 19U, 81U, 114U, 19U, 83U, 19U, 17U, 50U, 51U, 18U, 25U, 121U, 17U,
    123U, 121U, 78U, 196U, 196U, 196U, 230U, 198U, 238U, 214U, 199U, 238U, 108U,
    108U, 108U, 108U, 108U, 104U, 106U, 108U, 110U, 106U, 106U, 106U, 110U, 238U,
    110U, 106U, 106U, 106U, 235U, 234U, 97U, 105U, 233U, 105U, 249U, 120U, 120U,
    121U, 120U, 104U, 240U, 67U, 240U, 208U, 184U, 243U, 240U, 208U, 240U, 243U,
    201U, 203U, 205U, 205U, 77U, 205U, 205U, 217U, 73U, 203U, 46U, 46U, 46U, 14U,
    47U, 46U, 47U, 46U, 238U, 127U, 236U, 248U, 172U, 236U, 236U, 184U, 172U,
    233U, 188U, 188U, 174U, 166U, 174U, 166U, 174U, 166U, 174U, 175U, 158U, 166U,
    101U, 101U, 101U, 103U, 37U, 69U, 101U, 101U, 207U, 199U, 4U, 60U, 20U, 4U,
    16U, 20U, 4U, 20U, 20U, 60U, 200U, 40U, 109U, 44U, 104U, 225U, 225U, 168U,
    229U, 241U, 243U, 243U, 243U, 243U, 242U, 123U, 251U, 243U, 251U, 123U, 195U,
    2U, 66U, 3U, 192U, 194U, 194U, 128U, 195U, 99U, 33U, 32U, 32U, 32U, 40U, 0U,
    128U, 32U, 0U, 128U };

  static const uint8_T uv32[320]{ 109U, 45U, 37U, 37U, 45U, 37U, 45U, 109U, 37U,
    45U, 115U, 177U, 225U, 241U, 113U, 113U, 116U, 113U, 112U, 181U, 225U, 209U,
    17U, 121U, 113U, 233U, 241U, 185U, 249U, 57U, 71U, 67U, 79U, 75U, 69U, 193U,
    67U, 98U, 67U, 99U, 236U, 240U, 221U, 252U, 116U, 236U, 252U, 109U, 108U,
    252U, 31U, 95U, 15U, 79U, 31U, 79U, 63U, 29U, 109U, 47U, 207U, 99U, 198U,
    199U, 231U, 207U, 198U, 71U, 227U, 195U, 184U, 152U, 232U, 248U, 56U, 216U,
    152U, 152U, 216U, 153U, 67U, 107U, 75U, 71U, 105U, 70U, 91U, 75U, 91U, 71U,
    232U, 232U, 160U, 232U, 232U, 248U, 234U, 248U, 250U, 121U, 189U, 61U, 169U,
    189U, 127U, 181U, 61U, 181U, 53U, 189U, 76U, 108U, 72U, 72U, 76U, 74U, 76U,
    76U, 72U, 92U, 83U, 218U, 210U, 83U, 211U, 211U, 210U, 211U, 147U, 211U,
    120U, 81U, 240U, 81U, 81U, 93U, 120U, 89U, 217U, 89U, 223U, 205U, 93U, 221U,
    157U, 221U, 221U, 93U, 221U, 92U, 182U, 180U, 180U, 52U, 180U, 42U, 188U,
    50U, 58U, 48U, 28U, 151U, 216U, 88U, 28U, 88U, 153U, 152U, 153U, 217U, 204U,
    92U, 204U, 216U, 204U, 204U, 204U, 204U, 204U, 136U, 86U, 68U, 66U, 86U, 86U,
    86U, 86U, 124U, 86U, 86U, 110U, 122U, 106U, 122U, 110U, 127U, 126U, 126U,
    90U, 62U, 205U, 147U, 73U, 203U, 201U, 203U, 173U, 201U, 131U, 155U, 114U,
    112U, 98U, 50U, 178U, 114U, 118U, 98U, 118U, 50U, 253U, 249U, 219U, 121U,
    253U, 253U, 253U, 251U, 250U, 121U, 136U, 16U, 60U, 61U, 12U, 144U, 58U, 48U,
    0U, 22U, 54U, 47U, 61U, 111U, 39U, 109U, 46U, MAX_uint8_T, 79U, 79U, 88U,
    156U, 156U, 156U, 156U, 24U, 222U, 217U, 157U, 221U, 101U, 37U, 5U, 37U, 37U,
    165U, 37U, 5U, 37U, 161U, 188U, 116U, 60U, 124U, 52U, 60U, 52U, 60U, 60U,
    116U, 79U, 202U, 89U, 91U, 75U, 221U, 203U, 74U, 201U, 218U, MAX_uint8_T,
    163U, 59U, 187U, 187U, 187U, 251U, 187U, 251U, 203U, 90U, 66U, 82U, 82U, 82U,
    82U, 90U, 82U, 82U, 210U, 245U, 181U, 164U, 161U, 165U, 240U, 165U, 32U,
    161U, 160U };

  static const uint8_T uv33[320]{ 244U, 253U, 252U, 244U, 124U, 221U, 252U, 220U,
    244U, 188U, 69U, 65U, 65U, 236U, 69U, 0U, 100U, 89U, 77U, 69U, 70U, 111U,
    238U, 223U, 127U, MAX_uint8_T, 127U, 29U, 143U, 254U, 166U, 238U, 228U,
    MAX_uint8_T, 238U, 229U, 101U, 230U, 238U, 231U, 12U, 12U, 13U, 220U, 156U,
    4U, 4U, 40U, 140U, 132U, 10U, 70U, 94U, 79U, 70U, 110U, 78U, 78U, 71U, 38U,
    70U, 71U, 95U, 231U, 71U, 111U, 71U, 71U, 71U, 78U, 232U, 184U, 248U, 232U,
    184U, 24U, 120U, 184U, 232U, 248U, 97U, 68U, 97U, 127U, 5U, 112U, 113U, 160U,
    192U, 85U, 162U, 194U, 166U, 178U, 164U, 162U, 166U, 186U, 178U, 162U, 163U,
    247U, 247U, 243U, 239U, 231U, 231U, 167U, 161U, 251U, 11U, 66U, 10U, 10U, 2U,
    2U, 8U, 8U, 10U, 2U, 67U, 83U, 91U, 115U, 83U, 83U, 83U, 215U, 83U, 83U,
    105U, 113U, 121U, 243U, 119U, 115U, 113U, 119U, 241U, 123U, 25U, 185U, 31U,
    41U, 41U, 25U, 9U, 9U, 57U, 57U, 83U, 115U, 115U, 83U, 112U, 123U, 51U, 115U,
    123U, 67U, 120U, 120U, 120U, 121U, 120U, 120U, 120U, 0U, 88U, 121U, 196U,
    196U, 212U, 238U, 212U, 196U, 212U, 244U, 196U, 212U, 108U, 124U, 253U, 110U,
    125U, 124U, 108U, 124U, 106U, 63U, 226U, 234U, 234U, 234U, 234U, 234U, 106U,
    106U, 234U, 234U, 104U, 233U, 232U, 104U, 104U, 41U, 104U, 105U, 104U, 104U,
    227U, 167U, 247U, 247U, 163U, 244U, 247U, 69U, 103U, 243U, 201U, 125U, 253U,
    219U, 121U, 249U, 249U, 251U, 219U, 89U, 12U, 44U, 136U, 239U, 46U, 8U, 14U,
    44U, 40U, 174U, 176U, 243U, 243U, 253U, 243U, 215U, 243U, 241U, 241U, 251U,
    226U, 235U, 235U, 174U, 239U, 235U, 235U, 235U, 170U, 239U, 197U, 229U, 197U,
    199U, 165U, 227U, 101U, 101U, 199U, 199U, 21U, 20U, 21U, 20U, 20U, 4U, 20U,
    20U, 60U, 4U, 97U, 109U, 103U, 225U, 50U, 161U, 97U, 32U, 113U, 229U, 123U,
    187U, 251U, 123U, 187U, 251U, 187U, 179U, 123U, 251U, 114U, 112U, 126U, 118U,
    116U, 112U, 70U, 70U, 112U, 240U, 2U, 32U, 34U, 162U, 34U, 32U, 34U, 34U,
    34U, 2U };

  static const uint8_T uv34[320]{ 173U, 45U, 33U, 181U, 45U, 121U, 60U, 37U, 61U,
    41U, 140U, 183U, 164U, 172U, 172U, 140U, 173U, 180U, 132U, 173U, 173U, 237U,
    205U, 207U, 229U, 253U, 252U, 249U, 236U, 121U, 251U, 119U, 117U, 127U, 87U,
    117U, 127U, 71U, 117U, 99U, 236U, 244U, 20U, 220U, 244U, 180U, 212U, 244U,
    212U, 244U, 47U, 47U, 43U, 43U, 63U, 46U, 111U, 111U, 46U, 175U, 205U, 111U,
    97U, 103U, 230U, 111U, 103U, 231U, 109U, 103U, 191U, 191U, 63U, MAX_uint8_T,
    191U, 183U, 191U, 191U, 191U, 191U, 86U, 119U, 118U, 118U, 127U, 117U, 119U,
    86U, 117U, 119U, 251U, 235U, 163U, 242U, 235U, 163U, 167U, 235U, 179U, 105U,
    188U, 127U, 98U, 254U, 126U, 254U, 238U, 127U, 126U, 126U, 24U, 252U, 88U,
    82U, 92U, 88U, 24U, 90U, 18U, 72U, 243U, 211U, 243U, 243U, 243U, 243U, 115U,
    211U, 83U, 243U, 121U, 101U, 33U, 225U, 104U, 33U, 113U, 117U, 41U, 49U, 88U,
    152U, 144U, 153U, 148U, 144U, 24U, 157U, 156U, 152U, 43U, 48U, 113U, 113U,
    180U, 112U, 48U, 32U, 107U, 48U, 217U, 31U, 89U, 121U, 25U, 91U, 121U, 89U,
    121U, 25U, 206U, 206U, 206U, 238U, 238U, 238U, 206U, 206U, 206U, 206U, 50U,
    116U, 110U, 110U, 102U, 108U, 98U, 22U, 38U, 70U, 28U, 62U, 44U, 174U, 44U,
    44U, 40U, 58U, 184U, 56U, 187U, 185U, 57U, 249U, 245U, 185U, 56U, 185U, 184U,
    155U, 126U, 248U, 252U, 252U, 248U, 252U, 248U, 240U, 252U, 184U, 123U, 109U,
    197U, 239U, 253U, 113U, 121U, 125U, 125U, 121U, 179U, 47U, 15U, 63U, 46U,
    47U, 63U, 62U, 138U, 63U, 111U, 110U, 204U, 236U, 46U, 238U, 111U, 111U,
    111U, 111U, 223U, 239U, 175U, 175U, 254U, MAX_uint8_T, 239U, 143U, 239U,
    205U, 213U, 101U, 117U, 247U, 117U, 53U, 117U, 165U, 245U, 37U, 116U, 196U,
    0U, 4U, 4U, 64U, 69U, 68U, 68U, 100U, 216U, 239U, 233U, 237U, 207U, 234U,
    227U, 237U, 231U, 226U, 248U, 251U, 232U, 248U, 248U, 232U, 250U, 251U, 248U,
    202U, 208U, 210U, 210U, 240U, 218U, 194U, 214U, 208U, 240U, 210U, 168U, 241U,
    168U, 168U, 140U, 40U, 170U, 240U, 160U, 168U };

  static const uint8_T uv35[320]{ 124U, 126U, 124U, 244U, 125U, 116U, 124U, 237U,
    125U, 60U, 116U, 117U, 117U, 101U, 69U, 253U, 231U, 244U, 113U, 101U, 252U,
    228U, 185U, 236U, 237U, 253U, 236U, 189U, 252U, 248U, 102U, 70U, 102U, 230U,
    238U, 126U, 46U, 235U, 102U, 231U, 189U, 205U, 184U, 205U, 141U, 188U, 157U,
    141U, 173U, 221U, 127U, 95U, 79U, 111U, 87U, 79U, 91U, 111U, 95U, 127U, 87U,
    86U, 87U, 214U, 79U, 215U, 71U, 87U, 95U, 215U, 248U, 248U, 248U, 232U, 248U,
    252U, 248U, 152U, 248U, 248U, 115U, 83U, 115U, 83U, 71U, 83U, 83U, 83U, 65U,
    87U, 238U, 230U, 174U, 178U, 242U, 250U, 230U, 250U, 236U, 166U, 191U, 189U,
    173U, 185U, 157U, 189U, 173U, 189U, 189U, 253U, 8U, 11U, 8U, 11U, 10U, 40U,
    141U, 24U, 12U, 10U, 91U, 75U, 83U, 83U, 83U, 114U, 67U, 211U, 91U, 83U,
    125U, 124U, 117U, 121U, 125U, 253U, 101U, 125U, 125U, 125U, 75U, 95U, 73U,
    93U, 121U, 221U, 91U, 89U, 223U, 127U, 50U, 183U, 50U, 19U, 98U, 51U, 18U,
    59U, 51U, 32U, 61U, 89U, 153U, 217U, 89U, 157U, 89U, 217U, 220U, 89U, 212U,
    196U, 212U, 212U, 196U, 246U, 196U, 212U, 212U, 220U, 253U, 253U, 109U, 119U,
    125U, 125U, 236U, 125U, 253U, 151U, 122U, 98U, 106U, 227U, 235U, 99U, 110U,
    122U, 110U, 106U, 168U, 236U, 104U, 104U, 201U, 233U, 108U, 187U, 201U, 232U,
    227U, 99U, 99U, 99U, 99U, 99U, 99U, 102U, 99U, 242U, 249U, 253U, 249U, 217U,
    MAX_uint8_T, 251U, MAX_uint8_T, 251U, 249U, 121U, 10U, 170U, 62U, 170U, 186U,
    191U, 62U, 178U, 168U, 190U, 251U, 123U, 251U, 251U, 251U, 251U, 251U, 235U,
    243U, 127U, 207U, 95U, 207U, 207U, 207U, 223U, 199U, 223U, 217U, 207U, 101U,
    197U, 37U, 197U, 197U, 101U, 101U, 197U, 101U, 165U, 53U, 63U, 61U, 61U, 60U,
    190U, 61U, 124U, 189U, 53U, 227U, 103U, 96U, 245U, 183U, 213U, 243U, 210U,
    103U, 247U, 251U, MAX_uint8_T, 251U, 123U, 251U, 251U, MAX_uint8_T, 251U,
    MAX_uint8_T, 251U, 70U, 94U, 70U, 214U, 80U, 214U, 94U, 214U, 86U, 84U, 115U,
    86U, 98U, 130U, 96U, 115U, 82U, 114U, 115U, 226U };

  static const uint8_T uv36[320]{ 197U, 201U, 205U, 237U, 205U, 237U, 225U, 173U,
    225U, 213U, 117U, 125U, 48U, 116U, 116U, 114U, 124U, 20U, 92U, 84U, 157U,
    191U, 253U, 189U, 185U, 148U, 157U, 61U, 157U, 157U, 103U, 101U, 101U, 103U,
    103U, 101U, 117U, 101U, 127U, 103U, 180U, 36U, 36U, 172U, 224U, 36U, 36U,
    36U, 44U, 168U, 46U, 14U, 46U, 111U, 111U, 30U, 14U, 47U, 44U, 14U, 111U,
    103U, 107U, 71U, 119U, 102U, 101U, 97U, 69U, 71U, 184U, 180U, 16U, 152U,
    152U, 184U, 55U, 56U, 190U, 184U, 120U, 120U, 120U, 122U, 122U, 121U, 120U,
    124U, 252U, 224U, 234U, 234U, 234U, 250U, 234U, 234U, 234U, 250U, 90U, 250U,
    59U, 118U, 119U, 167U, 119U, 55U, 54U, 119U, 226U, 167U, 76U, 76U, 84U, 92U,
    92U, 76U, 92U, 92U, 92U, 88U, 215U, 247U, 215U, 215U, 223U, 219U, 247U, 215U,
    246U, 215U, 113U, 49U, 51U, 113U, 119U, 113U, 49U, 113U, 113U, 115U, 153U,
    145U, 153U, 73U, 201U, 153U, 145U, 153U, 25U, 9U, 115U, 51U, 123U, 59U, 58U,
    191U, 59U, 121U, 123U, 123U, 149U, 148U, 54U, 145U, 149U, 148U, 128U, 149U,
    193U, 149U, 68U, 100U, 196U, 68U, 92U, 68U, 102U, 20U, 102U, 84U, 124U, 124U,
    124U, 124U, 116U, 108U, 124U, 126U, 124U, 124U, 110U, 110U, 110U, 122U, 122U,
    110U, 44U, 42U, 78U, 106U, 233U, 225U, 169U, 169U, 161U, 237U, 233U, 161U,
    233U, 233U, 240U, 244U, 244U, 116U, 244U, 244U, 252U, 244U, 100U, 229U, 249U,
    241U, 241U, 249U, 249U, 249U, 241U, 121U, 251U, 251U, 14U, 42U, 10U, 2U, 34U,
    8U, 10U, 14U, 43U, 40U, 237U, 229U, 198U, 207U, 207U, 166U, 229U, 199U, 197U,
    225U, 191U, 251U, 251U, 219U, 223U, 251U, 251U, 251U, 251U, 235U, 101U, 101U,
    97U, 101U, 101U, 101U, 117U, 97U, 112U, 101U, 20U, 0U, 132U, 52U, 36U, 20U,
    16U, 20U, 24U, 20U, 200U, 72U, 232U, 200U, 200U, 74U, 72U, 74U, 88U, 72U,
    243U, 243U, 243U, 251U, 243U, 243U, 240U, 233U, 121U, 243U, 67U, 67U, 66U,
    66U, 67U, 74U, 66U, 64U, 80U, 67U, 49U, 41U, 33U, 33U, 177U, 5U, 41U, 49U,
    40U, 33U };

  static const uint8_T uv37[320]{ 165U, 253U, 181U, 253U, 245U, 244U, 245U, 245U,
    229U, 229U, 98U, 115U, 247U, 103U, 98U, 102U, 103U, 239U, 100U, 100U, 237U,
    237U, 237U, 228U, 205U, 173U, 237U, 205U, 237U, 205U, 227U, 103U, 231U, 71U,
    97U, 167U, 101U, 230U, 229U, 99U, 236U, 172U, 188U, 236U, 140U, 172U, 164U,
    172U, 172U, 172U, 47U, 15U, 15U, 27U, 35U, 47U, 10U, 3U, 47U, 47U, 207U, 79U,
    79U, 206U, 79U, 79U, 79U, 207U, 205U, 71U, 152U, 184U, 184U, 184U, 216U,
    152U, 184U, 248U, 152U, 152U, 82U, 65U, 86U, 83U, 82U, 18U, 112U, 82U, 82U,
    82U, 250U, 234U, 250U, 242U, 178U, 254U, 234U, 178U, 242U, 250U, 177U, 181U,
    191U, 183U, 177U, 155U, 187U, 153U, 151U, 181U, 94U, 238U, 78U, 238U, 238U,
    205U, 238U, 206U, 222U, 92U, 211U, 83U, 211U, 67U, 83U, 211U, 211U, 83U,
    211U, 211U, 105U, 109U, 113U, 104U, 65U, 101U, 97U, 97U, 45U, 97U, 221U,
    217U, 217U, 223U, 217U, 89U, 153U, 217U, 217U, 217U, 43U, 51U, 35U, 191U,
    59U, 27U, 51U, 35U, 43U, 59U, 93U, 94U, 93U, 93U, 91U, 93U, 94U, 89U, 93U,
    89U, 204U, 196U, 196U, 196U, 196U, 196U, 196U, 198U, 196U, 196U, 55U, 124U,
    124U, 124U, 108U, 125U, 124U, 126U, 125U, 124U, 127U, 110U, 110U, 111U, 254U,
    127U, 238U, 239U, 191U, 126U, 233U, 201U, 233U, 237U, 169U, 232U, 233U, 233U,
    169U, 169U, 118U, 114U, 244U, 118U, 102U, 70U, 244U, 99U, 116U, 102U, 239U,
    237U, 125U, 237U, 205U, 201U, 237U, 207U, 253U, 249U, 178U, 8U, 62U, 136U,
    26U, 42U, 10U, 58U, 138U, 18U, 76U, 246U, 236U, 62U, 216U, 236U, 228U, 248U,
    204U, 205U, 139U, 201U, 143U, 91U, 139U, 131U, 171U, 142U, 139U, 139U, 229U,
    229U, 229U, 229U, 229U, 237U, 229U, 239U, 237U, 229U, 188U, 180U, 180U, 180U,
    188U, 180U, 148U, 188U, 180U, 52U, 221U, 111U, 253U, 239U, 253U, 164U, 109U,
    189U, 173U, 232U, 251U, 251U, 251U, MAX_uint8_T, 251U, 251U, 251U, 251U,
    249U, 251U, 80U, 82U, 80U, 90U, 82U, 86U, 82U, 208U, 80U, 82U, 161U, 113U,
    49U, 84U, 32U, 112U, 49U, 32U, 112U, 32U };

  static const uint8_T uv38[320]{ 125U, 125U, 121U, 121U, 61U, 253U, 225U, 121U,
    233U, 121U, 207U, 77U, 205U, 141U, 237U, 205U, 77U, 45U, 77U, 205U, 228U,
    109U, 111U, 105U, 233U, 228U, 237U, 228U, 108U, 125U, 69U, 101U, 78U, 69U,
    69U, 94U, 69U, 5U, 101U, 111U, 157U, 156U, 156U, 244U, 212U, 221U, 140U, 29U,
    164U, 156U, 27U, 79U, 30U, 27U, 95U, 31U, 94U, 91U, 30U, 207U, 70U, 79U, 71U,
    79U, 199U, 198U, 231U, 70U, 69U, 71U, 191U, 189U, 181U, 191U, 253U, 189U,
    182U, 47U, 55U, 191U, 113U, 81U, 225U, 81U, 81U, 83U, 84U, 113U, 113U, 85U,
    230U, 226U, 192U, 162U, 226U, 242U, 226U, 230U, 238U, 104U, 190U, 190U, 238U,
    254U, 252U, 172U, 254U, 238U, 254U, 238U, 142U, 78U, 76U, 74U, 10U, 10U, 2U,
    136U, 12U, 8U, 75U, 83U, 115U, 115U, 83U, 115U, 243U, 99U, 243U, 243U, 104U,
    109U, 97U, 105U, 125U, 104U, 56U, 32U, 41U, 117U, 151U, 145U, 148U, 148U,
    149U, 31U, 149U, 22U, 146U, 144U, 183U, 50U, 119U, 52U, 36U, 39U, 103U, 150U,
    51U, 112U, 89U, 88U, 88U, 88U, 89U, 89U, 72U, 88U, 8U, 88U, 198U, 196U, 230U,
    230U, 206U, 230U, 230U, 228U, 230U, 230U, 236U, 124U, 108U, 84U, 22U, 122U,
    122U, 232U, 108U, 126U, 110U, 238U, 110U, 110U, 106U, 110U, 110U, 44U, 44U,
    106U, 236U, 233U, 233U, 249U, 233U, 253U, 233U, 108U, 232U, 249U, 243U, 242U,
    171U, 186U, 242U, 107U, 248U, 250U, 248U, 186U, 237U, 253U, 253U, 109U, 125U,
    MAX_uint8_T, 117U, 245U, 245U, 121U, 174U, 14U, 45U, 46U, 174U, 191U, 174U,
    14U, 14U, 63U, 186U, 251U, 114U, 126U, 127U, 63U, 39U, 62U, 231U, 239U,
    MAX_uint8_T, 239U, 235U, 239U, 207U, 127U, 58U, 239U, 251U, 239U, 197U, 229U,
    101U, 165U, 229U, 197U, 197U, 197U, 101U, 165U, 21U, 148U, 16U, 20U, 52U,
    60U, 16U, 17U, 16U, 16U, 103U, 111U, 107U, 103U, 103U, MAX_uint8_T, 79U,
    103U, 98U, 115U, 254U, 250U, 242U, 250U, 250U, MAX_uint8_T, 248U, 236U, 248U,
    186U, 218U, 210U, 242U, 210U, 214U, 216U, 80U, 94U, 210U, 212U, 76U, 120U,
    44U, 40U, 232U, 76U, 108U, 76U, 104U, 104U };

  static const uint8_T uv39[320]{ 89U, 109U, 69U, 108U, 109U, 125U, 105U, 109U,
    77U, 93U, 89U, 120U, 113U, 113U, 121U, 113U, 125U, 115U, 115U, 85U, 29U,
    MAX_uint8_T, 57U, 121U, 121U, 121U, 57U, 125U, 81U, 125U, 101U, 101U, 101U,
    101U, 101U, 100U, 101U, 101U, 69U, 103U, 48U, 32U, 52U, 112U, 52U, 56U, 176U,
    52U, 112U, 48U, 78U, 78U, 78U, 79U, 15U, 79U, 78U, 30U, 30U, 78U, 71U, 103U,
    103U, 87U, 111U, 95U, 119U, 111U, 111U, 111U, 52U, 16U, 56U, 56U, 184U, 184U,
    55U, 56U, 56U, 184U, 96U, 97U, 104U, 97U, 97U, 33U, 105U, 97U, 105U, 116U,
    232U, 234U, 232U, 168U, 232U, 232U, 232U, 236U, 232U, 232U, 238U, 118U, 127U,
    MAX_uint8_T, 126U, 191U, 126U, MAX_uint8_T, 127U, 127U, 72U, 72U, 76U, 8U,
    76U, 108U, 72U, 236U, 108U, 64U, 247U, 219U, 215U, 211U, 211U, 223U,
    MAX_uint8_T, 219U, 223U, 211U, 55U, 55U, 23U, 23U, 17U, 87U, 55U, 5U, 83U,
    119U, 1U, 129U, 129U, 9U, 145U, 137U, 0U, 147U, 137U, 137U, 114U, 62U, 48U,
    48U, 48U, 50U, 48U, 114U, 180U, 112U, 20U, 54U, 148U, 24U, 28U, 150U, 148U,
    22U, 54U, 22U, 244U, 244U, 92U, 220U, 204U, 213U, 126U, 196U, 92U, 212U,
    124U, 124U, 92U, 68U, 92U, 125U, 124U, 124U, 92U, 124U, 106U, 106U, 106U,
    106U, 110U, 106U, 104U, 110U, 110U, 106U, 201U, 201U, 193U, 73U, 201U, 201U,
    193U, 201U, 193U, 233U, 184U, 244U, 176U, 178U, 176U, 3U, 184U, 176U, 176U,
    176U, 241U, 241U, 241U, 249U, 249U, 249U, 241U, 237U, 249U, 121U, 12U, 8U,
    12U, 12U, 12U, 12U, 46U, 12U, 76U, 14U, 225U, 199U, 229U, 231U, 231U, 243U,
    231U, 230U, 166U, 231U, 237U, 251U, 189U, 221U, 253U, 253U, 253U, 249U, 253U,
    239U, 37U, 101U, 33U, 33U, 37U, 37U, 37U, 33U, 37U, 37U, 16U, 0U, 4U, 52U,
    20U, 180U, 0U, 148U, 132U, 132U, 104U, 106U, 72U, 98U, 106U, 106U, 74U, 110U,
    106U, 104U, 178U, 243U, 179U, 179U, 187U, 179U, 178U, 179U, 179U, 243U, 66U,
    66U, 67U, 70U, 66U, 66U, 194U, 66U, 67U, 66U, 57U, 49U, 49U, 163U, 49U, 115U,
    59U, 113U, 49U, 49U };

  static const uint8_T uv4[320]{ 1U, 9U, 3U, 1U, 1U, 1U, 3U, 16U, 1U, 133U, 157U,
    159U, 152U, 141U, 0U, 140U, 159U, 157U, 174U, 174U, 123U, 127U, 155U, 27U,
    83U, 203U, 107U, 27U, 221U, 159U, 73U, 253U, 249U, 251U, 233U, 157U, 185U,
    MAX_uint8_T, 241U, 251U, 116U, 50U, 116U, 180U, 100U, 212U, 246U, 182U, 180U,
    236U, 207U, 142U, 173U, 175U, 137U, 163U, 163U, 199U, 174U, 169U, 99U, 121U,
    185U, 99U, 232U, 238U, 171U, 63U, 105U, 237U, 55U, 55U, 87U, 183U, 67U, 231U,
    119U, 247U, 23U, MAX_uint8_T, 125U, 60U, 190U, 126U, 44U, 126U, 30U, 28U,
    126U, 190U, 73U, 73U, 89U, 9U, 1U, 3U, 73U, 9U, 43U, 27U, 126U, 94U, 82U,
    106U, 242U, 90U, 90U, 90U, 114U, 88U, 64U, 228U, 116U, 80U, 82U, 82U, 230U,
    98U, 116U, 82U, 190U, 189U, 188U, 183U, 157U, 241U, 189U, 181U, 247U, 189U,
    19U, 55U, 159U, 179U, 139U, 226U, 175U, 247U, 35U, 235U, 132U, 160U, 224U,
    32U, 48U, 176U, 176U, 32U, 144U, 248U, 116U, 96U, 104U, 96U, 72U, 64U, 96U,
    64U, 104U, 107U, 182U, 102U, 231U, 209U, 106U, 123U, 127U, 246U, 55U, 239U,
    58U, 63U, 59U, 42U, 137U, 174U, 43U, 59U, 46U, 107U, 22U, 63U, 63U, 10U, 63U,
    34U, 23U, 31U, 62U, 63U, 8U, 140U, 25U, 24U, 153U, 152U, 157U, 128U, 28U,
    157U, 147U, 177U, 147U, 51U, 2U, 51U, 179U, 115U, 179U, 179U, 184U, 152U,
    156U, 184U, 184U, 184U, 152U, 152U, 252U, 124U, 49U, 33U, 18U, 81U, 69U, 69U,
    37U, 17U, 69U, 202U, 127U, 207U, 209U, 63U, 208U, MAX_uint8_T, MAX_uint8_T,
    127U, 87U, 243U, 111U, 228U, 205U, 237U, 148U, 44U, 108U, 237U, 204U, 236U,
    188U, MAX_uint8_T, 190U, 191U, 184U, 174U, 46U, 167U, 190U, 158U, 48U, 58U,
    58U, 50U, 186U, 190U, 186U, 186U, 50U, MAX_uint8_T, 64U, 192U, 194U, 64U,
    64U, 64U, 192U, 192U, 192U, 232U, 74U, 44U, 152U, 152U, 21U, 181U, 157U, 16U,
    204U, 156U, 128U, 128U, 0U, 72U, 136U, 200U, 136U, 8U, 192U, 216U, 195U,
    161U, 161U, 193U, 97U, 241U, 177U, 165U, 193U, 161U, 169U, 121U, 185U, 168U,
    136U, 168U, 249U, 187U, 169U, 169U };

  static const uint8_T uv40[320]{ 52U, 53U, 60U, 49U, 189U, 53U, 53U, 117U, 37U,
    37U, 101U, 97U, 101U, 33U, 229U, 97U, 197U, 71U, 103U, 101U, 121U, 105U, 64U,
    89U, 89U, 79U, 105U, 73U, 105U, 121U, 103U, 101U, 103U, 101U, 110U, 77U,
    239U, 103U, 71U, 71U, 116U, 84U, 84U, 20U, 124U, 92U, 148U, 180U, 116U, 244U,
    79U, 15U, 27U, 15U, 15U, 11U, 47U, 11U, 15U, 79U, 103U, 71U, 70U, 99U, 71U,
    231U, 207U, 79U, 239U, 231U, 248U, 248U, 232U, 48U, 248U, 104U, 248U, 184U,
    184U, 248U, 116U, 68U, 113U, 116U, 86U, 118U, 86U, 116U, 116U, 85U, 160U,
    224U, 160U, 32U, 168U, 160U, 162U, 162U, 232U, 232U, MAX_uint8_T, 253U, 251U,
    MAX_uint8_T, 253U, 227U, 249U, MAX_uint8_T, 127U, 127U, 8U, 74U, 8U, 72U,
    72U, 74U, 74U, 206U, 76U, 74U, 83U, 83U, 67U, 211U, 83U, 83U, 83U, 83U, 211U,
    83U, 113U, 65U, 72U, 17U, 65U, 192U, 97U, 97U, 97U, 113U, 153U, 153U, 29U,
    144U, 137U, 25U, 185U, 153U, 157U, 157U, 48U, 48U, 144U, 112U, 48U, 112U,
    32U, 48U, 48U, 52U, 88U, 88U, 120U, 120U, 88U, 120U, 89U, 122U, 94U, 88U,
    220U, 204U, 204U, 140U, 200U, 204U, 204U, 204U, 204U, 204U, 70U, 86U, 70U,
    78U, 70U, 106U, 22U, 108U, 86U, 22U, 106U, 110U, 106U, 106U, 106U, 106U,
    234U, 110U, 110U, 106U, 105U, 201U, 76U, 137U, 105U, 73U, 249U, 233U, 233U,
    233U, 178U, 178U, 178U, 176U, 50U, 243U, 178U, 178U, 176U, 178U, 121U, 125U,
    77U, 117U, 73U, 221U, 125U, 109U, 109U, 125U, 14U, 28U, 14U, 14U, 63U, 28U,
    62U, 14U, 14U, 14U, 119U, 117U, 182U, 229U, 240U, 52U, 253U, 244U, 100U,
    103U, 175U, 141U, 237U, 173U, 205U, 170U, 143U, 239U, 174U, 142U, 37U, 165U,
    5U, 32U, 37U, 1U, 165U, 165U, 37U, 37U, 20U, 52U, 21U, 0U, 60U, 20U, 52U,
    20U, 132U, 4U, 97U, 109U, 99U, 105U, 121U, 105U, 253U, 109U, 109U, 111U,
    187U, 187U, 187U, 138U, 187U, 187U, 251U, 251U, 187U, 251U, 70U, 82U, 90U,
    82U, 66U, 114U, 240U, 82U, 82U, 82U, 160U, 160U, 128U, 160U, 160U, 160U,
    160U, 32U, 161U, 160U };

  static const uint8_T uv41[320]{ 73U, 1U, 33U, 1U, 9U, 9U, 73U, 1U, 33U, 33U,
    89U, 157U, 157U, 189U, 152U, 189U, 157U, 189U, 157U, 181U, 59U, 51U, 123U,
    19U, 123U, 59U, 27U, 123U, 115U, 89U, 117U, 73U, 73U, 85U, 89U, 125U, 101U,
    73U, 69U, 105U, 112U, 116U, 244U, 112U, 116U, 113U, 48U, 240U, 116U, 240U,
    140U, 159U, 239U, 140U, 239U, 206U, 174U, 207U, 143U, 207U, 113U, 227U, 235U,
    100U, 105U, 113U, 107U, 251U, 225U, 99U, 55U, 119U, 55U, 55U, 23U, 55U, 55U,
    247U, 55U, 119U, 237U, 125U, 125U, 121U, 127U, 125U, 109U, 125U, 125U, 118U,
    8U, 73U, 9U, 73U, 73U, 73U, 73U, 73U, 73U, 105U, 126U, 122U, 126U, 122U,
    118U, 110U, 126U, 124U, 126U, 124U, 68U, 68U, 66U, 76U, 80U, 0U, 68U, 96U,
    80U, 108U, 190U, 190U, 243U, 190U, 191U, 190U, 191U, 60U, 179U, 183U, 147U,
    144U, 53U, 179U, 23U, 183U, 51U, 151U, 49U, 23U, 128U, 180U, 180U, 132U,
    148U, 0U, 128U, 164U, 148U, 128U, 112U, 228U, 100U, 180U, 112U, 112U, 112U,
    52U, 52U, 48U, 166U, 182U, 122U, 164U, 167U, 164U, 182U, 54U, 30U, 30U, 63U,
    42U, 58U, 62U, 58U, 58U, 62U, 58U, 46U, 26U, 94U, 22U, 22U, 70U, 22U, 86U,
    92U, 22U, 22U, 22U, 72U, 12U, 40U, 8U, 24U, 8U, 8U, 88U, 8U, 56U, 193U, 211U,
    147U, 209U, 179U, 147U, 145U, 147U, 177U, 147U, 184U, 184U, 184U, 184U, 188U,
    184U, 184U, 184U, 184U, 184U, 176U, 48U, 117U, 176U, 113U, 48U, 49U, 48U,
    113U, 113U, 109U, MAX_uint8_T, 95U, 111U, 87U, 127U, 79U, 127U, 79U, 31U,
    231U, 37U, 111U, 37U, 79U, 231U, 239U, 111U, 37U, 109U, 253U, 188U, 190U,
    188U, MAX_uint8_T, MAX_uint8_T, 253U, 156U, 190U, 140U, 50U, 50U, 34U, 48U,
    50U, 48U, 34U, 34U, 48U, 36U, 0U, 64U, 64U, 2U, 64U, 64U, 64U, 192U, 64U,
    96U, 74U, 90U, 119U, 74U, 194U, 66U, 74U, 90U, 74U, 104U, 128U, 136U, 138U,
    128U, 128U, 128U, 130U, 130U, 136U, 130U, 67U, 225U, 196U, 195U, 195U, 199U,
    195U, 227U, 194U, 194U, 169U, 173U, 169U, 169U, 169U, 187U, 41U, 185U, 173U,
    185U };

  static const uint8_T uv42[320]{ 11U, 11U, 145U, 1U, 201U, 11U, 24U, 73U, 67U,
    17U, 159U, 158U, 207U, 26U, 24U, 159U, 158U, 157U, 159U, 159U, 127U, 86U,
    95U, 127U, 63U, 123U, 122U, 31U, 31U, 95U, 253U, 189U, 253U, 253U, 253U,
    253U, 249U, 253U, 189U, 237U, 182U, 50U, 54U, 50U, 52U, 54U, 50U, 178U, 50U,
    178U, 190U, 178U, 130U, 142U, 142U, 134U, 234U, 206U, 138U, 142U, 121U, 56U,
    109U, 57U, 121U, 253U, 57U, 61U, 60U, 107U, 55U, 55U, 55U, 19U, 55U, 119U,
    55U, 55U, 55U, 55U, 61U, 61U, 188U, 44U, 124U, 61U, 60U, 60U, 172U, 44U, 73U,
    73U, 8U, 73U, 73U, 73U, 13U, 75U, 73U, 73U, 94U, 90U, 82U, 86U, 118U, 94U,
    94U, 94U, 90U, 90U, 246U, 247U, 230U, 228U, 116U, 230U, 177U, 116U, 229U,
    230U, 189U, 173U, 189U, 189U, 191U, 189U, 189U, 253U, 188U, 253U, 63U, 38U,
    35U, 151U, 55U, 191U, 183U, 55U, 182U, 55U, 178U, 162U, 176U, 160U, 128U,
    176U, 162U, 128U, 160U, 160U, 96U, 196U, 97U, 96U, 113U, 96U, 80U, 113U, 80U,
    96U, 103U, 102U, 102U, 38U, 230U, 230U, 102U, 39U, 166U, 118U, 63U, 55U, 39U,
    61U, 55U, 59U, 63U, 119U, 55U, 63U, 63U, 191U, 63U, 63U, 63U, 31U, 191U, 61U,
    127U, 31U, 140U, 133U, 204U, 140U, 8U, 140U, 144U, 8U, 5U, 172U, 179U, 181U,
    225U, 129U, 177U, 243U, 50U, 241U, 193U, 209U, 152U, 152U, 152U, 152U, 156U,
    152U, 152U, 216U, 153U, 152U, 37U, 5U, 5U, 37U, 49U, 33U, 33U, 49U, 1U, 37U,
    223U, 207U, 239U, 77U, 205U, MAX_uint8_T, 207U, 111U, 109U, 95U, 238U, 164U,
    228U, 196U, 199U, 230U, 230U, 237U, 164U, 236U, MAX_uint8_T, 118U, 171U,
    169U, 251U, MAX_uint8_T, 231U, 239U, 182U, 175U, 186U, 186U, 250U, 58U, 114U,
    186U, 58U, 126U, 58U, 42U, 192U, 194U, 128U, 128U, 128U, 128U, 193U, 192U,
    130U, 192U, 174U, 46U, 44U, 44U, 8U, 30U, 166U, 8U, 12U, 60U, 192U, 132U,
    128U, 128U, 128U, 128U, 128U, 192U, 128U, 130U, 161U, 169U, 161U, 33U, 161U,
    161U, 165U, 161U, 161U, 161U, 121U, 93U, 41U, 249U, 57U, 249U, 123U, 57U,
    25U, 57U };

  static const uint8_T uv43[320]{ 129U, 128U, 3U, 3U, 67U, 1U, 3U, 7U, 3U, 3U,
    186U, 184U, 185U, 156U, 58U, 152U, 186U, 176U, 154U, 154U, 159U, 155U, 25U,
    59U, 27U, 147U, 155U, 185U, 191U, 151U, 249U, 249U, 249U, 249U, 252U, 249U,
    249U, 251U, 249U, 153U, 100U, 244U, 252U, 112U, 104U, 49U, 252U, 116U, 116U,
    50U, 172U, 229U, 141U, 236U, 140U, 237U, 173U, 165U, 172U, 164U, 57U, 185U,
    185U, 185U, 185U, 57U, 185U, 185U, 185U, 184U, 23U, 87U, 247U, 87U, 87U, 23U,
    87U, 218U, 87U, 7U, 190U, 30U, 158U, 190U, 174U, 190U, 142U, 30U, 191U, 62U,
    25U, 27U, 89U, 73U, 9U, 25U, 25U, 89U, 89U, 89U, 82U, 82U, 88U, 90U, 82U,
    66U, 88U, 81U, 86U, 82U, 116U, 114U, 116U, 116U, 100U, 16U, 114U, 118U, 118U,
    245U, 188U, 180U, 188U, 188U, 188U, 188U, 188U, 156U, 188U, 172U, 147U, 151U,
    159U, 191U, 151U, 147U, 155U, 223U, 159U, 130U, 224U, 96U, 96U, 32U, 160U,
    32U, 224U, 104U, 180U, 160U, 107U, 104U, 96U, 96U, 96U, 104U, 104U, 104U,
    104U, 200U, 167U, 231U, 199U, 231U, 166U, 231U, 239U, MAX_uint8_T, 231U,
    231U, 59U, 59U, 59U, 59U, 61U, 59U, 59U, 27U, 59U, 43U, 62U, 51U, 23U, 55U,
    127U, 58U, 23U, 23U, 63U, 59U, 24U, 17U, 17U, 17U, 1U, 24U, 25U, 153U, 157U,
    149U, 147U, 51U, 147U, 179U, 131U, 19U, 147U, 147U, 147U, 151U, 220U, 220U,
    24U, 152U, 153U, 156U, 24U, 156U, 156U, 220U, 131U, 18U, 82U, 50U, 130U, 18U,
    2U, 123U, 34U, 3U, 209U, 115U, 247U, 247U, 65U, 215U, 209U, 211U, 209U, 247U,
    204U, 205U, 237U, 205U, 148U, 205U, 76U, 205U, 206U, 140U, 184U, 134U, 156U,
    191U, 180U, 190U, 156U, 159U, MAX_uint8_T, 54U, 122U, 58U, 62U, 58U, 58U,
    26U, 58U, 186U, 186U, 58U, 192U, 192U, 234U, 194U, 138U, 66U, 234U, 228U,
    194U, 194U, 152U, 152U, 152U, 152U, 8U, 144U, 156U, 152U, 156U, 156U, 128U,
    72U, 8U, 0U, 0U, 0U, 8U, 9U, 128U, 0U, 161U, 161U, 129U, 161U, 35U, 161U,
    161U, 33U, 161U, 161U, 169U, 187U, 187U, 187U, 185U, 171U, 169U, 177U, 249U,
    157U };

  static const uint8_T uv44[320]{ 33U, 17U, 1U, 1U, 33U, 0U, 1U, 8U, 9U, 1U,
    157U, 141U, 141U, 141U, 181U, 140U, 169U, 157U, 156U, 141U, 59U, 27U, 155U,
    31U, 25U, 27U, 27U, 157U, 27U, 25U, 219U, 235U, MAX_uint8_T, 249U, 235U,
    249U, 249U, 251U, 121U, 185U, 245U, 148U, 176U, 52U, 180U, 144U, 180U, 181U,
    180U, 212U, 175U, 135U, 174U, 143U, 175U, 239U, 169U, 237U, 175U, 141U, 231U,
    67U, 103U, 97U, 227U, 33U, 105U, 101U, 99U, 163U, 247U, 247U, 183U, 55U,
    223U, 103U, 23U, 183U, 183U, 199U, 94U, 86U, 118U, 92U, 94U, 62U, 126U, 30U,
    118U, 30U, 73U, 1U, 11U, 9U, 41U, 1U, 17U, 27U, 9U, 1U, 122U, 202U, 106U,
    122U, 121U, 106U, 106U, 78U, 110U, 72U, 84U, 66U, 80U, 64U, 82U, 16U, 80U,
    16U, 80U, 66U, 182U, 247U, 247U, 183U, 151U, 182U, 183U, 182U, 247U, 180U,
    248U, 243U, 243U, 17U, 241U, 179U, 131U, 179U, 51U, 147U, 52U, 32U, 160U,
    48U, 120U, 32U, 0U, 32U, 0U, 32U, 96U, 96U, 112U, 96U, 96U, 96U, 80U, 96U,
    112U, 96U, 217U, 88U, 115U, 192U, 217U, 241U, 131U, 193U, 81U, 217U, 42U,
    42U, 110U, 42U, 10U, 59U, 42U, 58U, 62U, 42U, 18U, 10U, 46U, 30U, 18U, 10U,
    106U, 42U, 14U, 2U, 24U, 72U, 24U, 12U, 24U, 24U, 24U, 24U, 24U, 24U, 179U,
    27U, 51U, 211U, 147U, 51U, 19U, 51U, 59U, 19U, 184U, 184U, 152U, 184U, 184U,
    152U, 152U, 152U, 184U, 184U, 89U, 81U, 1U, 81U, 89U, 17U, 67U, 83U, 113U,
    82U, MAX_uint8_T, 63U, 63U, 61U, 23U, 127U, 117U, 183U, 63U, 55U, 45U, 233U,
    236U, 229U, 237U, 237U, 204U, 237U, 237U, 237U, 190U, 175U, 175U, 191U, 157U,
    182U, 189U, 247U, 239U, 132U, 22U, 162U, 54U, 50U, 183U, 18U, 50U, 22U, 48U,
    58U, 64U, 64U, 64U, 64U, 100U, 64U, 64U, 64U, 64U, 104U, 216U, 56U, 152U,
    24U, 152U, 144U, 152U, 144U, 248U, 152U, 72U, 138U, 192U, 136U, 74U, 64U,
    128U, 72U, 200U, 8U, 209U, 240U, 161U, 209U, 209U, 161U, 129U, 129U, 192U,
    145U, 168U, 40U, 41U, 40U, 160U, 170U, 168U, 170U, 40U, 168U };

  static const uint8_T uv45[320]{ 0U, 0U, 2U, 3U, 0U, 130U, 1U, 65U, 3U, 1U,
    161U, 32U, 136U, 2U, 0U, 77U, 0U, 32U, 0U, 34U, 91U, 83U, 82U, 123U, 27U,
    82U, 87U, 211U, 81U, 87U, 233U, 137U, 253U, 233U, 185U, 227U, 193U, 165U,
    177U, 249U, 244U, 76U, 118U, 108U, 84U, 228U, 100U, 102U, 100U, 108U, 171U,
    137U, 130U, 137U, 131U, 41U, 139U, 170U, 136U, 137U, 233U, 232U, 232U, 232U,
    233U, 238U, 233U, 104U, 232U, 232U, 75U, 67U, 103U, 83U, 64U, 71U, 83U, 67U,
    67U, 19U, 79U, 44U, 61U, 45U, 30U, 45U, 108U, 172U, 173U, 238U, 33U, 33U, 1U,
    1U, 1U, 2U, 49U, 128U, 17U, 17U, 248U, 242U, 114U, 242U, 83U, 251U, 114U,
    66U, 176U, 114U, 2U, 66U, 2U, 226U, 18U, 82U, 82U, 194U, 82U, 210U, 157U,
    148U, 173U, 157U, 149U, 143U, 145U, 157U, 157U, 189U, 139U, 130U, 139U, 139U,
    139U, 11U, 3U, 130U, 10U, 131U, 112U, 32U, 52U, 148U, 48U, 52U, 144U, 112U,
    244U, 240U, 64U, 72U, 64U, 104U, 72U, 72U, 104U, 90U, 74U, 104U, 122U, 106U,
    106U, 110U, 122U, 234U, 106U, 98U, 106U, 106U, 139U, 141U, 171U, 153U, 41U,
    131U, 140U, 45U, 129U, 41U, 31U, 106U, 63U, 127U, 19U, 95U, 46U, 122U, 95U,
    110U, 153U, 137U, 137U, 157U, 153U, 155U, 152U, 152U, 153U, 156U, 18U, 2U,
    18U, 131U, 2U, 48U, 3U, 0U, 18U, 3U, 186U, 187U, 184U, 184U, 188U, 183U,
    184U, 217U, 43U, 188U, 65U, 193U, 1U, 197U, 17U, 65U, 69U, 133U, 68U, 199U,
    213U, 208U, 221U, 192U, 213U, 226U, 192U, 192U, 192U, 209U, 220U, 148U, 148U,
    148U, 197U, 180U, 196U, 148U, 148U, 132U, 156U, 160U, 190U, 184U, 168U, 152U,
    168U, 160U, 152U, 184U, 170U, 154U, 154U, 186U, 186U, 154U, 178U, 154U, 186U,
    186U, 100U, 64U, 192U, 192U, 64U, 128U, 64U, 0U, 232U, 64U, 213U, 5U, 53U,
    13U, 20U, 197U, 37U, 132U, 21U, 28U, 138U, 8U, 136U, 136U, 8U, 219U, 136U,
    128U, 136U, 136U, 241U, 97U, 97U, 97U, 49U, 225U, 113U, 33U, 97U, 97U, 160U,
    128U, 136U, 169U, 160U, 128U, 168U, 128U, 128U, 168U };

  static const uint8_T uv46[320]{ 1U, 1U, 1U, 5U, 3U, 3U, 17U, 128U, 128U, 32U,
    140U, 142U, 205U, 133U, 140U, 141U, 141U, 140U, 172U, 132U, 207U, 195U, 11U,
    73U, 231U, 195U, 75U, 135U, 194U, 75U, 253U, 217U, 159U, 203U, 223U, 153U,
    173U, 159U, 153U, 249U, 212U, 180U, 212U, 212U, 212U, 214U, 148U, 212U, 212U,
    212U, 171U, 171U, 131U, 163U, 178U, 162U, 162U, 162U, 171U, 163U, 239U, 234U,
    174U, 235U, 236U, 236U, 107U, 172U, 224U, 235U, MAX_uint8_T, 247U, 231U,
    239U, 167U, 231U, 119U, 167U, 199U, 111U, 126U, 118U, 22U, 94U, 94U, 60U,
    84U, 62U, 126U, 86U, 163U, 3U, 0U, 33U, 67U, 3U, 1U, 147U, 3U, 1U, 122U, 90U,
    90U, 89U, 90U, 90U, 218U, 74U, 98U, 90U, 210U, 210U, 66U, 66U, 82U, 210U,
    66U, 82U, 18U, 18U, 241U, 241U, 181U, 209U, 241U, 181U, 113U, 244U, 161U,
    241U, 227U, 227U, 226U, 96U, 104U, 170U, 99U, 226U, 162U, 233U, 176U, 176U,
    32U, 184U, 180U, 48U, 176U, 48U, 32U, 48U, 97U, 96U, 64U, 96U, 228U, 64U,
    96U, 73U, 72U, 64U, 123U, 123U, 120U, 123U, 123U, 123U, 120U, 115U, 105U,
    121U, 238U, 42U, 106U, 10U, 110U, 171U, 174U, 111U, 174U, 170U, 46U, 6U, 2U,
    2U, 50U, 19U, 10U, 42U, 42U, 19U, 172U, 156U, 200U, 188U, 157U, 153U, 172U,
    137U, 152U, 153U, 49U, 179U, 115U, 19U, 179U, 50U, 57U, 48U, 50U, 58U, 248U,
    184U, 184U, 184U, 248U, 184U, 152U, 220U, 252U, 186U, 79U, 69U, 0U, 77U,
    101U, 5U, 5U, 15U, 69U, 69U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 239U, MAX_uint8_T, 239U, 115U, 159U, 252U, 172U,
    44U, 44U, 44U, 44U, 252U, 44U, 156U, 109U, 174U, 174U, 166U, 14U, 62U, 46U,
    174U, 38U, 166U, 174U, MAX_uint8_T, 182U, 174U, 175U, 222U, 158U, 170U, 223U,
    150U, 186U, 68U, 192U, 0U, 100U, 64U, 64U, 64U, 64U, 64U, 64U, 181U, 189U,
    28U, 157U, 157U, 181U, 53U, 132U, 177U, 181U, 232U, 200U, 26U, 202U, 200U,
    200U, 138U, 112U, 72U, 200U, 241U, 241U, 177U, 241U, 241U, 241U, 240U, 161U,
    241U, 240U, 168U, 168U, 136U, 160U, 172U, 136U, 168U, 136U, 136U, 168U };

  static const uint8_T uv47[320]{ 19U, 1U, 7U, 3U, 3U, 3U, 17U, 3U, 11U, 3U,
    143U, 18U, 151U, 143U, 159U, 157U, 159U, 159U, 157U, 191U, 123U, 203U, 105U,
    11U, 107U, 59U, 107U, 66U, 123U, 123U, 249U, 185U, 171U, 137U, 157U, 219U,
    169U, 153U, 249U, 235U, 246U, 118U, 182U, 214U, 118U, 244U, 182U, 246U, 244U,
    246U, 162U, 163U, 163U, 163U, 162U, 167U, 163U, 179U, 183U, 135U, 239U, 169U,
    171U, 171U, 169U, 187U, 171U, 168U, 251U, 171U, 247U, 82U, 251U, 103U, 119U,
    247U, 119U, 119U, 119U, 247U, 62U, 30U, 30U, 30U, 60U, 30U, 20U, 30U, 29U,
    30U, 65U, 73U, 105U, 65U, 73U, 73U, 73U, 73U, 73U, 73U, 90U, 82U, 91U, 90U,
    90U, 90U, 90U, 90U, 94U, 88U, 230U, 246U, 246U, 230U, 246U, 118U, 231U, 247U,
    230U, 230U, 189U, 181U, 213U, 180U, 189U, 188U, 181U, 173U, 189U, 189U, 235U,
    139U, 111U, 170U, 174U, MAX_uint8_T, 175U, 42U, 191U, 223U, 176U, 176U, 184U,
    176U, 180U, 180U, 176U, 182U, 180U, 176U, 96U, 104U, 96U, 96U, 96U, 96U, 64U,
    196U, 96U, 96U, 127U, 127U, 127U, 127U, 126U, MAX_uint8_T, 126U, 119U, 126U,
    126U, 171U, 41U, 11U, 43U, 59U, 59U, 43U, 43U, 59U, 59U, 23U, 23U, 23U, 19U,
    23U, 23U, 23U, 23U, 23U, 23U, 157U, 157U, 189U, 157U, 141U, 157U, 157U, 157U,
    157U, 221U, 179U, 163U, 179U, 147U, 179U, 179U, 147U, 183U, 147U, 211U, 152U,
    188U, 152U, 152U, 152U, 152U, 152U, 152U, 184U, 186U, 37U, 5U, 109U, 37U,
    37U, 49U, 5U, 5U, 36U, 36U, MAX_uint8_T, 223U, 223U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    252U, 68U, 236U, 44U, 108U, 109U, 236U, 44U, 110U, 108U, 175U, 38U, 15U, 4U,
    46U, 62U, 165U, 54U, MAX_uint8_T, 140U, 190U, 186U, 175U, 186U, 186U, 186U,
    170U, 186U, 186U, 174U, 192U, 192U, 196U, 192U, 192U, 194U, 192U, 192U, 192U,
    232U, 189U, 189U, 188U, 156U, 29U, 156U, 61U, 156U, 159U, 29U, 200U, 136U,
    202U, 74U, 128U, 200U, 138U, 140U, 136U, 138U, 177U, 49U, 177U, 177U, 177U,
    177U, 177U, 185U, 241U, 161U, 185U, 185U, 241U, 252U, 249U, 249U, 249U, 221U,
    249U, 185U };

  static const uint8_T uv48[320]{ 24U, 16U, 16U, 16U, 0U, 0U, 20U, 0U, 0U, 16U,
    157U, 221U, 141U, 159U, 217U, 189U, 149U, 157U, 156U, 157U, 27U, 31U, 27U,
    31U, 27U, 155U, 27U, 59U, 27U, 31U, 251U, 252U, 189U, 189U, 251U,
    MAX_uint8_T, 235U, 251U, 185U, 239U, 182U, 50U, 20U, 178U, 116U, 176U, 178U,
    180U, 178U, 182U, 231U, 198U, 199U, 194U, 133U, 207U, 231U, 199U, 227U, 198U,
    59U, 63U, 171U, 59U, 175U, 63U, 59U, 187U, 185U, 111U, 247U, 247U, 103U,
    119U, 247U, 247U, 216U, 247U, 103U, 247U, 22U, 188U, 20U, 188U, 30U, 62U,
    22U, 30U, 30U, 20U, 9U, 8U, 1U, 13U, 9U, 9U, 9U, 73U, 9U, 8U, 94U, 90U, 90U,
    90U, 88U, 74U, 219U, 88U, 90U, 218U, 34U, 98U, 2U, 163U, 66U, 32U, 114U, 99U,
    51U, 66U, 189U, 188U, 181U, 181U, 180U, 181U, 213U, 181U, 180U, 245U, 247U,
    183U, 243U, 183U, 215U, 247U, 119U, 223U, 183U, 119U, 32U, 32U, 32U, 32U,
    32U, 32U, 40U, 32U, 32U, 32U, 96U, 96U, 64U, 64U, 96U, 64U, 64U, 96U, 64U,
    96U, 119U, 230U, 120U, 102U, 254U, 247U, 119U, MAX_uint8_T, 247U, 118U, 59U,
    123U, 59U, 59U, 59U, 123U, 27U, 59U, 59U, 59U, 159U, 63U, 19U, 31U, 19U, 59U,
    31U, 23U, 19U, 31U, 152U, 192U, 129U, 129U, 201U, 16U, 177U, 129U, 145U,
    232U, 51U, 97U, 82U, 114U, 67U, 115U, 59U, 243U, 50U, 121U, 152U, 153U, 152U,
    153U, 152U, 152U, 144U, 152U, 152U, 152U, 49U, 18U, 16U, 1U, 18U, 27U, 25U,
    50U, 17U, 17U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 127U, MAX_uint8_T,
    127U, 63U, MAX_uint8_T, 127U, 63U, 239U, 241U, 229U, 233U, 237U, 237U, 233U,
    237U, 237U, 233U, 231U, 166U, 166U, 167U, 132U, 167U, 135U, 167U, 166U, 167U,
    190U, 190U, 186U, 186U, 190U, 62U, 171U, 186U, 186U, 170U, 192U, 128U, 64U,
    193U, 200U, 64U, 196U, 192U, 192U, 192U, 178U, 24U, 20U, 52U, 24U, 144U,
    176U, 20U, 144U, 60U, 138U, 16U, 10U, 0U, 10U, 80U, 11U, 8U, 72U, 138U, 165U,
    161U, 177U, 165U, 161U, 165U, 165U, 165U, 165U, 161U, 187U, 59U, 170U, 123U,
    169U, 187U, 179U, 251U, 187U, 57U };

  static const uint8_T uv49[320]{ 1U, 1U, 1U, 5U, 1U, 129U, 65U, 137U, 161U, 1U,
    142U, 134U, 162U, 162U, 170U, 142U, 190U, 190U, 138U, 10U, 159U, 205U, 209U,
    157U, 155U, 223U, 149U, MAX_uint8_T, 205U, 223U, 117U, 241U, 81U, 241U, 113U,
    249U, 149U, 241U, 117U, 249U, 180U, 180U, 244U, 176U, 116U, 164U, 176U, 244U,
    52U, 36U, 174U, 170U, 175U, 46U, 175U, 170U, 174U, 175U, 171U, 170U, 105U,
    105U, 233U, 105U, 233U, 105U, 40U, 121U, 105U, 105U, 55U, 23U, 27U, 27U, 23U,
    23U, 55U, 23U, 23U, 23U, 124U, 118U, 126U, 62U, 126U, 126U, 126U, 127U, 118U,
    126U, 11U, 35U, 105U, 187U, 43U, 19U, 251U, 107U, 35U, 89U, 122U, 122U, 114U,
    115U, 114U, 114U, 90U, 118U, 118U, 114U, 84U, 246U, 84U, 116U, 80U, 80U,
    244U, 124U, 212U, 244U, 247U, 211U, 147U, 213U, 183U, 181U, 181U, 191U, 243U,
    189U, 35U, 35U, 0U, 35U, 163U, 35U, 34U, 59U, 33U, 131U, 144U, 144U, 148U,
    200U, 144U, 144U, 144U, 144U, 144U, 144U, 112U, 104U, 44U, 104U, 56U, 105U,
    239U, 120U, 120U, 105U, 55U, 127U, 31U, 55U, 151U, 99U, 39U, MAX_uint8_T,
    123U, 102U, 46U, 142U, 10U, 15U, 46U, 46U, 111U, 191U, 174U, 46U, 126U, 62U,
    22U, 62U, 102U, 46U, 126U, 127U, 46U, 62U, 12U, 156U, 28U, 28U, 28U, 28U,
    28U, 28U, 28U, 28U, 177U, 179U, 179U, 179U, 179U, 51U, 177U, 179U, 187U,
    147U, 188U, 252U, 188U, 216U, 252U, 252U, 220U, 252U, 252U, 252U, 65U, 69U,
    101U, 73U, 193U, 71U, 197U, 97U, 101U, 103U, 47U, 95U, 87U, 82U, 87U, 119U,
    71U, 215U, 31U, 81U, 236U, 204U, 12U, 204U, 76U, 204U, 140U, 206U, 204U,
    196U, 190U, 174U, 158U, 174U, 190U, 190U, 62U, MAX_uint8_T, 175U, 187U, 50U,
    178U, 51U, 55U, 50U, 114U, 126U, 50U, 48U, 114U, 192U, 192U, 196U, 196U, 64U,
    64U, 192U, 192U, 64U, 192U, 200U, 172U, 204U, 136U, 200U, 140U, 140U, 206U,
    236U, 140U, 192U, 200U, 136U, 192U, 192U, 192U, 192U, 200U, 136U, 128U, 193U,
    241U, 209U, 129U, 195U, 193U, 129U, 195U, 208U, 65U, 41U, 169U, 161U, 161U,
    169U, 168U, 61U, 185U, 168U, 169U };

  static const uint8_T uv5[320]{ 120U, 100U, 92U, 80U, 212U, 236U, 72U, 90U, 72U,
    252U, 184U, 161U, 177U, 189U, 32U, 176U, 176U, 176U, 188U, 180U, 186U, 153U,
    185U, 157U, 156U, 188U, 189U, 188U, 189U, 188U, 120U, 250U, 96U, 246U, 182U,
    240U, 241U, 176U, 113U, 114U, 169U, 221U, 168U, 169U, 137U, 237U, 168U, 169U,
    169U, 137U, 237U, 237U, 77U, 236U, 108U, 125U, 109U, 253U, 237U, 109U, 81U,
    81U, 83U, 21U, 20U, 81U, 121U, 16U, 113U, 85U, 71U, 207U, 152U, 175U, 138U,
    219U, 159U, 143U, 159U, 218U, 171U, 203U, 170U, 190U, 186U, 219U, 171U, 171U,
    250U, 179U, 29U, 49U, 189U, 191U, 183U, MAX_uint8_T, 251U, 191U, 187U, 191U,
    164U, 169U, 165U, 170U, 163U, 181U, 54U, 172U, 38U, 165U, 24U, 24U, 8U, 24U,
    25U, 24U, 124U, 25U, 24U, 25U, 190U, 150U, 223U, 254U, 198U, 158U, 159U,
    142U, 150U, 95U, 151U, 241U, 215U, 247U, 243U, 253U, 55U, 191U, 179U,
    MAX_uint8_T, 64U, 72U, 73U, 64U, 73U, 78U, 72U, 74U, 64U, 75U, 26U, 24U, 26U,
    90U, 91U, 59U, 59U, 154U, 59U, 27U, 129U, 153U, 151U, 129U, 129U, 137U, 135U,
    133U, 129U, 129U, 179U, 154U, 213U, 119U, 215U, 146U, 23U, 151U, 86U, 215U,
    237U, 106U, 109U, 237U, 233U, MAX_uint8_T, 125U, 237U, 104U, 237U, 16U, 16U,
    82U, 16U, 18U, 16U, 24U, 17U, 24U, 18U, 26U, 26U, 10U, 50U, 56U, 58U, 147U,
    30U, 51U, 58U, 107U, 106U, 67U, 73U, 69U, 103U, 92U, 75U, 124U, 103U, 242U,
    218U, 250U, 219U, 219U, 250U, 251U, 218U, 251U, 250U, 49U, 17U, 16U, 115U,
    32U, 144U, 80U, 209U, 51U, 50U, 219U, 221U, 219U, 249U, 217U, 223U, 207U,
    219U, 207U, 219U, 209U, 148U, 193U, 247U, 243U, 219U, 219U, 215U, 223U, 219U,
    16U, 21U, 37U, 95U, 95U, 85U, 119U, 93U, 85U, 85U, 123U, 127U, 125U, 123U,
    63U, 127U, 244U, 127U, 116U, 127U, 194U, 208U, 224U, 128U, 128U, 210U, 200U,
    130U, 192U, 226U, 0U, 74U, 35U, 80U, 113U, 73U, 192U, 68U, 64U, 113U, 135U,
    198U, 7U, 135U, 7U, 214U, 135U, 143U, 199U, 198U, 43U, 162U, 115U, 43U, 2U,
    227U, 115U, 83U, 42U, 114U };

  static const uint8_T uv50[320]{ 133U, 129U, 135U, 133U, 129U, 5U, 3U, 131U,
    129U, 135U, 237U, 190U, 239U, 207U, 143U, 166U, 175U, 172U, 170U, 174U, 159U,
    MAX_uint8_T, 155U, 89U, 29U, 153U, 155U, 213U, 159U, 223U, 191U, 251U, 254U,
    243U, 249U, 251U, 251U, 219U, 251U, MAX_uint8_T, 252U, 236U, 252U, 228U,
    236U, 252U, 252U, 238U, 236U, 252U, 170U, 169U, 37U, 168U, 141U, 173U, 165U,
    169U, 169U, 171U, 175U, 237U, 191U, 239U, 237U, 235U, 189U, 172U, 233U, 239U,
    191U, 215U, MAX_uint8_T, 214U, 191U, 216U, 223U, 223U, 215U, MAX_uint8_T,
    190U, MAX_uint8_T, 154U, 236U, 158U, 30U, 158U, 62U, 174U, 63U, 155U, 91U,
    154U, 19U, 27U, 59U, 25U, 51U, 27U, 179U, 90U, 118U, 24U, 57U, 80U, 89U, 88U,
    88U, 80U, 250U, 80U, 246U, 110U, 214U, 82U, 82U, 114U, 210U, 80U, 210U, 252U,
    189U, 252U, 189U, 189U, 221U, 188U, 189U, 189U, 253U, 227U, 235U, 251U, 235U,
    171U, 235U, 251U, 234U, 195U, 235U, 233U, 208U, 249U, 249U, 176U, 249U, 240U,
    220U, 240U, 252U, 75U, 107U, 35U, 107U, 97U, 40U, 96U, 105U, 107U, 105U,
    247U, 111U, 159U, 111U, 207U, 223U, 239U, 111U, 231U, 127U, 111U, 107U, 115U,
    227U, 43U, 75U, 123U, 75U, 43U, 239U, 63U, 127U, 95U, 95U, 63U, 23U, 55U,
    63U, 62U, 127U, 218U, 157U, 111U, 223U, 13U, 159U, 157U, 157U, 28U, 157U,
    115U, 179U, 241U, 243U, 243U, 147U, 147U, 179U, 19U, 179U, 216U, 124U, 107U,
    36U, 124U, 116U, 88U, 124U, 92U, 254U, 139U, 239U, 138U, 78U, 67U, 74U, 138U,
    207U, 138U, 207U, MAX_uint8_T, 243U, 251U, 227U, 247U, 242U, 243U, 243U,
    241U, MAX_uint8_T, 236U, 206U, 252U, 236U, 236U, 204U, 236U, 12U, 204U, 252U,
    182U, 223U, 158U, 157U, 154U, 158U, 156U, 30U, 152U, 190U, MAX_uint8_T, 254U,
    111U, 174U, 254U, 191U, 190U, MAX_uint8_T, 126U, MAX_uint8_T, 196U, 232U,
    188U, 232U, 232U, 236U, 232U, 236U, 232U, 196U, 156U, 156U, 156U, 156U, 28U,
    156U, 156U, 156U, 156U, 157U, 241U, 216U, 250U, 219U, 200U, 219U, 200U, 216U,
    200U, 248U, 161U, 225U, 161U, 225U, 129U, 145U, 161U, 129U, 161U, 225U, 169U,
    185U, 169U, 161U, 169U, 161U, 169U, 169U, 169U, 169U };

  static const uint8_T uv51[320]{ 88U, 216U, 72U, 120U, 64U, 120U, 120U, 88U,
    120U, 120U, 56U, 184U, 185U, 184U, 176U, 184U, 48U, 185U, 249U, 185U, 154U,
    191U, 185U, 188U, 27U, 188U, 185U, 59U, 152U, 154U, 240U, 248U, 120U, 250U,
    120U, 120U, 112U, 96U, 250U, 120U, 43U, 169U, 249U, 137U, 41U, 41U, 41U,
    185U, 153U, 185U, 204U, 237U, 205U, 237U, 205U, 253U, 237U, 205U, 205U, 201U,
    17U, 81U, 49U, 81U, 81U, 80U, 81U, 81U, 81U, 80U, 71U, 87U, 199U, 199U, 3U,
    71U, 83U, 87U, 206U, 199U, 171U, 187U, 175U, 163U, 174U, 171U, 235U, 171U,
    171U, 163U, 29U, 27U, 29U, 23U, 25U, 29U, 61U, 109U, 29U, 29U, 166U, 164U,
    44U, 164U, 162U, 164U, 164U, 172U, 164U, 172U, 24U, 24U, 24U, 25U, 8U, 25U,
    24U, 8U, 9U, 41U, 190U, 190U, 190U, 63U, 190U, 174U, 158U, 191U, 174U, 47U,
    151U, 191U, 151U, 215U, 151U, 159U, 151U, 159U, 223U, 183U, 64U, 64U, 64U,
    66U, 64U, 66U, 64U, 64U, 64U, 66U, 90U, 59U, 48U, 26U, 114U, 154U, 58U, 48U,
    18U, 18U, 162U, 165U, 129U, 129U, 128U, 129U, 129U, 166U, 129U, 131U, 183U,
    179U, 59U, 179U, 53U, 179U, 148U, 191U, 243U, 179U, 237U, 253U, 234U, 237U,
    108U, 237U, 108U, 253U, 237U, 237U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U,
    80U, 16U, 10U, 58U, 18U, 26U, 11U, 30U, 26U, 27U, 90U, 26U, 79U, 111U, 107U,
    75U, 9U, 111U, 107U, 43U, 75U, 75U, 178U, 178U, 242U, 250U, 242U, 210U, 242U,
    178U, 218U, 130U, 65U, 241U, 113U, 49U, 81U, 145U, 16U, 17U, 49U, 49U, 211U,
    219U, 207U, 219U, 209U, 219U, 219U, 219U, 251U, 251U, 241U, 219U, 213U, 193U,
    241U, 209U, 217U, 221U, 209U, 213U, 18U, 80U, 20U, 116U, 18U, 80U, 16U, 48U,
    21U, 52U, 123U, 123U, 123U, 123U, 122U, 123U, 123U, 123U, 123U, 123U, 0U,
    194U, 210U, 240U, 64U, 210U, 194U, 194U, 82U, 226U, 0U, 64U, 0U, 64U, 0U, 4U,
    0U, 0U, 0U, 0U, 39U, 135U, 135U, 134U, 7U, 206U, 70U, 135U, 135U, 142U, 43U,
    59U, 171U, 106U, 42U, 74U, 35U, 123U, 42U, 11U };

  static const uint8_T uv52[320]{ 100U, 40U, 36U, 100U, 96U, 36U, 108U, 224U,
    68U, 100U, 169U, 165U, 176U, 161U, 160U, 177U, 161U, 172U, 177U, 160U, 148U,
    185U, 153U, 153U, 157U, 185U, 184U, 148U, 147U, 16U, 122U, 123U, 251U, 250U,
    153U, 66U, 250U, 250U, 250U, 72U, 153U, 221U, 253U, 205U, 77U, 221U, 221U,
    205U, 217U, 217U, 205U, 237U, 237U, 109U, 205U, 237U, 237U, 237U, 237U, 233U,
    86U, 81U, 177U, 211U, 97U, 81U, 81U, 196U, 115U, 80U, 239U, 143U, 203U, 200U,
    72U, 203U, 207U, 207U, 207U, 73U, 203U, 87U, 142U, 203U, 238U, 107U, 203U,
    219U, 171U, 107U, 177U, 49U, 61U, 177U, 177U, 57U, 53U, 51U, 17U, 49U, 168U,
    173U, 169U, 161U, 160U, 45U, 173U, 168U, 169U, 169U, 8U, 24U, 24U, 8U, 8U,
    24U, 24U, 24U, 24U, 24U, 230U, 150U, 150U, 214U, 214U, 150U, 142U, 162U,
    158U, 142U, 241U, 241U, 223U, 249U, 192U, 213U, 253U, 249U, 243U, 210U, 72U,
    72U, 72U, 73U, 72U, 76U, 76U, 76U, 72U, 76U, 18U, 48U, 8U, 26U, 26U, 60U,
    24U, 27U, 16U, 148U, 137U, 153U, 201U, 217U, 201U, 153U, 201U, 201U, 177U,
    153U, 250U, 26U, 27U, 216U, 140U, 26U, 155U, 202U, 219U, 153U, 104U, 66U,
    75U, 106U, 106U, 66U, 203U, 106U, 106U, 106U, 80U, 24U, 17U, 82U, 24U, 24U,
    16U, 16U, 16U, 48U, 90U, 26U, 18U, 26U, 10U, 19U, 26U, 58U, 19U, 26U, 107U,
    106U, 106U, 99U, 99U, 58U, 107U, 110U, 75U, 35U, 218U, 251U, 218U, 218U,
    219U, 250U, 250U, 218U, 154U, 218U, 49U, 23U, 17U, 48U, 17U, 17U, 145U, 51U,
    115U, 81U, 185U, 239U, 205U, 221U, 157U, 79U, 223U, 157U, 221U, 153U, 150U,
    223U, 149U, 152U, 144U, 156U, 213U, 150U, 148U, 148U, 21U, 21U, 27U, 69U,
    83U, 21U, 21U, 85U, 23U, 1U, 127U, 125U, 127U, 127U, 124U, 126U, 127U, 127U,
    126U, 127U, 208U, 208U, 208U, 208U, 208U, 210U, 210U, 208U, 192U, 208U, 90U,
    72U, 8U, 123U, 8U, 10U, 72U, 72U, 66U, 2U, 198U, 198U, 135U, 86U, 67U, 198U,
    198U, 210U, 167U, 199U, 10U, 162U, 162U, 162U, 162U, 162U, 162U, 138U, 162U,
    6U };

  static const uint8_T uv53[320]{ 84U, 92U, 92U, 124U, 68U, 124U, 76U, 92U, 84U,
    92U, 177U, 49U, 251U, 112U, 241U, 177U, 249U, 179U, 97U, 48U, 189U, 185U,
    57U, 185U, 153U, 185U, 188U, 186U, 152U, 189U, 226U, 98U, 34U, 96U, 226U,
    96U, 126U, 96U, 32U, 100U, 168U, 171U, 40U, 41U, 40U, 184U, 41U, 186U, 40U,
    40U, 109U, 109U, 205U, 77U, 77U, 205U, 221U, 74U, 13U, 76U, 83U, 83U, 27U,
    83U, 19U, 83U, 19U, 83U, 82U, 81U, 152U, 216U, 152U, 152U, 216U, 217U, 216U,
    153U, 200U, 24U, 162U, 171U, 170U, 235U, 170U, 35U, 171U, 162U, 170U, 162U,
    189U, 249U, 252U, 252U, 184U, 189U, 252U, 173U, 188U, 188U, 173U, 173U, 133U,
    165U, 161U, 173U, 165U, 175U, 161U, 166U, 9U, 40U, 173U, 8U, 72U, 8U, 41U,
    169U, 9U, 8U, 215U, 223U, 191U, 159U, 222U, 31U, 254U, 223U, 215U, 215U,
    247U, 247U, 222U, 215U, 215U, 215U, 215U, 247U, 211U, 151U, 73U, 73U, 74U,
    73U, 73U, 72U, 75U, 74U, 73U, 65U, 90U, 58U, 18U, 58U, 18U, 16U, 18U, 82U,
    26U, 122U, 149U, 183U, 134U, 132U, 151U, 147U, 151U, 183U, 144U, 130U, 213U,
    213U, 245U, 213U, 93U, 159U, 117U, 213U, 213U, 213U, 109U, 236U, 253U, 253U,
    125U, 77U, 237U, 237U, 108U, 109U, 114U, 114U, 87U, 90U, 82U, 80U, 82U, 112U,
    114U, 64U, 26U, 27U, 207U, 11U, 67U, 26U, 66U, 26U, 10U, 8U, 67U, 99U, 67U,
    99U, 67U, 11U, 67U, 65U, 99U, 65U, 251U, 186U, 250U, 250U, 218U, 250U, 250U,
    171U, 218U, 243U, 48U, 0U, 49U, 16U, 113U, 17U, 49U, 0U, 16U, 0U, 217U, 219U,
    217U, 211U, 217U, 251U, 219U, 251U, 217U, 211U, 193U, 213U, 193U, 217U, 144U,
    197U, 209U, 229U, 209U, 225U, 101U, 37U, 47U, 33U, 47U, 37U, 101U, 37U, 37U,
    97U, 125U, 127U, 253U, 63U, 126U, 125U, 63U, 125U, 125U, 61U, 160U, 226U, 8U,
    66U, 8U, 224U, 82U, 160U, 192U, 96U, 115U, 99U, 3U, 179U, 51U, 130U, 35U,
    162U, 35U, 33U, 135U, 7U, 7U, 70U, 3U, 134U, 7U, 135U, 3U, 7U, 115U, 51U,
    83U, 115U, 51U, 115U, 115U, 115U, 2U, 99U };

  static const uint8_T uv54[320]{ 88U, 64U, 88U, 68U, 80U, 76U, 80U, 94U, 64U,
    64U, 189U, 188U, 189U, 249U, 221U, 189U, 157U, 189U, 173U, 173U, 159U, 157U,
    157U, 157U, 159U, 159U, 157U, 156U, 156U, 148U, 244U, 243U, 250U, 246U, 252U,
    126U, 245U, 246U, 179U, 23U, 171U, 169U, 185U, 137U, 168U, 185U, 184U, 169U,
    137U, 153U, 236U, 237U, 237U, 204U, 204U, 237U, 238U, 236U, 236U, 238U, 53U,
    53U, 23U, 23U, 21U, 23U, 21U, 92U, 20U, 52U, 167U, 143U, 239U, 172U, 167U,
    239U, 175U, 175U, 175U, 175U, 171U, 190U, 191U, 174U, 174U, 191U, 182U, 187U,
    190U, 186U, 159U, 191U, 31U, 177U, 190U, 191U, 191U, 187U, 183U, 183U, 174U,
    170U, 168U, 138U, 130U, 172U, 138U, 170U, 138U, 42U, 56U, 24U, 25U, 8U, 8U,
    56U, 17U, 25U, 25U, 25U, 190U, 188U, 190U, 254U, 247U, 254U, 247U, 254U,
    230U, 238U, 183U, 247U, 247U, 247U, 247U, 247U, 55U, MAX_uint8_T, 242U, 242U,
    64U, 64U, 64U, 72U, 0U, 65U, 64U, 72U, 72U, 64U, 90U, 90U, 82U, 82U, 83U,
    114U, 91U, 91U, 90U, 27U, 167U, 129U, 129U, 129U, 129U, 151U, 129U, 135U,
    129U, 129U, 119U, 119U, 251U, 119U, 119U, 127U, 87U, 247U, 87U, 119U, 237U,
    105U, 237U, 105U, 109U, 238U, 109U, 253U, 104U, 232U, 0U, 16U, 16U, 82U, 64U,
    18U, 16U, 16U, 16U, 16U, 16U, 50U, 122U, 83U, 104U, 115U, 58U, 58U, 50U, 54U,
    73U, 73U, 75U, 73U, 73U, 75U, 201U, 75U, 73U, 216U, 179U, 219U, 218U, 155U,
    211U, 250U, 211U, 219U, 219U, 219U, 97U, 115U, 55U, 113U, 61U, 127U, 39U,
    243U, 115U, 127U, 219U, 205U, 249U, 249U, 249U, 251U, 233U, 251U, 169U, 173U,
    247U, 183U, 215U, 182U, 163U, 247U, 231U, 247U, 182U, 182U, 86U, 95U, 31U,
    95U, 127U, 87U, 127U, 95U, 95U, 85U, 27U, 123U, 123U, 126U, 25U, 123U, 85U,
    127U, 127U, 83U, 128U, 128U, 144U, 128U, 0U, 210U, 160U, 128U, 128U, 192U,
    112U, 64U, 80U, 50U, 112U, 112U, 64U, 112U, 80U, 112U, 135U, 135U, 135U,
    135U, 133U, 135U, 133U, 135U, 135U, 143U, 59U, 43U, 42U, 42U, 43U, 59U, 107U,
    11U, 10U, 14U };

  static const uint8_T uv55[320]{ 212U, 212U, 84U, 222U, 220U, 197U, 212U, 228U,
    68U, 198U, 164U, 112U, 32U, 36U, 120U, 52U, 76U, 236U, 164U, 32U, 156U, 156U,
    150U, 148U, 158U, 157U, 157U, 148U, 148U, 156U, 183U, 246U, 180U, 182U, 180U,
    54U, 254U, 62U, 21U, 242U, 136U, 136U, 137U, 137U, 41U, 169U, 137U, 137U,
    137U, 137U, 110U, 108U, 108U, 124U, 108U, 108U, 100U, 233U, 110U, 108U, 20U,
    85U, 80U, 20U, 21U, 84U, 85U, 6U, 52U, 17U, 139U, 136U, 8U, 138U, 2U, 138U,
    138U, 236U, 143U, 139U, 190U, 162U, 171U, 187U, 170U, 250U, 178U, 190U, 186U,
    187U, 183U, 182U, 179U, 183U, 190U, 187U, 150U, 178U, 183U, 183U, 131U, 167U,
    163U, 131U, 166U, 163U, 130U, 161U, 162U, 131U, 25U, 25U, 9U, 25U, 57U, 24U,
    16U, 25U, 25U, 17U, 215U, 215U, 206U, 206U, 223U, 214U, 247U, 230U, 198U,
    204U, 115U, 247U, 243U, 250U, 183U, 242U, 247U, 226U, 50U, 247U, 72U, 73U,
    65U, 75U, 65U, 73U, 97U, 73U, 73U, 73U, 91U, 91U, 90U, 219U, 91U, 59U, 91U,
    27U, 159U, 91U, 129U, 129U, 225U, 129U, 167U, 129U, 193U, 145U, 129U, 193U,
    87U, 213U, 245U, 215U, 245U, 87U, 247U, 231U, 87U, 87U, 109U, 109U, 237U,
    233U, 237U, 108U, 121U, 106U, 232U, 233U, 16U, 2U, 16U, 19U, 2U, 18U, 130U,
    114U, 16U, 16U, 56U, 40U, 8U, 60U, 40U, 41U, 40U, 122U, 52U, 50U, 69U, 69U,
    67U, 71U, 69U, 101U, 71U, 71U, 77U, 69U, 219U, 219U, 219U, 219U, 147U, 219U,
    219U, 219U, 219U, 219U, 0U, 32U, 64U, 160U, 0U, 32U, 32U, 123U, 0U, 192U,
    201U, 217U, 153U, 155U, 209U, 201U, 209U, 185U, 141U, 217U, 227U, 227U, 242U,
    243U, 243U, 243U, 227U, 150U, 178U, 243U, 127U, 117U, 79U, 95U, 127U, 85U,
    223U, 79U, 85U, 95U, 85U, 61U, 63U, 63U, 27U, 62U, 25U, 63U, 23U, 127U, 128U,
    160U, 128U, 128U, 128U, 200U, 144U, 208U, 192U, 128U, 96U, 113U, 99U, 117U,
    113U, 113U, 113U, 115U, 112U, 97U, 133U, 6U, 39U, 143U, 7U, 3U, 37U, 131U,
    143U, 165U, 2U, 34U, 2U, 6U, 3U, 3U, 42U, 2U, 6U, 34U };

  static const uint8_T uv56[320]{ 108U, 228U, 236U, 172U, 238U, 168U, 238U, 238U,
    252U, 237U, 176U, 112U, 148U, 112U, 160U, 180U, 48U, 176U, 164U, 48U, 188U,
    189U, 189U, 184U, 244U, 188U, 188U, 252U, 188U, 188U, 99U, 242U, 249U, 240U,
    80U, 250U, 240U, 112U, 248U, 241U, 173U, 237U, 173U, 237U, 237U, 237U, 237U,
    237U, 141U, 45U, 125U, 109U, 125U, 253U, 125U, 253U, 253U, 125U, 125U, 125U,
    81U, 209U, 85U, 209U, 208U, 81U, 81U, 209U, 84U, 81U, 155U, 200U, 191U, 218U,
    203U, 207U, 74U, 216U, 207U, 24U, 75U, 203U, 223U, 219U, 235U, 223U, 139U,
    219U, 211U, 207U, MAX_uint8_T, 186U, 127U, MAX_uint8_T, MAX_uint8_T, 127U,
    MAX_uint8_T, MAX_uint8_T, 191U, 253U, 189U, 177U, 181U, 53U, 181U, 165U,
    181U, 181U, 180U, 181U, 24U, 24U, 24U, 24U, 24U, 24U, 25U, 61U, 25U, 24U,
    218U, 158U, 222U, 158U, 10U, 158U, 158U, 74U, 74U, 158U, 125U, 221U, 125U,
    221U, 248U, 253U, 159U, 253U, 253U, 157U, 94U, 93U, 72U, 79U, 94U, 78U, 78U,
    95U, 78U, 90U, 62U, 59U, 107U, 56U, 191U, 59U, 59U, 191U, 155U, 59U, 153U,
    201U, 201U, 137U, 137U, 201U, 137U, 141U, 201U, 201U, 150U, 209U, 146U, 24U,
    130U, 26U, 147U, 213U, 210U, 0U, 253U, 127U, MAX_uint8_T, 215U, 238U, 251U,
    MAX_uint8_T, 253U, 237U, 127U, 24U, 83U, 24U, 16U, 16U, 16U, 16U, 19U, 16U,
    24U, 155U, 11U, 58U, 2U, 158U, 58U, 58U, 190U, 62U, 154U, 98U, 103U, 110U,
    102U, 103U, 111U, 103U, 103U, 111U, 103U, 251U, 250U, 123U, 250U, 250U, 250U,
    250U, 250U, 251U, 251U, 144U, 208U, 145U, 146U, 208U, 147U, 208U, 208U, 146U,
    144U, 207U, 223U, 207U, 79U, 31U, 223U, 219U, 91U, 219U, 207U, 223U, 217U,
    219U, 221U, 91U, 219U, 219U, 219U, 219U, 217U, 85U, 85U, 85U, 21U, 85U, 85U,
    81U, 85U, 85U, 113U, 127U, 62U, 127U, 127U, 127U, 127U, 127U, MAX_uint8_T,
    127U, 125U, 210U, 208U, 210U, 210U, 195U, 210U, 210U, 211U, 211U, 210U, 79U,
    121U, 72U, 89U, 76U, 72U, 73U, 125U, 76U, 137U, 214U, 86U, 212U, 70U, 222U,
    198U, 70U, 222U, 222U, 94U, 115U, 163U, 99U, 227U, 198U, 226U, 243U, 119U,
    66U, 99U };

  static const uint8_T uv57[320]{ 69U, 72U, 72U, 73U, 72U, 68U, 205U, 200U, 75U,
    197U, 178U, 48U, 48U, 185U, 177U, 176U, 180U, 176U, 178U, 176U, 157U, 189U,
    189U, 189U, 185U, 189U, 189U, 188U, 253U, 189U, 241U, 117U, 241U, 241U, 97U,
    241U, 113U, 241U, 113U, 243U, 168U, 40U, 168U, 168U, 176U, 168U, 168U, 168U,
    169U, 236U, 44U, 110U, 108U, 205U, 237U, 237U, 109U, 236U, 125U, 45U, 121U,
    113U, 57U, 93U, 113U, 57U, 113U, 121U, 121U, 249U, 159U, 19U, 19U, 191U,
    159U, 159U, 159U, 151U, 159U, 154U, 170U, 171U, 171U, 171U, 43U, 174U, 123U,
    190U, 43U, 170U, 187U, 251U, 251U, 251U, 121U, 249U, 123U, 63U, MAX_uint8_T,
    187U, 178U, 182U, 182U, 188U, 60U, 6U, 55U, 54U, 53U, 49U, 124U, 24U, 124U,
    124U, 60U, 116U, 92U, 49U, 61U, 88U, 223U, 159U, 158U, 190U, 159U, 156U,
    222U, 159U, 158U, 158U, 51U, 55U, 183U, 191U, 23U, 183U, 55U, 55U, 63U, 219U,
    200U, 64U, 64U, 200U, 72U, 72U, 200U, 72U, 206U, 73U, 91U, 59U, 122U, 58U,
    56U, 122U, 59U, 91U, 191U, 59U, 135U, 135U, 135U, 135U, 135U, 135U, 133U,
    167U, 135U, 135U, 87U, 21U, 23U, 87U, 31U, 31U, 22U, 23U, 23U, 91U, 124U,
    125U, 253U, 125U, 93U, 125U, 124U, 125U, 253U, 127U, 28U, 24U, 16U, 24U, 24U,
    16U, 24U, 16U, 20U, 25U, 147U, 145U, 147U, 211U, 147U, 147U, 179U, 50U, 151U,
    147U, 76U, 252U, 77U, 105U, 120U, 88U, 124U, 92U, 92U, 100U, 203U, 243U,
    243U, 251U, 249U, 251U, 251U, 243U, 251U, 219U, 64U, 0U, 64U, 241U, 17U, 81U,
    17U, 81U, 208U, 208U, 204U, 199U, 207U, 239U, 207U, 205U, 207U, 207U, 207U,
    205U, 251U, 251U, 251U, 219U, 221U, 151U, 219U, 211U, 219U, 152U, 119U, 113U,
    122U, 119U, 53U, 127U, 117U, 126U, 117U, 127U, 244U, 20U, 250U, 254U, 244U,
    238U, 244U, 229U, 247U, 252U, 136U, 192U, 138U, 202U, 192U, 136U, 202U, 128U,
    202U, 200U, 224U, 224U, 64U, 208U, 128U, 64U, 192U, 192U, 196U, 209U, 131U,
    71U, 135U, 131U, 135U, 135U, 199U, 135U, 143U, 131U, 49U, 115U, 115U, 123U,
    243U, 115U, 115U, 123U, 119U, 161U };

  static const uint8_T uv58[320]{ 88U, 94U, 90U, 122U, 78U, 122U, 74U, 94U, 126U,
    90U, 176U, 160U, 48U, 176U, 176U, 165U, 184U, 178U, 183U, 187U, 156U, 148U,
    180U, 188U, 184U, 180U, 188U, 156U, 148U, 152U, 176U, 176U, 180U, 112U, 248U,
    16U, 186U, 176U, 180U, 162U, 169U, 137U, 41U, 169U, 169U, 137U, 169U, 171U,
    169U, 187U, 253U, 253U, 253U, 253U, 237U, 253U, 253U, 104U, 127U, 217U, 80U,
    16U, 16U, 25U, 16U, 80U, 21U, 24U, 84U, 22U, 143U, 143U, 11U, 159U, 203U,
    143U, 143U, 143U, 175U, 239U, 171U, 171U, 171U, 171U, 171U, 171U, 171U, 171U,
    187U, 171U, 63U, 183U, 253U, MAX_uint8_T, 61U, 183U, 63U, 191U, MAX_uint8_T,
    189U, 172U, 128U, 134U, 188U, 173U, 172U, 164U, 142U, 172U, 172U, 25U, 25U,
    25U, 61U, 25U, 25U, 25U, 185U, 61U, 173U, 143U, 142U, 142U, 142U, 142U, 10U,
    174U, 142U, 206U, 175U, 191U, 190U, 159U, 191U, 223U, 188U, MAX_uint8_T,
    191U, 254U, 239U, 74U, 74U, 66U, 78U, 74U, 78U, 66U, 74U, 74U, 74U, 154U,
    158U, 218U, 190U, 26U, 158U, 27U, 90U, 155U, 146U, 129U, 129U, 132U, 135U,
    133U, 137U, 133U, 167U, 149U, 167U, 151U, 215U, 181U, 151U, 155U, 151U, 115U,
    215U, 215U, 215U, 237U, 233U, 253U, 253U, 239U, 233U, 237U, 237U, 237U, 237U,
    16U, 17U, 17U, 17U, 16U, 17U, 16U, 17U, 49U, 81U, 30U, 30U, 30U, 158U, 18U,
    30U, 22U, 30U, 60U, 94U, 75U, 75U, 73U, 75U, 75U, 107U, 75U, 73U, 75U, 75U,
    218U, 218U, 243U, 250U, 218U, 251U, 250U, 131U, 219U, 202U, 145U, 208U, 144U,
    209U, 209U, 209U, 241U, 192U, 146U, 49U, 219U, 155U, 219U, 219U, 219U, 155U,
    219U, 219U, 187U, 250U, 215U, 211U, 243U, 223U, 213U, 87U, 211U, 247U, 215U,
    213U, 85U, 95U, 89U, 93U, 31U, 85U, 95U, 95U, 93U, 13U, 127U, 127U, 123U,
    MAX_uint8_T, 127U, 127U, 123U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 130U,
    130U, 2U, 194U, 146U, 195U, 146U, 128U, 194U, 162U, 68U, 68U, 4U, 68U, 68U,
    68U, 68U, 68U, 100U, 6U, 143U, 143U, 15U, 143U, 143U, 206U, 143U, 143U, 142U,
    143U, 91U, 6U, 83U, 87U, 83U, 78U, 91U, 83U, 87U, 91U };

  static const uint8_T uv59[320]{ 192U, 8U, 104U, 65U, 228U, 65U, 76U, 12U, 200U,
    233U, 188U, 188U, 172U, 168U, 176U, 184U, 172U, 180U, 60U, 188U, 157U, 189U,
    189U, 149U, 189U, 157U, 188U, 185U, 191U, 189U, 113U, 113U, 117U, 85U, 113U,
    115U, 83U, 113U, 117U, 123U, 169U, 177U, 141U, 233U, 137U, 172U, 205U, 241U,
    161U, 173U, 237U, 237U, 111U, 188U, 109U, 173U, 237U, 237U, 236U, 237U, 49U,
    113U, 65U, 96U, 69U, 97U, 181U, 113U, 113U, 85U, 143U, 151U, 15U, 135U, 155U,
    159U, 175U, 155U, 23U, 191U, 190U, 127U, 115U, 251U, 250U, 254U, 254U, 122U,
    249U, 251U, 187U, 63U, 183U, 179U, 179U, 187U, 179U, 251U, 187U, 123U, 32U,
    102U, 166U, 34U, 167U, 34U, 46U, 45U, 38U, 164U, 24U, 24U, 24U, 24U, 24U,
    92U, 24U, 24U, 24U, 24U, 150U, 190U, 147U, 190U, 214U, 246U, 246U, 150U,
    190U, 246U, 183U, 179U, 49U, 176U, 49U, 241U, 113U, 183U, 183U, 117U, 64U,
    64U, 64U, 68U, 72U, 64U, 72U, 72U, 64U, 72U, 59U, 120U, 59U, 191U, 59U, 58U,
    43U, 56U, 59U, 59U, 129U, 129U, 129U, 129U, 129U, 129U, 129U, 145U, 161U,
    129U, 95U, 26U, 214U, 102U, 86U, 102U, 86U, 30U, 118U, 82U, 106U, 106U, 104U,
    104U, 104U, 108U, 106U, 84U, 108U, 120U, 16U, 24U, 24U, 24U, 24U, 28U, 24U,
    24U, 24U, 24U, 51U, 50U, 58U, 19U, 51U, 179U, 50U, 19U, 49U, 59U, 124U, 252U,
    124U, 120U, 100U, 108U, 120U, 120U, 253U, 108U, 251U, 243U, 243U, 211U, 251U,
    219U, 251U, 249U, 179U, 251U, 115U, 51U, 19U, 97U, 0U, 49U, 51U, 18U, 32U,
    51U, 205U, 207U, 207U, 13U, 205U, 205U, 111U, 207U, 207U, 239U, 150U, 223U,
    MAX_uint8_T, 186U, 155U, 159U, 159U, 223U, 251U, 219U, 87U, 20U, 85U, 85U,
    85U, 117U, 85U, 53U, 116U, 85U, 126U, 99U, 117U, 98U, 116U, 112U, 117U, 100U,
    0U, 124U, 192U, 194U, 192U, 202U, 192U, 200U, 194U, 202U, 192U, 210U, 64U,
    64U, 72U, 64U, 96U, 72U, 88U, 64U, 64U, 88U, 135U, 199U, 198U, 195U, 198U,
    195U, 197U, 199U, 199U, 194U, 170U, 170U, 42U, 12U, 34U, 43U, 170U, 179U,
    43U, 42U };

  static const uint8_T uv6[320]{ 11U, 43U, 58U, 11U, 46U, 11U, 42U, 47U, 43U,
    43U, 50U, 170U, 48U, 154U, 176U, 187U, 184U, 181U, 191U, 189U, 122U, 98U,
    114U, 114U, 224U, 248U, 96U, 224U, 226U, 106U, 249U, 89U, 225U, 217U, 218U,
    81U, 88U, 75U, 155U, 201U, 109U, 117U, 101U, 119U, 253U, 249U, 125U, 253U,
    247U, 245U, 221U, 157U, 223U, 245U, 245U, 253U, 221U, 189U, 177U, 215U, 249U,
    232U, 248U, 185U, 248U, 185U, 208U, 234U, 186U, 251U, 83U, 87U, 83U, 87U,
    202U, 87U, 71U, 223U, 199U, 119U, 175U, 95U, 109U, 31U, 95U, 59U, 203U, 95U,
    95U, 95U, 93U, 73U, 109U, 77U, 125U, 125U, 125U, 121U, 77U, 77U, 244U, 124U,
    246U, 92U, 125U, 124U, 188U, 125U, 124U, 124U, 183U, 86U, 191U, 183U, 63U,
    189U, 63U, 94U, 231U, 167U, 189U, 168U, 11U, 172U, 8U, 188U, 42U, 138U, 40U,
    57U, 159U, 136U, 29U, 158U, 220U, 157U, 156U, 248U, 236U, 157U, 246U, 182U,
    150U, 182U, 126U, 214U, 118U, 222U, 246U, 182U, 236U, 164U, 188U, 228U, 172U,
    180U, 180U, 164U, 164U, 164U, 238U, 222U, 238U, 239U, 223U, 135U, 205U, 217U,
    MAX_uint8_T, 254U, 185U, 42U, 157U, 59U, 155U, 59U, 187U, 138U, 43U, 187U,
    223U, 18U, 215U, 151U, 151U, 247U, 215U, 146U, 151U, 151U, 149U, 29U, 149U,
    149U, 149U, 21U, 21U, 29U, 149U, 157U, 135U, 151U, 140U, 151U, 150U, 151U,
    158U, 151U, 150U, 151U, 63U, 186U, 186U, 184U, 50U, 120U, 43U, 58U, 58U,
    186U, 242U, 100U, 245U, 54U, 122U, 242U, 242U, 126U, 46U, 116U, 209U, 215U,
    192U, 247U, 211U, 209U, 209U, 215U, 247U, 223U, 215U, 14U, 215U, 79U, 31U,
    79U, 31U, 47U, 62U, 127U, 217U, 28U, 249U, 95U, 93U, 93U, 93U, 92U, 92U, 93U,
    186U, 18U, 146U, 186U, 155U, 52U, 144U, 149U, 158U, 162U, 235U, 226U, 195U,
    195U, 239U, 235U, 251U, 110U, 235U, 227U, 31U, 95U, 103U, 159U, 215U, 206U,
    215U, 223U, 223U, 119U, 140U, 140U, 140U, 140U, 79U, 132U, 12U, 206U, 206U,
    142U, 111U, 219U, 126U, 189U, 223U, 143U, 222U, 218U, MAX_uint8_T, 254U,
    MAX_uint8_T, 141U, 215U, 223U, 215U, MAX_uint8_T, 223U, 212U, 221U,
    MAX_uint8_T };

  static const uint8_T uv60[320]{ 252U, 254U, 252U, 252U, 252U, 253U, 252U, 252U,
    254U, 252U, 52U, 245U, 236U, 164U, 112U, 116U, 180U, 36U, 164U, 188U, 188U,
    188U, 156U, 189U, 189U, 189U, 254U, 252U, 244U, 188U, 242U, 118U, 122U, 114U,
    116U, 114U, 240U, 226U, 82U, 114U, 169U, 169U, 137U, 141U, 41U, 201U, 133U,
    137U, 137U, 137U, 109U, 125U, 237U, 109U, 76U, 125U, 110U, 127U, 125U, 237U,
    85U, 87U, 86U, 85U, 85U, 83U, 85U, 80U, 84U, 85U, 154U, 252U, 238U, 138U,
    152U, 216U, 207U, 200U, 202U, 223U, 187U, 179U, 179U, 211U, 163U, 243U, 51U,
    179U, 243U, 179U, MAX_uint8_T, 254U, 31U, 183U, 190U, 243U, 183U, 182U, 183U,
    191U, 165U, 189U, 172U, 165U, 165U, 165U, 166U, 165U, 165U, 164U, 25U, 61U,
    25U, 24U, 24U, 24U, 25U, 25U, 25U, 25U, 223U, 74U, 63U, 214U, 95U, 94U, 95U,
    79U, 74U, 23U, MAX_uint8_T, 253U, 243U, 253U, 247U, 215U, 63U, 127U, 252U,
    247U, 75U, 79U, 65U, 73U, 73U, 73U, 74U, 75U, 79U, 74U, 27U, 27U, 25U, 59U,
    59U, 187U, 27U, 27U, 159U, 27U, 133U, 157U, 129U, 137U, 129U, 145U, 249U,
    153U, 137U, 129U, 215U, 215U, 251U, 214U, 213U, 213U, 215U, 213U, 214U, 211U,
    253U, 253U, 236U, 105U, 237U, 124U, 237U, 237U, 236U, 237U, 18U, 114U, 66U,
    18U, 66U, 122U, 48U, 50U, 18U, 16U, 58U, 254U, 110U, 58U, 104U, 43U, 56U,
    60U, 62U, 58U, 103U, 99U, 111U, 103U, 103U, 103U, MAX_uint8_T, 103U, 103U,
    79U, 250U, 250U, 218U, 251U, 250U, 250U, 217U, 219U, 250U, 250U, 34U, 179U,
    55U, 51U, 0U, 50U, 130U, 144U, 178U, 51U, 219U, 251U, 251U, 219U, 211U, 219U,
    219U, 219U, 155U, 219U, 219U, 223U, 215U, 219U, 251U, 219U, 223U, 211U, 219U,
    195U, 117U, 69U, 85U, 85U, 85U, 69U, 85U, 69U, 85U, 117U, 127U, 191U, 59U,
    127U, 63U, 126U, 87U, 127U, 127U, 125U, 194U, 195U, 242U, 210U, 98U, 202U,
    227U, 226U, 227U, 224U, 113U, 119U, 81U, 121U, 113U, 115U, 120U, 119U, 117U,
    64U, 198U, 206U, 206U, 198U, 70U, 66U, 230U, 78U, 206U, 134U, 115U, 87U, 10U,
    98U, 115U, 50U, 66U, 66U, 70U, 114U };

  static const uint8_T uv61[320]{ 11U, 107U, 11U, 107U, 27U, 42U, 75U, 11U, 139U,
    11U, 50U, 50U, 58U, 18U, 18U, 48U, 18U, 251U, 186U, 50U, 122U, 121U, 123U,
    122U, 110U, 114U, 120U, 122U, MAX_uint8_T, 122U, 249U, 232U, 217U, 232U,
    249U, 216U, 224U, 250U, 249U, 233U, 109U, 109U, 108U, 109U, 47U, 111U, 101U,
    109U, 237U, 109U, 253U, 221U, 221U, 221U, 213U, 213U, 92U, 221U, 253U, 221U,
    249U, 249U, 185U, 249U, 121U, 185U, 249U, 249U, 249U, 249U, 83U, 88U, 83U,
    80U, 83U, 82U, 16U, 215U, 87U, 83U, 175U, 139U, 175U, 173U, 239U, 143U, 169U,
    143U, 175U, 173U, 93U, 125U, 93U, 76U, 93U, 93U, 76U, 93U, 95U, 77U, 244U,
    180U, 84U, 244U, 214U, 244U, 180U, 252U, 246U, 246U, 183U, 239U, 245U, 175U,
    167U, 47U, 231U, 175U, 247U, 167U, 157U, 156U, 188U, 156U, 41U, 172U, 157U,
    188U, 189U, 157U, 159U, 159U, 158U, 159U, 159U, 158U, 31U, 223U, 191U, 159U,
    246U, 246U, 246U, 182U, 182U, 118U, 246U, 246U, 246U, 246U, 238U, 46U, 236U,
    228U, 236U, 172U, 166U, 100U, 111U, 236U, 239U, 238U, 198U, 238U, 238U, 238U,
    238U, 238U, 239U, 238U, 153U, 153U, 57U, 153U, 185U, 185U, 145U, 187U, 187U,
    153U, 223U, 223U, MAX_uint8_T, 223U, MAX_uint8_T, 151U, 159U, 223U,
    MAX_uint8_T, MAX_uint8_T, 149U, 149U, 29U, 133U, 133U, 145U, 141U, 213U,
    149U, 149U, 151U, 135U, 135U, 133U, 143U, 134U, 133U, 199U, 183U, 135U, 63U,
    35U, 28U, 35U, 155U, 63U, 32U, 43U, 127U, 187U, 242U, 242U, 230U, 112U, 55U,
    178U, 52U, 114U, 243U, 241U, 209U, 209U, 209U, 208U, 209U, 209U, 192U, 241U,
    241U, 192U, 215U, 215U, 70U, 215U, 211U, 87U, 214U, MAX_uint8_T, 223U, 215U,
    217U, 217U, 89U, 217U, 249U, 89U, 217U, 217U, 219U, 249U, 186U, 171U, 58U,
    170U, 186U, 154U, 170U, 186U, 250U, 186U, 235U, 254U, 234U, 187U, 203U, 235U,
    171U, 235U, 235U, 195U, 159U, 95U, 30U, 31U, 63U, 87U, 31U, 31U, 159U, 15U,
    140U, 140U, 132U, 140U, 132U, 12U, 140U, 140U, 204U, 140U, 111U, 71U, 13U,
    111U, 108U, 47U, 77U, 237U, 231U, 111U, 247U, 247U, 253U, 247U, 127U, 223U,
    245U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T };

  static const uint8_T uv62[320]{ 41U, 43U, 11U, 35U, 43U, 33U, 9U, 171U, 43U,
    35U, 185U, 191U, 184U, 162U, 235U, 168U, 170U, 174U, 170U, 32U, 115U, 99U,
    118U, 98U, 96U, 250U, 50U, 230U, 98U, 99U, 73U, 73U, 25U, 89U, 89U, 217U,
    89U, 85U, 25U, 89U, 117U, 244U, 101U, 116U, 117U, 116U, 117U, 117U, 85U,
    109U, 221U, 157U, 189U, 187U, 157U, 173U, 189U, 191U, 157U, 157U, 225U, 234U,
    184U, 232U, 234U, 160U, 240U, 232U, 232U, 232U, 87U, 119U, 71U, 87U, 246U,
    71U, 87U, 55U, 71U, 67U, 95U, 95U, MAX_uint8_T, 95U, 127U, 94U, 127U, 121U,
    95U, 95U, 73U, 73U, 91U, 97U, 73U, 9U, 77U, 107U, 65U, 81U, 124U, 120U, 112U,
    118U, 124U, 120U, 124U, 118U, 124U, 112U, 72U, 230U, 84U, 246U, 76U, 18U,
    20U, 92U, 15U, 86U, 56U, 168U, 168U, 169U, 170U, 176U, 174U, 170U, 40U, 168U,
    152U, 136U, 152U, 8U, 136U, 136U, 136U, 40U, 136U, 136U, 180U, 182U, 182U,
    150U, 150U, 116U, 182U, 150U, 182U, 244U, 180U, 164U, 173U, 172U, 180U, 40U,
    180U, 189U, 164U, 172U, 216U, 254U, 175U, 127U, 142U, 217U, 169U, 143U, 216U,
    200U, 42U, 42U, 43U, 170U, 42U, 43U, 42U, 46U, 170U, 40U, 18U, 22U, 242U,
    22U, 214U, 2U, 134U, 246U, 146U, 18U, 24U, 29U, 29U, 157U, 77U, 17U, 28U,
    12U, 13U, 29U, 147U, 215U, 183U, 183U, 199U, 146U, 150U, 181U, 150U, 135U,
    186U, 184U, 252U, 188U, 186U, 186U, 184U, 252U, 186U, 190U, 116U, 100U, 54U,
    101U, 100U, 66U, 34U, 229U, 116U, 118U, 223U, 223U, 245U, 215U, MAX_uint8_T,
    211U, 215U, 207U, 223U, 209U, 47U, 46U, 14U, 14U, 38U, 13U, 14U, 14U, 22U,
    6U, 28U, 28U, 122U, 30U, 92U, 28U, 221U, 126U, 92U, 24U, 16U, 34U, 82U, 178U,
    16U, 18U, 18U, 80U, 146U, 146U, 106U, 226U, 194U, 192U, 234U, 106U, 67U,
    194U, 107U, 106U, 91U, 95U, 207U, 223U, 95U, 213U, 218U, 207U, 95U, 95U,
    140U, 142U, 12U, 140U, 140U, 8U, 140U, 140U, 140U, 140U, 210U, 219U, 219U,
    216U, 90U, 243U, 203U, 218U, 122U, 91U, 173U, 157U, 157U, 221U, 141U, 143U,
    205U, 141U, 204U, 140U };

  static const uint8_T uv63[320]{ 58U, 27U, 59U, 58U, 58U, 41U, 107U, 58U, 59U,
    62U, 48U, 16U, 34U, 34U, 16U, 48U, 50U, 36U, 50U, 48U, 114U, 112U, 98U, 102U,
    114U, 113U, 114U, 112U, 106U, 240U, 233U, 225U, 161U, 81U, 225U, 65U, 64U,
    97U, 97U, 225U, 109U, 103U, 119U, 21U, 117U, 101U, 103U, 215U, 101U, 245U,
    93U, 92U, 155U, 219U, MAX_uint8_T, 223U, 95U, 187U, 223U, 127U, 248U, 248U,
    248U, 113U, 248U, 233U, 249U, 248U, 113U, 248U, 80U, 19U, 67U, 19U, 87U, 83U,
    80U, 67U, 83U, 83U, 45U, 41U, 125U, 117U, 61U, 109U, 105U, 127U, 117U, 123U,
    108U, 77U, 101U, 69U, 109U, 105U, 236U, 161U, 109U, 237U, 246U, 54U, 246U,
    246U, 246U, 246U, 116U, MAX_uint8_T, 246U, 254U, 171U, 167U, 191U, 149U, 63U,
    26U, 173U, 26U, 191U, 27U, 143U, 143U, 11U, 171U, 15U, 155U, 10U, 11U, 11U,
    11U, 31U, 31U, 136U, 12U, 31U, 29U, 157U, 25U, 157U, 31U, 54U, 150U, 22U,
    150U, 22U, 148U, 214U, 20U, 150U, 86U, 228U, 164U, 156U, 252U, 244U, 188U,
    188U, 188U, 188U, 188U, 238U, 238U, 238U, 104U, 238U, 106U, 190U, 251U, 236U,
    MAX_uint8_T, 157U, 145U, 173U, 172U, 159U, 156U, 157U, 157U, 156U, 157U,
    223U, 151U, 247U, 236U, 223U, 86U, 215U, 215U, 247U, 151U, 133U, 141U, 149U,
    156U, 129U, 24U, 21U, 185U, 148U, 145U, 140U, 140U, 140U, 158U, 156U, 131U,
    133U, 156U, 143U, 158U, 179U, 184U, 190U, 252U, 187U, 186U, 178U, 186U, 190U,
    186U, 241U, 117U, 197U, 117U, 113U, 117U, 180U, 69U, 245U, 241U, 192U, 192U,
    196U, 133U, 199U, 192U, 192U, 222U, 128U, 194U, 215U, 215U, 22U, 199U, 215U,
    23U, 87U, 95U, 87U, 223U, 249U, 217U, 125U, 251U, MAX_uint8_T, 249U, 89U,
    223U, 249U, 221U, 138U, 186U, 154U, 144U, 154U, 18U, 32U, 145U, 176U, 147U,
    147U, 195U, 195U, 67U, 211U, 64U, 171U, 103U, 195U, 231U, 103U, 103U, 111U,
    103U, 103U, 71U, 111U, 231U, 111U, 231U, 140U, 140U, 140U, 140U, 140U, 140U,
    134U, 140U, 140U, 204U, 127U, 125U, 122U, 94U, 238U, 82U, 110U, 90U, 126U,
    254U, 215U, 87U, 223U, 94U, 223U, 244U, 247U, 134U, MAX_uint8_T, 215U };

  static const uint8_T uv64[320]{ 11U, 11U, 10U, 15U, 10U, 11U, 11U, 11U, 11U,
    139U, 154U, 158U, 184U, 122U, 150U, 155U, 154U, 158U, 158U, 146U, 122U, 102U,
    50U, 234U, 106U, 123U, 98U, 98U, 242U, 244U, 217U, 217U, 217U, 217U, 153U,
    219U, 153U, 220U, 219U, 217U, 119U, 119U, 245U, 247U, 246U, 118U, 119U, 119U,
    247U, MAX_uint8_T, 244U, 247U, 245U, 247U, 243U, 213U, 177U, 244U, 244U,
    253U, 185U, 185U, 185U, 187U, 185U, 187U, 184U, 185U, 185U, 185U, 87U, 119U,
    87U, 214U, 91U, 247U, 71U, 119U, 247U, 159U, 191U, 95U, 31U, 31U, 31U, 31U,
    31U, 157U, 63U, 31U, 77U, 77U, 77U, 79U, 77U, 77U, 77U, 79U, 79U, 95U, 86U,
    94U, 92U, 84U, 93U, 92U, 92U, 94U, 94U, 84U, 183U, 183U, 55U, 183U, 183U,
    231U, 247U, 183U, 183U, 183U, 172U, 168U, 172U, 140U, 141U, 188U, 172U, 44U,
    172U, 172U, 158U, 44U, 158U, 222U, 142U, 158U, 140U, 190U, 254U, 158U, 182U,
    182U, 118U, 247U, 190U, 182U, 182U, 182U, 182U, 254U, 236U, 228U, 228U, 236U,
    64U, 100U, 196U, 228U, 228U, 236U, 230U, 127U, 239U, MAX_uint8_T,
    MAX_uint8_T, 238U, 239U, 238U, 247U, 207U, 59U, 59U, 59U, 59U, 27U, 59U, 59U,
    187U, 59U, 27U, 183U, 151U, 151U, 151U, 151U, 151U, 151U, 151U, 183U, 183U,
    149U, 157U, 145U, 149U, 149U, 213U, 149U, 133U, 149U, 149U, 151U, 183U, 150U,
    183U, 182U, 215U, 150U, 183U, 183U, 183U, 152U, 184U, 184U, 188U, 152U, 186U,
    184U, 191U, 152U, 124U, 54U, 53U, 50U, 62U, 37U, 50U, 38U, 54U, 55U, 119U,
    213U, 223U, 247U, 242U, 215U, 245U, 215U, MAX_uint8_T, 247U, 247U, 79U, 78U,
    79U, 95U, 78U, 111U, 14U, 87U, 111U, 79U, 125U, 127U, 93U, 95U, 87U, 93U,
    87U, 127U, 127U, 95U, 186U, 186U, 154U, 191U, 186U, 186U, 154U, 154U, 190U,
    250U, 195U, 195U, 235U, 227U, 199U, 234U, 195U, 195U, 195U, 227U, 158U, 159U,
    150U, 159U, 183U, 31U, 159U, 31U, 158U, 158U, 132U, 140U, 12U, 221U, 204U,
    140U, 12U, 140U, 196U, 204U, 173U, 253U, 189U, 61U, 189U, 181U, 189U, 189U,
    173U, 157U, MAX_uint8_T, 253U, 223U, 247U, 215U, MAX_uint8_T, 223U, 223U,
    223U, 223U };

  static const uint8_T uv65[320]{ 46U, 42U, 46U, 175U, 46U, 46U, 46U, 47U, 47U,
    62U, 181U, 177U, 48U, 180U, 180U, 178U, 120U, 247U, 50U, 180U, 48U, 96U,
    240U, 224U, 185U, 224U, 226U, 248U, 224U, 104U, 218U, 202U, 218U, 218U, 251U,
    154U, 202U, 202U, 192U, 227U, 253U, 221U, 205U, 237U, 253U, MAX_uint8_T,
    237U, 253U, 239U, 253U, 253U, 245U, 253U, 245U, 253U, 241U, 245U, 245U, 117U,
    123U, 184U, 250U, 240U, 252U, 187U, 184U, 250U, 223U, 248U, 218U, 203U, 75U,
    202U, 223U, 218U, 203U, 200U, 216U, 216U, 200U, 31U, 95U, 91U, 95U, 31U, 31U,
    207U, 11U, 91U, 95U, 125U, 77U, 119U, 127U, 125U, 125U, 205U, 125U,
    MAX_uint8_T, 117U, 61U, 125U, 117U, 117U, 125U, 93U, 253U, 189U, 117U, 189U,
    59U, 11U, 27U, 191U, 63U, 191U, 143U, 47U, 191U, 159U, 140U, 8U, 8U, 8U,
    156U, 8U, 8U, 12U, 8U, 75U, 220U, 220U, 220U, 252U, 221U, 204U, 220U, 221U,
    220U, 76U, 126U, 126U, 127U, 254U, 126U, 126U, 127U, MAX_uint8_T, 223U, 94U,
    132U, 164U, 172U, 173U, 40U, 140U, 172U, 164U, 172U, 172U, 223U, 221U, 217U,
    MAX_uint8_T, 223U, 223U, MAX_uint8_T, 223U, MAX_uint8_T, 223U, 27U, 155U,
    153U, 155U, 27U, 11U, 249U, 219U, 153U, 153U, 151U, 147U, 147U, 151U, 151U,
    147U, 151U, 151U, 151U, 151U, 17U, 145U, 17U, 149U, 17U, 149U, 215U, 215U,
    149U, 55U, 150U, 150U, 134U, 182U, 147U, 150U, 134U, 151U, 151U, 190U, 58U,
    58U, 118U, 118U, 50U, 58U, 51U, 35U, 118U, 50U, 122U, 122U, 250U, 126U, 122U,
    110U, 190U, 250U, 238U, 125U, 215U, 215U, 210U, 243U, 211U, 211U, 240U, 243U,
    210U, 150U, 31U, 31U, 31U, 31U, 79U, 30U, 31U, 127U, 30U, 95U, 93U, 93U, 93U,
    95U, 93U, 85U, 93U, 93U, 93U, 95U, 159U, 154U, 147U, 223U, 187U, 155U, 143U,
    175U, 155U, 137U, MAX_uint8_T, 239U, 111U, 239U, 239U, 239U, 239U,
    MAX_uint8_T, 239U, 247U, 215U, 215U, 215U, 215U, 215U, 215U, 215U, 223U,
    223U, 247U, 14U, 14U, 77U, 221U, 79U, 77U, 127U, 223U, 239U, 143U, 223U,
    254U, 94U, 253U, 213U, MAX_uint8_T, 126U, 223U, 95U, 94U, 215U, 214U, 214U,
    215U, 243U, 215U, 215U, 247U, 215U, 215U };

  static const uint8_T uv66[320]{ 11U, 11U, 75U, 75U, 11U, 35U, 15U, 43U, 11U,
    11U, 184U, 62U, 187U, 178U, 251U, 186U, 179U, 190U, 186U, 191U, 178U, 251U,
    121U, 253U, 114U, 185U, 120U, 249U, 250U, 240U, 81U, 64U, 219U, 81U, 85U,
    249U, 97U, 81U, 81U, 91U, 245U, 115U, 249U, 225U, 107U, 252U, 243U, 253U,
    243U, 249U, 253U, 253U, 221U, 253U, 221U, 237U, 223U, 253U, 253U, 221U, 176U,
    187U, 185U, 185U, 189U, 185U, 251U, 249U, 185U, 189U, 87U, 86U, 159U, 23U,
    119U, 87U, 89U, 223U, 87U, 191U, 251U, 43U, 175U, 123U, 235U, 27U, 107U, 91U,
    187U, 63U, 89U, 205U, 125U, 125U, 124U, 121U, 237U, MAX_uint8_T, 93U, 125U,
    124U, 124U, 28U, 62U, 116U, 124U, 125U, 60U, 116U, 124U, 28U, 173U, 237U,
    189U, 173U, 125U, 173U, 189U, 189U, 189U, 174U, 60U, 188U, 156U, 172U, 188U,
    157U, 190U, 172U, 172U, 156U, 159U, 159U, 60U, 156U, 157U, 157U, 189U, 159U,
    190U, 70U, 199U, 214U, 214U, 214U, 214U, 222U, 222U, 198U, 206U, 188U, 180U,
    164U, 190U, 180U, 40U, 180U, 60U, 188U, 180U, 135U, 166U, 135U, 135U, 166U,
    143U, 183U, 143U, 167U, 135U, 59U, 127U, 27U, 31U, 59U, 59U, 29U, 27U, 59U,
    27U, 214U, 215U, MAX_uint8_T, 247U, 247U, 87U, 215U, 215U, 247U, 247U, 16U,
    20U, 21U, 21U, 69U, 21U, 28U, 21U, 21U, 20U, 151U, 135U, 151U, 151U, 199U,
    147U, 151U, 151U, 151U, 215U, 120U, 186U, 8U, 120U, 120U, 122U, 56U, 122U,
    88U, 120U, 178U, 176U, 250U, 247U, 166U, 242U, 188U, 250U, 178U, 251U, 211U,
    226U, 245U, 209U, 241U, 211U, 212U, 243U, 209U, 247U, 15U, 87U, 111U, 79U,
    102U, 79U, 79U, 79U, 79U, 111U, 93U, 93U, 93U, 95U, 89U, 29U, 221U, 95U, 93U,
    95U, 18U, 48U, 62U, 116U, 52U, 62U, 37U, 53U, 58U, 20U, 107U, 171U, 251U,
    231U, 171U, 234U, 231U, MAX_uint8_T, 235U, 235U, 202U, 207U, 158U, 206U, 78U,
    220U, 207U, 207U, 198U, 222U, 68U, 213U, 132U, 196U, 132U, 8U, 134U, 204U,
    132U, 132U, 203U, 15U, 143U, 207U, 143U, 135U, 207U, 207U, 143U, 143U, 223U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 251U, 247U, MAX_uint8_T,
    MAX_uint8_T, 223U };

  static const uint8_T uv67[320]{ 43U, 42U, 107U, 106U, 42U, 58U, 42U, 34U, 234U,
    58U, 253U, 185U, 56U, 170U, 188U, 177U, 184U, 168U, 176U, 184U, 96U, 112U,
    112U, 224U, 96U, 104U, 48U, 232U, 228U, 98U, 216U, 216U, 72U, 24U, 69U, 72U,
    88U, 24U, 88U, 216U, 253U, 253U, 109U, 109U, 93U, 95U, 253U, 93U, 109U, 253U,
    221U, 221U, 221U, 249U, MAX_uint8_T, 213U, 253U, 249U, 253U, 245U, 212U,
    152U, 208U, 216U, 208U, 144U, 240U, 209U, 208U, 216U, MAX_uint8_T, 247U, 80U,
    71U, 103U, 79U, 71U, 71U, 71U, 71U, 207U, 139U, 203U, 203U, 83U, 139U, 223U,
    91U, 203U, 139U, 125U, 125U, 108U, 117U, 237U, 109U, 93U, 117U, 127U, 93U,
    188U, 188U, 180U, 180U, 252U, 188U, 124U, 252U, 180U, 188U, 15U, 47U, 45U,
    191U, 29U, 175U, 25U, 155U, 63U, 63U, 42U, 172U, 42U, 42U, 42U, 42U, 42U,
    42U, 10U, 42U, 156U, 156U, 156U, 140U, 60U, 156U, 156U, 140U, 156U, 156U,
    118U, 118U, 214U, 246U, 22U, 118U, 118U, 86U, 118U, 118U, 164U, 164U, 180U,
    158U, 180U, 52U, 180U, 24U, 191U, 180U, 201U, 207U, 140U, 203U, 201U, 204U,
    201U, 201U, 205U, 237U, 138U, 187U, 184U, 171U, 190U, 187U, 187U, 170U, 147U,
    187U, 215U, 215U, 215U, 231U, 211U, 215U, 147U, 195U, 247U, 215U, 21U, 17U,
    85U, 21U, 1U, 145U, 17U, 21U, 17U, 149U, 222U, 214U, 143U, 158U, 156U, 158U,
    22U, 158U, 158U, 158U, 43U, 43U, 43U, 107U, 250U, 43U, 42U, 122U, 111U, 43U,
    122U, 242U, 242U, 230U, 241U, 242U, 114U, 246U, 246U, 178U, 247U, 245U, 209U,
    209U, 159U, 213U, 243U, 211U, 209U, 209U, 63U, 63U, 23U, 30U, 31U, 123U, 31U,
    95U, 27U, 27U, 93U, 93U, 89U, 89U, 95U, 93U, 93U, 93U, 89U, 93U, 149U, 30U,
    1U, 144U, 144U, 137U, 16U, 144U, 80U, 152U, MAX_uint8_T, 251U, 187U, 251U,
    115U, 251U, 107U, 123U, 251U, 251U, 87U, 87U, 95U, 215U, 71U, 87U, 211U,
    215U, 215U, 215U, 12U, 12U, 140U, 140U, 12U, 14U, 12U, 12U, 12U, 12U, 222U,
    223U, 94U, 222U, 222U, 254U, 222U, 222U, 222U, 254U, 223U, 223U, 223U, 222U,
    222U, 223U, 206U, 222U, 223U, 223U };

  static const uint8_T uv68[320]{ 41U, 47U, 41U, 39U, 47U, 47U, 43U, 47U, 45U,
    47U, 180U, 162U, 165U, 165U, 178U, 181U, 183U, 181U, 177U, 188U, 49U, 224U,
    224U, 160U, 96U, 225U, 96U, 96U, 241U, 240U, 219U, 83U, 73U, 139U, 75U, 67U,
    203U, 74U, 75U, 83U, 221U, 237U, 213U, 245U, 253U, 245U, 253U, 221U, 245U,
    253U, 253U, 61U, 251U, 189U, 63U, 253U, 157U, 253U, 189U, 189U, 193U, 232U,
    226U, 170U, 234U, 235U, 220U, 210U, 226U, 244U, 223U, 203U, 207U, 207U, 217U,
    223U, MAX_uint8_T, 207U, 223U, 223U, 95U, 91U, 87U, 95U, 95U, 91U, 95U, 95U,
    75U, 91U, 121U, 251U, 101U, 121U, 121U, 233U, 121U, 117U, 105U, 123U, 125U,
    125U, 124U, 121U, 61U, 125U, 61U, 189U, 125U, 124U, 24U, 222U, 26U, 94U, 94U,
    78U, 127U, 15U, 72U, 92U, 146U, 8U, 139U, 136U, 218U, 8U, 138U, 10U, 10U,
    170U, 217U, 232U, 40U, 200U, 72U, 252U, 92U, 252U, 216U, 248U, 124U, 222U,
    222U, 254U, 222U, 222U, 222U, 126U, 220U, 222U, 164U, 172U, 164U, 164U, 172U,
    164U, 164U, 164U, 180U, 188U, 217U, 217U, 89U, 217U, 221U, 93U, 221U, 217U,
    153U, 157U, 10U, 202U, 138U, 10U, 136U, 138U, 138U, 138U, 10U, 74U, 18U,
    178U, 130U, 18U, 22U, 146U, 151U, 147U, 18U, 242U, 24U, 29U, 28U, 29U, 61U,
    28U, 61U, 29U, 24U, 28U, 147U, 151U, 158U, 151U, 151U, 147U, 223U, 159U,
    151U, 183U, 58U, 118U, 186U, 58U, 50U, 58U, 58U, 42U, 58U, 122U, 122U, 238U,
    109U, 94U, 125U, 252U, 127U, 126U, 248U, 254U, 151U, 210U, 151U, 215U, 215U,
    210U, 151U, 247U, 243U, 243U, 15U, 30U, 46U, 46U, 14U, 47U, 47U, 63U, 47U,
    47U, 221U, 94U, 95U, 28U, 92U, 28U, 93U, 93U, 28U, 94U, 17U, 213U, 149U,
    159U, 161U, 133U, 149U, 133U, 5U, 21U, 126U, 239U, 101U, 110U, 252U, 238U,
    254U, 127U, 110U, 110U, 218U, 223U, 247U, 223U, 223U, 223U, 95U, 223U, 219U,
    219U, 8U, 205U, 204U, 78U, 143U, 206U, 142U, 78U, 142U, 220U, 208U, 218U,
    222U, 219U, 218U, 210U, 218U, 218U, 218U, 218U, 166U, 196U, 204U, 148U, 213U,
    245U, 221U, 214U, 164U, 157U };

  static const uint8_T uv69[320]{ 43U, 42U, 34U, 42U, 171U, 35U, 35U, 39U, 43U,
    11U, 191U, 191U, 170U, 191U, 190U, 191U, 191U, 183U, 158U, 190U, 242U, 100U,
    226U, 98U, 226U, 98U, 114U, 106U, 226U, 226U, 202U, 136U, 153U, 154U, 154U,
    139U, 24U, 139U, 155U, 17U, 246U, MAX_uint8_T, 247U, MAX_uint8_T, 239U, 247U,
    247U, 246U, 247U, 247U, 177U, 147U, 177U, 209U, 177U, 177U, 185U, 177U, 179U,
    177U, 190U, 152U, 184U, 186U, 188U, 186U, 178U, 186U, 250U, 184U, 223U,
    MAX_uint8_T, 71U, 207U, 207U, 231U, 71U, 218U, 247U, 199U, 31U, 31U, 95U,
    95U, 223U, 95U, 127U, 31U, 95U, 123U, 73U, 253U, 69U, 77U, 95U, 77U, 77U,
    109U, 79U, 231U, 124U, 156U, 88U, 124U, 116U, 92U, 120U, 93U, 92U, 92U, 239U,
    239U, 183U, 175U, MAX_uint8_T, 231U, 239U, 231U, 247U, 183U, 44U, 12U, 40U,
    40U, 40U, 40U, 44U, 8U, 40U, 40U, 254U, 140U, 140U, 204U, 236U, 204U, 136U,
    204U, 236U, 172U, 254U, 246U, 118U, 246U, 246U, 182U, 246U, 254U, 182U, 214U,
    164U, 132U, 140U, 132U, 173U, 164U, 132U, 132U, 228U, 172U, MAX_uint8_T,
    175U, MAX_uint8_T, MAX_uint8_T, 239U, MAX_uint8_T, 191U, MAX_uint8_T,
    MAX_uint8_T, 63U, 251U, 155U, 43U, 171U, 235U, 43U, 43U, 11U, 171U, 107U,
    151U, 223U, 147U, 147U, 183U, 147U, 134U, 151U, 151U, 147U, 149U, 149U, 149U,
    149U, 149U, 149U, 21U, 149U, 149U, 149U, 151U, 246U, 150U, 150U, 183U, 151U,
    150U, 150U, 182U, 150U, 58U, 75U, 58U, 58U, 126U, 186U, 58U, 186U, 186U,
    250U, 174U, 79U, 166U, 46U, 238U, 36U, 6U, 44U, 44U, 164U, 243U, 223U, 243U,
    247U, 243U, MAX_uint8_T, 247U, 247U, MAX_uint8_T, 226U, 62U, 62U, 30U, 62U,
    30U, 46U, 62U, 30U, 62U, 30U, 93U, 86U, 28U, 93U, 94U, 28U, 20U, 29U, 95U,
    92U, 175U, 157U, 154U, 158U, 223U, 158U, 26U, 171U, 158U, 159U, 234U,
    MAX_uint8_T, 235U, 235U, 235U, 235U, 235U, 239U, 195U, 235U, 223U, 191U,
    213U, 215U, 223U, 223U, 223U, 223U, 223U, 207U, 206U, 140U, 76U, 14U, 220U,
    14U, 76U, 143U, 204U, 196U, 235U, 189U, MAX_uint8_T, MAX_uint8_T, 251U, 249U,
    235U, 249U, 248U, 251U, 221U, 95U, 222U, 223U, 221U, 221U, 223U, 213U, 221U,
    221U };

  static const uint8_T uv7[320]{ 42U, 2U, 2U, 10U, 34U, 2U, 26U, 42U, 62U, 2U,
    141U, 143U, 141U, 157U, 165U, 157U, 157U, 205U, 141U, 205U, 34U, 98U, 18U,
    50U, 48U, 50U, 114U, 98U, 246U, 2U, 154U, 154U, 155U, 154U, 155U, 155U, 252U,
    222U, MAX_uint8_T, 158U, 93U, 247U, 213U, 253U, 221U, 245U, 119U, 93U, 213U,
    220U, 213U, 145U, 245U, 213U, 245U, 197U, 214U, 213U, 246U, 131U, 250U, 190U,
    176U, 188U, 186U, 186U, 188U, 190U, 254U, 174U, 231U, 231U, 231U, 231U, 207U,
    231U, 103U, 230U, 231U, 231U, 159U, 159U, 30U, 159U, 31U, 30U, 157U, 223U,
    31U, 158U, 5U, 69U, 5U, 93U, 21U, 13U, 77U, 68U, 135U, 0U, 220U, 88U, 72U,
    92U, 89U, 88U, 222U, 220U, 250U, 216U, 3U, 167U, 19U, 19U, 3U, 3U, 163U, 3U,
    19U, 3U, 40U, 44U, 172U, 172U, 172U, 172U, 44U, 40U, 104U, 228U, 220U, 238U,
    250U, 254U, 220U, 222U, 190U, 252U, 250U, 234U, 54U, 54U, 36U, 38U, 126U,
    54U, 54U, 55U, 62U, 48U, 196U, 196U, 196U, 196U, 132U, 64U, 196U, 228U, 197U,
    64U, 248U, 254U, 217U, 239U, 217U, 254U, 238U, 232U, 249U, 248U, 171U, 43U,
    59U, 59U, 27U, 59U, 187U, 251U, MAX_uint8_T, 107U, 147U, 147U, 131U, 147U,
    147U, 147U, 151U, 147U, 179U, 19U, 193U, 133U, 17U, 129U, 145U, 129U, 129U,
    193U, 131U, 193U, 94U, 214U, 54U, 86U, 22U, 86U, 246U, 198U, 124U, 114U,
    171U, 155U, 184U, 11U, 58U, 186U, 155U, 171U, 251U, 187U, 18U, 6U, 82U, 50U,
    90U, 18U, 48U, 50U, 27U, 10U, MAX_uint8_T, MAX_uint8_T, 247U, 247U, 247U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 239U, MAX_uint8_T, 59U, 62U, 45U, 63U,
    63U, 45U, 179U, 55U, 191U, 61U, 92U, 54U, 22U, 119U, 20U, 20U, 127U, 126U,
    254U, 38U, 138U, 154U, 158U, 158U, 159U, 154U, 154U, 154U, 223U, 142U, 75U,
    203U, 75U, 203U, 111U, 203U, 131U, 11U, 67U, 8U, 23U, 21U, 144U, 22U, 151U,
    21U, 23U, 23U, 151U, 21U, 14U, 12U, 76U, 12U, 14U, 14U, 12U, 28U, 124U, 26U,
    252U, 189U, 189U, 173U, 189U, 181U, 189U, 125U, 252U, 177U, 206U, 223U, 142U,
    223U, 198U, 223U, 223U, 222U, 142U, 138U };

  static const uint8_T uv70[320]{ 59U, 43U, 43U, 43U, 59U, 41U, 43U, 42U, 63U,
    43U, 157U, 191U, 249U, 185U, 191U, 189U, 173U, 189U, 181U, 177U, 122U, 107U,
    98U, 106U, 104U, 123U, 232U, 106U, 104U, 121U, 237U, 201U, 200U, 200U, 105U,
    73U, 193U, 201U, 225U, 235U, 117U, 246U, 119U, 119U, 245U, 245U, 215U, 245U,
    245U, 244U, 215U, 183U, 213U, 213U, 223U, 223U, 247U, 215U, 223U, 221U, 251U,
    251U, 251U, 251U, 91U, 243U, 251U, 251U, 251U, MAX_uint8_T, 119U, 119U, 118U,
    87U, 119U, 119U, 95U, 119U, 253U, 253U, 93U, 95U, 77U, 95U, 87U, 95U, 87U,
    95U, 79U, 79U, 77U, 77U, 76U, 77U, 109U, 77U, 229U, 77U, 109U, 73U, 254U,
    124U, 124U, 124U, 124U, 124U, 124U, 124U, 125U, 124U, 167U, 230U, 167U, 167U,
    175U, 10U, 130U, 167U, 175U, 238U, 57U, 57U, 40U, 56U, 43U, 58U, 25U, 40U,
    27U, 189U, 191U, 141U, 156U, 221U, 29U, 157U, 189U, 156U, 29U, 223U, 182U,
    182U, 182U, 182U, 150U, 182U, 246U, 182U, 222U, 190U, 228U, 36U, 164U, 164U,
    180U, 52U, 36U, 164U, 164U, 36U, 254U, 126U, 254U, 254U, 30U, 220U, 123U,
    254U, MAX_uint8_T, 254U, 187U, 187U, 187U, 187U, 186U, 186U, 154U, 187U,
    155U, 155U, 151U, 151U, 151U, 151U, 151U, 150U, 151U, 151U, 151U, 151U, 141U,
    157U, 197U, 213U, 28U, 24U, 156U, 149U, 253U, 221U, 191U, 151U, 199U, 151U,
    159U, 147U, 146U, 214U, 223U, 211U, 186U, 186U, 186U, 186U, 186U, 186U, 186U,
    186U, 186U, 58U, 52U, 36U, 52U, 52U, 116U, 112U, 117U, 116U, 125U, 120U,
    223U, 223U, 253U, MAX_uint8_T, 159U, 223U, 222U, 223U, 223U, 245U, 119U,
    126U, 119U, 127U, 127U, 111U, 127U, 127U, 127U, 127U, MAX_uint8_T, 93U, 93U,
    93U, 221U, 221U, 93U, 93U, 221U, 221U, 186U, 162U, 138U, 170U, 32U, 32U,
    151U, 138U, 167U, 174U, 195U, 224U, 235U, 235U, 227U, 106U, 229U, 235U, 231U,
    238U, 119U, MAX_uint8_T, 119U, 127U, 127U, 83U, 247U, 87U, 247U, 95U, 140U,
    142U, 142U, 142U, 142U, 138U, 204U, 142U, 142U, 142U, 252U, 240U, 126U, 126U,
    222U, 230U, 244U, 252U, 222U, 209U, MAX_uint8_T, 253U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 251U, 234U, 223U, 247U, 249U };

  static const uint8_T uv71[320]{ 59U, 50U, 34U, 58U, 35U, 42U, 62U, 42U, 58U,
    43U, 141U, 1U, 141U, 205U, 141U, 141U, 9U, 137U, 133U, 141U, 22U, 82U, 34U,
    98U, 99U, 98U, 226U, 50U, 32U, 34U, 218U, 137U, 154U, 154U, 202U, 202U, 200U,
    154U, 138U, 154U, 29U, 77U, 221U, 85U, 85U, 85U, 213U, 93U, 221U, 221U, 215U,
    93U, 213U, 213U, 213U, 213U, 214U, 213U, 213U, 149U, 74U, 250U, 214U, 250U,
    234U, 186U, 251U, 186U, 222U, 202U, 99U, 64U, 231U, 231U, 231U, 231U, 71U,
    231U, 237U, 103U, 215U, 45U, 223U, 149U, 95U, 95U, 141U, 143U, 143U, 215U,
    1U, 4U, 5U, 4U, 65U, 5U, 197U, 5U, 85U, 69U, 206U, 250U, 232U, 220U, 120U,
    124U, 206U, 216U, 221U, 204U, 2U, 3U, 11U, 3U, 2U, 3U, 3U, 3U, 11U, 7U, 120U,
    140U, 42U, 40U, 40U, 40U, 8U, 44U, 104U, 40U, 243U, 154U, 248U, 204U, 216U,
    220U, 252U, 222U, 220U, 232U, 52U, 54U, 54U, 54U, 52U, 54U, 54U, 38U, 62U,
    54U, 228U, 196U, 196U, 196U, 228U, 196U, 228U, 196U, 196U, 196U, 248U, 234U,
    201U, 248U, 248U, 248U, 248U, 232U, 217U, 216U, 162U, 137U, 171U, 171U, 170U,
    187U, 187U, 187U, 155U, 170U, 26U, 207U, 147U, 147U, 18U, 147U, 147U, 147U,
    147U, 147U, 152U, 193U, 129U, 193U, 201U, 209U, 145U, 209U, 225U, 141U, 59U,
    76U, 94U, 78U, 215U, 86U, 30U, 86U, 94U, 222U, 139U, 179U, 43U, 171U, 186U,
    186U, 187U, 171U, 43U, 171U, 59U, 81U, 82U, 18U, 52U, 16U, 50U, 18U, 122U,
    86U, MAX_uint8_T, 192U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    204U, 253U, MAX_uint8_T, MAX_uint8_T, 187U, 149U, 59U, 51U, 63U, 63U, 59U,
    59U, 59U, 59U, 254U, 48U, 84U, 124U, 28U, 92U, 124U, 84U, 85U, 125U, 130U,
    138U, 158U, 138U, 130U, 138U, 142U, 138U, 143U, 154U, 75U, 3U, 123U, 75U,
    74U, 107U, 75U, 107U, 127U, 73U, 58U, 23U, 83U, 23U, 95U, 87U, 151U, 23U,
    23U, 23U, 10U, 14U, 12U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 248U, 125U, 252U,
    252U, 248U, 252U, 244U, 189U, 252U, 248U, 46U, 134U, 206U, 206U, 140U, 206U,
    230U, 206U, 222U, 206U };

  static const uint8_T uv72[320]{ 2U, 3U, 3U, 18U, 2U, 18U, 2U, 2U, 34U, 2U,
    143U, 139U, 143U, 143U, 159U, 143U, 139U, 223U, 207U, 143U, 98U, 6U, 2U,
    106U, 98U, 82U, 2U, 98U, 98U, 166U, 154U, 156U, 155U, 186U, 156U, 156U, 152U,
    158U, 154U, 159U, 247U, 95U, 247U, 150U, 247U, 242U, 83U, MAX_uint8_T, 247U,
    247U, 179U, 144U, 147U, 129U, 209U, 144U, 145U, 145U, 145U, 179U, 186U, 184U,
    190U, 191U, 190U, 190U, 184U, 190U, 190U, 190U, 103U, 103U, 231U, 231U, 103U,
    231U, 103U, 239U, 231U, 231U, 31U, 141U, 30U, 156U, 157U, 189U, 159U, 159U,
    31U, 159U, 5U, 64U, 65U, 69U, 77U, 5U, 5U, 76U, 69U, 87U, 88U, 210U, 88U,
    216U, 92U, 90U, 88U, 216U, 88U, 90U, 167U, 199U, 231U, 167U, 167U, 231U,
    163U, 167U, 167U, 183U, 44U, 172U, 172U, 45U, 44U, 44U, 44U, 108U, 40U, 236U,
    238U, 202U, 234U, 238U, 238U, 174U, 142U, 238U, 204U, 238U, 54U, 54U, 54U,
    50U, 182U, 166U, 38U, 54U, 54U, 54U, 196U, 196U, 196U, 64U, 196U, 196U, 196U,
    196U, 196U, 197U, MAX_uint8_T, 238U, MAX_uint8_T, 110U, 238U, 102U, 238U,
    MAX_uint8_T, 254U, MAX_uint8_T, 187U, 43U, 43U, 171U, 59U, 59U, 59U, 235U,
    43U, 107U, 147U, 187U, 147U, 151U, 151U, 135U, 131U, 191U, 147U, 179U, 149U,
    133U, 133U, 197U, 133U, 129U, 129U, 199U, 197U, 133U, 182U, 198U, 246U, 246U,
    214U, 86U, 86U, 246U, 214U, 246U, 155U, 139U, 152U, 139U, 155U, 153U, 155U,
    11U, 186U, 216U, 6U, 6U, 6U, 6U, 38U, 6U, 2U, 14U, 6U, 14U, MAX_uint8_T,
    253U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 62U, 52U, 44U, 248U, 54U, 60U, 52U,
    58U, 62U, 46U, 118U, 48U, 54U, 39U, 116U, 38U, 52U, 118U, 20U, 54U, 154U,
    154U, 154U, 174U, 154U, 190U, 154U, 143U, 142U, 222U, 203U, 139U, 195U, 201U,
    203U, 195U, 203U, 235U, 235U, 195U, 151U, 29U, 29U, 53U, 23U, 53U, 21U, 23U,
    23U, 151U, 12U, 12U, 12U, 12U, 12U, 132U, 4U, 94U, 14U, 92U, 189U, 57U, 185U,
    181U, 189U, 173U, 173U, 189U, 189U, 189U, 223U, 220U, 221U, 219U, 223U, 221U,
    223U, 223U, 223U, 223U };

  static const uint8_T uv73[320]{ 162U, 2U, 10U, 2U, 2U, 1U, 2U, 34U, 2U, 2U,
    140U, 141U, 140U, 140U, 141U, 141U, 141U, 173U, 141U, 137U, 0U, 18U, 50U,
    134U, 18U, 18U, 150U, 18U, 2U, 18U, 155U, 155U, 217U, 157U, 153U, 219U, 159U,
    154U, 155U, 155U, 221U, 221U, 81U, 213U, 213U, 213U, 213U, 221U, 213U, 85U,
    165U, 245U, 253U, 246U, 229U, 223U, 247U, 205U, 179U, 197U, 164U, 176U, 176U,
    184U, 184U, 166U, 182U, 182U, 186U, 176U, 239U, 231U, 103U, 103U, 103U, 231U,
    175U, 231U, 231U, 231U, 30U, 159U, MAX_uint8_T, 158U, 30U, 95U, 30U, 159U,
    30U, 30U, 19U, 5U, 5U, 23U, 5U, 1U, 23U, 5U, 1U, 1U, 72U, 72U, 110U, 66U,
    72U, 104U, 74U, 104U, 88U, 72U, 19U, 19U, 16U, 19U, 19U, 2U, 19U, 9U, 3U, 3U,
    164U, 172U, 172U, 172U, 172U, 174U, 236U, 172U, 172U, 164U, 232U, 254U, 186U,
    186U, 254U, 248U, 250U, 250U, 234U, 218U, 36U, 38U, 38U, 54U, 32U, 36U, 38U,
    100U, 52U, 32U, 196U, 196U, 196U, 205U, 64U, 228U, 196U, 132U, 196U, 64U,
    201U, 201U, 225U, 233U, 249U, 217U, 209U, 201U, 217U, 217U, 43U, 59U, 59U,
    43U, 59U, 42U, 123U, 59U, 43U, 59U, 130U, 131U, 130U, 187U, 147U, 130U, 163U,
    130U, 147U, 3U, 17U, 17U, 16U, 129U, 145U, 8U, 17U, 17U, 145U, 17U, 54U, 54U,
    54U, 54U, 50U, 87U, 118U, 86U, 22U, 18U, 62U, 186U, 184U, 220U, 152U, 184U,
    216U, 58U, 184U, 186U, 90U, 82U, 18U, 19U, 18U, 80U, 91U, 82U, 64U, 82U,
    247U, 247U, 247U, 247U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 247U,
    MAX_uint8_T, 247U, 45U, 47U, 15U, 13U, 45U, 47U, 45U, 45U, 45U, 45U, 22U,
    22U, 118U, 54U, 54U, 62U, 54U, 20U, 22U, 20U, 158U, 158U, 18U, 218U, 154U,
    22U, 223U, 30U, 158U, 154U, 107U, 107U, 67U, 67U, 67U, 67U, 67U, 107U, 67U,
    107U, 144U, 146U, 210U, 148U, 144U, 82U, 144U, 208U, 148U, 16U, 76U, 76U, 4U,
    76U, 76U, 8U, 92U, 76U, 14U, 8U, 185U, 189U, 173U, 189U, 165U, 249U, 173U,
    143U, 185U, 181U, 142U, 142U, 142U, 142U, 138U, 142U, 142U, 142U, 142U, 138U
  };

  static const uint8_T uv74[320]{ 10U, 14U, 10U, 10U, 10U, 10U, 10U, 26U, 10U,
    10U, 157U, 221U, 157U, 157U, 145U, 153U, 157U, 149U, 157U, 221U, 62U, 178U,
    59U, 38U, 48U, 50U, 54U, 50U, 50U, 50U, 190U, 158U, 250U, 159U, 154U, 152U,
    154U, 186U, 153U, 158U, 187U, MAX_uint8_T, MAX_uint8_T, 253U, 253U, 83U,
    221U, 219U, 247U, 253U, 196U, 213U, 213U, 213U, 213U, 212U, 213U, 241U, 245U,
    213U, 189U, 190U, 189U, 188U, 188U, 176U, 188U, 186U, 184U, 190U, 231U, 236U,
    231U, 231U, 239U, 103U, 231U, 239U, 103U, 231U, 159U, 159U, 159U, 159U, 159U,
    175U, 159U, 159U, 159U, 159U, 77U, 204U, 93U, 95U, 93U, 69U, 85U, 85U, 77U,
    77U, 220U, 220U, 92U, 94U, 220U, 108U, 204U, 221U, 92U, 92U, 35U, 35U, 51U,
    23U, 19U, 1U, 19U, 179U, 51U, 35U, 172U, 236U, 172U, 172U, 172U, 44U, 172U,
    108U, 172U, 172U, MAX_uint8_T, 254U, 223U, 254U, 222U, 158U, 254U, 254U,
    190U, 254U, 34U, 47U, 38U, 54U, 62U, 38U, 38U, 46U, 38U, 38U, 64U, 196U, 64U,
    197U, 196U, 212U, 196U, 196U, 196U, 196U, 231U, MAX_uint8_T, 239U, 229U,
    239U, 230U, 233U, MAX_uint8_T, 239U, 239U, 59U, 123U, 59U, 59U, 27U, 59U,
    59U, 155U, 59U, 123U, 187U, 187U, 147U, 187U, 147U, 147U, 187U, 155U, 147U,
    147U, 129U, 195U, 145U, 133U, 129U, 129U, 129U, 145U, 145U, 193U, 114U, 102U,
    82U, 246U, 86U, 86U, 86U, 54U, 54U, 246U, 139U, 11U, 11U, 216U, 43U, 139U,
    11U, 11U, 152U, 43U, 50U, 58U, 50U, 51U, 114U, 50U, 50U, 58U, 50U, 58U,
    MAX_uint8_T, MAX_uint8_T, 247U, 247U, 245U, 245U, 247U, 247U, 247U,
    MAX_uint8_T, 251U, 59U, 127U, 47U, 63U, 51U, 191U, 187U, 47U, 63U, 247U,
    119U, 85U, 119U, 84U, 117U, 119U, 87U, 119U, 87U, 158U, 143U, 158U, 222U,
    158U, 26U, 158U, 158U, 154U, 158U, 203U, 171U, 235U, 195U, 235U, 75U, 75U,
    203U, 203U, 171U, 16U, 22U, 22U, 22U, 22U, 18U, 18U, 151U, 150U, 23U, 68U,
    127U, 12U, 76U, 12U, 4U, 12U, 78U, 12U, 92U, 165U, 173U, 165U, 189U, 189U,
    175U, 173U, 173U, 173U, 189U, 251U, 223U, 251U, 223U, 223U, 223U, 222U, 223U,
    223U, 223U };

  static const uint8_T uv75[320]{ 42U, 38U, 2U, 38U, 34U, 35U, 34U, 34U, 14U,
    38U, 181U, 237U, 165U, 225U, 165U, 165U, 165U, 173U, 132U, 172U, 32U, 32U,
    48U, 16U, 48U, 33U, 56U, 178U, 32U, 160U, 154U, 138U, 139U, 154U, 154U, 155U,
    155U, 154U, 155U, 155U, 221U, 221U, 213U, 77U, 221U, 221U, 221U, 221U, 213U,
    221U, 213U, 245U, 245U, 213U, 221U, 149U, 229U, 245U, 245U, 177U, 176U, 158U,
    186U, 186U, 178U, 174U, 186U, 178U, 184U, 186U, 207U, 237U, 207U, 200U, 239U,
    239U, 239U, 207U, 203U, 202U, 159U, 143U, 31U, 143U, 143U, 95U, 30U, 31U,
    31U, 31U, 85U, 180U, 5U, 52U, 53U, 81U, 21U, 5U, 53U, 23U, 220U, 153U, 89U,
    81U, 185U, 88U, 89U, 120U, 93U, 89U, 27U, 11U, 3U, 11U, 27U, 2U, 19U, 11U,
    19U, 147U, 172U, 204U, 172U, 140U, 140U, 168U, 132U, 44U, 140U, 136U, 220U,
    252U, 222U, 216U, 216U, 248U, 220U, 252U, 254U, 204U, 126U, 127U, 126U, 127U,
    110U, 124U, 124U, 118U, 126U, 127U, 132U, 132U, 196U, 132U, 132U, 164U, 0U,
    132U, 204U, 140U, 201U, 217U, 217U, 216U, 217U, 217U, 217U, 217U, 249U, 217U,
    27U, 219U, 27U, 25U, 27U, 10U, 27U, 59U, 27U, 11U, 147U, 147U, 147U, 147U,
    131U, 18U, 19U, 147U, 147U, 147U, 145U, 243U, 145U, 211U, 17U, 29U, 145U,
    145U, 145U, 149U, 22U, 86U, 22U, 70U, 22U, 215U, 18U, 22U, 54U, 22U, 43U,
    35U, 58U, 50U, 43U, 58U, 58U, 58U, 152U, 54U, 122U, 90U, 90U, 90U, 90U, 94U,
    90U, 90U, 91U, 94U, 247U, 242U, 247U, 241U, 247U, 247U, 215U, 247U, 215U,
    243U, 63U, 63U, 47U, 21U, 63U, 45U, 45U, 63U, 15U, 13U, 85U, 20U, 20U, 16U,
    20U, 28U, 20U, 20U, 86U, 22U, 158U, 143U, 154U, 143U, 31U, 159U, 159U, 159U,
    155U, 159U, 127U, MAX_uint8_T, 111U, 111U, 127U, 110U, 111U, 107U, 231U,
    239U, 151U, 151U, 151U, 21U, 211U, 95U, 149U, 215U, 151U, 149U, 12U, 127U,
    14U, 31U, 14U, 14U, 10U, 78U, 76U, 95U, 157U, 189U, 189U, 61U, 223U, 217U,
    181U, MAX_uint8_T, 189U, 189U, 222U, 198U, 198U, 134U, 134U, 140U, 130U,
    206U, 214U, 198U };

  static const uint8_T uv76[320]{ 2U, 2U, 2U, 2U, 10U, 2U, 2U, 2U, 3U, 2U, 157U,
    157U, 221U, 157U, 157U, 129U, 157U, 157U, 157U, 153U, 50U, 50U, 50U, 34U,
    58U, 56U, 51U, 43U, 34U, 18U, 153U, 155U, 159U, 155U, 235U, 187U, 155U, 185U,
    139U, 152U, 117U, 245U, 117U, 247U, 245U, 124U, 245U, 86U, 213U, 119U, 197U,
    213U, 197U, 231U, 213U, 197U, 197U, 195U, 151U, 197U, 186U, 186U, 190U, 186U,
    187U, 189U, 190U, 187U, 174U, 184U, 231U, 103U, 230U, 103U, 119U, 111U, 231U,
    103U, 231U, 103U, 30U, 31U, 30U, 30U, 31U, 142U, 30U, 30U, 94U, 142U, 13U,
    13U, 12U, 77U, 77U, 21U, 9U, 69U, 65U, 9U, 88U, 88U, 88U, 88U, 92U, 88U, 88U,
    88U, 88U, 88U, 3U, 3U, 3U, 163U, 3U, 19U, 2U, 131U, 71U, 35U, 172U, 172U,
    172U, 172U, 172U, 180U, 188U, 180U, 172U, 172U, 222U, 222U, 222U, 254U, 223U,
    158U, 222U, 223U, 200U, 158U, 38U, 54U, 53U, 54U, 54U, 62U, 52U, 48U, 54U,
    36U, 64U, 196U, 64U, 64U, 64U, 64U, 64U, 64U, 224U, 64U, 254U, 254U, 254U,
    MAX_uint8_T, 254U, 238U, 254U, 254U, 252U, 238U, 59U, 59U, 123U, 59U, 59U,
    27U, 59U, 59U, 43U, 59U, 147U, 147U, 147U, 147U, 151U, 27U, 19U, 19U, 19U,
    147U, 129U, 129U, 193U, 145U, 129U, 129U, 209U, 129U, 133U, 129U, 86U, 86U,
    66U, 22U, 210U, 86U, 82U, 82U, 215U, 82U, 186U, 186U, 186U, 184U, 186U, 58U,
    186U, 186U, 184U, 155U, 18U, 18U, 18U, 16U, 48U, 82U, 26U, 18U, 20U, 18U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 213U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 253U, 45U, 47U, 37U, 45U, 111U, 229U,
    45U, 101U, 44U, 53U, 20U, 52U, 54U, 20U, 85U, 52U, 20U, 37U, 20U, 52U, 154U,
    154U, 158U, 154U, 138U, 154U, 142U, 154U, 142U, 154U, 235U, 203U, 139U, 195U,
    203U, 235U, 234U, 201U, 194U, 203U, 21U, 23U, 21U, 149U, 23U, 20U, 21U, 21U,
    29U, 16U, 12U, 14U, 28U, 14U, 14U, 8U, 10U, 8U, 14U, 8U, 181U, 189U, 53U,
    181U, 181U, 181U, 181U, 181U, 177U, 165U, 219U, 223U, 219U, 223U, 251U, 202U,
    187U, 250U, 220U, 155U };

  static const uint8_T uv77[320]{ 26U, 26U, 10U, 154U, 26U, 26U, 58U, 26U, 26U,
    26U, 89U, 157U, 157U, 223U, 157U, 205U, 21U, 221U, 157U, 159U, 114U, 46U,
    114U, 102U, 106U, 114U, 114U, 122U, 58U, 122U, 156U, 188U, 221U, 188U, 254U,
    252U, 141U, 252U, 188U, 188U, 115U, 55U, 119U, 127U, 247U, 87U, 125U, 83U,
    19U, 114U, 212U, 214U, 214U, 212U, 215U, 214U, 95U, 192U, 208U, 210U, 188U,
    184U, 188U, 188U, 191U, 254U, 252U, 189U, 61U, 188U, 103U, 103U, 103U, 103U,
    231U, 103U, 103U, 103U, 103U, 103U, 173U, 157U, 157U, 157U, 159U, 189U, 45U,
    189U, 189U, 189U, 76U, 77U, 77U, 78U, 77U, 4U, 108U, 4U, 69U, 76U, 222U,
    222U, 94U, 214U, 222U, 254U, 254U, 222U, 206U, 94U, 163U, 163U, 35U, 167U,
    163U, 3U, 3U, 163U, 163U, 163U, 44U, 172U, 172U, 44U, 44U, 45U, 14U, 44U,
    44U, 44U, 158U, 190U, 190U, 174U, MAX_uint8_T, 191U, 30U, 191U, 191U, 190U,
    38U, 54U, 54U, 54U, 54U, 54U, 54U, 38U, 34U, 166U, 196U, 192U, 228U, 197U,
    96U, 196U, 196U, 64U, 64U, 192U, 238U, 238U, 238U, 238U, MAX_uint8_T, 238U,
    238U, 238U, 230U, 230U, 187U, 51U, 59U, 179U, 187U, 187U, 157U, 187U, 187U,
    59U, 159U, 159U, 151U, 159U, 151U, 151U, 223U, 151U, 159U, 151U, 193U, 129U,
    129U, 133U, 129U, 129U, 161U, 129U, 129U, 129U, 196U, 246U, 246U, 236U, 246U,
    236U, 76U, 96U, 118U, 116U, 139U, 137U, 152U, 143U, 155U, 187U, 187U, 139U,
    139U, 153U, 50U, 48U, 48U, 34U, 48U, 16U, 81U, 50U, 50U, 36U, 237U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 239U, 206U, 239U,
    MAX_uint8_T, 239U, 179U, 243U, 55U, 179U, 127U, 179U, 183U, 243U, 243U, 178U,
    117U, 119U, 127U, 115U, 127U, MAX_uint8_T, 252U, 231U, 247U, 103U, 154U,
    154U, 154U, 218U, 158U, 154U, 138U, 158U, 154U, 186U, 139U, 195U, 131U, 139U,
    195U, 131U, 147U, 139U, 139U, 131U, 7U, 22U, 23U, 23U, 23U, 55U, 87U, 55U,
    50U, 55U, 20U, 12U, 12U, 28U, 12U, 140U, 14U, 20U, 4U, 4U, 45U, 189U, 189U,
    189U, 181U, 253U, 253U, 165U, 173U, 173U, 223U, 95U, 223U, 223U, MAX_uint8_T,
    206U, 223U, 251U, 91U, 223U };

  static const uint8_T uv78[320]{ 42U, 42U, 11U, 50U, 42U, 163U, 42U, 34U, 170U,
    10U, 205U, 221U, 205U, 221U, 237U, 204U, 93U, 73U, 205U, 92U, 34U, 114U,
    114U, 106U, 34U, 39U, 34U, 98U, 102U, 42U, 222U, 222U, 94U, 158U, 30U, 220U,
    158U, 220U, 158U, 190U, 93U, 125U, 85U, 95U, 221U, 77U, 93U, 85U, 77U, 93U,
    213U, 213U, 213U, 209U, 213U, 213U, 213U, 213U, 213U, 196U, 190U, 190U, 182U,
    158U, 150U, 164U, 190U, 190U, 222U, 191U, 230U, 230U, 231U, 230U, 230U, 231U,
    230U, 102U, 230U, 230U, 223U, 223U, 253U, 133U, 223U, 221U, 159U, 221U, 157U,
    156U, 70U, 76U, 64U, 68U, 198U, 66U, 68U, 68U, 68U, 70U, 92U, 252U, 124U,
    220U, 236U, 192U, 220U, 252U, 212U, 220U, 3U, 3U, 2U, 131U, 11U, 2U, 3U, 3U,
    135U, 3U, 168U, 104U, 40U, 32U, 42U, 184U, 44U, 40U, 40U, 188U, 252U, 252U,
    248U, 252U, 252U, 252U, 222U, 220U, 204U, 254U, 55U, 54U, 54U, 55U, 55U, 52U,
    55U, 55U, 54U, 55U, 228U, 228U, 228U, 64U, 132U, 229U, 196U, 228U, 197U, 64U,
    201U, 254U, 232U, 104U, 201U, 200U, 236U, 232U, 200U, 232U, 123U, 251U, 122U,
    251U, 234U, 34U, 251U, 187U, 235U, 123U, 147U, 147U, 146U, 147U, 211U, 26U,
    147U, 147U, 147U, 179U, 193U, 195U, 72U, 195U, 67U, 201U, 195U, 193U, 199U,
    197U, 230U, 198U, 71U, 206U, 110U, 231U, 70U, 198U, 238U, 70U, 186U, 43U,
    187U, 171U, 107U, 175U, 171U, 187U, 175U, 139U, 114U, 58U, 50U, 54U, 250U,
    118U, 50U, 54U, 118U, 50U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 253U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    55U, 55U, 55U, 51U, 59U, 37U, 55U, 55U, 51U, 119U, 126U, 127U, 124U, 36U,
    94U, 58U, 116U, 60U, 123U, 55U, 158U, 142U, 22U, 138U, 133U, 218U, 138U,
    138U, 218U, 154U, 43U, 139U, 11U, 139U, 59U, 10U, 139U, 11U, 139U, 139U, 87U,
    87U, 83U, 53U, 83U, 23U, 23U, 87U, 23U, 21U, 92U, 30U, 28U, 28U, 124U, 28U,
    31U, 28U, 28U, 92U, 125U, 253U, 237U, 116U, 254U, 241U, 61U, 125U, 124U, 53U,
    206U, 223U, 174U, 222U, 222U, 238U, 222U, 206U, 222U, 218U };

  static const uint8_T uv79[320]{ 50U, 142U, 54U, 182U, 50U, 186U, 62U, 167U,
    54U, 18U, 133U, 205U, 205U, 205U, 141U, 140U, 141U, 141U, 173U, 141U, 118U,
    180U, 246U, 240U, 142U, 230U, 246U, 167U, 150U, 214U, 237U, 151U, 158U, 247U,
    190U, 222U, MAX_uint8_T, 223U, 159U, 191U, 213U, 213U, 221U, 213U, 149U,
    213U, 213U, 221U, 221U, 215U, 118U, 246U, 247U, 126U, 226U, 246U, 246U,
    MAX_uint8_T, 223U, 162U, 254U, 190U, 222U, 254U, 126U, 252U, 254U, 166U,
    246U, 254U, 103U, 175U, 238U, 231U, 231U, 231U, 231U, 239U, 236U, 231U, 61U,
    31U, 159U, 25U, 151U, 157U, 87U, 95U, 63U, 63U, 7U, 151U, 134U, 135U, 135U,
    135U, 23U, 243U, 182U, 131U, 250U, 90U, 248U, 185U, 202U, 254U, 254U, 250U,
    250U, 250U, 19U, 19U, 3U, 19U, 19U, 19U, 18U, 82U, 11U, 19U, 75U, 236U, 104U,
    110U, 97U, 104U, 105U, 232U, 238U, 108U, 58U, 126U, 248U, 126U, 234U, 254U,
    123U, 248U, 250U, 234U, 54U, 63U, 63U, 31U, 50U, 54U, 60U, 188U, 45U, 52U,
    197U, 207U, 197U, 149U, 65U, 205U, 196U, 229U, 213U, 192U, 249U, 249U, 249U,
    251U, 249U, 249U, 249U, 249U, 249U, 251U, 159U, 127U, 251U, 211U, 239U,
    MAX_uint8_T, 218U, 238U, MAX_uint8_T, 239U, 151U, 179U, 179U, 151U, 171U,
    179U, 179U, 178U, 239U, 191U, 161U, 147U, 227U, 227U, 129U, 129U, 144U, 171U,
    227U, 129U, 60U, 118U, 124U, 124U, 124U, 60U, 122U, 247U, 124U, 60U, 187U,
    248U, 227U, 250U, 219U, MAX_uint8_T, 250U, MAX_uint8_T, 251U, 251U, 17U, 91U,
    26U, 88U, 27U, 50U, 27U, 127U, 219U, 11U, 206U, 239U, MAX_uint8_T, 239U,
    191U, 239U, 247U, MAX_uint8_T, MAX_uint8_T, 239U, 187U, 47U, 59U, 191U, 251U,
    59U, 127U, 61U, 189U, 191U, 254U, 118U, 126U, 222U, 231U, 127U, MAX_uint8_T,
    62U, 54U, 254U, 158U, 223U, 207U, 223U, 223U, 222U, 214U, 223U, 207U, 223U,
    67U, 71U, 31U, 135U, 67U, 3U, 67U, 70U, 63U, 67U, 231U, 135U, 215U, 231U,
    177U, 151U, 183U, 215U, 209U, 165U, 76U, 125U, 127U, 127U, 124U, 124U, 220U,
    124U, 126U, 124U, 252U, 189U, 252U, 252U, 252U, 252U, 252U, 249U, 239U, 249U,
    142U, 206U, 134U, 142U, 74U, 206U, 138U, 140U, 142U, 142U };

  static const uint8_T uv8[320]{ 56U, 56U, 56U, 120U, 62U, 88U, 126U, 48U, 58U,
    114U, 73U, 249U, 217U, 249U, 113U, 217U, 105U, 233U, 40U, 32U, 122U, 122U,
    58U, 26U, 120U, 58U, 18U, 18U, 50U, 82U, 236U, 104U, 250U, 234U, 232U, 252U,
    174U, 238U, 248U, 168U, 85U, 114U, 93U, 57U, 93U, 59U, 29U, 93U, 93U, 77U,
    199U, 205U, 213U, 205U, 95U, 196U, 197U, 205U, 221U, 75U, 83U, 83U, 211U,
    82U, 214U, 87U, 86U, 198U, 80U, 240U, 112U, 116U, 236U, 232U, 232U, 103U,
    232U, 236U, 67U, 64U, 69U, 33U, 199U, 171U, 131U, 173U, 143U, 199U, 175U,
    45U, 4U, 12U, 68U, 12U, 164U, 12U, 132U, 0U, 5U, 36U, 252U, 252U, 252U, 168U,
    189U, 236U, 233U, 232U, 244U, 242U, 2U, 41U, 10U, 9U, 11U, 33U, 11U, 10U, 9U,
    11U, 115U, 63U, 58U, 191U, 75U, 63U, 110U, 34U, 47U, 14U, 221U, 159U, 221U,
    215U, 221U, 223U, 223U, 216U, 159U, 154U, 33U, 34U, 54U, 96U, 127U, 34U, 35U,
    37U, 38U, 36U, 80U, 16U, 32U, 16U, 16U, 80U, 208U, 16U, 144U, 80U, 120U,
    190U, 200U, 136U, 216U, 230U, 248U, 216U, 232U, 232U, 184U, 187U, 186U, 185U,
    217U, 187U, 249U, 232U, 185U, 157U, 135U, 199U, 147U, 205U, 215U, 205U, 207U,
    66U, 207U, 207U, 234U, 64U, 64U, 66U, 99U, 192U, 227U, 66U, 0U, 225U, 72U,
    74U, 74U, 74U, 76U, 74U, 76U, 74U, 14U, 8U, 179U, 187U, 43U, 43U, 35U, 11U,
    35U, 43U, 43U, 179U, 112U, 48U, 122U, 218U, 250U, 50U, 218U, 90U, 82U, 209U,
    157U, 61U, 189U, 61U, 156U, 253U, 253U, 189U, 149U, 192U, 243U, 243U, 243U,
    251U, 243U, 243U, 179U, 177U, 211U, 149U, 237U, 205U, 221U, 213U, 217U, 245U,
    245U, 148U, 209U, 176U, 128U, 32U, 128U, 1U, 133U, 10U, 139U, 1U, 16U, 138U,
    25U, 41U, 123U, 59U, 63U, 27U, 59U, 59U, 123U, 59U, 115U, 115U, 83U, 80U,
    119U, 50U, 18U, 81U, 114U, 81U, 170U, 130U, 10U, 3U, 63U, 2U, 63U, 26U, 12U,
    10U, 116U, 102U, 116U, 6U, 126U, 39U, 46U, 114U, 110U, 103U, 170U, 251U,
    234U, 10U, 210U, 123U, 2U, 138U, 202U, 130U };

  static const uint8_T uv80[320]{ 166U, 2U, 18U, 6U, 6U, 2U, 18U, 2U, 32U, 146U,
    205U, 141U, 141U, 237U, 5U, 205U, 77U, 201U, 205U, 207U, 210U, 2U, 10U, 134U,
    130U, 43U, 42U, 18U, 18U, 14U, 158U, 155U, 190U, 158U, 156U, 190U, 190U,
    156U, 158U, 190U, 220U, 212U, 150U, 221U, 221U, 220U, 86U, 92U, 93U, 156U,
    161U, 131U, 195U, 131U, 163U, 197U, 195U, 129U, 133U, 131U, 174U, 174U, 190U,
    166U, 174U, 191U, 191U, 174U, 166U, 142U, 239U, 231U, 231U, 239U, 72U, 231U,
    231U, 231U, 230U, 239U, 158U, 20U, 148U, 158U, 158U, 158U, 20U, 140U, 158U,
    150U, 130U, 1U, 5U, 129U, 130U, 0U, 4U, 0U, 0U, 20U, 248U, 88U, 202U, 200U,
    219U, 88U, 88U, 216U, 88U, 216U, 18U, 2U, 131U, 3U, 3U, 3U, 131U, 2U, 2U,
    135U, 228U, 32U, 101U, 228U, 196U, 244U, 53U, 172U, 164U, 225U, 234U, 234U,
    239U, 226U, 234U, MAX_uint8_T, 239U, 202U, 224U, 232U, 61U, 48U, 32U, 40U,
    53U, 48U, 49U, 52U, 32U, 58U, 1U, 64U, 64U, 64U, 72U, 64U, 64U, 64U, 64U,
    65U, 251U, 120U, 248U, 249U, 248U, 248U, 120U, 234U, 216U, 217U, 235U, 43U,
    251U, 235U, 233U, 123U, 59U, 171U, 106U, 227U, 19U, 19U, 27U, 106U, 43U, 19U,
    19U, 27U, 2U, 59U, 227U, 129U, 193U, 195U, 163U, 195U, 193U, 193U, 65U, 231U,
    114U, 82U, 90U, 114U, 48U, 98U, 66U, 66U, 66U, 126U, 43U, 186U, 139U, 235U,
    179U, 187U, 186U, 187U, 186U, 139U, 10U, 0U, 10U, 74U, 2U, 26U, 2U, 2U, 82U,
    79U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 222U, MAX_uint8_T,
    MAX_uint8_T, 253U, MAX_uint8_T, 191U, 60U, 44U, 249U, 189U, 53U, 117U, 113U,
    52U, 37U, 184U, 22U, 36U, 167U, 54U, 54U, 38U, 39U, 52U, 54U, 38U, 207U,
    142U, 142U, 143U, 139U, 142U, 170U, 142U, 142U, 206U, 44U, 192U, 73U, 123U,
    11U, 8U, 137U, 8U, 10U, 217U, 149U, 21U, 53U, 144U, 149U, 21U, 53U, 21U, 16U,
    21U, 122U, 10U, 10U, 122U, 123U, 90U, 26U, 24U, 26U, 30U, 241U, 177U, 181U,
    177U, 177U, 181U, 53U, 177U, 241U, 184U, 136U, 136U, 138U, 142U, 134U, 170U,
    202U, 136U, 138U, 74U };

  static const uint8_T uv81[320]{ 112U, 60U, 56U, 60U, 184U, 56U, 56U, 60U, 56U,
    56U, 209U, 65U, 12U, 89U, 72U, 205U, 73U, 73U, 169U, 73U, 59U, 122U, 126U,
    122U, 63U, 122U, 126U, 106U, 122U, 114U, 236U, 236U, 236U, 110U, 236U, 236U,
    238U, 238U, 109U, 236U, 28U, 85U, 21U, 85U, 77U, 85U, 29U, 93U, 84U, 85U,
    199U, 71U, 199U, 207U, 199U, 199U, 199U, 195U, 207U, 215U, 87U, 82U, 83U,
    83U, 211U, 87U, 87U, 83U, 67U, 82U, 124U, 120U, 99U, 120U, 96U, 103U, 244U,
    104U, 117U, 96U, 4U, 69U, 85U, 69U, 197U, 85U, 197U, 133U, 101U, 69U, 12U,
    132U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 206U, 253U, 238U, 253U, 229U, 236U,
    252U, 253U, 252U, 254U, 3U, 11U, 2U, 10U, 2U, 2U, 2U, 11U, 8U, 3U, 119U, 75U,
    123U, 115U, 115U, 51U, 115U, 115U, 51U, 43U, 215U, 217U, MAX_uint8_T, 221U,
    221U, 217U, 217U, 221U, 17U, 153U, 32U, 33U, 32U, 33U, 49U, 48U, 33U, 33U,
    0U, 54U, 64U, 16U, 112U, 48U, 97U, 64U, 64U, 64U, 48U, 208U, 248U, 248U,
    248U, 88U, 248U, 120U, 88U, 120U, 88U, 248U, 188U, 188U, 176U, 184U, 176U,
    186U, 240U, 184U, 184U, 184U, 15U, 135U, 135U, 7U, 27U, 3U, 143U, 151U, 70U,
    135U, 96U, 226U, 160U, 106U, 234U, 200U, 234U, 226U, 104U, 224U, 72U, 72U,
    40U, 72U, 104U, 74U, 72U, 72U, 72U, 76U, 171U, 179U, 171U, 163U, 167U, 187U,
    171U, 163U, 186U, 187U, 113U, 16U, 48U, 120U, 50U, 16U, 122U, 88U, 113U, 16U,
    31U, 140U, 159U, 63U, 140U, 191U, 189U, 157U, 29U, 157U, 241U, 243U, 243U,
    243U, 211U, 243U, 243U, 243U, 119U, 243U, 229U, 237U, 239U, 205U, 233U, 237U,
    233U, 205U, 237U, 253U, 162U, 129U, 128U, 33U, 194U, 130U, 160U, 129U, 32U,
    130U, 25U, 25U, 19U, 57U, 25U, 9U, 25U, 57U, 17U, 3U, 48U, 115U, 115U, 115U,
    115U, 113U, 51U, 119U, 115U, 119U, 10U, 171U, 168U, 187U, 43U, 10U, 187U,
    171U, 138U, 142U, 52U, 126U, 116U, 102U, 116U, 116U, 116U, 116U, 70U, 124U,
    106U, 130U, 42U, 162U, 226U, 170U, 42U, 162U, 170U, 138U };

  static const uint8_T uv82[320]{ 56U, 56U, 56U, 56U, 120U, 120U, 24U, 120U, 56U,
    40U, 249U, 223U, 249U, 249U, 121U, 123U, 249U, 185U, 185U, 249U, 123U, 122U,
    123U, 122U, 122U, 122U, 123U, 122U, 122U, 58U, 232U, 236U, 106U, 104U, 108U,
    100U, 108U, 104U, 104U, 109U, 82U, 114U, 112U, 113U, 57U, 114U, 83U, 242U,
    240U, 112U, 193U, 201U, 205U, 221U, 223U, 203U, 205U, 205U, 207U, 205U, 115U,
    87U, 83U, 83U, 91U, 83U, 115U, 83U, 115U, 117U, 118U, 246U, 244U, 117U, 116U,
    112U, 116U, 247U, 247U, 119U, 37U, 21U, 97U, 33U, 33U, 33U, 233U, 35U, 35U,
    105U, 4U, 12U, 76U, 76U, 108U, 172U, 64U, 13U, 13U, 12U, 124U, 252U, 252U,
    252U, 252U, 252U, 108U, 236U, 124U, 126U, 163U, 43U, 8U, 9U, 45U, 169U, 8U,
    41U, 8U, 8U, 61U, 63U, 63U, 63U, 63U, 63U, 62U, 63U, 51U, 191U, 151U, 223U,
    215U, 159U, 159U, 159U, 215U, 215U, 151U, 151U, 32U, 34U, 0U, 34U, 6U, 3U,
    32U, 66U, 34U, 2U, 16U, 16U, 48U, 16U, 48U, 16U, 48U, 16U, 16U, 48U, 126U,
    254U, 156U, 190U, 190U, 62U, 178U, 182U, 58U, 164U, 187U, 187U, 184U, 185U,
    189U, 189U, 187U, 187U, 186U, 58U, 135U, 135U, 85U, 215U, 221U, 197U, 86U,
    197U, 7U, 70U, 192U, 66U, 106U, 64U, 96U, 98U, 64U, 80U, 88U, 72U, 74U, 74U,
    75U, 74U, 205U, 72U, 67U, 90U, 90U, 64U, 154U, 187U, 58U, 43U, 171U, 179U,
    187U, 27U, 186U, 184U, 48U, 0U, 112U, 48U, 240U, 128U, 48U, 176U, 48U, 48U,
    125U, 191U, 61U, 157U, 157U, 12U, 125U, 63U, 63U, 45U, 243U, 243U, 243U,
    243U, 243U, 243U, 115U, 251U, 127U, 231U, 197U, 197U, 205U, 221U, 253U, 197U,
    205U, 197U, 205U, 253U, 34U, 32U, 32U, 32U, 32U, 33U, 0U, 36U, 36U, 48U, 9U,
    171U, 56U, 123U, 187U, 185U, 11U, 105U, 105U, 1U, 115U, 115U, 114U, 115U,
    99U, 99U, 99U, 96U, 115U, 66U, 130U, 154U, 130U, 130U, 142U, 162U, 2U, 130U,
    138U, 128U, 38U, 110U, 70U, 110U, 78U, 6U, 103U, 166U, 198U, 70U, 251U, 219U,
    251U, 251U, 123U, 251U, 251U, 251U, 171U, 251U };

  static const uint8_T uv83[320]{ 48U, 56U, 40U, 58U, 50U, 184U, 56U, 56U, 58U,
    40U, 217U, 205U, 233U, 201U, 249U, 220U, 141U, 217U, 249U, 217U, 59U, 56U,
    57U, 122U, 123U, 63U, 58U, 57U, 122U, 57U, 250U, 254U, 74U, 202U, 250U, 254U,
    250U, 234U, 94U, 250U, 29U, 157U, 221U, 93U, 127U, 77U, 93U, 93U, 125U, 93U,
    197U, 221U, 221U, 213U, 197U, 213U, 213U, 197U, 221U, 205U, 211U, 215U, 211U,
    210U, 155U, 215U, 211U, 215U, 215U, 209U, 228U, 238U, 237U, 228U, 240U, 230U,
    231U, 252U, 252U, MAX_uint8_T, 134U, 215U, 71U, 199U, 143U, 213U, 215U, 71U,
    207U, 207U, 12U, 68U, 5U, 68U, 76U, 70U, 5U, 76U, 76U, 73U, 204U, 188U, 236U,
    252U, 252U, 228U, 236U, 252U, 252U, 236U, 3U, 11U, 8U, 11U, 43U, 2U, 2U, 10U,
    13U, 8U, 182U, 123U, 58U, 42U, 56U, 50U, 58U, 51U, 42U, 182U, 221U, 253U,
    221U, 221U, 221U, 221U, 221U, 221U, 221U, 221U, 32U, 51U, 108U, 54U, 55U,
    55U, 38U, 50U, 38U, 32U, 64U, 32U, 52U, 164U, 32U, 97U, 96U, 32U, 180U, 96U,
    200U, 201U, 216U, 200U, 204U, 200U, 216U, 216U, 204U, 200U, 187U, 250U, 186U,
    186U, 185U, 178U, 186U, 186U, 186U, 58U, 27U, 147U, 194U, 147U, 151U, 155U,
    147U, 23U, 215U, 18U, 65U, 67U, 88U, 65U, 195U, 74U, 80U, 106U, 66U, 72U,
    74U, 106U, 90U, 78U, 202U, 106U, 26U, 74U, 207U, 75U, 43U, 43U, 42U, 43U,
    43U, 47U, 171U, 43U, 43U, 42U, 114U, 122U, 122U, 114U, 58U, 114U, 122U, 122U,
    122U, 114U, 189U, 191U, 181U, 253U, 253U, 191U, 191U, 189U, 189U, 189U, 249U,
    251U, 127U, 115U, 115U, 243U, 251U, 251U, 115U, 231U, 197U, 223U, 221U, 221U,
    93U, 251U, 221U, 221U, 217U, 221U, 138U, 133U, 4U, 128U, 138U, 210U, 130U,
    133U, 1U, 16U, 123U, 57U, 123U, 59U, 187U, 27U, 123U, 121U, 59U, 122U, 16U,
    115U, 83U, 83U, 87U, 83U, 83U, 83U, 83U, 82U, 10U, 31U, 10U, 14U, 31U, 24U,
    10U, 26U, 30U, 8U, 116U, 212U, 214U, 124U, 118U, 116U, 244U, 244U, 94U, 212U,
    234U, 250U, 234U, 206U, 251U, 234U, 234U, 250U, MAX_uint8_T, 234U };

  static const uint8_T uv84[320]{ 40U, 120U, 188U, 120U, 114U, 80U, 120U, 52U,
    120U, 112U, 249U, 121U, 253U, 249U, 249U, 249U, 249U, 161U, 249U, 233U, 24U,
    26U, 27U, 26U, 18U, 27U, 58U, 24U, 57U, 26U, 186U, 234U, 126U, 234U, 170U,
    170U, 250U, 234U, 106U, 174U, 57U, 57U, 217U, 25U, 57U, 56U, 25U, 29U, 57U,
    24U, 205U, 205U, 205U, 205U, 205U, 205U, 221U, 205U, 205U, 205U, 18U, 82U,
    86U, 82U, 18U, 19U, 82U, 83U, 83U, 87U, 238U, 120U, 224U, 229U, 232U, 248U,
    232U, 200U, 248U, 232U, 143U, 163U, 183U, 163U, 171U, 174U, 163U, 135U, 235U,
    162U, 29U, 12U, 130U, 13U, 12U, 72U, 20U, 45U, 40U, 164U, 168U, 173U, 233U,
    172U, 168U, 136U, 164U, 169U, 172U, 168U, 9U, 9U, 8U, 9U, 41U, 9U, 9U, 9U,
    8U, 9U, 174U, 63U, 127U, 47U, 174U, 183U, 47U, 151U, 191U, 247U, 223U, 223U,
    243U, 223U, 214U, 215U, 223U, 211U, 215U, 215U, 96U, 97U, 33U, 98U, 96U, 97U,
    98U, 104U, 64U, 1U, 16U, 16U, 16U, 16U, 144U, 16U, 16U, 16U, 48U, 80U, 201U,
    152U, 137U, 136U, 134U, 150U, 136U, 216U, 128U, 144U, 59U, 185U, 251U, 187U,
    185U, 185U, 251U, 153U, 184U, 245U, 207U, 205U, 204U, 205U, 205U, 93U, 205U,
    79U, 76U, 109U, 64U, 98U, 66U, 80U, 67U, 67U, 66U, 80U, 74U, 98U, 74U, 74U,
    106U, 90U, 78U, 75U, 78U, 10U, 75U, 74U, 43U, 35U, 107U, 43U, 11U, 3U, 75U,
    35U, 43U, 3U, 90U, 218U, 90U, 154U, 218U, 218U, 218U, 218U, 250U, 218U, 53U,
    61U, 63U, 53U, 253U, 61U, 181U, 21U, 61U, 61U, 251U, 243U, 251U, 251U, 177U,
    241U, 251U, 217U, 251U, 241U, 213U, 213U, 215U, 213U, 208U, 193U, 209U, 213U,
    221U, 229U, 5U, 33U, 5U, 4U, 11U, 43U, 5U, 1U, 1U, 37U, 123U, 59U, 59U, 123U,
    59U, 56U, 59U, 125U, 123U, 57U, 80U, 114U, 114U, 114U, 16U, 24U, 114U, 80U,
    82U, 48U, 10U, 3U, 115U, 2U, 7U, 3U, 7U, 11U, 2U, 51U, 135U, 14U, 70U, 142U,
    15U, 7U, 14U, 70U, 70U, 6U, 139U, 3U, 138U, 10U, 31U, 123U, 74U, 130U, 43U,
    10U };

  static const uint8_T uv85[320]{ 62U, 124U, 62U, 126U, 60U, 254U, 62U, 62U, 54U,
    60U, 253U, 112U, 113U, 121U, 37U, 97U, 101U, 113U, 227U, 225U, 96U, 120U,
    120U, 122U, 104U, 118U, 112U, 114U, 104U, 120U, 78U, 232U, 234U, 236U, 232U,
    228U, 232U, 236U, 168U, 234U, 93U, 109U, 205U, 125U, 157U, 13U, 93U, 93U,
    93U, 93U, 221U, 95U, 93U, 87U, 119U, 95U, 67U, 95U, 209U, 95U, 214U, 83U,
    214U, 223U, 91U, 86U, 222U, 210U, 211U, 87U, 232U, 88U, 200U, 248U, 200U,
    104U, 232U, 104U, 200U, 248U, 195U, 3U, 139U, 137U, 7U, 129U, 3U, 73U, 135U,
    71U, 228U, 236U, 180U, 236U, 180U, 180U, 164U, 164U, 116U, 164U, 188U, 181U,
    181U, 188U, 157U, 181U, 185U, 253U, 181U, 189U, 11U, 9U, 11U, 47U, 11U, 11U,
    11U, 11U, 175U, 11U, 106U, 91U, 10U, 75U, 79U, 75U, 75U, 75U, 3U, 75U, 220U,
    221U, 221U, 221U, 221U, 221U, 217U, 220U, 204U, 221U, 127U, 75U, 127U, 55U,
    123U, 111U, 125U, 63U, 127U, 107U, 148U, 48U, 18U, 48U, 0U, 147U, 16U, 148U,
    16U, 16U, 216U, 216U, 216U, 254U, 217U, 248U, 248U, 248U, 216U, 216U, 248U,
    152U, 217U, 245U, 217U, 213U, 217U, 153U, 137U, 216U, 215U, 213U, 215U, 223U,
    159U, 237U, 215U, 215U, 199U, 199U, 99U, 98U, 115U, 227U, 243U, 226U, 227U,
    99U, 247U, 98U, 206U, 72U, 78U, 204U, 30U, 76U, 72U, 76U, 78U, 78U, 35U, 35U,
    35U, 35U, 35U, 99U, 35U, 163U, 35U, 35U, 250U, 248U, 250U, 250U, 121U, 218U,
    88U, 88U, 110U, 122U, 191U, 152U, 240U, 220U, 158U, 136U, 158U, 220U, 149U,
    189U, 59U, 211U, 251U, 243U, 251U, 243U, 243U, 179U, 251U, 251U, 93U, 217U,
    217U, 217U, 197U, 217U, 221U, 221U, 81U, 205U, 133U, 1U, 133U, 133U, 141U,
    197U, 133U, 129U, 137U, 5U, 63U, 63U, 63U, 191U, 127U, 63U, 63U, 63U,
    MAX_uint8_T, 61U, 119U, 115U, 83U, 119U, 183U, 99U, 119U, 119U, 117U, 115U,
    63U, 175U, 63U, 191U, 127U, 63U, 59U, 47U, 15U, 191U, 94U, 78U, 94U, 126U,
    124U, 126U, 118U, 126U, 94U, 94U, 222U, 243U, 198U, 215U, 82U, 66U, 130U,
    198U, 214U, 194U };

  static const uint8_T uv86[320]{ 90U, 88U, 88U, 88U, 216U, 24U, 80U, 88U, 90U,
    26U, 249U, 89U, 157U, 185U, 201U, 217U, 91U, 217U, 251U, 89U, 58U, 63U, 58U,
    58U, 62U, 59U, 26U, 58U, 122U, 122U, 232U, 254U, 238U, 252U, 188U, 254U,
    172U, 238U, 172U, 252U, 59U, 41U, 56U, 19U, 13U, 91U, 58U, 24U, 59U, 115U,
    205U, 204U, 199U, 204U, 196U, 196U, 192U, 196U, 208U, 208U, 19U, 87U, 87U,
    53U, 85U, 55U, 27U, 95U, 94U, 63U, 103U, 116U, 119U, 103U, 103U, 244U, 96U,
    244U, 101U, 102U, 175U, 165U, 132U, 173U, 132U, 173U, 172U, 164U, 173U, 173U,
    77U, 76U, 12U, 4U, 6U, 8U, 12U, 4U, 12U, 4U, 172U, 230U, 206U, 238U, 198U,
    236U, 202U, 206U, 252U, 244U, 41U, 9U, 3U, 0U, 3U, 2U, 161U, 1U, 169U, 163U,
    190U, 63U, 183U, 62U, 183U, 60U, 175U, 183U, 47U, 45U, 223U, 215U, 215U,
    151U, 223U, 223U, 215U, 215U, 223U, 159U, 34U, 35U, 32U, 32U, 34U, 32U, 34U,
    34U, 34U, 35U, 80U, 83U, 64U, 80U, 65U, 112U, 80U, 80U, 208U, 80U, 166U,
    230U, 196U, 162U, 192U, 230U, 230U, 228U, 230U, 238U, 187U, 245U, 187U, 187U,
    179U, 187U, 185U, 243U, 179U, 185U, 223U, 253U, 143U, 205U, 173U, 151U, 205U,
    125U, 205U, 143U, 64U, 66U, 64U, 0U, 195U, 194U, 192U, 192U, 192U, 192U, 74U,
    72U, 74U, 66U, 104U, 67U, 72U, 74U, 78U, 72U, 11U, 11U, 139U, 139U, 143U,
    139U, 139U, 139U, 11U, 139U, 178U, 178U, 83U, 178U, 18U, 50U, 2U, 50U, 130U,
    34U, 245U, 173U, 63U, 109U, 189U, 253U, 125U, 61U, 253U, 237U, 243U, 243U,
    241U, 243U, 241U, 243U, 241U, 241U, 243U, 243U, 245U, 241U, 229U, 245U, 227U,
    245U, 229U, 229U, 245U, 241U, 10U, 66U, 34U, 18U, 218U, 10U, 42U, 170U, 10U,
    138U, 123U, 27U, 25U, 11U, 25U, 11U, 155U, 25U, 155U, 139U, 18U, 50U, 48U,
    98U, 48U, 50U, 48U, 48U, 50U, 55U, 2U, 50U, 10U, 0U, 24U, 18U, 2U, 18U, 6U,
    20U, 167U, 38U, 164U, 167U, 36U, 39U, 39U, 37U, 175U, 39U, 123U, 123U, 123U,
    107U, 74U, 187U, 27U, 122U, 91U, 251U };

  static const uint8_T uv87[320]{ 116U, 124U, 62U, 118U, 126U, 250U, 60U, 118U,
    126U, 126U, 73U, 105U, 121U, 237U, 105U, 73U, 77U, 97U, 115U, 73U, 26U, 18U,
    50U, 154U, 18U, 118U, 18U, 18U, 26U, 18U, 174U, 174U, 174U, 190U, 190U, 254U,
    190U, 172U, 174U, 174U, 28U, 25U, 93U, 221U, 89U, 13U, 29U, 25U, 27U, 29U,
    197U, 221U, 213U, 199U, 221U, 84U, 199U, 199U, 195U, 214U, 86U, 86U, 210U,
    86U, 22U, 86U, 86U, 18U, 30U, 94U, 232U, 232U, 104U, 232U, 232U, 236U, 104U,
    104U, 232U, 96U, 134U, 167U, 143U, 159U, 143U, 133U, 149U, 175U, 175U, 133U,
    132U, 132U, 4U, 134U, 132U, 134U, 132U, 132U, 132U, 132U, 200U, 237U, 249U,
    233U, 169U, 230U, 233U, 169U, 253U, 250U, 11U, 9U, 11U, 11U, 9U, 11U, 9U, 9U,
    171U, 11U, 247U, 111U, 46U, 110U, 110U, 106U, 110U, 206U, 79U, 111U, 203U,
    219U, 222U, MAX_uint8_T, 222U, 219U, 251U, 210U, 223U, 219U, 33U, 35U, 39U,
    105U, 111U, 39U, 33U, 33U, 43U, 35U, 64U, 208U, 212U, 80U, 148U, 215U, 208U,
    208U, 80U, 208U, 216U, 248U, 248U, 249U, 216U, 248U, 216U, 216U, 254U, 248U,
    241U, 249U, 185U, 251U, 249U, 245U, 249U, 185U, 253U, 245U, 111U, 205U, 207U,
    239U, 207U, 239U, 206U, 203U, 239U, 223U, 227U, 98U, 227U, 227U, 99U, 226U,
    98U, 99U, 227U, 227U, 72U, 76U, 78U, 106U, 78U, 108U, 108U, 76U, 76U, 76U,
    3U, 3U, 35U, 99U, 35U, 39U, 163U, 3U, 3U, 163U, 90U, 218U, 26U, 218U, 218U,
    154U, 90U, 218U, 138U, 18U, 189U, 189U, 253U, MAX_uint8_T, 253U, 237U, 191U,
    220U, 220U, 236U, 241U, 243U, 179U, 251U, 179U, 179U, 179U, 177U, 243U, 179U,
    229U, 245U, 213U, 247U, 212U, 251U, 247U, 244U, 245U, 245U, 139U, 1U, 139U,
    143U, 15U, 194U, 1U, 11U, 139U, 138U, 57U, 59U, 59U, 63U, 59U, 27U, 27U, 59U,
    191U, 27U, 48U, 50U, 19U, 17U, 82U, 51U, 82U, 16U, 50U, 51U, 59U, 63U, 47U,
    123U, 63U, 63U, 63U, 39U, 55U, 63U, 52U, 46U, 47U, 46U, 47U, 124U, 110U, 47U,
    47U, 124U, 2U, 2U, 198U, 130U, 134U, 14U, 2U, 6U, 83U, 10U };

  static const uint8_T uv88[320]{ 48U, 112U, 48U, 33U, 48U, 40U, 33U, 176U, 48U,
    116U, 233U, 105U, 205U, 249U, 233U, 237U, 97U, 108U, 201U, 237U, 72U, 18U,
    27U, 17U, 18U, 112U, 51U, 18U, 18U, 18U, 234U, 44U, 254U, 238U, 190U, 78U,
    72U, 252U, 174U, 174U, 92U, 89U, 29U, 93U, 93U, 93U, 93U, 93U, 93U, 221U,
    137U, 143U, 197U, 205U, 205U, 221U, 205U, 199U, 129U, 137U, 194U, 70U, 71U,
    194U, 214U, 70U, 195U, 198U, 198U, 198U, 236U, 108U, 230U, 232U, 236U, 238U,
    104U, 104U, 101U, 236U, 71U, 238U, 214U, 207U, 199U, 87U, 207U, 213U, 197U,
    134U, 32U, 160U, 0U, 8U, 4U, 0U, 0U, 130U, 0U, 160U, 248U, 232U, 232U, 232U,
    232U, 236U, 232U, 224U, 248U, 168U, 10U, 8U, 2U, 8U, 11U, 8U, 8U, 10U, 2U,
    10U, 35U, 230U, 114U, 182U, 34U, 34U, 50U, 34U, 34U, 98U, 201U, 192U, 241U,
    209U, 216U, 217U, 216U, 216U, 200U, 226U, 116U, 32U, 33U, 37U, 37U, 36U, 52U,
    37U, 32U, 105U, 0U, 16U, 64U, 48U, 144U, 180U, 52U, 17U, 64U, 16U, 216U,
    216U, 216U, 216U, 216U, 216U, 216U, 216U, 216U, 248U, 168U, 236U, 250U, 184U,
    234U, 250U, 168U, 168U, 170U, 234U, 2U, 106U, 10U, 66U, 194U, 66U, 66U, 66U,
    2U, 74U, 81U, 96U, 66U, 74U, 67U, 74U, 104U, 99U, 64U, 226U, 74U, 72U, 74U,
    75U, 78U, 74U, 75U, 104U, 74U, 74U, 58U, 43U, 171U, 43U, 43U, 43U, 35U, 39U,
    171U, 35U, 74U, 210U, 90U, 90U, 90U, 122U, 114U, 82U, 66U, 218U, 189U, 29U,
    63U, 61U, 189U, 63U, 29U, 159U, 189U, 127U, 61U, 177U, 241U, 177U, 177U, 59U,
    53U, 177U, 177U, 185U, 140U, 180U, 164U, 156U, 212U, 220U, 156U, 144U, 180U,
    132U, 129U, 1U, 134U, 1U, 5U, 5U, 1U, 129U, 130U, 135U, 121U, 59U, 25U, 58U,
    59U, 59U, 58U, 59U, 27U, 61U, 117U, 80U, 80U, 88U, 81U, 83U, 81U, 81U, 81U,
    81U, 10U, 42U, 26U, 27U, 31U, 26U, 10U, 57U, 10U, 59U, 82U, 66U, 116U, 66U,
    126U, 78U, 82U, 118U, 112U, 114U, 138U, 138U, 170U, 170U, 142U, 142U, 164U,
    130U, 138U, 138U };

  static const uint8_T uv89[320]{ 58U, 58U, 120U, 120U, 184U, 58U, 122U, 186U,
    56U, 58U, 32U, 169U, 48U, 41U, 0U, 185U, 48U, 24U, 164U, 104U, 114U, 48U,
    46U, 50U, 50U, 50U, 50U, 114U, 56U, 114U, 224U, 248U, 45U, 124U, 248U, 248U,
    168U, 248U, 248U, 248U, 85U, 93U, 25U, 29U, 105U, 89U, 9U, 109U, 29U, 93U,
    223U, 221U, 223U, 221U, 253U, 221U, 221U, 221U, 237U, 217U, 80U, 80U, 80U,
    80U, 80U, 80U, 80U, 88U, 80U, 208U, 67U, 71U, 67U, 103U, 67U, 71U, 66U, 82U,
    79U, 66U, 37U, 139U, 103U, 237U, 169U, 175U, 173U, 137U, 23U, 143U, 37U, 21U,
    109U, 4U, 29U, 13U, 5U, 28U, 53U, 4U, 246U, 172U, 230U, 236U, 244U, 252U,
    164U, 180U, 172U, 244U, 11U, 9U, 13U, 9U, 25U, 9U, 9U, 27U, 27U, 11U, 15U,
    46U, 171U, 46U, 47U, 46U, 143U, 47U, 47U, 46U, 31U, 157U, 157U, 153U, 159U,
    159U, 159U, 159U, 155U, 157U, 6U, 102U, 2U, 38U, 34U, 38U, 66U, 38U, 98U,
    38U, 144U, 144U, 212U, 144U, 153U, 144U, 144U, 153U, 16U, 148U, 232U, 200U,
    200U, 232U, 200U, 232U, 200U, 236U, 201U, 232U, 189U, 187U, 172U, 185U, 187U,
    187U, 185U, 177U, 155U, 185U, 207U, 199U, 238U, 206U, 197U, 207U, 205U, 215U,
    143U, 199U, 128U, 16U, 0U, 0U, 0U, 0U, 1U, 0U, 16U, 65U, 12U, 30U, 12U, 76U,
    30U, 30U, 14U, 14U, 26U, 78U, 187U, 43U, 187U, 171U, 47U, 43U, 11U, 47U, 43U,
    43U, 81U, 210U, 241U, 18U, 82U, 18U, 210U, 50U, 82U, 82U, 140U, 149U, 157U,
    157U, 149U, 245U, 144U, 145U, 151U, 213U, 211U, 219U, 215U, 243U, 211U, 211U,
    211U, 211U, 219U, 147U, 249U, 213U, 241U, 253U, 209U, 213U, 209U, 217U, 213U,
    209U, 146U, 16U, 16U, 16U, 16U, 18U, 26U, 80U, 16U, 0U, 19U, 123U, 19U, 27U,
    123U, 123U, 59U, 59U, 123U, 59U, 99U, 83U, 98U, 82U, 114U, 82U, 82U, 115U,
    242U, 83U, 12U, 12U, 12U, 12U, 12U, 4U, 12U, 12U, 8U, 12U, 110U, 206U, 78U,
    110U, 78U, 175U, 14U, 110U, 204U, 126U, 202U, 202U, 94U, 10U, 202U, 203U,
    90U, 219U, 138U, 206U };

  static const uint8_T uv9[320]{ 15U, 53U, 159U, 63U, 47U, 63U, 147U, 27U, 59U,
    63U, 223U, 77U, 93U, 123U, 119U, 207U, 95U, 95U, 223U, 91U, 99U, 99U, 103U,
    107U, 96U, 96U, 70U, 98U, 107U, 98U, 203U, 206U, 207U, 78U, 69U, 142U, 158U,
    140U, 206U, 206U, 118U, 84U, 102U, 124U, 116U, 254U, 54U, 118U, 118U, 127U,
    147U, 147U, 22U, 23U, 27U, 19U, 146U, 146U, 147U, 215U, 235U, 238U, 239U,
    223U, 238U, 206U, 174U, 238U, 239U, 254U, 248U, 248U, 248U, 248U, 248U, 248U,
    244U, 112U, 244U, 240U, 95U, 85U, 85U, 69U, 125U, 23U, 156U, 21U, 85U, 205U,
    72U, 192U, 194U, 236U, 232U, 230U, 72U, 192U, 72U, 204U, 93U, 248U, 223U,
    253U, 127U, 157U, 210U, 222U, 220U, 252U, 230U, 66U, 198U, 238U, 238U, 239U,
    231U, 231U, 230U, 167U, 121U, 113U, 89U, 123U, 75U, 73U, 109U, 105U, 121U,
    104U, 204U, 200U, 108U, 220U, 72U, 236U, 206U, 238U, 205U, 220U, 191U, 181U,
    189U, 191U, 159U, MAX_uint8_T, 183U, 183U, 182U, 183U, 228U, 228U, 229U,
    180U, 164U, 132U, 193U, 228U, 96U, 228U, 126U, 120U, 126U, 94U, 126U, 127U,
    110U, 126U, 126U, 254U, 233U, 232U, 228U, 232U, 204U, 200U, 225U, 237U, 170U,
    249U, 23U, 22U, 63U, 215U, 22U, 151U, 63U, 151U, 23U, 151U, 239U, 239U, 239U,
    239U, 239U, 239U, 231U, 239U, 239U, 231U, 199U, 201U, 237U, 205U, 205U, 236U,
    229U, 205U, 201U, 204U, 178U, 179U, 179U, 35U, 178U, 35U, 155U, 155U, 187U,
    163U, 44U, 44U, 61U, 108U, 109U, 109U, 6U, 36U, 36U, 62U, MAX_uint8_T,
    MAX_uint8_T, 238U, 189U, 206U, 254U, MAX_uint8_T, 239U, MAX_uint8_T, 253U,
    62U, 50U, 54U, 114U, 54U, 58U, 176U, 50U, 114U, 51U, 28U, 44U, 106U, 93U,
    92U, 79U, 42U, 109U, 109U, 125U, 171U, 131U, 239U, 165U, 165U, 175U, 170U,
    170U, 170U, 139U, 192U, 8U, 132U, 188U, 132U, 189U, 128U, 128U, 128U, 139U,
    63U, 127U, 47U, 127U, 111U, 63U, 61U, 63U, 63U, 119U, 159U, 187U,
    MAX_uint8_T, 191U, 191U, MAX_uint8_T, 190U, 191U, 158U, 191U, 113U, 112U,
    112U, 122U, 90U, 248U, 57U, 57U, 112U, 124U, 245U, 164U, 245U, 245U, 213U,
    213U, 221U, 221U, 249U, 215U };

  static const uint8_T uv90[320]{ 112U, 114U, 114U, 118U, 54U, 50U, 50U, 122U,
    120U, 114U, 32U, 48U, 0U, 65U, 33U, 1U, 0U, 48U, 32U, 32U, 2U, 18U, 114U,
    82U, 82U, 82U, 82U, 50U, 90U, 114U, 137U, 168U, 168U, 137U, 232U, 168U, 161U,
    137U, 228U, 237U, 77U, 77U, 77U, 77U, 77U, 85U, 76U, 77U, 5U, 109U, 11U, 77U,
    95U, 77U, 15U, 11U, 9U, 95U, 74U, 139U, 160U, 144U, 216U, 250U, 250U, 194U,
    232U, 240U, 80U, 248U, 72U, 72U, 64U, 64U, 72U, 64U, 64U, 64U, 64U, 64U,
    172U, 173U, 45U, 45U, 175U, 45U, 45U, 45U, 33U, 45U, 32U, 44U, 36U, 36U,
    160U, 32U, 0U, 108U, 164U, 32U, 226U, 176U, 240U, 251U, 241U, 242U, 176U,
    246U, 247U, 242U, 10U, 11U, 11U, 11U, 10U, 11U, 10U, 11U, 11U, 11U, 134U,
    14U, 14U, 142U, 14U, 2U, 142U, 142U, 11U, 143U, 130U, 158U, 158U, 154U, 155U,
    10U, 10U, 158U, 27U, 155U, 32U, 36U, 38U, 39U, 117U, 36U, 52U, 38U, 6U, 52U,
    80U, 16U, 212U, 212U, 16U, 80U, 64U, 212U, 80U, 80U, 104U, 232U, 250U, 234U,
    250U, 248U, 234U, 232U, 248U, 234U, 140U, 145U, 157U, 149U, 153U, 141U, 129U,
    157U, 149U, 189U, 106U, 207U, 223U, 207U, 95U, 78U, 79U, 207U, 207U, 127U,
    192U, 97U, 225U, 227U, 227U, 225U, 193U, 225U, 160U, 129U, 8U, 8U, 12U, 76U,
    8U, 8U, 8U, 12U, 12U, 8U, 179U, 35U, 163U, 179U, 35U, 179U, 35U, 179U, 179U,
    187U, 211U, 208U, 81U, 81U, 208U, 81U, 64U, 241U, 81U, 193U, 80U, 208U, 204U,
    192U, 208U, 204U, 192U, 192U, 200U, 200U, 149U, 145U, 147U, 181U, 151U, 145U,
    149U, 151U, 211U, 151U, 32U, 144U, 248U, 48U, 216U, 176U, 152U, 113U, 241U,
    248U, 138U, 10U, 138U, 138U, 139U, 130U, 138U, 138U, 130U, 138U, 57U, 59U,
    59U, 59U, 63U, 19U, 56U, 59U, 23U, 19U, 81U, 81U, 119U, 85U, 85U, 97U, 69U,
    83U, 99U, 101U, 10U, 10U, 14U, 31U, 43U, 42U, 10U, 14U, 46U, 136U, 99U, 39U,
    110U, 111U, 99U, 114U, 99U, 111U, 110U, 99U, 130U, 134U, 198U, 134U, 130U,
    130U, 128U, 215U, 2U, 138U };

  static const uint8_T uv91[320]{ 47U, 15U, 7U, 39U, 15U, 15U, 15U, 3U, 43U, 47U,
    251U, 150U, 223U, 95U, 159U, 95U, 123U, 223U, 223U, 151U, 99U, 99U, 107U,
    99U, 98U, 107U, 123U, 99U, 99U, 99U, 203U, 201U, 203U, 207U, 139U, 207U,
    219U, 203U, 203U, 203U, 118U, 246U, 118U, 118U, 118U, 118U, 110U, 246U, 119U,
    246U, 147U, 179U, 131U, 147U, 147U, 151U, 145U, 147U, 147U, 147U, 235U, 235U,
    171U, 235U, 186U, 191U, 251U, 238U, 174U, 235U, 216U, 216U, 248U, 112U, 240U,
    248U, 216U, 253U, 244U, 249U, 95U, 95U, 94U, 93U, 31U, 29U, 207U, 95U, 93U,
    87U, 200U, 105U, 72U, 72U, 76U, 72U, 216U, 72U, 72U, 73U, 125U, 95U, 89U,
    125U, 93U, 95U, 85U, 90U, 92U, 125U, 230U, 230U, 230U, 230U, 231U, 230U,
    230U, 230U, 230U, 230U, 121U, 89U, 113U, 121U, 105U, 253U, 253U, 121U, 40U,
    89U, 204U, 78U, 204U, 204U, 204U, 94U, 207U, 236U, 204U, 76U, MAX_uint8_T,
    190U, 189U, 183U, 182U, 191U, 253U, 188U, 180U, 188U, 164U, 228U, 96U, 228U,
    228U, 100U, 96U, 228U, 228U, 228U, 126U, 127U, 126U, 126U, 126U, 126U, 126U,
    126U, 126U, 126U, 233U, 137U, 233U, 168U, 171U, 121U, 121U, 235U, 42U, 138U,
    23U, 23U, 23U, 22U, 151U, 151U, 55U, 23U, 146U, 22U, MAX_uint8_T, 189U, 239U,
    239U, 247U, 239U, 207U, 239U, 207U, MAX_uint8_T, 199U, 151U, 195U, 197U,
    135U, 197U, 195U, 215U, 199U, 147U, 178U, 176U, 178U, 178U, 186U, 144U, 48U,
    184U, 186U, 186U, 44U, 45U, 44U, 44U, 44U, 45U, 174U, 45U, 44U, 109U,
    MAX_uint8_T, 222U, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 241U,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 62U, 62U, 124U, 54U, 62U, 102U, 70U,
    46U, 38U, 46U, 93U, 76U, 12U, 60U, 92U, 125U, 89U, 12U, 28U, 12U, 175U, 171U,
    175U, 163U, 171U, 171U, 171U, 175U, 138U, 163U, 236U, 196U, 132U, 128U, 194U,
    128U, 168U, 192U, 194U, 196U, 127U, 191U, 61U, 127U, 63U, 63U, 31U, 63U, 95U,
    127U, 159U, 207U, 187U, 175U, 143U, 191U, 191U, 158U, 158U, 143U, 113U, 113U,
    113U, 112U, 121U, 49U, 113U, 241U, 249U, 240U, 245U, 245U, 241U, 245U, 213U,
    245U, 241U, 253U, 253U, 245U };

  static const uint8_T uv92[320]{ 54U, 53U, 53U, 57U, 61U, 55U, 53U, 53U, 49U,
    35U, 77U, 79U, 205U, 77U, 77U, 73U, 77U, 77U, 207U, 77U, 66U, 99U, 99U, 98U,
    99U, 99U, 99U, 75U, 67U, 99U, 142U, 206U, 202U, 206U, 206U, 204U, 222U, 238U,
    143U, 77U, 84U, 86U, 212U, 85U, 84U, 85U, 92U, 84U, 84U, 85U, 131U, 131U,
    131U, 151U, 147U, 214U, 215U, 131U, 147U, 151U, 238U, 239U, 239U, 206U, 238U,
    235U, 207U, 238U, 238U, 238U, 232U, 112U, 252U, 248U, 248U, 96U, 240U, 240U,
    245U, 116U, 85U, 84U, 87U, 85U, 85U, 197U, 213U, 212U, 84U, 93U, 128U, 192U,
    0U, 64U, 192U, 192U, 64U, 128U, 64U, 64U, 249U, 251U, 248U, 252U, 254U, 219U,
    252U, 216U, 218U, 120U, 2U, 230U, 66U, 70U, 66U, 2U, 66U, 194U, 198U, 66U,
    97U, 113U, 113U, 99U, 115U, 81U, 113U, 113U, 113U, 56U, 200U, 200U, 201U,
    200U, 232U, 216U, 216U, 201U, 232U, 216U, 61U, 181U, 189U, 183U, 181U, 53U,
    181U, 177U, 180U, 181U, 64U, 100U, 96U, 228U, 228U, 100U, 228U, 96U, 228U,
    228U, 120U, 126U, 120U, 120U, 120U, 120U, 88U, 120U, 120U, 120U, 232U, 232U,
    234U, 232U, 236U, 236U, 232U, 232U, 234U, 168U, 3U, 22U, 22U, 22U, 22U, 19U,
    18U, 23U, 22U, 18U, 227U, 239U, MAX_uint8_T, 239U, 238U, 239U, 234U, 239U,
    239U, 238U, 72U, 201U, 203U, 205U, 205U, 201U, 233U, 201U, 205U, 193U, 179U,
    179U, 179U, 179U, 179U, 179U, 163U, 179U, 187U, 186U, 12U, 44U, 44U, 124U,
    61U, 52U, 126U, 12U, 5U, 52U, 254U, 254U, MAX_uint8_T, 191U, 191U, 204U,
    191U, 191U, 191U, MAX_uint8_T, 48U, 48U, 60U, 50U, 50U, 49U, 51U, 240U, 48U,
    54U, 44U, 44U, 12U, 108U, 236U, 44U, 46U, 172U, 44U, 60U, 139U, 163U, 167U,
    131U, 167U, 139U, 131U, 171U, 166U, 130U, 8U, 128U, 108U, 8U, 0U, 8U, 8U,
    136U, 128U, 0U, 117U, 125U, 125U, 127U, 127U, 55U, 119U, 61U, 61U, 95U, 187U,
    187U, 187U, 191U, 187U, 187U, 187U, 187U, 186U, 158U, 112U, 112U, 240U, 120U,
    120U, 112U, 112U, 112U, 248U, 112U, 128U, 164U, 160U, 140U, 164U, 228U, 172U,
    160U, 140U, 172U };

  static const uint8_T uv93[320]{ 143U, MAX_uint8_T, 151U, 63U, 151U, 159U, 31U,
    151U, 191U, 23U, 92U, 93U, 79U, 87U, 92U, 94U, 69U, 223U, 93U, 83U, 231U,
    103U, 231U, 107U, 231U, 103U, 99U, 103U, 103U, 103U, 223U, 206U, 207U, 239U,
    222U, 197U, 197U, 143U, 142U, 199U, 228U, 46U, 198U, 246U, 36U, 38U, 86U,
    182U, 84U, 102U, 54U, 22U, 2U, 22U, 54U, 18U, 22U, 18U, 22U, 18U, 239U, 206U,
    238U, MAX_uint8_T, 239U, 239U, 239U, 239U, 238U, 239U, 248U, 248U, 248U,
    248U, 80U, 112U, 248U, 252U, 112U, 120U, 93U, 197U, 85U, 93U, 213U, 117U,
    117U, 84U, 213U, 108U, 202U, 192U, 130U, 202U, 202U, 194U, 224U, 202U, 194U,
    232U, 94U, 215U, 219U, MAX_uint8_T, 211U, 214U, 223U, 219U, 219U, 219U, 198U,
    198U, 194U, 230U, 70U, 230U, 198U, 230U, 198U, 230U, 121U, 89U, 89U, 89U,
    113U, 89U, 89U, 113U, 89U, 89U, 108U, 108U, 234U, 127U, 252U, 110U, 108U,
    108U, 236U, 78U, 183U, 191U, 189U, 191U, 181U, 183U, 191U, 189U, 181U, 189U,
    229U, 231U, 97U, 228U, 239U, 231U, 228U, 229U, 229U, 100U, 127U, 126U, 127U,
    126U, 126U, 126U, 126U, 127U, 126U, 126U, 238U, 228U, 237U, 253U, 228U, 229U,
    204U, 230U, 228U, 205U, 54U, 191U, 55U, 151U, 62U, 63U, 23U, 62U, 54U, 63U,
    239U, 239U, 239U, 239U, 239U, 239U, 239U, 239U, 239U, 239U, 229U, 237U, 233U,
    237U, 169U, 237U, 205U, 237U, 237U, 193U, 244U, 163U, 247U, 179U, 167U, 149U,
    179U, 177U, 179U, 145U, 125U, 61U, 13U, 45U, 53U, 37U, 61U, 45U, 60U, 45U,
    238U, 236U, 238U, 238U, 234U, 238U, 206U, 239U, 206U, 204U, 38U, 50U, 52U,
    118U, 16U, 54U, 54U, 60U, 50U, 52U, 126U, 107U, 46U, MAX_uint8_T, 42U, 106U,
    108U, 46U, 106U, 40U, 239U, 239U, 239U, 175U, 234U, 235U, 175U, 239U, 203U,
    171U, 128U, 148U, 132U, 132U, 128U, 128U, 132U, 132U, 128U, 132U, 63U, 63U,
    45U, 47U, 63U, 47U, 47U, 61U, 47U, 45U, MAX_uint8_T, 191U, 251U, MAX_uint8_T,
    MAX_uint8_T, 183U, MAX_uint8_T, MAX_uint8_T, 191U, 183U, 112U, 120U, 112U,
    112U, 112U, 113U, 112U, 240U, 112U, 113U, 245U, 117U, 132U, 245U, 117U, 117U,
    244U, 245U, 244U, 245U };

  static const uint8_T uv94[320]{ 63U, 63U, 47U, 63U, 191U, 39U, 79U, 61U, 61U,
    63U, 127U, 107U, 123U, 115U, 123U, 123U, 123U, 243U, MAX_uint8_T, 95U, 96U,
    106U, 97U, 123U, 105U, 123U, 107U, 105U, 98U, 107U, 76U, 14U, 78U, 238U, 78U,
    238U, 14U, 202U, 14U, 78U, 125U, 92U, 125U, 126U, 110U, 124U, 58U, 252U,
    124U, 116U, 95U, 147U, 157U, 87U, 23U, 5U, 159U, 23U, 151U, 215U, 223U, 207U,
    222U, 223U, 207U, 223U, 31U, 207U, 198U, 223U, 248U, 248U, 248U, 248U, 216U,
    248U, 248U, 248U, 248U, 248U, 65U, 69U, 203U, 77U, 67U, 139U, 174U, 71U, 85U,
    85U, 236U, 228U, 232U, 236U, 232U, 232U, 200U, 232U, 232U, 204U, 188U, 253U,
    253U, 253U, 181U, 188U, 157U, 253U, 252U, 253U, 175U, 143U, 236U, 239U, 238U,
    238U, 236U, 238U, 236U, 238U, 75U, 99U, 106U, 91U, 91U, 125U, 253U, 83U,
    115U, 123U, 76U, 200U, 220U, 223U, 204U, 221U, 214U, 77U, 200U, 221U, 151U,
    191U, 191U, 191U, MAX_uint8_T, 253U, 147U, MAX_uint8_T, 191U, 191U, 180U,
    32U, 180U, 52U, 191U, 32U, 116U, 36U, 180U, 180U, 94U, 88U, 158U, 254U, 94U,
    222U, 22U, 94U, 92U, 126U, 236U, 232U, 232U, 221U, 200U, 249U, 121U, 200U,
    236U, 248U, 215U, 151U, 214U, 223U, 214U, 87U, 223U, 23U, 70U, 151U, 239U,
    239U, 111U, 239U, 239U, 239U, 111U, MAX_uint8_T, 111U, 238U, 205U, 204U,
    197U, 205U, 205U, 193U, 197U, 203U, 205U, 205U, 35U, 163U, 35U, 35U, 103U,
    35U, 3U, 50U, 163U, 179U, 108U, 108U, 238U, 108U, 238U, 170U, 238U, 108U,
    108U, 124U, 188U, 189U, 253U, 220U, 184U, 253U, 125U, 188U, 63U, 191U, 114U,
    114U, 54U, 242U, 50U, 114U, 242U, 126U, 50U, 114U, 93U, 77U, 92U, 221U, 89U,
    93U, 93U, 77U, 44U, 221U, 165U, 165U, 37U, 175U, 229U, 175U, 43U, 165U, 37U,
    161U, 191U, 189U, 186U, 190U, 188U, 188U, 188U, 252U, 188U, 184U, 127U, 127U,
    95U, 127U, 127U, 93U, 30U, 127U, 127U, 127U, 191U, 191U, 191U, 191U, 191U,
    187U, 183U, 191U, 190U, 191U, 94U, 122U, 90U, 118U, 122U, 115U, 3U, 80U,
    122U, 126U, 245U, 196U, 245U, 245U, 245U, 241U, 117U, 245U, 221U, 245U };

  static const uint8_T uv95[320]{ 47U, 161U, 15U, 63U, 41U, 47U, 55U, 61U, 13U,
    63U, 114U, 99U, 119U, 83U, 175U, 127U, 71U, 71U, 111U, 103U, 225U, 68U, 97U,
    98U, 96U, 97U, 82U, 96U, 82U, 98U, 65U, 5U, 69U, 197U, 69U, 71U, 231U, 77U,
    71U, 5U, 102U, 100U, 114U, 118U, 244U, 244U, 119U, 116U, 114U, 84U, 59U, 27U,
    31U, 26U, 155U, 27U, 27U, 31U, 27U, 27U, 234U, 232U, 239U, 254U, 238U, 238U,
    254U, 238U, 238U, 238U, 216U, 16U, 248U, 120U, 245U, 248U, 232U, 120U, 240U,
    104U, 91U, 109U, 121U, 109U, 125U, 81U, 125U, 85U, 105U, 117U, 234U, 248U,
    232U, 232U, 104U, 232U, 160U, 224U, 168U, 164U, 125U, 115U, 127U,
    MAX_uint8_T, 122U, 124U, 251U, MAX_uint8_T, 127U, MAX_uint8_T, 238U, 231U,
    230U, 231U, 230U, 238U, 239U, 206U, 236U, 143U, 73U, 139U, 89U, 73U, 243U,
    91U, 75U, 83U, 75U, 67U, 72U, 8U, 76U, 12U, 8U, 104U, 74U, 72U, 64U, 104U,
    223U, 215U, 159U, 159U, 150U, 159U, 157U, 159U, 151U, 159U, 172U, 175U, 180U,
    164U, 164U, 164U, 212U, 164U, 180U, 148U, 127U, 126U, 62U, 126U, 126U, 126U,
    254U, 124U, 54U, 122U, 204U, 140U, 205U, 205U, 174U, 204U, 205U, 204U, 236U,
    204U, 22U, 102U, 22U, 151U, 22U, 22U, 223U, 22U, 70U, 70U, MAX_uint8_T, 111U,
    239U, 239U, 109U, 239U, 231U, 239U, 110U, 239U, 133U, 197U, 197U, 205U, 213U,
    205U, 204U, 205U, 197U, 204U, 246U, 240U, 176U, 178U, 184U, 178U, 179U, 178U,
    176U, 178U, 237U, 197U, 45U, 109U, 101U, 109U, 77U, 109U, 12U, 77U, 202U,
    192U, 206U, 204U, MAX_uint8_T, 238U, 206U, 158U, 110U, 142U, 30U, 6U, 38U,
    54U, 46U, 62U, 182U, 54U, 54U, 54U, 92U, 56U, 92U, 125U, 60U, 92U, 252U,
    108U, 28U, 108U, 165U, 226U, 47U, 175U, 165U, 165U, 143U, 161U, 37U, 133U,
    164U, 132U, 132U, 134U, 192U, 164U, 150U, 132U, 128U, 133U, 239U, 79U, 111U,
    111U, 111U, 111U, 111U, 127U, 111U, 103U, MAX_uint8_T, 175U, 183U, 191U,
    142U, MAX_uint8_T, 191U, 191U, 183U, 191U, 90U, 90U, 67U, 122U, 218U, 90U,
    122U, 88U, 75U, 122U, 245U, 133U, 245U, 213U, 157U, 245U, 133U, 148U, 133U,
    196U };

  static const uint8_T uv96[320]{ 191U, MAX_uint8_T, 63U, 63U, 126U, 55U, 63U,
    55U, 167U, 62U, 223U, 111U, 199U, 223U, 199U, 223U, 207U, 175U, 207U, 239U,
    228U, 224U, 96U, 96U, 230U, 105U, 98U, 234U, 228U, 96U, 142U, 134U, 139U,
    203U, 142U, 174U, 142U, 143U, 222U, 138U, 254U, 207U, 222U, 247U, 223U, 254U,
    254U, 214U, 252U, 223U, 51U, 19U, 19U, 51U, 19U, 3U, 147U, 51U, 51U, 19U,
    206U, 222U, 206U, 222U, 158U, 207U, 222U, 206U, 206U, 206U, 252U, 232U, 248U,
    248U, 232U, 248U, 252U, MAX_uint8_T, 252U, 232U, 83U, 131U, 23U, 23U, 23U,
    22U, 23U, 87U, 223U, 87U, 234U, 246U, 228U, 238U, 166U, 238U, 196U, 230U,
    250U, 228U, 157U, 157U, 221U, 221U, 223U, 152U, 220U, 220U, 185U, 157U, 239U,
    239U, 231U, 167U, 175U, 239U, 231U, 231U, 238U, 139U, 73U, 73U, 65U, 73U,
    73U, 81U, 105U, 97U, 233U, 67U, 108U, 236U, 104U, 109U, 238U, 236U, 236U,
    104U, 232U, 200U, 191U, MAX_uint8_T, 191U, 191U, 191U, 251U, 191U, 191U,
    253U, MAX_uint8_T, 167U, 135U, 196U, 164U, 196U, 0U, 196U, 0U, 165U, 132U,
    95U, 126U, 127U, 127U, 127U, 127U, 127U, 127U, 95U, 121U, 198U, 197U, 204U,
    219U, 237U, 201U, 235U, 238U, 203U, 200U, 151U, 247U, 151U, 151U, 191U, 23U,
    151U, 23U, 23U, 151U, 239U, 231U, MAX_uint8_T, 239U, 231U, 239U, 231U, 175U,
    239U, MAX_uint8_T, 237U, 204U, 236U, 252U, 236U, 237U, 238U, 252U, 245U,
    206U, 99U, 99U, 50U, 178U, 195U, 35U, 3U, 186U, 99U, 35U, 109U, 238U, 77U,
    109U, 239U, 108U, 46U, 77U, 78U, 111U, 190U, 232U, 158U, 254U, 254U, 190U,
    MAX_uint8_T, 191U, MAX_uint8_T, 190U, 58U, 58U, 62U, 122U, 58U, 120U, 58U,
    62U, 62U, 58U, 79U, 88U, 78U, 95U, 103U, 13U, 71U, 14U, 94U, 77U, 237U, 205U,
    175U, 175U, 207U, 175U, 175U, 175U, 239U, 141U, 188U, 191U, 244U, 167U, 191U,
    188U, 189U, 165U, 188U, 189U, 191U, 127U, 191U, 183U, 55U, 61U, 63U, 253U,
    159U, 119U, MAX_uint8_T, MAX_uint8_T, 191U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, 254U, MAX_uint8_T, 191U, 248U, 122U, 120U, 252U,
    60U, 240U, 188U, 248U, 249U, 124U, 85U, 213U, 212U, 213U, 84U, 209U, 213U,
    204U, 133U, 196U };

  static const uint8_T uv97[320]{ 147U, 146U, 155U, 83U, 19U, 139U, 22U, 179U,
    23U, 147U, 95U, 91U, 223U, 91U, 223U, 91U, 79U, 207U, 95U, 223U, 71U, 106U,
    78U, 3U, 70U, 103U, 70U, 102U, 70U, 111U, 158U, 188U, 190U, 140U, 159U, 158U,
    190U, 158U, 143U, 156U, 38U, 118U, 62U, 58U, 118U, 111U, 22U, 12U, 50U, 54U,
    146U, 130U, 146U, 146U, 146U, 148U, 130U, 147U, 146U, 146U, 238U, 190U, 158U,
    170U, 174U, 190U, 174U, 238U, 174U, 174U, 244U, 246U, 244U, 96U, 247U, 246U,
    224U, 230U, 240U, 119U, 212U, 156U, 149U, 173U, 28U, 157U, 148U, 212U, 188U,
    156U, 74U, 68U, 72U, 200U, 72U, 74U, 130U, 70U, 200U, 72U, 210U, 210U, 214U,
    210U, 90U, 210U, 218U, 210U, 90U, 210U, 230U, 231U, 231U, 231U, 231U, 231U,
    231U, 199U, 231U, 231U, 113U, 45U, 109U, 236U, 105U, 44U, 97U, 33U, 109U,
    57U, 202U, 206U, 238U, 206U, 234U, 206U, 234U, 200U, 238U, 142U, 181U, 179U,
    178U, 183U, 182U, 183U, 177U, 182U, 183U, 182U, 229U, 64U, 193U, 196U, 196U,
    229U, 65U, 65U, 192U, 225U, 110U, 110U, 110U, 230U, 126U, 238U, 126U, 106U,
    118U, 110U, 224U, 233U, 227U, 229U, 235U, 227U, 225U, 226U, 237U, 163U, 62U,
    151U, 191U, 127U, 23U, 191U, 63U, 31U, 191U, 31U, 239U, 199U, 231U, 231U,
    239U, 199U, 231U, 207U, 231U, 205U, 237U, 196U, 237U, 197U, 229U, 229U, 232U,
    236U, 229U, 229U, 175U, 159U, 139U, 131U, 153U, 143U, 131U, 175U, 145U, 153U,
    6U, 6U, 6U, 134U, 5U, 38U, 14U, 70U, 13U, 36U, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, 204U, MAX_uint8_T, 237U, 239U, MAX_uint8_T, 238U, MAX_uint8_T,
    176U, 176U, 178U, 176U, 52U, 50U, 176U, 176U, 180U, 48U, 42U, 36U, 99U, 48U,
    46U, 122U, 38U, 42U, 38U, 43U, 234U, 170U, 234U, 171U, 174U, 234U, 239U,
    234U, 175U, 170U, 128U, 136U, 136U, 138U, 128U, 138U, 136U, 128U, 128U, 128U,
    61U, 61U, 63U, 12U, 61U, 31U, 61U, 61U, 45U, 61U, 187U, 189U, 190U, 38U,
    190U, 189U, 251U, 156U, 183U, 156U, 120U, 57U, 57U, 41U, 185U, 57U, 49U,
    120U, 41U, 57U, 29U, 217U, 93U, 85U, 221U, 221U, 8U, 204U, 213U, 221U };

  static const uint8_T uv98[320]{ 27U, 26U, 23U, 27U, 63U, 27U, 27U, 94U, 27U,
    63U, 159U, 91U, 91U, 207U, 95U, 91U, 95U, 95U, 30U, 75U, 98U, 98U, 66U, 98U,
    98U, 99U, 98U, 106U, 99U, 98U, 140U, 156U, 132U, 142U, 142U, 133U, 156U,
    174U, 141U, 142U, 118U, 114U, 118U, 214U, 118U, 114U, 118U, 50U, 118U, 86U,
    146U, 146U, 18U, 146U, 146U, 18U, 146U, 146U, 178U, 146U, 238U, 190U, 238U,
    238U, 238U, 191U, 190U, 62U, 170U, 234U, 119U, 114U, 112U, 247U, 112U, 112U,
    246U, 112U, 83U, 112U, 85U, 173U, 37U, 21U, 213U, 45U, 29U, 53U, 29U, 133U,
    64U, 196U, 192U, 192U, 192U, 200U, 76U, 204U, 200U, 196U, 222U, 222U, 219U,
    222U, 222U, 94U, 94U, 223U, 94U, 223U, 231U, 231U, 231U, 231U, 231U, 231U,
    231U, 231U, 231U, 135U, 41U, 41U, 73U, 105U, 105U, 125U, 41U, 77U, 89U, 105U,
    174U, 206U, 206U, 238U, 238U, 14U, 238U, 206U, 174U, 206U, 182U, 183U, 183U,
    182U, 183U, 183U, 183U, 163U, 183U, 183U, 228U, 196U, 196U, 228U, 228U, 228U,
    228U, 208U, 228U, 196U, 126U, 110U, 126U, 126U, 126U, 118U, 126U, 118U, 126U,
    126U, 171U, 253U, 237U, 239U, 237U, 237U, 235U, 253U, 173U, 233U, 151U, 151U,
    31U, 151U, 151U, 151U, 151U, 159U, 151U, 151U, 237U, 199U, 239U, 239U, 239U,
    239U, 207U, 231U, 173U, 239U, 197U, 196U, 205U, 253U, 237U, 197U, 197U, 204U,
    149U, 204U, 155U, 155U, 147U, 155U, 147U, 144U, 154U, 147U, 152U, 179U, 36U,
    36U, 5U, 44U, 36U, 37U, 36U, 44U, 37U, 36U, MAX_uint8_T, 236U, 204U,
    MAX_uint8_T, 239U, 236U, 239U, 206U, 206U, 236U, 50U, 50U, 176U, 58U, 50U,
    54U, 54U, 242U, 54U, 50U, 109U, 101U, 108U, 111U, 111U, 109U, 125U, 229U,
    111U, 109U, 170U, 170U, 171U, 175U, 170U, 170U, 174U, 171U, 170U, 138U, 128U,
    131U, 128U, 128U, 128U, 128U, 130U, 131U, 128U, 137U, 63U, 39U, 45U, 63U,
    63U, 47U, 63U, 47U, 191U, 55U, 142U, 183U, 183U, 254U, 191U, 183U, 188U,
    183U, 238U, 191U, 249U, 45U, 57U, 248U, 120U, 41U, 57U, 47U, 57U, 120U, 221U,
    221U, 213U, 221U, 221U, 253U, 221U, 85U, 213U, 212U };

  static const uint8_T uv99[320]{ 59U, 27U, 51U, 27U, 59U, 59U, 51U, 51U, 63U,
    59U, 221U, 223U, 207U, 223U, 205U, 159U, 95U, 207U, 95U, 223U, 106U, 123U,
    106U, 107U, 107U, 99U, 107U, 107U, 107U, 107U, 238U, 254U, 238U, 236U, 234U,
    205U, 254U, 206U, 238U, 206U, 118U, 126U, 86U, 118U, 214U, 118U, 118U, 118U,
    118U, 118U, 215U, 133U, 131U, 147U, 211U, 147U, 131U, 131U, 147U, 147U, 223U,
    MAX_uint8_T, 235U, MAX_uint8_T, 239U, 239U, 239U, 239U, 235U, 239U, 244U,
    244U, 244U, 119U, 253U, 119U, 246U, 247U, 112U, 245U, 213U, 157U, 148U, 29U,
    87U, 85U, 213U, 84U, 85U, 85U, 76U, 72U, 0U, 72U, 64U, 72U, 72U, 64U, 72U,
    72U, 220U, 220U, 216U, 94U, 220U, 94U, 220U, 218U, 223U, 220U, 167U, 230U,
    230U, 231U, 130U, 230U, 230U, 230U, 230U, 230U, 57U, 125U, 113U, 57U, 113U,
    121U, 57U, 113U, 121U, 57U, 221U, 223U, 201U, 207U, 205U, 108U, 207U, 232U,
    205U, 205U, 182U, 183U, 176U, 182U, 182U, 182U, 181U, 180U, 183U, 182U, 96U,
    96U, 64U, 96U, 96U, 228U, 96U, 96U, 96U, 100U, 126U, 254U, 126U, 126U, 126U,
    126U, 126U, 126U, 126U, 126U, 184U, 251U, 170U, 187U, 234U, 170U, 235U, 234U,
    232U, 170U, 151U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 239U, 239U,
    207U, 205U, 239U, 237U, 207U, 239U, 239U, 239U, 201U, 195U, 202U, 195U, 219U,
    221U, 201U, 201U, 201U, 203U, 187U, 171U, 187U, 187U, 187U, 186U, 187U, 187U,
    179U, 187U, 52U, 42U, 12U, 36U, 60U, 37U, 36U, 36U, 44U, 36U, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, MAX_uint8_T,
    MAX_uint8_T, MAX_uint8_T, MAX_uint8_T, 115U, 242U, 240U, 118U, 122U, 54U,
    114U, 48U, 114U, 114U, 109U, 253U, 173U, 109U, 77U, 109U, 45U, 44U, 237U,
    109U, 170U, 174U, 170U, 170U, 175U, 170U, 170U, 174U, 171U, 170U, 137U, 136U,
    128U, 128U, 192U, 192U, 136U, 128U, 128U, 136U, 55U, 63U, 61U, 63U, 53U, 63U,
    61U, 61U, 63U, 63U, 158U, 154U, 138U, 142U, 154U, 142U, 155U, 154U, 191U,
    158U, 116U, 49U, 112U, 241U, 240U, 240U, 112U, 240U, 112U, 240U, 251U, 249U,
    169U, 249U, 248U, 253U, 249U, 253U, 241U, 253U };

  __m128 r1;
  __m128 r3;
  coder::ORBPoints currPoints;
  coder::ORBPoints prePoints;
  coder::b_binaryFeatures currFeatures;
  coder::b_rigidtform3d curPoseSingle;
  coder::b_rigidtform3d unusedExpr;
  coder::bagOfFeatures bof;
  coder::binaryFeatures preFeatures;
  coder::c_rigidtform3d currPose;
  coder::cameraIntrinsics intrinsics;
  coder::imageviewset vSetKeyFrames;
  coder::imageviewset vSetKeyFramesOptim;
  coder::invertedImageIndex loopDatabase;
  coder::pointTrack tracks;
  coder::projtform2d tformH;
  coder::rigidtform3d relPose;
  coder::rtString t48_bag_Encoder_Normalization;
  coder::table cameraPosesTable;
  coder::table refinedAbsPoses;
  coder::vision::PointTracker tracker;
  coder::vision::internal::bof::EncoderBinaryFeatures lobj_4;
  coder::vision::internal::bof::EncoderVocabularyTree lobj_5;
  coder::worldpointset b_mapPointSet;
  coder::worldpointset mapPointSet;
  coder::array<coder::b_ORBPoints, 2U> c_expl_temp;
  coder::array<coder::b_ORBPoints, 1U> expl_temp;
  coder::array<coder::b_rigidtform3d, 1U> b_aPoses;
  coder::array<cell_wrap_8, 2U> b_expl_temp;
  coder::array<cell_wrap_8, 2U> t49_Features;
  coder::array<real_T, 2U> dist;
  coder::array<real_T, 1U> inlierTformIdx;
  coder::array<real_T, 1U> localPointsIndices;
  coder::array<real_T, 1U> mapPointsIdx;
  coder::array<real_T, 1U> newPointIdx;
  coder::array<int32_T, 1U> b_r;
  coder::array<int32_T, 1U> r2;
  coder::array<int32_T, 1U> r6;
  coder::array<real32_T, 2U> b_refinedPoints;
  coder::array<real32_T, 2U> currMatchedPoints;
  coder::array<real32_T, 2U> inlierCurrPoints;
  coder::array<real32_T, 2U> inlierPrePoints;
  coder::array<real32_T, 2U> preMatchedPoints;
  coder::array<real32_T, 2U> refinedPoints;
  coder::array<real32_T, 2U> xyzWorldPoints;
  coder::array<real32_T, 2U> z;
  coder::array<uint32_T, 2U> c_indexPairs;
  coder::array<uint32_T, 2U> indexPairs;
  coder::array<uint32_T, 1U> b_indexPairs;
  coder::array<uint32_T, 1U> localKeyFrameIds;
  coder::array<uint32_T, 1U> localKeyFrameIdsInternal;
  coder::array<uint8_T, 1U> addedFramesIdx;
  coder::array<boolean_T, 1U> inlierTriangulationIdx;
  coder::array<boolean_T, 1U> r4;
  coder::array<boolean_T, 1U> r5;
  coder::bounded_array<coder::b_rigidtform3d, 2U, 1U> aPoses;
  coder::bounded_array<cell_wrap_25, 1U, 1U> a__1;
  coder::bounded_array<cell_wrap_25, 1U, 1U> index2d;
  cell_wrap_16 bagObj_Encoder_Vocabulary_data[111];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T U[9];
  real_T V[9];
  real_T t49_AbsolutePose[9];
  real_T currKeyFrameId;
  real_T d;
  real_T numPointsRefKeyFrame;
  real_T validFraction;
  int32_T validLoopCandidates_size[2];
  int32_T currFrameIdx;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T lastKeyFrameIdx;
  int32_T loop_ub_tmp;
  int32_T trueCount;
  real32_T A_in[16];
  real32_T Ac[16];
  real32_T b_Ac[16];
  real32_T R[9];
  real32_T b_A_in[9];
  real32_T medianDepth;
  real32_T scoreF;
  real32_T x;
  uint32_T validLoopCandidates_data[60];
  boolean_T isLoopClosed;
  boolean_T isMapInitialized;
  boolean_T isValid;
  st.prev = sp;
  st.tls = sp->tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  tracker.matlabCodegenIsDeleted = true;

  //  Set random seed for reproducibility
  st.site = &emlrtRSI;
  coder::rng(st);
  std::copy(&imagesCell[0].f1[0], &imagesCell[0].f1[307200], &SD->f5.currI[0]);

  //  Create a cameraIntrinsics object to store the camera intrinsic parameters.
  //  The intrinsics for the dataset can be found at the following page:
  //  https://vision.in.tum.de/data/datasets/rgbd-dataset/file_formats
  //  Note that the images in the dataset are already undistorted, hence there
  //  is no need to specify the distortion coefficients.
  //  in units of pixels
  st.site = &b_emlrtRSI;
  intrinsics.init(st);

  //  Detect and extract ORB features
  st.site = &c_emlrtRSI;
  b_helperDetectAndExtractFeature(SD, st, imagesCell[0].f1, preFeatures,
    prePoints);
  currFrameIdx = 1;

  //  Preserve the first frame
  isMapInitialized = false;
  st.site = &qc_emlrtRSI;
  relPose.init(st);
  xyzWorldPoints.set_size(&th_emlrtRTEI, sp, 0, 3);
  st.site = &rc_emlrtRSI;
  currPoints.init(st);
  currFeatures.NumBits = 16.0;
  currFeatures.Features.set_size(&uh_emlrtRTEI, sp, 0, 2);
  indexPairs.set_size(&vh_emlrtRTEI, sp, 0, 2);

  //  Map initialization loop
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (currFrameIdx + 1 < 128) {
      std::copy(&imagesCell[currFrameIdx].f1[0], &imagesCell[currFrameIdx].f1
                [307200], &SD->f5.currI[0]);
      st.site = &d_emlrtRSI;
      b_helperDetectAndExtractFeature(SD, st, imagesCell[currFrameIdx].f1,
        currFeatures, currPoints);
      currFrameIdx++;

      //  Find putative feature matches
      st.site = &e_emlrtRSI;
      coder::matchFeatures(st, preFeatures, currFeatures, indexPairs);
      i = indexPairs.size(0);
      preMatchedPoints.set_size(&wh_emlrtRTEI, sp, indexPairs.size(0), 2);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < i; i2++) {
          if ((static_cast<int32_T>(indexPairs[i2]) < 1) || (static_cast<int32_T>
               (indexPairs[i2]) > prePoints.pLocation.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i2]),
              1, prePoints.pLocation.size(0), &d_emlrtBCI, (emlrtConstCTX)sp);
          }

          preMatchedPoints[i2 + preMatchedPoints.size(0) * i1] =
            prePoints.pLocation[(static_cast<int32_T>(indexPairs[i2]) +
            prePoints.pLocation.size(0) * i1) - 1];
        }
      }

      currMatchedPoints.set_size(&xh_emlrtRTEI, sp, indexPairs.size(0), 2);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < i; i2++) {
          if ((static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) < 1) ||
              (static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) >
               currPoints.pLocation.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i2 +
              indexPairs.size(0)]), 1, currPoints.pLocation.size(0), &e_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          currMatchedPoints[i2 + currMatchedPoints.size(0) * i1] =
            currPoints.pLocation[(static_cast<int32_T>(indexPairs[i2 +
            indexPairs.size(0)]) + currPoints.pLocation.size(0) * i1) - 1];
        }
      }

      //  If not enough matches are found, check the next frame
      if (indexPairs.size(0) >= 100) {
        //  Compute homography and evaluate reconstruction
        st.site = &f_emlrtRSI;
        medianDepth = helperComputeHomography(st, preMatchedPoints,
          currMatchedPoints, tformH, mapPointsIdx);

        //  Compute fundamental matrix and evaluate reconstruction
        st.site = &g_emlrtRSI;
        scoreF = helperComputeFundamentalMatrix(st, preMatchedPoints,
          currMatchedPoints, intrinsics, R, inlierTformIdx);

        //  Select the model based on a heuristic
        if (medianDepth / (medianDepth + scoreF) > 0.45) {
          lastKeyFrameIdx = mapPointsIdx.size(0);
          inlierTformIdx.set_size(&bi_emlrtRTEI, sp, mapPointsIdx.size(0));
          for (i1 = 0; i1 < lastKeyFrameIdx; i1++) {
            inlierTformIdx[i1] = mapPointsIdx[i1];
          }

          //  Computes the camera location up to scale. Use half of the
          //  points to reduce computation
          if (mapPointsIdx.size(0) < 1) {
            i1 = 1;
            i2 = -1;
          } else {
            i1 = 2;
            i2 = mapPointsIdx.size(0) - 1;
          }

          validLoopCandidates_size[0] = 1;
          st.site = &h_emlrtRSI;
          lastKeyFrameIdx = div_s32(st, i2, i1);
          validLoopCandidates_size[1] = lastKeyFrameIdx + 1;
          st.site = &h_emlrtRSI;
          coder::internal::indexShapeCheck(st, mapPointsIdx.size(0),
            validLoopCandidates_size);
          inlierPrePoints.set_size(&ci_emlrtRTEI, sp, lastKeyFrameIdx + 1, 2);
          for (i2 = 0; i2 < 2; i2++) {
            for (loop_ub_tmp = 0; loop_ub_tmp <= lastKeyFrameIdx; loop_ub_tmp++)
            {
              trueCount = static_cast<int32_T>(mapPointsIdx[i1 * loop_ub_tmp]);
              if ((trueCount < 1) || (trueCount > i)) {
                emlrtDynamicBoundsCheckR2012b(trueCount, 1, i, &g_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              inlierPrePoints[loop_ub_tmp + inlierPrePoints.size(0) * i2] =
                preMatchedPoints[(trueCount + preMatchedPoints.size(0) * i2) - 1];
            }
          }

          if (mapPointsIdx.size(0) < 1) {
            i1 = 1;
            i2 = -1;
          } else {
            i1 = 2;
            i2 = mapPointsIdx.size(0) - 1;
          }

          validLoopCandidates_size[0] = 1;
          st.site = &i_emlrtRSI;
          lastKeyFrameIdx = div_s32(st, i2, i1);
          validLoopCandidates_size[1] = lastKeyFrameIdx + 1;
          st.site = &i_emlrtRSI;
          coder::internal::indexShapeCheck(st, mapPointsIdx.size(0),
            validLoopCandidates_size);
          inlierCurrPoints.set_size(&di_emlrtRTEI, sp, lastKeyFrameIdx + 1, 2);
          for (i2 = 0; i2 < 2; i2++) {
            for (loop_ub_tmp = 0; loop_ub_tmp <= lastKeyFrameIdx; loop_ub_tmp++)
            {
              trueCount = static_cast<int32_T>(mapPointsIdx[i1 * loop_ub_tmp]);
              if ((trueCount < 1) || (trueCount > i)) {
                emlrtDynamicBoundsCheckR2012b(trueCount, 1, i, &i_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              inlierCurrPoints[loop_ub_tmp + inlierCurrPoints.size(0) * i2] =
                currMatchedPoints[(trueCount + currMatchedPoints.size(0) * i2) -
                1];
            }
          }

          st.site = &j_emlrtRSI;
          validFraction = coder::estrelpose(st, tformH, intrinsics,
            inlierPrePoints, inlierCurrPoints, relPose);
        } else {
          //  Computes the camera location up to scale. Use half of the
          //  points to reduce computation
          if (inlierTformIdx.size(0) < 1) {
            i1 = 1;
            i2 = -1;
          } else {
            i1 = 2;
            i2 = inlierTformIdx.size(0) - 1;
          }

          validLoopCandidates_size[0] = 1;
          st.site = &k_emlrtRSI;
          lastKeyFrameIdx = div_s32(st, i2, i1);
          validLoopCandidates_size[1] = lastKeyFrameIdx + 1;
          st.site = &k_emlrtRSI;
          coder::internal::indexShapeCheck(st, inlierTformIdx.size(0),
            validLoopCandidates_size);
          inlierPrePoints.set_size(&yh_emlrtRTEI, sp, lastKeyFrameIdx + 1, 2);
          for (i2 = 0; i2 < 2; i2++) {
            for (loop_ub_tmp = 0; loop_ub_tmp <= lastKeyFrameIdx; loop_ub_tmp++)
            {
              trueCount = static_cast<int32_T>(inlierTformIdx[i1 * loop_ub_tmp]);
              if ((trueCount < 1) || (trueCount > i)) {
                emlrtDynamicBoundsCheckR2012b(trueCount, 1, i, &f_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              inlierPrePoints[loop_ub_tmp + inlierPrePoints.size(0) * i2] =
                preMatchedPoints[(trueCount + preMatchedPoints.size(0) * i2) - 1];
            }
          }

          if (inlierTformIdx.size(0) < 1) {
            i1 = 1;
            i2 = -1;
          } else {
            i1 = 2;
            i2 = inlierTformIdx.size(0) - 1;
          }

          validLoopCandidates_size[0] = 1;
          st.site = &l_emlrtRSI;
          lastKeyFrameIdx = div_s32(st, i2, i1);
          validLoopCandidates_size[1] = lastKeyFrameIdx + 1;
          st.site = &l_emlrtRSI;
          coder::internal::indexShapeCheck(st, inlierTformIdx.size(0),
            validLoopCandidates_size);
          inlierCurrPoints.set_size(&ai_emlrtRTEI, sp, lastKeyFrameIdx + 1, 2);
          for (i2 = 0; i2 < 2; i2++) {
            for (loop_ub_tmp = 0; loop_ub_tmp <= lastKeyFrameIdx; loop_ub_tmp++)
            {
              trueCount = static_cast<int32_T>(inlierTformIdx[i1 * loop_ub_tmp]);
              if ((trueCount < 1) || (trueCount > i)) {
                emlrtDynamicBoundsCheckR2012b(trueCount, 1, i, &h_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              inlierCurrPoints[loop_ub_tmp + inlierCurrPoints.size(0) * i2] =
                currMatchedPoints[(trueCount + currMatchedPoints.size(0) * i2) -
                1];
            }
          }

          st.site = &m_emlrtRSI;
          validFraction = coder::estrelpose(st, R, intrinsics, inlierPrePoints,
            inlierCurrPoints, relPose);
        }

        if ((!(validFraction < 0.9)) && (relPose.Data.size[0] *
             relPose.Data.size[1] != 3)) {
          //  Triangulate two views to obtain 3-D map points
          //  In degrees
          loop_ub_tmp = inlierTformIdx.size(0);
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            i2 = static_cast<int32_T>(inlierTformIdx[i1]);
            if ((i2 < 1) || (i2 > i)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i, &j_emlrtBCI,
                (emlrtConstCTX)sp);
            }
          }

          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            i2 = static_cast<int32_T>(inlierTformIdx[i1]);
            if ((i2 < 1) || (i2 > i)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i, &k_emlrtBCI,
                (emlrtConstCTX)sp);
            }
          }

          inlierCurrPoints.set_size(&ei_emlrtRTEI, sp, inlierTformIdx.size(0), 2);
          inlierPrePoints.set_size(&fi_emlrtRTEI, sp, inlierTformIdx.size(0), 2);
          for (i1 = 0; i1 < 2; i1++) {
            for (i2 = 0; i2 < loop_ub_tmp; i2++) {
              inlierCurrPoints[i2 + inlierCurrPoints.size(0) * i1] =
                preMatchedPoints[(static_cast<int32_T>(inlierTformIdx[i2]) +
                                  preMatchedPoints.size(0) * i1) - 1];
            }

            for (i2 = 0; i2 < loop_ub_tmp; i2++) {
              inlierPrePoints[i2 + inlierPrePoints.size(0) * i1] =
                currMatchedPoints[(static_cast<int32_T>(inlierTformIdx[i2]) +
                                   currMatchedPoints.size(0) * i1) - 1];
            }
          }

          currPose.init();
          st.site = &n_emlrtRSI;
          isValid = helperTriangulateTwoFrames(st, currPose, relPose,
            inlierCurrPoints, inlierPrePoints, intrinsics, xyzWorldPoints,
            inlierTriangulationIdx);
          if (isValid) {
            //  Get the original index of features in the two key frames
            lastKeyFrameIdx = inlierTriangulationIdx.size(0);
            trueCount = 0;
            for (int32_T b_i{0}; b_i < lastKeyFrameIdx; b_i++) {
              if (inlierTriangulationIdx[b_i]) {
                trueCount++;
              }
            }

            b_r.set_size(&gi_emlrtRTEI, sp, trueCount);
            trueCount = 0;
            for (int32_T b_i{0}; b_i < lastKeyFrameIdx; b_i++) {
              if (inlierTriangulationIdx[b_i]) {
                b_r[trueCount] = b_i;
                trueCount++;
              }
            }

            lastKeyFrameIdx = b_r.size(0);
            c_indexPairs.set_size(&hi_emlrtRTEI, sp, b_r.size(0), 2);
            for (i1 = 0; i1 < 2; i1++) {
              for (i2 = 0; i2 < lastKeyFrameIdx; i2++) {
                if ((b_r[i2] < 0) || (b_r[i2] > inlierTformIdx.size(0) - 1)) {
                  emlrtDynamicBoundsCheckR2012b(b_r[i2], 0, inlierTformIdx.size
                    (0) - 1, &m_emlrtBCI, (emlrtConstCTX)sp);
                }

                loop_ub_tmp = static_cast<int32_T>(inlierTformIdx[b_r[i2]]);
                if ((loop_ub_tmp < 1) || (loop_ub_tmp > i)) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i, &l_emlrtBCI,
                    (emlrtConstCTX)sp);
                }

                c_indexPairs[i2 + c_indexPairs.size(0) * i1] = indexPairs
                  [(loop_ub_tmp + indexPairs.size(0) * i1) - 1];
              }
            }

            indexPairs.set_size(&ii_emlrtRTEI, sp, c_indexPairs.size(0), 2);
            loop_ub_tmp = c_indexPairs.size(0) << 1;
            for (i1 = 0; i1 < loop_ub_tmp; i1++) {
              indexPairs[i1] = c_indexPairs[i1];
            }

            isMapInitialized = true;
            exitg1 = 1;
          }
        }
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  //  End of map initialization
  if (!isMapInitialized) {
    st.site = &o_emlrtRSI;
    coder::c_error(st);
  }

  st.site = &sc_emlrtRSI;
  vSetKeyFrames.init(st);

  //  Create an empty worldpointset object to store 3-D map points
  st.site = &tc_emlrtRSI;
  mapPointSet.init(st);

  //  Add the first key frame. Place the camera associated with the first
  //  key frame at the origin, oriented along the Z-axis
  st.site = &p_emlrtRSI;
  b_st.site = &hw_emlrtRSI;
  c_st.site = &iw_emlrtRSI;
  d_st.site = &jw_emlrtRSI;
  e_st.site = &kn_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if ((relPose.Translation.size[1] != 3) && (relPose.Translation.size[1] != 0))
  {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  d_st.site = &jw_emlrtRSI;
  e_st.site = &kn_emlrtRSI;
  f_st.site = &jj_emlrtRSI;
  if ((relPose.Translation.size[1] != 0) + 3 != 4) {
    emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  st.site = &p_emlrtRSI;
  unusedExpr.init(st);
  st.site = &p_emlrtRSI;
  vSetKeyFrames.addView(st, prePoints, preFeatures.Features);

  //  Add the second key frame
  st.site = &q_emlrtRSI;
  vSetKeyFrames.addView(st, relPose, currPoints, currFeatures.Features);

  //  Add connection between the first and the second key frame
  st.site = &r_emlrtRSI;
  vSetKeyFrames.addConnection(st, relPose, indexPairs);

  //  Add 3-D map points
  st.site = &s_emlrtRSI;
  mapPointSet.addWorldPoints(st, xyzWorldPoints, newPointIdx);

  //  Add observations of the map points
  //  Add image points corresponding to the map points in the first key frame
  i = indexPairs.size(0);
  b_indexPairs.set_size(&ji_emlrtRTEI, sp, indexPairs.size(0));
  for (i1 = 0; i1 < i; i1++) {
    b_indexPairs[i1] = indexPairs[i1];
  }

  st.site = &t_emlrtRSI;
  mapPointSet.addCorrespondences(st, newPointIdx, b_indexPairs);

  //  Add image points corresponding to the map points in the second key frame
  b_indexPairs.set_size(&ki_emlrtRTEI, sp, indexPairs.size(0));
  for (i1 = 0; i1 < i; i1++) {
    b_indexPairs[i1] = indexPairs[i1 + indexPairs.size(0)];
  }

  st.site = &u_emlrtRSI;
  mapPointSet.b_addCorrespondences(st, newPointIdx, b_indexPairs);
  t48_bag_Encoder_Normalization.Value.set_size(&gi_emlrtRTEI, sp, 1, 2);
  t48_bag_Encoder_Normalization.Value[0] = 'L';
  t48_bag_Encoder_Normalization.Value[1] = '2';
  std::copy(&uv[0], &uv[320], &bagObj_Encoder_Vocabulary_data[0].f1[0]);
  std::copy(&uv1[0], &uv1[320], &bagObj_Encoder_Vocabulary_data[1].f1[0]);
  std::copy(&uv2[0], &uv2[320], &bagObj_Encoder_Vocabulary_data[2].f1[0]);
  std::copy(&uv3[0], &uv3[320], &bagObj_Encoder_Vocabulary_data[3].f1[0]);
  std::copy(&uv4[0], &uv4[320], &bagObj_Encoder_Vocabulary_data[4].f1[0]);
  std::copy(&uv5[0], &uv5[320], &bagObj_Encoder_Vocabulary_data[5].f1[0]);
  std::copy(&uv6[0], &uv6[320], &bagObj_Encoder_Vocabulary_data[6].f1[0]);
  std::copy(&uv7[0], &uv7[320], &bagObj_Encoder_Vocabulary_data[7].f1[0]);
  std::copy(&uv8[0], &uv8[320], &bagObj_Encoder_Vocabulary_data[8].f1[0]);
  std::copy(&uv9[0], &uv9[320], &bagObj_Encoder_Vocabulary_data[9].f1[0]);
  std::copy(&uv10[0], &uv10[320], &bagObj_Encoder_Vocabulary_data[10].f1[0]);
  std::copy(&uv11[0], &uv11[320], &bagObj_Encoder_Vocabulary_data[11].f1[0]);
  std::copy(&uv12[0], &uv12[320], &bagObj_Encoder_Vocabulary_data[12].f1[0]);
  std::copy(&uv13[0], &uv13[320], &bagObj_Encoder_Vocabulary_data[13].f1[0]);
  std::copy(&uv14[0], &uv14[320], &bagObj_Encoder_Vocabulary_data[14].f1[0]);
  std::copy(&uv15[0], &uv15[320], &bagObj_Encoder_Vocabulary_data[15].f1[0]);
  std::copy(&uv16[0], &uv16[320], &bagObj_Encoder_Vocabulary_data[16].f1[0]);
  std::copy(&uv17[0], &uv17[320], &bagObj_Encoder_Vocabulary_data[17].f1[0]);
  std::copy(&uv18[0], &uv18[320], &bagObj_Encoder_Vocabulary_data[18].f1[0]);
  std::copy(&uv19[0], &uv19[320], &bagObj_Encoder_Vocabulary_data[19].f1[0]);
  std::copy(&uv20[0], &uv20[320], &bagObj_Encoder_Vocabulary_data[20].f1[0]);
  std::copy(&uv21[0], &uv21[320], &bagObj_Encoder_Vocabulary_data[21].f1[0]);
  std::copy(&uv22[0], &uv22[320], &bagObj_Encoder_Vocabulary_data[22].f1[0]);
  std::copy(&uv23[0], &uv23[320], &bagObj_Encoder_Vocabulary_data[23].f1[0]);
  std::copy(&uv24[0], &uv24[320], &bagObj_Encoder_Vocabulary_data[24].f1[0]);
  std::copy(&uv25[0], &uv25[320], &bagObj_Encoder_Vocabulary_data[25].f1[0]);
  std::copy(&uv26[0], &uv26[320], &bagObj_Encoder_Vocabulary_data[26].f1[0]);
  std::copy(&uv27[0], &uv27[320], &bagObj_Encoder_Vocabulary_data[27].f1[0]);
  std::copy(&uv28[0], &uv28[320], &bagObj_Encoder_Vocabulary_data[28].f1[0]);
  std::copy(&uv29[0], &uv29[320], &bagObj_Encoder_Vocabulary_data[29].f1[0]);
  std::copy(&uv30[0], &uv30[320], &bagObj_Encoder_Vocabulary_data[30].f1[0]);
  std::copy(&uv31[0], &uv31[320], &bagObj_Encoder_Vocabulary_data[31].f1[0]);
  std::copy(&uv32[0], &uv32[320], &bagObj_Encoder_Vocabulary_data[32].f1[0]);
  std::copy(&uv33[0], &uv33[320], &bagObj_Encoder_Vocabulary_data[33].f1[0]);
  std::copy(&uv34[0], &uv34[320], &bagObj_Encoder_Vocabulary_data[34].f1[0]);
  std::copy(&uv35[0], &uv35[320], &bagObj_Encoder_Vocabulary_data[35].f1[0]);
  std::copy(&uv36[0], &uv36[320], &bagObj_Encoder_Vocabulary_data[36].f1[0]);
  std::copy(&uv37[0], &uv37[320], &bagObj_Encoder_Vocabulary_data[37].f1[0]);
  std::copy(&uv38[0], &uv38[320], &bagObj_Encoder_Vocabulary_data[38].f1[0]);
  std::copy(&uv39[0], &uv39[320], &bagObj_Encoder_Vocabulary_data[39].f1[0]);
  std::copy(&uv40[0], &uv40[320], &bagObj_Encoder_Vocabulary_data[40].f1[0]);
  std::copy(&uv41[0], &uv41[320], &bagObj_Encoder_Vocabulary_data[41].f1[0]);
  std::copy(&uv42[0], &uv42[320], &bagObj_Encoder_Vocabulary_data[42].f1[0]);
  std::copy(&uv43[0], &uv43[320], &bagObj_Encoder_Vocabulary_data[43].f1[0]);
  std::copy(&uv44[0], &uv44[320], &bagObj_Encoder_Vocabulary_data[44].f1[0]);
  std::copy(&uv45[0], &uv45[320], &bagObj_Encoder_Vocabulary_data[45].f1[0]);
  std::copy(&uv46[0], &uv46[320], &bagObj_Encoder_Vocabulary_data[46].f1[0]);
  std::copy(&uv47[0], &uv47[320], &bagObj_Encoder_Vocabulary_data[47].f1[0]);
  std::copy(&uv48[0], &uv48[320], &bagObj_Encoder_Vocabulary_data[48].f1[0]);
  std::copy(&uv49[0], &uv49[320], &bagObj_Encoder_Vocabulary_data[49].f1[0]);
  std::copy(&uv50[0], &uv50[320], &bagObj_Encoder_Vocabulary_data[50].f1[0]);
  std::copy(&uv51[0], &uv51[320], &bagObj_Encoder_Vocabulary_data[51].f1[0]);
  std::copy(&uv52[0], &uv52[320], &bagObj_Encoder_Vocabulary_data[52].f1[0]);
  std::copy(&uv53[0], &uv53[320], &bagObj_Encoder_Vocabulary_data[53].f1[0]);
  std::copy(&uv54[0], &uv54[320], &bagObj_Encoder_Vocabulary_data[54].f1[0]);
  std::copy(&uv55[0], &uv55[320], &bagObj_Encoder_Vocabulary_data[55].f1[0]);
  std::copy(&uv56[0], &uv56[320], &bagObj_Encoder_Vocabulary_data[56].f1[0]);
  std::copy(&uv57[0], &uv57[320], &bagObj_Encoder_Vocabulary_data[57].f1[0]);
  std::copy(&uv58[0], &uv58[320], &bagObj_Encoder_Vocabulary_data[58].f1[0]);
  std::copy(&uv59[0], &uv59[320], &bagObj_Encoder_Vocabulary_data[59].f1[0]);
  std::copy(&uv60[0], &uv60[320], &bagObj_Encoder_Vocabulary_data[60].f1[0]);
  std::copy(&uv61[0], &uv61[320], &bagObj_Encoder_Vocabulary_data[61].f1[0]);
  std::copy(&uv62[0], &uv62[320], &bagObj_Encoder_Vocabulary_data[62].f1[0]);
  std::copy(&uv63[0], &uv63[320], &bagObj_Encoder_Vocabulary_data[63].f1[0]);
  std::copy(&uv64[0], &uv64[320], &bagObj_Encoder_Vocabulary_data[64].f1[0]);
  std::copy(&uv65[0], &uv65[320], &bagObj_Encoder_Vocabulary_data[65].f1[0]);
  std::copy(&uv66[0], &uv66[320], &bagObj_Encoder_Vocabulary_data[66].f1[0]);
  std::copy(&uv67[0], &uv67[320], &bagObj_Encoder_Vocabulary_data[67].f1[0]);
  std::copy(&uv68[0], &uv68[320], &bagObj_Encoder_Vocabulary_data[68].f1[0]);
  std::copy(&uv69[0], &uv69[320], &bagObj_Encoder_Vocabulary_data[69].f1[0]);
  std::copy(&uv70[0], &uv70[320], &bagObj_Encoder_Vocabulary_data[70].f1[0]);
  std::copy(&uv71[0], &uv71[320], &bagObj_Encoder_Vocabulary_data[71].f1[0]);
  std::copy(&uv72[0], &uv72[320], &bagObj_Encoder_Vocabulary_data[72].f1[0]);
  std::copy(&uv73[0], &uv73[320], &bagObj_Encoder_Vocabulary_data[73].f1[0]);
  std::copy(&uv74[0], &uv74[320], &bagObj_Encoder_Vocabulary_data[74].f1[0]);
  std::copy(&uv75[0], &uv75[320], &bagObj_Encoder_Vocabulary_data[75].f1[0]);
  std::copy(&uv76[0], &uv76[320], &bagObj_Encoder_Vocabulary_data[76].f1[0]);
  std::copy(&uv77[0], &uv77[320], &bagObj_Encoder_Vocabulary_data[77].f1[0]);
  std::copy(&uv78[0], &uv78[320], &bagObj_Encoder_Vocabulary_data[78].f1[0]);
  std::copy(&uv79[0], &uv79[320], &bagObj_Encoder_Vocabulary_data[79].f1[0]);
  std::copy(&uv80[0], &uv80[320], &bagObj_Encoder_Vocabulary_data[80].f1[0]);
  std::copy(&uv81[0], &uv81[320], &bagObj_Encoder_Vocabulary_data[81].f1[0]);
  std::copy(&uv82[0], &uv82[320], &bagObj_Encoder_Vocabulary_data[82].f1[0]);
  std::copy(&uv83[0], &uv83[320], &bagObj_Encoder_Vocabulary_data[83].f1[0]);
  std::copy(&uv84[0], &uv84[320], &bagObj_Encoder_Vocabulary_data[84].f1[0]);
  std::copy(&uv85[0], &uv85[320], &bagObj_Encoder_Vocabulary_data[85].f1[0]);
  std::copy(&uv86[0], &uv86[320], &bagObj_Encoder_Vocabulary_data[86].f1[0]);
  std::copy(&uv87[0], &uv87[320], &bagObj_Encoder_Vocabulary_data[87].f1[0]);
  std::copy(&uv88[0], &uv88[320], &bagObj_Encoder_Vocabulary_data[88].f1[0]);
  std::copy(&uv89[0], &uv89[320], &bagObj_Encoder_Vocabulary_data[89].f1[0]);
  std::copy(&uv90[0], &uv90[320], &bagObj_Encoder_Vocabulary_data[90].f1[0]);
  std::copy(&uv91[0], &uv91[320], &bagObj_Encoder_Vocabulary_data[91].f1[0]);
  std::copy(&uv92[0], &uv92[320], &bagObj_Encoder_Vocabulary_data[92].f1[0]);
  std::copy(&uv93[0], &uv93[320], &bagObj_Encoder_Vocabulary_data[93].f1[0]);
  std::copy(&uv94[0], &uv94[320], &bagObj_Encoder_Vocabulary_data[94].f1[0]);
  std::copy(&uv95[0], &uv95[320], &bagObj_Encoder_Vocabulary_data[95].f1[0]);
  std::copy(&uv96[0], &uv96[320], &bagObj_Encoder_Vocabulary_data[96].f1[0]);
  std::copy(&uv97[0], &uv97[320], &bagObj_Encoder_Vocabulary_data[97].f1[0]);
  std::copy(&uv98[0], &uv98[320], &bagObj_Encoder_Vocabulary_data[98].f1[0]);
  std::copy(&uv99[0], &uv99[320], &bagObj_Encoder_Vocabulary_data[99].f1[0]);
  std::copy(&uv100[0], &uv100[320], &bagObj_Encoder_Vocabulary_data[100].f1[0]);
  std::copy(&uv101[0], &uv101[320], &bagObj_Encoder_Vocabulary_data[101].f1[0]);
  std::copy(&uv102[0], &uv102[320], &bagObj_Encoder_Vocabulary_data[102].f1[0]);
  std::copy(&uv103[0], &uv103[320], &bagObj_Encoder_Vocabulary_data[103].f1[0]);
  std::copy(&uv104[0], &uv104[320], &bagObj_Encoder_Vocabulary_data[104].f1[0]);
  std::copy(&uv105[0], &uv105[320], &bagObj_Encoder_Vocabulary_data[105].f1[0]);
  std::copy(&uv106[0], &uv106[320], &bagObj_Encoder_Vocabulary_data[106].f1[0]);
  std::copy(&uv107[0], &uv107[320], &bagObj_Encoder_Vocabulary_data[107].f1[0]);
  std::copy(&uv108[0], &uv108[320], &bagObj_Encoder_Vocabulary_data[108].f1[0]);
  std::copy(&uv109[0], &uv109[320], &bagObj_Encoder_Vocabulary_data[109].f1[0]);
  std::copy(&uv110[0], &uv110[320], &bagObj_Encoder_Vocabulary_data[110].f1[0]);
  st.site = &wc_emlrtRSI;
  coder::bagOfFeatures::loadobj(st, t48_bag_Encoder_Normalization,
    bagObj_Encoder_VocabularySizes, bagObj_Encoder_Vocabulary_data, lobj_4,
    lobj_5, bof);

  //  Initialize the place recognition database
  st.site = &v_emlrtRSI;
  loopDatabase.init(st, bof);

  //  Add features of the first two key frames to the database
  st.site = &w_emlrtRSI;
  loopDatabase.addImageFeatures(st, preFeatures);
  st.site = &x_emlrtRSI;
  loopDatabase.addImageFeatures(st, currFeatures);

  //
  //  Run full bundle adjustment on the first two key frames
  vSetKeyFramesOptim = vSetKeyFrames;
  st.site = &y_emlrtRSI;
  vSetKeyFramesOptim.findTracks(st, tracks);
  st.site = &ab_emlrtRSI;
  b_st.site = &csb_emlrtRSI;
  vSetKeyFrames.get_Views(b_st, b_indexPairs, t49_Features, expl_temp,
    unusedExpr);

  //  Create poses table
  aPoses.size[0] = 2;
  st.site = &bb_emlrtRSI;
  unusedExpr.parenReference(st, 1.0, &aPoses.data[0]);
  st.site = &bb_emlrtRSI;
  unusedExpr.parenReference(st, 2.0, &aPoses.data[1]);
  b_aPoses.set(&aPoses.data[0], aPoses.size[0]);
  st.site = &uc_emlrtRSI;
  cameraPosesTable.init(st, vSetKeyFrames.ViewId, b_aPoses);
  st.site = &cb_emlrtRSI;
  coder::bundleAdjustment(st, xyzWorldPoints, tracks, cameraPosesTable,
    &intrinsics, refinedPoints, refinedAbsPoses);

  //  Scale the map and the camera pose using the median depth of map points
  lastKeyFrameIdx = refinedPoints.size(0);
  b_refinedPoints.set_size(&li_emlrtRTEI, sp, 3, refinedPoints.size(0));
  for (i1 = 0; i1 < lastKeyFrameIdx; i1++) {
    b_refinedPoints[3 * i1] = refinedPoints[i1];
    b_refinedPoints[3 * i1 + 1] = refinedPoints[i1 + refinedPoints.size(0)];
    b_refinedPoints[3 * i1 + 2] = refinedPoints[i1 + refinedPoints.size(0) * 2];
  }

  st.site = &db_emlrtRSI;
  coder::vecnorm(st, b_refinedPoints, z);
  st.site = &db_emlrtRSI;
  medianDepth = coder::median(st, z);
  lastKeyFrameIdx = refinedAbsPoses.data.f2.size(0);
  aPoses.size[0] = refinedAbsPoses.data.f2.size(0);
  for (i1 = 0; i1 < lastKeyFrameIdx; i1++) {
    aPoses.data[i1] = refinedAbsPoses.data.f2[i1];
  }

  aPoses.data[1] = refinedAbsPoses.data.f2[1];
  aPoses.data[1].Translation[0] = refinedAbsPoses.data.f2[1].Translation[0] /
    medianDepth;
  aPoses.data[1].Translation[1] = refinedAbsPoses.data.f2[1].Translation[1] /
    medianDepth;
  aPoses.data[1].Translation[2] = refinedAbsPoses.data.f2[1].Translation[2] /
    medianDepth;
  lastKeyFrameIdx = relPose.Translation.size[1];
  z.set_size(&mi_emlrtRTEI, sp, 1, relPose.Translation.size[1]);
  for (i1 = 0; i1 < lastKeyFrameIdx; i1++) {
    z[i1] = relPose.Translation.data[i1] / medianDepth;
  }

  st.site = &eb_emlrtRSI;
  if (z.size(1) != 3) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
      "images:geotrans:badTranslation3D", "images:geotrans:badTranslation3D", 0);
  }

  relPose.Translation.size[0] = 1;
  relPose.Translation.size[1] = 3;
  for (i1 = 0; i1 < 3; i1++) {
    relPose.Translation.data[i1] = z[i1];
  }

  //  Update key frames with the refined poses
  st.site = &fb_emlrtRSI;
  st.site = &gb_emlrtRSI;
  vSetKeyFrames.updateView(st, refinedAbsPoses.data.f1[0], aPoses.data[0]);
  st.site = &gb_emlrtRSI;
  vSetKeyFrames.updateView(st, refinedAbsPoses.data.f1[1], aPoses.data[1]);
  st.site = &hb_emlrtRSI;
  vSetKeyFrames.updateConnection(st, relPose);

  //  Update map points with the refined positions
  xyzWorldPoints.set_size(&ni_emlrtRTEI, sp, refinedPoints.size(0), 3);
  loop_ub_tmp = refinedPoints.size(0) * 3;
  lastKeyFrameIdx = (loop_ub_tmp / 4) << 2;
  trueCount = lastKeyFrameIdx - 4;
  for (i1 = 0; i1 <= trueCount; i1 += 4) {
    r1 = _mm_loadu_ps(&refinedPoints[i1]);
    _mm_storeu_ps(&xyzWorldPoints[i1], _mm_div_ps(r1, _mm_set1_ps(medianDepth)));
  }

  for (i1 = lastKeyFrameIdx; i1 < loop_ub_tmp; i1++) {
    xyzWorldPoints[i1] = refinedPoints[i1] / medianDepth;
  }

  st.site = &ib_emlrtRSI;
  mapPointSet.updateWorldPoints(st, newPointIdx, xyzWorldPoints);

  //  Update view direction and depth
  st.site = &jb_emlrtRSI;
  vSetKeyFrames.get_Views(st, b_indexPairs, t49_Features, expl_temp, unusedExpr);
  st.site = &jb_emlrtRSI;
  mapPointSet.updateLimitsAndDirection(st, newPointIdx, b_indexPairs, unusedExpr,
    t49_Features);

  //  % Update representative view
  st.site = &kb_emlrtRSI;
  vSetKeyFrames.get_Views(st, b_indexPairs, t49_Features, expl_temp, unusedExpr);
  st.site = &kb_emlrtRSI;
  mapPointSet.updateRepresentativeView(st, newPointIdx, b_indexPairs,
    t49_Features);

  //  ViewId of the current key frame
  currKeyFrameId = 2.0;

  //  ViewId of the last key frame
  validFraction = 2.0;

  //  Index of the last key frame in the input image sequence
  lastKeyFrameIdx = currFrameIdx;

  //  Indices of all the key frames in the input image sequence
  addedFramesIdx.set_size(&oi_emlrtRTEI, sp, 2);
  addedFramesIdx[0] = 1U;
  addedFramesIdx[1] = static_cast<uint8_T>(currFrameIdx);
  isLoopClosed = false;
  isMapInitialized = true;
  numPointsRefKeyFrame = 0.0;
  localPointsIndices.set_size(&pi_emlrtRTEI, sp, 0);
  localKeyFrameIdsInternal.set_size(&qi_emlrtRTEI, sp, 0);

  //  Create and initialize the KLT tracker
  st.site = &lb_emlrtRSI;
  tracker.init();
  inlierPrePoints.set_size(&ri_emlrtRTEI, sp, indexPairs.size(0), 2);
  for (i1 = 0; i1 < 2; i1++) {
    for (i2 = 0; i2 < i; i2++) {
      if ((static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) < 1) || (
           static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) >
           currPoints.pLocation.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(indexPairs[i2 +
          indexPairs.size(0)]), 1, currPoints.pLocation.size(0), &n_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      inlierPrePoints[i2 + inlierPrePoints.size(0) * i1] = currPoints.pLocation
        [(static_cast<int32_T>(indexPairs[i2 + indexPairs.size(0)]) +
          currPoints.pLocation.size(0) * i1) - 1];
    }
  }

  st.site = &mb_emlrtRSI;
  tracker.initialize(SD, st, inlierPrePoints, SD->f5.currI);
  while (currFrameIdx + 1 < 128) {
    st.site = &nb_emlrtRSI;
    b_helperDetectAndExtractFeature(SD, st, imagesCell[currFrameIdx].f1,
      preFeatures, currPoints);

    //  Track the last key frame
    st.site = &ob_emlrtRSI;
    vSetKeyFrames.imageviewsetBase_get_Views(st, b_indexPairs, t49_Features,
      expl_temp, unusedExpr);
    st.site = &pb_emlrtRSI;
    b_helperTrackLastKeyFrameKLT(SD, st, tracker, imagesCell[currFrameIdx].f1,
      mapPointSet, t49_Features, preFeatures, currPoints, validFraction,
      intrinsics, currPose, mapPointsIdx, b_indexPairs);

    //  Track the local map and check if the current frame is a key frame.
    //  A frame is a key frame if both of the following conditions are satisfied:
    //
    //  1. At least 20 frames have passed since the last key frame or the
    //     current frame tracks fewer than 100 map points.
    //  2. The map points tracked by the current frame are fewer than 90% of
    //     points tracked by the reference key frame.
    //
    //  Tracking performance is sensitive to the value of numPointsKeyFrame.
    //  If tracking is lost, try a larger value.
    //
    //  localKeyFrameIds:   ViewId of the connected key frames of the current frame
    st.site = &qb_emlrtRSI;
    isMapInitialized = helperTrackLocalMapCg(st, mapPointSet, vSetKeyFrames,
      mapPointsIdx, b_indexPairs, currPose, preFeatures, currPoints, intrinsics,
      isMapInitialized, static_cast<real_T>(lastKeyFrameIdx), static_cast<real_T>
      (currFrameIdx + 1), numPointsRefKeyFrame, localPointsIndices,
      localKeyFrameIdsInternal, localKeyFrameIds);
    if (!isMapInitialized) {
      currFrameIdx++;
      isMapInitialized = false;
    } else {
      uint32_T refinedViews_ViewId_data[10];
      uint32_T u;
      isMapInitialized = true;

      //  Update current key frame ID
      currKeyFrameId++;
      for (i1 = 0; i1 < 3; i1++) {
        lastKeyFrameIdx = i1 << 2;
        Ac[lastKeyFrameIdx] = static_cast<real32_T>(currPose.R[3 * i1]);
        Ac[lastKeyFrameIdx + 1] = static_cast<real32_T>(currPose.R[3 * i1 + 1]);
        Ac[lastKeyFrameIdx + 2] = static_cast<real32_T>(currPose.R[3 * i1 + 2]);
        Ac[i1 + 12] = static_cast<real32_T>(currPose.Translation[i1]);
      }

      Ac[3] = 0.0F;
      Ac[7] = 0.0F;
      Ac[11] = 0.0F;
      Ac[15] = 1.0F;
      st.site = &vc_emlrtRSI;
      curPoseSingle.c_init(st, Ac);

      //  Add the new key frame
      st.site = &rb_emlrtRSI;
      helperAddNewKeyFrame(st, mapPointSet, vSetKeyFrames, curPoseSingle,
                           preFeatures, currPoints, mapPointsIdx, b_indexPairs,
                           localKeyFrameIds);

      //  Remove outlier map points that are observed in fewer than 3 key frames
      st.site = &sb_emlrtRSI;
      helperCullRecentMapPoints(st, mapPointSet, mapPointsIdx, newPointIdx);

      //  Create new map points by triangulation
      vSetKeyFramesOptim = vSetKeyFrames;
      st.site = &tb_emlrtRSI;
      helperCreateNewMapPoints(st, mapPointSet, vSetKeyFramesOptim,
        currKeyFrameId, intrinsics, newPointIdx);

      //  Local bundle adjustment
      st.site = &ub_emlrtRSI;
      vSetKeyFramesOptim.connectedViews(st, currKeyFrameId, b_indexPairs,
        curPoseSingle, b_expl_temp, c_expl_temp, dist);
      lastKeyFrameIdx = dist.size(0) * dist.size(1);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < lastKeyFrameIdx; b_i++) {
        if (dist[b_i] == 2.0) {
          trueCount++;
        }
      }

      r2.set_size(&gi_emlrtRTEI, sp, trueCount);
      trueCount = 0;
      for (int32_T b_i{0}; b_i < lastKeyFrameIdx; b_i++) {
        if (dist[b_i] == 2.0) {
          r2[trueCount] = b_i;
          trueCount++;
        }
      }

      loop_ub_tmp = r2.size(0);
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        if ((r2[i1] < 0) || (r2[i1] > b_indexPairs.size(0) - 1)) {
          emlrtDynamicBoundsCheckR2012b(r2[i1], 0, b_indexPairs.size(0) - 1,
            &o_emlrtBCI, (emlrtConstCTX)sp);
        }
      }

      i = static_cast<int32_T>(muDoubleScalarMin(10.0, static_cast<real_T>
        (r2.size(0))));
      if (i < 1) {
        i = 0;
      } else {
        if (r2.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, r2.size(0), &c_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        if (i > r2.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i, 1, r2.size(0), &b_emlrtBCI,
            (emlrtConstCTX)sp);
        }
      }

      validLoopCandidates_size[0] = 1;
      validLoopCandidates_size[1] = i;
      st.site = &vb_emlrtRSI;
      coder::internal::indexShapeCheck(st, r2.size(0), validLoopCandidates_size);

      //  Refine local key frames and map points
      localKeyFrameIds.set_size(&fj_emlrtRTEI, sp, b_indexPairs.size(0) + 1);
      loop_ub_tmp = b_indexPairs.size(0);
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        localKeyFrameIds[i1] = b_indexPairs[i1];
      }

      if (currKeyFrameId < 4.294967296E+9) {
        u = static_cast<uint32_T>(currKeyFrameId);
      } else {
        u = MAX_uint32_T;
      }

      localKeyFrameIds[b_indexPairs.size(0)] = u;
      for (i1 = 0; i1 < i; i1++) {
        refinedViews_ViewId_data[i1] = b_indexPairs[r2[i1]];
      }

      b_mapPointSet = mapPointSet;
      st.site = &wb_emlrtRSI;
      coder::bundleAdjustment(st, b_mapPointSet, vSetKeyFramesOptim,
        localKeyFrameIds, &intrinsics, refinedViews_ViewId_data, i,
        vSetKeyFrames, inlierTformIdx, mapPointSet);
      st.site = &xb_emlrtRSI;
      vSetKeyFrames.imageviewsetBase_get_Views(st, b_indexPairs, t49_Features,
        expl_temp, unusedExpr);
      st.site = &xb_emlrtRSI;
      mapPointSet.b_updateLimitsAndDirection(st, inlierTformIdx, b_indexPairs,
        unusedExpr, t49_Features);

      //  Update representative view
      st.site = &yb_emlrtRSI;
      vSetKeyFrames.imageviewsetBase_get_Views(st, b_indexPairs, t49_Features,
        expl_temp, unusedExpr);
      st.site = &yb_emlrtRSI;
      mapPointSet.b_updateRepresentativeView(st, inlierTformIdx, b_indexPairs,
        t49_Features);

      //  Set the feature points to be tracked
      st.site = &ac_emlrtRSI;
      a__1.size[0] = mapPointSet.findWorldPointsInView(st, currKeyFrameId,
        a__1.data, index2d.data, i);
      index2d.size[0] = i;
      if (index2d.size[0] - 1 < 0) {
        emlrtDynamicBoundsCheckR2012b(0, 0, index2d.size[0] - 1, &emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = index2d.data[0].f1.size(0);
      inlierPrePoints.set_size(&gj_emlrtRTEI, sp, index2d.data[0].f1.size(0), 2);
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < i; i2++) {
          d = index2d.data[0].f1[i2];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               currPoints.pLocation.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              currPoints.pLocation.size(0), &p_emlrtBCI, (emlrtConstCTX)sp);
          }

          inlierPrePoints[i2 + inlierPrePoints.size(0) * i1] =
            currPoints.pLocation[(static_cast<int32_T>(d) +
            currPoints.pLocation.size(0) * i1) - 1];
        }
      }

      st.site = &bc_emlrtRSI;
      tracker.setPoints(st, inlierPrePoints);

      //  Check loop closure after some key frames have been created
      if (currKeyFrameId > 20.0) {
        //  Minimum number of feature matches of loop edges
        //  Detect possible loop closure key frame candidates
        st.site = &cc_emlrtRSI;
        isValid = helperCheckLoopClosureCg(SD, st, vSetKeyFrames, currKeyFrameId,
          loopDatabase, imagesCell[currFrameIdx].f1, validLoopCandidates_data,
          validLoopCandidates_size);
        if (isValid) {
          //  Add loop closure connections
          st.site = &dc_emlrtRSI;
          isLoopClosed = helperAddLoopConnections(st, mapPointSet, vSetKeyFrames,
            validLoopCandidates_data, validLoopCandidates_size, currKeyFrameId,
            preFeatures);
        }
      }

      //  If no loop closure is detected, add current features into the database
      if (!isLoopClosed) {
        st.site = &ec_emlrtRSI;
        loopDatabase.addImageFeatures(st, preFeatures, currKeyFrameId);
      }

      //  Update IDs and indices
      validFraction = currKeyFrameId;
      lastKeyFrameIdx = currFrameIdx + 1;
      i1 = addedFramesIdx.size(0);
      addedFramesIdx.set_size(&gi_emlrtRTEI, sp, addedFramesIdx.size(0) + 1);
      addedFramesIdx[i1] = static_cast<uint8_T>(currFrameIdx + 1);
      currFrameIdx++;
    }
  }

  //  End of main loop
  //  Commenting for time being
  //  Optimize the poses
  vSetKeyFramesOptim = vSetKeyFrames;
  st.site = &fc_emlrtRSI;
  vSetKeyFramesOptim.optimizePoses(st);

  //  Plot the optimized camera trajectory
  st.site = &gc_emlrtRSI;
  b_st.site = &csb_emlrtRSI;
  vSetKeyFramesOptim.imageviewsetBase_get_Views(b_st, b_indexPairs, t49_Features,
    expl_temp, unusedExpr);
  i1 = vSetKeyFramesOptim.ViewId.size(0);
  out->optimizedPoses.set_size(&si_emlrtRTEI, sp, vSetKeyFramesOptim.ViewId.size
    (0));
  for (int32_T b_i{0}; b_i < i1; b_i++) {
    st.site = &hc_emlrtRSI;
    unusedExpr.parenReference(st, static_cast<real_T>(b_i) + 1.0, &curPoseSingle);
    for (i2 = 0; i2 < 3; i2++) {
      if (b_i > out->optimizedPoses.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
          &s_emlrtBCI, (emlrtConstCTX)sp);
      }

      loop_ub_tmp = i2 << 2;
      out->optimizedPoses[b_i].f1[loop_ub_tmp] = curPoseSingle.R[3 * i2];
      if (b_i > out->optimizedPoses.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
          &s_emlrtBCI, (emlrtConstCTX)sp);
      }

      out->optimizedPoses[b_i].f1[loop_ub_tmp + 1] = curPoseSingle.R[3 * i2 + 1];
      if (b_i > out->optimizedPoses.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
          &s_emlrtBCI, (emlrtConstCTX)sp);
      }

      out->optimizedPoses[b_i].f1[loop_ub_tmp + 2] = curPoseSingle.R[3 * i2 + 2];
    }

    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[12] = curPoseSingle.Translation[0];
    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[13] = curPoseSingle.Translation[1];
    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[14] = curPoseSingle.Translation[2];
    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[3] = 0.0F;
    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[7] = 0.0F;
    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[11] = 0.0F;
    if (b_i > out->optimizedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->optimizedPoses.size(0) - 1,
        &s_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->optimizedPoses[b_i].f1[15] = 1.0F;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  //  This code is partially used.These values are used to visualize mono slam
  //  results
  st.site = &ic_emlrtRSI;
  vSetKeyFrames.imageviewsetBase_get_Views(st, b_indexPairs, t49_Features,
    expl_temp, unusedExpr);
  i = b_indexPairs.size(0);
  out->viewIds.set_size(&ti_emlrtRTEI, sp, b_indexPairs.size(0));
  for (i1 = 0; i1 < i; i1++) {
    out->viewIds[i1] = b_indexPairs[i1];
  }

  st.site = &jc_emlrtRSI;
  b_st.site = &csb_emlrtRSI;
  vSetKeyFrames.imageviewsetBase_get_Views(b_st, b_indexPairs, t49_Features,
    expl_temp, unusedExpr);

  //  Contains both ViewId and Pose
  //  Ensure the rotation matrix is a rigid transformation
  for (i1 = 0; i1 < 9; i1++) {
    t49_AbsolutePose[i1] = unusedExpr.R[i1];
  }

  real_T a__2[9];
  st.site = &kc_emlrtRSI;
  coder::svd(st, t49_AbsolutePose, U, a__2, V);
  st.site = &lc_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  b_st.site = &gg_emlrtRSI;
  c_st.site = &bh_emlrtRSI;
  for (i1 = 0; i1 < 16; i1++) {
    A_in[i1] = iv[i1];
  }

  A_in[12] = unusedExpr.Translation[0];
  A_in[13] = unusedExpr.Translation[1];
  A_in[14] = unusedExpr.Translation[2];
  st.site = &mc_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &rx_emlrtRSI;
  for (i1 = 0; i1 < 3; i1++) {
    lastKeyFrameIdx = i1 << 2;
    b_A_in[3 * i1] = A_in[lastKeyFrameIdx];
    b_A_in[3 * i1 + 1] = A_in[lastKeyFrameIdx + 1];
    b_A_in[3 * i1 + 2] = A_in[lastKeyFrameIdx + 2];
  }

  d_st.site = &sx_emlrtRSI;
  coder::images::geotrans::internal::constrainToRotationMatrix3D(d_st, b_A_in, R);
  for (i1 = 0; i1 < 3; i1++) {
    lastKeyFrameIdx = i1 << 2;
    b_Ac[lastKeyFrameIdx] = R[3 * i1];
    b_Ac[lastKeyFrameIdx + 1] = R[3 * i1 + 1];
    b_Ac[lastKeyFrameIdx + 2] = R[3 * i1 + 2];
    b_Ac[i1 + 12] = A_in[i1 + 12];
  }

  b_Ac[3] = 0.0F;
  b_Ac[7] = 0.0F;
  b_Ac[11] = 0.0F;
  b_Ac[15] = 1.0F;
  b_st.site = &ep_emlrtRSI;
  c_st.site = &fp_emlrtRSI;
  medianDepth = coder::c_norm(c_st, b_Ac);
  c_st.site = &fp_emlrtRSI;
  scoreF = coder::c_norm(c_st, A_in);
  r1 = _mm_loadu_ps(&b_Ac[0]);
  r3 = _mm_loadu_ps(&A_in[0]);
  _mm_storeu_ps(&Ac[0], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&b_Ac[4]);
  r3 = _mm_loadu_ps(&A_in[4]);
  _mm_storeu_ps(&Ac[4], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&b_Ac[8]);
  r3 = _mm_loadu_ps(&A_in[8]);
  _mm_storeu_ps(&Ac[8], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&b_Ac[12]);
  r3 = _mm_loadu_ps(&A_in[12]);
  _mm_storeu_ps(&Ac[12], _mm_sub_ps(r1, r3));
  c_st.site = &gp_emlrtRSI;
  x = coder::c_norm(c_st, Ac);
  if (!(x / muSingleScalarMax(muSingleScalarMax(medianDepth, scoreF),
        1.83226362E-31F) <= 6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "images:geotrans:invalidTransformationMatrix",
      "images:geotrans:invalidTransformationMatrix", 0);
  }

  b_st.site = &gg_emlrtRSI;
  coder::images::geotrans::internal::c_checkTransformationMatrixCond(b_st, b_Ac);
  b_st.site = &qx_emlrtRSI;
  c_st.site = &tx_emlrtRSI;
  d_st.site = &hv_emlrtRSI;
  e_st.site = &iv_emlrtRSI;
  coder::images::geotrans::internal::constrainToRotationMatrix3D(e_st, R, b_A_in);
  e_st.site = &jv_emlrtRSI;
  f_st.site = &fp_emlrtRSI;
  medianDepth = coder::b_norm(f_st, R);
  f_st.site = &fp_emlrtRSI;
  scoreF = coder::b_norm(f_st, b_A_in);
  r1 = _mm_loadu_ps(&R[0]);
  r3 = _mm_loadu_ps(&b_A_in[0]);
  _mm_storeu_ps(&R[0], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&R[4]);
  r3 = _mm_loadu_ps(&b_A_in[4]);
  _mm_storeu_ps(&R[4], _mm_sub_ps(r1, r3));
  R[8] -= b_A_in[8];
  f_st.site = &gp_emlrtRSI;
  x = coder::b_norm(f_st, R);
  if (!(x / muSingleScalarMax(muSingleScalarMax(medianDepth, scoreF),
        1.83226362E-31F) <= 6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
      "images:geotrans:invalidRotationMatrix",
      "images:geotrans:invalidRotationMatrix", 0);
  }

  for (i1 = 0; i1 < 3; i1++) {
    lastKeyFrameIdx = i1 << 2;
    Ac[lastKeyFrameIdx] = b_A_in[3 * i1];
    Ac[lastKeyFrameIdx + 1] = b_A_in[3 * i1 + 1];
    Ac[lastKeyFrameIdx + 2] = b_A_in[3 * i1 + 2];
    Ac[i1 + 12] = A_in[i1 + 12];
  }

  Ac[3] = 0.0F;
  Ac[7] = 0.0F;
  Ac[11] = 0.0F;
  Ac[15] = 1.0F;
  for (i1 = 0; i1 < 3; i1++) {
    d = U[i1];
    validFraction = U[i1 + 3];
    currKeyFrameId = U[i1 + 6];
    for (i2 = 0; i2 < 3; i2++) {
      Ac[i1 + (i2 << 2)] = static_cast<real32_T>((d * V[i2] + validFraction *
        V[i2 + 3]) + currKeyFrameId * V[i2 + 6]);
    }
  }

  st.site = &nc_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  c_st.site = &rx_emlrtRSI;
  for (i1 = 0; i1 < 3; i1++) {
    lastKeyFrameIdx = i1 << 2;
    b_A_in[3 * i1] = Ac[lastKeyFrameIdx];
    b_A_in[3 * i1 + 1] = Ac[lastKeyFrameIdx + 1];
    b_A_in[3 * i1 + 2] = Ac[lastKeyFrameIdx + 2];
  }

  d_st.site = &sx_emlrtRSI;
  coder::images::geotrans::internal::constrainToRotationMatrix3D(d_st, b_A_in, R);
  for (i1 = 0; i1 < 3; i1++) {
    lastKeyFrameIdx = i1 << 2;
    b_Ac[lastKeyFrameIdx] = R[3 * i1];
    b_Ac[lastKeyFrameIdx + 1] = R[3 * i1 + 1];
    b_Ac[lastKeyFrameIdx + 2] = R[3 * i1 + 2];
    b_Ac[i1 + 12] = Ac[i1 + 12];
  }

  b_Ac[3] = 0.0F;
  b_Ac[7] = 0.0F;
  b_Ac[11] = 0.0F;
  b_Ac[15] = 1.0F;
  b_st.site = &ep_emlrtRSI;
  c_st.site = &fp_emlrtRSI;
  medianDepth = coder::c_norm(c_st, b_Ac);
  c_st.site = &fp_emlrtRSI;
  scoreF = coder::c_norm(c_st, Ac);
  r1 = _mm_loadu_ps(&b_Ac[0]);
  r3 = _mm_loadu_ps(&Ac[0]);
  _mm_storeu_ps(&Ac[0], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&b_Ac[4]);
  r3 = _mm_loadu_ps(&Ac[4]);
  _mm_storeu_ps(&Ac[4], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&b_Ac[8]);
  r3 = _mm_loadu_ps(&Ac[8]);
  _mm_storeu_ps(&Ac[8], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&b_Ac[12]);
  r3 = _mm_loadu_ps(&Ac[12]);
  _mm_storeu_ps(&Ac[12], _mm_sub_ps(r1, r3));
  c_st.site = &gp_emlrtRSI;
  x = coder::c_norm(c_st, Ac);
  if (!(x / muSingleScalarMax(muSingleScalarMax(medianDepth, scoreF),
        1.83226362E-31F) <= 6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "images:geotrans:invalidTransformationMatrix",
      "images:geotrans:invalidTransformationMatrix", 0);
  }

  b_st.site = &gg_emlrtRSI;
  coder::images::geotrans::internal::c_checkTransformationMatrixCond(b_st, b_Ac);
  b_st.site = &qx_emlrtRSI;
  c_st.site = &tx_emlrtRSI;
  d_st.site = &hv_emlrtRSI;
  e_st.site = &iv_emlrtRSI;
  coder::images::geotrans::internal::constrainToRotationMatrix3D(e_st, R, b_A_in);
  e_st.site = &jv_emlrtRSI;
  f_st.site = &fp_emlrtRSI;
  medianDepth = coder::b_norm(f_st, R);
  f_st.site = &fp_emlrtRSI;
  scoreF = coder::b_norm(f_st, b_A_in);
  r1 = _mm_loadu_ps(&R[0]);
  r3 = _mm_loadu_ps(&b_A_in[0]);
  _mm_storeu_ps(&R[0], _mm_sub_ps(r1, r3));
  r1 = _mm_loadu_ps(&R[4]);
  r3 = _mm_loadu_ps(&b_A_in[4]);
  _mm_storeu_ps(&R[4], _mm_sub_ps(r1, r3));
  R[8] -= b_A_in[8];
  f_st.site = &gp_emlrtRSI;
  x = coder::b_norm(f_st, R);
  if (!(x / muSingleScalarMax(muSingleScalarMax(medianDepth, scoreF),
        1.83226362E-31F) <= 6.41553061E-6F)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
      "images:geotrans:invalidRotationMatrix",
      "images:geotrans:invalidRotationMatrix", 0);
  }

  //  Only plot the points within the limit
  i = mapPointSet.WorldPoints.size(0);
  inlierTriangulationIdx.set_size(&ui_emlrtRTEI, sp,
    mapPointSet.WorldPoints.size(0));
  r4.set_size(&vi_emlrtRTEI, sp, mapPointSet.WorldPoints.size(0));
  for (i1 = 0; i1 < i; i1++) {
    medianDepth = mapPointSet.WorldPoints[i1];
    inlierTriangulationIdx[i1] = (medianDepth > -1.5F);
    r4[i1] = (medianDepth < 1.5F);
  }

  for (i1 = 0; i1 < i; i1++) {
    inlierTriangulationIdx[i1] = (inlierTriangulationIdx[i1] && r4[i1]);
  }

  r4.set_size(&wi_emlrtRTEI, sp, mapPointSet.WorldPoints.size(0));
  for (i1 = 0; i1 < i; i1++) {
    r4[i1] = (mapPointSet.WorldPoints[i1 + mapPointSet.WorldPoints.size(0)] >
              -1.0F);
  }

  if (inlierTriangulationIdx.size(0) == r4.size(0)) {
    for (i1 = 0; i1 < i; i1++) {
      inlierTriangulationIdx[i1] = (inlierTriangulationIdx[i1] && r4[i1]);
    }
  } else {
    st.site = &lid_emlrtRSI;
    c_and(st, inlierTriangulationIdx, r4);
  }

  r4.set_size(&xi_emlrtRTEI, sp, mapPointSet.WorldPoints.size(0));
  for (i1 = 0; i1 < i; i1++) {
    r4[i1] = (mapPointSet.WorldPoints[i1 + mapPointSet.WorldPoints.size(0)] <
              0.5F);
  }

  lastKeyFrameIdx = inlierTriangulationIdx.size(0);
  if ((inlierTriangulationIdx.size(0) != mapPointSet.WorldPoints.size(0)) &&
      ((inlierTriangulationIdx.size(0) != 1) && (mapPointSet.WorldPoints.size(0)
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlierTriangulationIdx.size(0),
      mapPointSet.WorldPoints.size(0), &emlrtECI, (emlrtConstCTX)sp);
  }

  if (inlierTriangulationIdx.size(0) == r4.size(0)) {
    for (i1 = 0; i1 < lastKeyFrameIdx; i1++) {
      inlierTriangulationIdx[i1] = (inlierTriangulationIdx[i1] && r4[i1]);
    }
  } else {
    st.site = &lid_emlrtRSI;
    c_and(st, inlierTriangulationIdx, r4);
  }

  r4.set_size(&yi_emlrtRTEI, sp, mapPointSet.WorldPoints.size(0));
  for (i1 = 0; i1 < i; i1++) {
    r4[i1] = (mapPointSet.WorldPoints[i1 + mapPointSet.WorldPoints.size(0) * 2] >
              -0.5F);
  }

  lastKeyFrameIdx = inlierTriangulationIdx.size(0);
  if ((inlierTriangulationIdx.size(0) != mapPointSet.WorldPoints.size(0)) &&
      ((inlierTriangulationIdx.size(0) != 1) && (mapPointSet.WorldPoints.size(0)
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlierTriangulationIdx.size(0),
      mapPointSet.WorldPoints.size(0), &emlrtECI, (emlrtConstCTX)sp);
  }

  if (inlierTriangulationIdx.size(0) == r4.size(0)) {
    for (i1 = 0; i1 < lastKeyFrameIdx; i1++) {
      inlierTriangulationIdx[i1] = (inlierTriangulationIdx[i1] && r4[i1]);
    }
  } else {
    st.site = &lid_emlrtRSI;
    c_and(st, inlierTriangulationIdx, r4);
  }

  r4.set_size(&aj_emlrtRTEI, sp, mapPointSet.WorldPoints.size(0));
  for (i1 = 0; i1 < i; i1++) {
    r4[i1] = (mapPointSet.WorldPoints[i1 + mapPointSet.WorldPoints.size(0) * 2] <
              2.0F);
  }

  i = inlierTriangulationIdx.size(0);
  if ((inlierTriangulationIdx.size(0) != mapPointSet.WorldPoints.size(0)) &&
      ((inlierTriangulationIdx.size(0) != 1) && (mapPointSet.WorldPoints.size(0)
        != 1))) {
    emlrtDimSizeImpxCheckR2021b(inlierTriangulationIdx.size(0),
      mapPointSet.WorldPoints.size(0), &emlrtECI, (emlrtConstCTX)sp);
  }

  if (inlierTriangulationIdx.size(0) == r4.size(0)) {
    r5.set_size(&ui_emlrtRTEI, sp, inlierTriangulationIdx.size(0));
    for (i1 = 0; i1 < i; i1++) {
      r5[i1] = (inlierTriangulationIdx[i1] && r4[i1]);
    }
  } else {
    st.site = &lid_emlrtRSI;
    b_and(st, r5, inlierTriangulationIdx, r4);
  }

  lastKeyFrameIdx = r5.size(0);
  trueCount = 0;
  for (int32_T b_i{0}; b_i < lastKeyFrameIdx; b_i++) {
    if (r5[b_i]) {
      trueCount++;
    }
  }

  r6.set_size(&gi_emlrtRTEI, sp, trueCount);
  trueCount = 0;
  for (int32_T b_i{0}; b_i < lastKeyFrameIdx; b_i++) {
    if (r5[b_i]) {
      r6[trueCount] = b_i;
      trueCount++;
    }
  }

  i = r6.size(0);
  out->xyzPoints.set_size(&bj_emlrtRTEI, sp, r6.size(0), 3);
  for (i1 = 0; i1 < 3; i1++) {
    for (i2 = 0; i2 < i; i2++) {
      if (r6[i2] > mapPointSet.WorldPoints.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(r6[i2], 0, mapPointSet.WorldPoints.size(0)
          - 1, &q_emlrtBCI, (emlrtConstCTX)sp);
      }

      out->xyzPoints[i2 + out->xyzPoints.size(0) * i1] =
        mapPointSet.WorldPoints[r6[i2] + mapPointSet.WorldPoints.size(0) * i1];
    }
  }

  i = vSetKeyFrames.ViewId.size(0);
  out->estimatedPoses.set_size(&cj_emlrtRTEI, sp, vSetKeyFrames.ViewId.size(0));
  for (int32_T b_i{0}; b_i < i; b_i++) {
    st.site = &oc_emlrtRSI;
    unusedExpr.parenReference(st, static_cast<real_T>(b_i) + 1.0, &curPoseSingle);
    for (i1 = 0; i1 < 3; i1++) {
      if (b_i > out->estimatedPoses.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
          &r_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = i1 << 2;
      out->estimatedPoses[b_i].f1[i2] = curPoseSingle.R[3 * i1];
      if (b_i > out->estimatedPoses.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
          &r_emlrtBCI, (emlrtConstCTX)sp);
      }

      out->estimatedPoses[b_i].f1[i2 + 1] = curPoseSingle.R[3 * i1 + 1];
      if (b_i > out->estimatedPoses.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
          &r_emlrtBCI, (emlrtConstCTX)sp);
      }

      out->estimatedPoses[b_i].f1[i2 + 2] = curPoseSingle.R[3 * i1 + 2];
    }

    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[12] = curPoseSingle.Translation[0];
    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[13] = curPoseSingle.Translation[1];
    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[14] = curPoseSingle.Translation[2];
    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[3] = 0.0F;
    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[7] = 0.0F;
    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[11] = 0.0F;
    if (b_i > out->estimatedPoses.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->estimatedPoses.size(0) - 1,
        &r_emlrtBCI, (emlrtConstCTX)sp);
    }

    out->estimatedPoses[b_i].f1[15] = 1.0F;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  out->vId.set_size(&dj_emlrtRTEI, sp, vSetKeyFrames.ViewId.size(0));
  for (i1 = 0; i1 < i; i1++) {
    out->vId[i1] = vSetKeyFrames.ViewId[i1];
  }

  i = addedFramesIdx.size(0);
  out->addedFramesIdx.set_size(&ej_emlrtRTEI, sp, addedFramesIdx.size(0));
  for (i1 = 0; i1 < i; i1++) {
    out->addedFramesIdx[i1] = addedFramesIdx[i1];
  }

  st.site = &pc_emlrtRSI;
  tracker.matlabCodegenDestructor();
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void times(const emlrtStack &sp, coder::array<real32_T, 1U> &in1, const coder::
           array<real32_T, 1U> &in2)
{
  coder::array<real32_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }

  b_in1.set_size(&yec_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * in2[i * stride_1_0];
  }

  in1.set_size(&yec_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (helperVisualSLAMCodegen.cpp)
