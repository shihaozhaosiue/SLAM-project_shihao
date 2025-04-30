//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// optimizePoses1.h
//
// Code generation for function 'optimizePoses1'
//

#pragma once

// Include files
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class digraph;

class b_rigidtform3d;

} // namespace coder

// Function Declarations
namespace coder {
namespace vision {
namespace internal {
namespace codegen {
namespace poseGraph {
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
                   boolean_T &params_isSimilarityPoseGraph);

}
} // namespace codegen
} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (optimizePoses1.h)
