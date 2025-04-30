//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// worldpointset.h
//
// Code generation for function 'worldpointset'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "sparse1.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct cell_wrap_133;

struct cell_wrap_25;

namespace coder {
class b_rigidtform3d;

}
struct cell_wrap_8;

// Type Definitions
namespace coder {
class worldpointset {
public:
  void init(const emlrtStack &sp);
  static void pointIdOrPointIndex(const emlrtStack &sp,
                                  const array<real_T, 1U> &pointIds,
                                  array<real_T, 2U> &pointIndices);
  void checkPointIndices(const emlrtStack &sp,
                         const array<real_T, 2U> &pointIndices) const;
  void findViewsOfWorldPoint(const emlrtStack &sp,
                             const array<real_T, 1U> &pointIds,
                             array<cell_wrap_133, 1U> &viewIds) const;
  void findViewsOfWorldPoint(const emlrtStack &sp,
                             const array<real_T, 1U> &pointIds,
                             array<cell_wrap_133, 1U> &viewIds,
                             array<cell_wrap_25, 1U> &featureIndices) const;
  int32_T findWorldPointsInView(const emlrtStack &sp, real_T viewId,
                                cell_wrap_25 pointRef_data[],
                                cell_wrap_25 featureIndices_data[],
                                int32_T &featureIndices_size) const;
  void findWorldPointsInSingleView(const emlrtStack &sp,
                                   const array<real_T, 1U> &viewIndex,
                                   array<real_T, 1U> &pointIndices,
                                   array<real_T, 1U> &featureIndices) const;
  void checkIfViewIsMissing(const emlrtStack &sp,
                            const array<uint32_T, 1U> &viewId) const;
  void findWorldPointsInSingleView(const emlrtStack &sp, real_T viewIndex,
                                   array<real_T, 1U> &pointIndices,
                                   array<real_T, 1U> &featureIndices) const;
  int32_T findWorldPointsInView(const emlrtStack &sp, uint32_T viewId,
                                cell_wrap_25 pointRef_data[],
                                cell_wrap_25 featureIndices_data[],
                                int32_T &featureIndices_size) const;
  void findVisibilityOfView(const emlrtStack &sp,
                            const array<uint32_T, 1U> &viewId,
                            array<cell_wrap_25, 1U> &pointIndices,
                            array<cell_wrap_25, 1U> &featureIndices,
                            array<real_T, 1U> &varargout_1,
                            sparse &varargout_2) const;
  void addWorldPoints(const emlrtStack &sp,
                      const array<real32_T, 2U> &worldPoints,
                      array<real_T, 1U> &newPointIndices);
  void addCorrespondences(const emlrtStack &sp,
                          const array<real_T, 1U> &pointIds,
                          const array<uint32_T, 1U> &featureIndices);
  void b_addCorrespondences(const emlrtStack &sp,
                            const array<real_T, 1U> &pointIds,
                            const array<uint32_T, 1U> &featureIndices);
  void updateWorldPoints(const emlrtStack &sp,
                         const array<real_T, 1U> &pointIds,
                         const array<real32_T, 2U> &worldPoints);
  void
  updateLimitsAndDirection(const emlrtStack &sp,
                           const array<real_T, 1U> &pointIds,
                           const array<uint32_T, 1U> &viewTable_ViewId,
                           const b_rigidtform3d &viewTable_AbsolutePose,
                           const array<cell_wrap_8, 2U> &viewTable_Features);
  static void checkViewIds(const emlrtStack &sp,
                           const array<uint32_T, 1U> &viewIds);
  void
  updateRepresentativeView(const emlrtStack &sp,
                           const array<real_T, 1U> &pointIds,
                           const array<uint32_T, 1U> &viewTable_ViewId,
                           const array<cell_wrap_8, 2U> &viewTable_Features);
  void addCorrespondences(const emlrtStack &sp, uint32_T viewId,
                          const array<real_T, 1U> &pointIds,
                          const array<uint32_T, 1U> &featureIndices);
  void b_addWorldPoints(const emlrtStack &sp,
                        const array<real32_T, 2U> &worldPoints,
                        array<real_T, 1U> &newPointIndices);
  void addCorrespondences(const emlrtStack &sp, real_T viewId,
                          const array<real_T, 1U> &pointIds,
                          const array<uint32_T, 1U> &featureIndices);
  void updateWorldPoints(const emlrtStack &sp,
                         const array<real_T, 1U> &pointIds,
                         const array<real_T, 2U> &worldPoints);
  void
  b_updateLimitsAndDirection(const emlrtStack &sp,
                             const array<real_T, 1U> &pointIds,
                             const array<uint32_T, 1U> &viewTable_ViewId,
                             const b_rigidtform3d &viewTable_AbsolutePose,
                             const array<cell_wrap_8, 2U> &viewTable_Features);
  void
  b_updateRepresentativeView(const emlrtStack &sp,
                             const array<real_T, 1U> &pointIds,
                             const array<uint32_T, 1U> &viewTable_ViewId,
                             const array<cell_wrap_8, 2U> &viewTable_Features);

protected:
  static void checkWorldPoints(const emlrtStack &sp,
                               const array<real32_T, 2U> &worldPoints);
  static void checkFeatureIndices(const emlrtStack &sp,
                                  const array<uint32_T, 1U> &featureIndices,
                                  real_T numFeatures);
  void
  findViewsOfSingleWorldPoint(const emlrtStack &sp,
                              const array<real_T, 2U> &pointIndex,
                              array<cell_wrap_133, 1U> &viewIds,
                              array<cell_wrap_25, 1U> &featureIndices) const;
  void findViewsOfSingleWorldPoint(const emlrtStack &sp, real_T pointIndex,
                                   cell_wrap_133 &viewIds,
                                   cell_wrap_25 &featureIndices) const;
  static void
  checkMissingViewInViewTable(const emlrtStack &sp,
                              const array<cell_wrap_133, 1U> &viewIdsToUpdate,
                              const array<uint32_T, 1U> &allViewIds);
  static real_T findMedoidFeature(const emlrtStack &sp,
                                  const array<real32_T, 2U> &features,
                                  real_T N);
  void checkIfViewIsMissing(const emlrtStack &sp, uint32_T viewId) const;
  static void checkViewTable(const emlrtStack &sp,
                             const array<uint32_T, 1U> &viewTable_ViewId,
                             const b_rigidtform3d &viewTable_AbsolutePose,
                             const array<cell_wrap_8, 2U> &viewTable_Features,
                             array<uint32_T, 1U> &viewIds,
                             b_rigidtform3d &poses);

public:
  array<real32_T, 2U> WorldPoints;
  array<uint32_T, 2U> ViewIds;
  empty_bounded_array<uint32_T, 2U> PointIds;
  array<real32_T, 2U> ViewingDirection;
  array<real32_T, 2U> DistanceLimits;
  array<real_T, 2U> RepresentativeViewId;
  array<real_T, 2U> RepresentativeFeatureIndex;
  sparse CorrespondencesInternal;
};

} // namespace coder

// End of code generation (worldpointset.h)
