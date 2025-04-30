//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ViewSetFeatureGraph.h
//
// Code generation for function 'ViewSetFeatureGraph'
//

#pragma once

// Include files
#include "graph.h"
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
class pointTrack;

}
struct cell_wrap_11;

// Type Definitions
namespace coder {
namespace vision {
namespace internal {
class ViewSetFeatureGraph {
public:
  void createTracks(const emlrtStack &sp, pointTrack &tracks) const;
  void addEdges(const emlrtStack &sp,
                const array<cell_wrap_11, 2U> &connTable_Matches);
  graph FeatureGraph;
};

} // namespace internal
} // namespace vision
} // namespace coder

// End of code generation (ViewSetFeatureGraph.h)
