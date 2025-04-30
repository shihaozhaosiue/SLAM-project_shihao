//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// imageviewset.h
//
// Code generation for function 'imageviewset'
//

#pragma once

// Include files
#include "ViewSetFeatureGraph.h"
#include "helperVisualSLAMCodegen_internal_types.h"
#include "rigidtform3d.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
namespace coder {
class ORBPoints;

class b_ORBPoints;

class pointTrack;

class digraph;

} // namespace coder

// Type Definitions
struct cell_wrap_10 {
  coder::array<real_T, 2U> f1;
};

struct cell_wrap_9 {
  coder::empty_bounded_array<real32_T, 2U> f1;
};

namespace coder {
class imageviewset {
public:
  void init(const emlrtStack &sp);
  static void checkPoints(const emlrtStack &sp, const ORBPoints &points);
  boolean_T hasView() const;
  void get_Views(const emlrtStack &sp, array<uint32_T, 1U> &views_ViewId,
                 array<cell_wrap_8, 2U> &views_Features,
                 array<b_ORBPoints, 1U> &views_Points,
                 b_rigidtform3d &views_AbsolutePose) const;
  void findTracks(const emlrtStack &sp, pointTrack &tracks);
  void imageviewsetBase_get_Views(const emlrtStack &sp,
                                  array<uint32_T, 1U> &views_ViewId,
                                  array<cell_wrap_8, 2U> &views_Features,
                                  array<b_ORBPoints, 1U> &views_Points,
                                  b_rigidtform3d &views_AbsolutePose) const;
  void get_Connections(const emlrtStack &sp,
                       array<uint32_T, 1U> &Connections_ViewId1,
                       array<uint32_T, 1U> &Connections_ViewId2,
                       array<b_rigidtform3d, 1U> &Connections_RelativePose,
                       array<cell_wrap_7, 2U> &Connections_InformationMatrix,
                       array<cell_wrap_11, 2U> &Connections_Matches) const;
  void findView(const emlrtStack &sp, const array<real_T, 1U> &viewIds,
                array<uint32_T, 1U> &views_ViewId,
                b_rigidtform3d &views_AbsolutePose,
                array<cell_wrap_8, 1U> &views_Features,
                array<b_ORBPoints, 1U> &views_Points) const;
  boolean_T hasView(const emlrtStack &sp, uint32_T viewIds) const;
  void checkMatchesOutOfBounds(const emlrtStack &sp,
                               const array<uint32_T, 2U> &matches,
                               uint32_T viewId1, uint32_T viewId2) const;
  boolean_T hasConnection(const emlrtStack &sp, uint32_T viewId1,
                          uint32_T viewId2) const;
  void connectedViews(const emlrtStack &sp, real_T varargin_1,
                      array<uint32_T, 1U> &viewTable_ViewId,
                      b_rigidtform3d &viewTable_AbsolutePose,
                      array<cell_wrap_8, 2U> &viewTable_Features,
                      array<b_ORBPoints, 2U> &viewTable_Points) const;
  void b_connectedViews(const emlrtStack &sp, real_T viewId,
                        array<uint32_T, 1U> &viewTable_ViewId,
                        b_rigidtform3d &viewTable_AbsolutePose,
                        array<cell_wrap_8, 2U> &viewTable_Features,
                        array<b_ORBPoints, 2U> &viewTable_Points,
                        array<boolean_T, 1U> &connIdx) const;
  void connectedViews(const emlrtStack &sp, real_T varargin_1,
                      array<uint32_T, 1U> &viewTable_ViewId,
                      b_rigidtform3d &viewTable_AbsolutePose,
                      array<cell_wrap_8, 2U> &viewTable_Features,
                      array<b_ORBPoints, 2U> &viewTable_Points,
                      array<real_T, 2U> &dist) const;
  void findView(const emlrtStack &sp, const array<uint32_T, 1U> &viewIds,
                array<uint32_T, 1U> &views_ViewId,
                b_rigidtform3d &views_AbsolutePose,
                array<cell_wrap_8, 1U> &views_Features,
                array<b_ORBPoints, 1U> &views_Points) const;
  void checkIfViewIsMissing(const emlrtStack &sp,
                            const array<uint32_T, 1U> &viewId) const;
  void c_connectedViews(const emlrtStack &sp, real_T varargin_1,
                        array<uint32_T, 1U> &viewTable_ViewId,
                        b_rigidtform3d &viewTable_AbsolutePose,
                        array<cell_wrap_8, 2U> &viewTable_Features,
                        array<b_ORBPoints, 2U> &viewTable_Points) const;
  void createPoseGraph(const emlrtStack &sp, digraph &G) const;
  void addView(const emlrtStack &sp, const ORBPoints &varargin_4,
               const array<uint8_T, 2U> &varargin_6);
  void addView(const emlrtStack &sp, const rigidtform3d &varargin_2,
               const ORBPoints &varargin_4,
               const array<uint8_T, 2U> &varargin_6);
  void addConnection(const emlrtStack &sp, const rigidtform3d &varargin_1,
                     const array<uint32_T, 2U> &varargin_3);
  static void parseMatches(const emlrtStack &sp,
                           const array<uint32_T, 2U> &varargin_2);
  void updateView(const emlrtStack &sp, uint32_T varargin_1,
                  const b_rigidtform3d &varargin_2);
  void updateConnection(const emlrtStack &sp, const rigidtform3d &varargin_3);
  void updateConnection(const emlrtStack &sp, uint32_T varargin_1,
                        real_T varargin_2,
                        const array<uint32_T, 2U> &varargin_4);
  void addConnection(const emlrtStack &sp, uint32_T viewId1, real_T viewId2,
                     const b_rigidtform3d &varargin_1,
                     const array<uint32_T, 2U> &varargin_3);
  void optimizePoses(const emlrtStack &sp);
  vision::internal::ViewSetFeatureGraph FeatureGraphSingle;
  b_rigidtform3d AbsPosesSingle;
  bounded_array<cell_wrap_6, 1U, 2U> FeaturesSingle;
  bounded_array<cell_wrap_7, 1U, 2U> FeaturesDouble;
  array<cell_wrap_8, 2U> FeaturesBinary;
  array<cell_wrap_6, 2U> PointsSingle;
  bounded_array<cell_wrap_7, 1U, 2U> PointsDouble;
  array<uint32_T, 1U> ViewId;
  b_rigidtform3d RrigidPoseSingle;
  array<uint32_T, 1U> ViewId1;
  array<uint32_T, 1U> ViewId2;
  bounded_array<cell_wrap_9, 1U, 2U> MatchesSingle;
  bounded_array<cell_wrap_10, 1U, 2U> MatchesDouble;
  array<cell_wrap_11, 2U> MatchesInt;
  bounded_array<cell_wrap_6, 1U, 2U> InfoMatSingle;
  array<cell_wrap_7, 2U> InfoMatDouble;
  array<cell_wrap_12, 2U> Metrics;
  array<cell_wrap_12, 2U> Scale;
  array<cell_wrap_12, 2U> Orientation;
  boolean_T IncrementalBuilding;
};

} // namespace coder

// End of code generation (imageviewset.h)
