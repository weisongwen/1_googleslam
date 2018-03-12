// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/trajectory_node_data.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/sensor/proto/sensor.pb.h"
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();

class TrajectoryNodeData;

// ===================================================================

class TrajectoryNodeData : public ::google::protobuf::Message {
 public:
  TrajectoryNodeData();
  virtual ~TrajectoryNodeData();

  TrajectoryNodeData(const TrajectoryNodeData& from);

  inline TrajectoryNodeData& operator=(const TrajectoryNodeData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrajectoryNodeData& default_instance();

  void Swap(TrajectoryNodeData* other);

  // implements Message ----------------------------------------------

  TrajectoryNodeData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrajectoryNodeData& from);
  void MergeFrom(const TrajectoryNodeData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 timestamp = 1;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  inline ::google::protobuf::int64 timestamp() const;
  inline void set_timestamp(::google::protobuf::int64 value);

  // optional .cartographer.transform.proto.Quaterniond gravity_alignment = 2;
  inline bool has_gravity_alignment() const;
  inline void clear_gravity_alignment();
  static const int kGravityAlignmentFieldNumber = 2;
  inline const ::cartographer::transform::proto::Quaterniond& gravity_alignment() const;
  inline ::cartographer::transform::proto::Quaterniond* mutable_gravity_alignment();
  inline ::cartographer::transform::proto::Quaterniond* release_gravity_alignment();
  inline void set_allocated_gravity_alignment(::cartographer::transform::proto::Quaterniond* gravity_alignment);

  // optional .cartographer.sensor.proto.CompressedPointCloud filtered_gravity_aligned_point_cloud = 3;
  inline bool has_filtered_gravity_aligned_point_cloud() const;
  inline void clear_filtered_gravity_aligned_point_cloud();
  static const int kFilteredGravityAlignedPointCloudFieldNumber = 3;
  inline const ::cartographer::sensor::proto::CompressedPointCloud& filtered_gravity_aligned_point_cloud() const;
  inline ::cartographer::sensor::proto::CompressedPointCloud* mutable_filtered_gravity_aligned_point_cloud();
  inline ::cartographer::sensor::proto::CompressedPointCloud* release_filtered_gravity_aligned_point_cloud();
  inline void set_allocated_filtered_gravity_aligned_point_cloud(::cartographer::sensor::proto::CompressedPointCloud* filtered_gravity_aligned_point_cloud);

  // optional .cartographer.sensor.proto.CompressedPointCloud high_resolution_point_cloud = 4;
  inline bool has_high_resolution_point_cloud() const;
  inline void clear_high_resolution_point_cloud();
  static const int kHighResolutionPointCloudFieldNumber = 4;
  inline const ::cartographer::sensor::proto::CompressedPointCloud& high_resolution_point_cloud() const;
  inline ::cartographer::sensor::proto::CompressedPointCloud* mutable_high_resolution_point_cloud();
  inline ::cartographer::sensor::proto::CompressedPointCloud* release_high_resolution_point_cloud();
  inline void set_allocated_high_resolution_point_cloud(::cartographer::sensor::proto::CompressedPointCloud* high_resolution_point_cloud);

  // optional .cartographer.sensor.proto.CompressedPointCloud low_resolution_point_cloud = 5;
  inline bool has_low_resolution_point_cloud() const;
  inline void clear_low_resolution_point_cloud();
  static const int kLowResolutionPointCloudFieldNumber = 5;
  inline const ::cartographer::sensor::proto::CompressedPointCloud& low_resolution_point_cloud() const;
  inline ::cartographer::sensor::proto::CompressedPointCloud* mutable_low_resolution_point_cloud();
  inline ::cartographer::sensor::proto::CompressedPointCloud* release_low_resolution_point_cloud();
  inline void set_allocated_low_resolution_point_cloud(::cartographer::sensor::proto::CompressedPointCloud* low_resolution_point_cloud);

  // repeated float rotational_scan_matcher_histogram = 6;
  inline int rotational_scan_matcher_histogram_size() const;
  inline void clear_rotational_scan_matcher_histogram();
  static const int kRotationalScanMatcherHistogramFieldNumber = 6;
  inline float rotational_scan_matcher_histogram(int index) const;
  inline void set_rotational_scan_matcher_histogram(int index, float value);
  inline void add_rotational_scan_matcher_histogram(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      rotational_scan_matcher_histogram() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_rotational_scan_matcher_histogram();

  // optional .cartographer.transform.proto.Rigid3d local_pose = 7;
  inline bool has_local_pose() const;
  inline void clear_local_pose();
  static const int kLocalPoseFieldNumber = 7;
  inline const ::cartographer::transform::proto::Rigid3d& local_pose() const;
  inline ::cartographer::transform::proto::Rigid3d* mutable_local_pose();
  inline ::cartographer::transform::proto::Rigid3d* release_local_pose();
  inline void set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.TrajectoryNodeData)
 private:
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_gravity_alignment();
  inline void clear_has_gravity_alignment();
  inline void set_has_filtered_gravity_aligned_point_cloud();
  inline void clear_has_filtered_gravity_aligned_point_cloud();
  inline void set_has_high_resolution_point_cloud();
  inline void clear_has_high_resolution_point_cloud();
  inline void set_has_low_resolution_point_cloud();
  inline void clear_has_low_resolution_point_cloud();
  inline void set_has_local_pose();
  inline void clear_has_local_pose();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 timestamp_;
  ::cartographer::transform::proto::Quaterniond* gravity_alignment_;
  ::cartographer::sensor::proto::CompressedPointCloud* filtered_gravity_aligned_point_cloud_;
  ::cartographer::sensor::proto::CompressedPointCloud* high_resolution_point_cloud_;
  ::cartographer::sensor::proto::CompressedPointCloud* low_resolution_point_cloud_;
  ::google::protobuf::RepeatedField< float > rotational_scan_matcher_histogram_;
  ::cartographer::transform::proto::Rigid3d* local_pose_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto();

  void InitAsDefaultInstance();
  static TrajectoryNodeData* default_instance_;
};
// ===================================================================


// ===================================================================

// TrajectoryNodeData

// optional int64 timestamp = 1;
inline bool TrajectoryNodeData::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrajectoryNodeData::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TrajectoryNodeData::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TrajectoryNodeData::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 TrajectoryNodeData::timestamp() const {
  return timestamp_;
}
inline void TrajectoryNodeData::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
}

// optional .cartographer.transform.proto.Quaterniond gravity_alignment = 2;
inline bool TrajectoryNodeData::has_gravity_alignment() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TrajectoryNodeData::set_has_gravity_alignment() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TrajectoryNodeData::clear_has_gravity_alignment() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TrajectoryNodeData::clear_gravity_alignment() {
  if (gravity_alignment_ != NULL) gravity_alignment_->::cartographer::transform::proto::Quaterniond::Clear();
  clear_has_gravity_alignment();
}
inline const ::cartographer::transform::proto::Quaterniond& TrajectoryNodeData::gravity_alignment() const {
  return gravity_alignment_ != NULL ? *gravity_alignment_ : *default_instance_->gravity_alignment_;
}
inline ::cartographer::transform::proto::Quaterniond* TrajectoryNodeData::mutable_gravity_alignment() {
  set_has_gravity_alignment();
  if (gravity_alignment_ == NULL) gravity_alignment_ = new ::cartographer::transform::proto::Quaterniond;
  return gravity_alignment_;
}
inline ::cartographer::transform::proto::Quaterniond* TrajectoryNodeData::release_gravity_alignment() {
  clear_has_gravity_alignment();
  ::cartographer::transform::proto::Quaterniond* temp = gravity_alignment_;
  gravity_alignment_ = NULL;
  return temp;
}
inline void TrajectoryNodeData::set_allocated_gravity_alignment(::cartographer::transform::proto::Quaterniond* gravity_alignment) {
  delete gravity_alignment_;
  gravity_alignment_ = gravity_alignment;
  if (gravity_alignment) {
    set_has_gravity_alignment();
  } else {
    clear_has_gravity_alignment();
  }
}

// optional .cartographer.sensor.proto.CompressedPointCloud filtered_gravity_aligned_point_cloud = 3;
inline bool TrajectoryNodeData::has_filtered_gravity_aligned_point_cloud() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TrajectoryNodeData::set_has_filtered_gravity_aligned_point_cloud() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TrajectoryNodeData::clear_has_filtered_gravity_aligned_point_cloud() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TrajectoryNodeData::clear_filtered_gravity_aligned_point_cloud() {
  if (filtered_gravity_aligned_point_cloud_ != NULL) filtered_gravity_aligned_point_cloud_->::cartographer::sensor::proto::CompressedPointCloud::Clear();
  clear_has_filtered_gravity_aligned_point_cloud();
}
inline const ::cartographer::sensor::proto::CompressedPointCloud& TrajectoryNodeData::filtered_gravity_aligned_point_cloud() const {
  return filtered_gravity_aligned_point_cloud_ != NULL ? *filtered_gravity_aligned_point_cloud_ : *default_instance_->filtered_gravity_aligned_point_cloud_;
}
inline ::cartographer::sensor::proto::CompressedPointCloud* TrajectoryNodeData::mutable_filtered_gravity_aligned_point_cloud() {
  set_has_filtered_gravity_aligned_point_cloud();
  if (filtered_gravity_aligned_point_cloud_ == NULL) filtered_gravity_aligned_point_cloud_ = new ::cartographer::sensor::proto::CompressedPointCloud;
  return filtered_gravity_aligned_point_cloud_;
}
inline ::cartographer::sensor::proto::CompressedPointCloud* TrajectoryNodeData::release_filtered_gravity_aligned_point_cloud() {
  clear_has_filtered_gravity_aligned_point_cloud();
  ::cartographer::sensor::proto::CompressedPointCloud* temp = filtered_gravity_aligned_point_cloud_;
  filtered_gravity_aligned_point_cloud_ = NULL;
  return temp;
}
inline void TrajectoryNodeData::set_allocated_filtered_gravity_aligned_point_cloud(::cartographer::sensor::proto::CompressedPointCloud* filtered_gravity_aligned_point_cloud) {
  delete filtered_gravity_aligned_point_cloud_;
  filtered_gravity_aligned_point_cloud_ = filtered_gravity_aligned_point_cloud;
  if (filtered_gravity_aligned_point_cloud) {
    set_has_filtered_gravity_aligned_point_cloud();
  } else {
    clear_has_filtered_gravity_aligned_point_cloud();
  }
}

// optional .cartographer.sensor.proto.CompressedPointCloud high_resolution_point_cloud = 4;
inline bool TrajectoryNodeData::has_high_resolution_point_cloud() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TrajectoryNodeData::set_has_high_resolution_point_cloud() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TrajectoryNodeData::clear_has_high_resolution_point_cloud() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TrajectoryNodeData::clear_high_resolution_point_cloud() {
  if (high_resolution_point_cloud_ != NULL) high_resolution_point_cloud_->::cartographer::sensor::proto::CompressedPointCloud::Clear();
  clear_has_high_resolution_point_cloud();
}
inline const ::cartographer::sensor::proto::CompressedPointCloud& TrajectoryNodeData::high_resolution_point_cloud() const {
  return high_resolution_point_cloud_ != NULL ? *high_resolution_point_cloud_ : *default_instance_->high_resolution_point_cloud_;
}
inline ::cartographer::sensor::proto::CompressedPointCloud* TrajectoryNodeData::mutable_high_resolution_point_cloud() {
  set_has_high_resolution_point_cloud();
  if (high_resolution_point_cloud_ == NULL) high_resolution_point_cloud_ = new ::cartographer::sensor::proto::CompressedPointCloud;
  return high_resolution_point_cloud_;
}
inline ::cartographer::sensor::proto::CompressedPointCloud* TrajectoryNodeData::release_high_resolution_point_cloud() {
  clear_has_high_resolution_point_cloud();
  ::cartographer::sensor::proto::CompressedPointCloud* temp = high_resolution_point_cloud_;
  high_resolution_point_cloud_ = NULL;
  return temp;
}
inline void TrajectoryNodeData::set_allocated_high_resolution_point_cloud(::cartographer::sensor::proto::CompressedPointCloud* high_resolution_point_cloud) {
  delete high_resolution_point_cloud_;
  high_resolution_point_cloud_ = high_resolution_point_cloud;
  if (high_resolution_point_cloud) {
    set_has_high_resolution_point_cloud();
  } else {
    clear_has_high_resolution_point_cloud();
  }
}

// optional .cartographer.sensor.proto.CompressedPointCloud low_resolution_point_cloud = 5;
inline bool TrajectoryNodeData::has_low_resolution_point_cloud() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TrajectoryNodeData::set_has_low_resolution_point_cloud() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TrajectoryNodeData::clear_has_low_resolution_point_cloud() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TrajectoryNodeData::clear_low_resolution_point_cloud() {
  if (low_resolution_point_cloud_ != NULL) low_resolution_point_cloud_->::cartographer::sensor::proto::CompressedPointCloud::Clear();
  clear_has_low_resolution_point_cloud();
}
inline const ::cartographer::sensor::proto::CompressedPointCloud& TrajectoryNodeData::low_resolution_point_cloud() const {
  return low_resolution_point_cloud_ != NULL ? *low_resolution_point_cloud_ : *default_instance_->low_resolution_point_cloud_;
}
inline ::cartographer::sensor::proto::CompressedPointCloud* TrajectoryNodeData::mutable_low_resolution_point_cloud() {
  set_has_low_resolution_point_cloud();
  if (low_resolution_point_cloud_ == NULL) low_resolution_point_cloud_ = new ::cartographer::sensor::proto::CompressedPointCloud;
  return low_resolution_point_cloud_;
}
inline ::cartographer::sensor::proto::CompressedPointCloud* TrajectoryNodeData::release_low_resolution_point_cloud() {
  clear_has_low_resolution_point_cloud();
  ::cartographer::sensor::proto::CompressedPointCloud* temp = low_resolution_point_cloud_;
  low_resolution_point_cloud_ = NULL;
  return temp;
}
inline void TrajectoryNodeData::set_allocated_low_resolution_point_cloud(::cartographer::sensor::proto::CompressedPointCloud* low_resolution_point_cloud) {
  delete low_resolution_point_cloud_;
  low_resolution_point_cloud_ = low_resolution_point_cloud;
  if (low_resolution_point_cloud) {
    set_has_low_resolution_point_cloud();
  } else {
    clear_has_low_resolution_point_cloud();
  }
}

// repeated float rotational_scan_matcher_histogram = 6;
inline int TrajectoryNodeData::rotational_scan_matcher_histogram_size() const {
  return rotational_scan_matcher_histogram_.size();
}
inline void TrajectoryNodeData::clear_rotational_scan_matcher_histogram() {
  rotational_scan_matcher_histogram_.Clear();
}
inline float TrajectoryNodeData::rotational_scan_matcher_histogram(int index) const {
  return rotational_scan_matcher_histogram_.Get(index);
}
inline void TrajectoryNodeData::set_rotational_scan_matcher_histogram(int index, float value) {
  rotational_scan_matcher_histogram_.Set(index, value);
}
inline void TrajectoryNodeData::add_rotational_scan_matcher_histogram(float value) {
  rotational_scan_matcher_histogram_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
TrajectoryNodeData::rotational_scan_matcher_histogram() const {
  return rotational_scan_matcher_histogram_;
}
inline ::google::protobuf::RepeatedField< float >*
TrajectoryNodeData::mutable_rotational_scan_matcher_histogram() {
  return &rotational_scan_matcher_histogram_;
}

// optional .cartographer.transform.proto.Rigid3d local_pose = 7;
inline bool TrajectoryNodeData::has_local_pose() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TrajectoryNodeData::set_has_local_pose() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TrajectoryNodeData::clear_has_local_pose() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TrajectoryNodeData::clear_local_pose() {
  if (local_pose_ != NULL) local_pose_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_local_pose();
}
inline const ::cartographer::transform::proto::Rigid3d& TrajectoryNodeData::local_pose() const {
  return local_pose_ != NULL ? *local_pose_ : *default_instance_->local_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* TrajectoryNodeData::mutable_local_pose() {
  set_has_local_pose();
  if (local_pose_ == NULL) local_pose_ = new ::cartographer::transform::proto::Rigid3d;
  return local_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* TrajectoryNodeData::release_local_pose() {
  clear_has_local_pose();
  ::cartographer::transform::proto::Rigid3d* temp = local_pose_;
  local_pose_ = NULL;
  return temp;
}
inline void TrajectoryNodeData::set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose) {
  delete local_pose_;
  local_pose_ = local_pose;
  if (local_pose) {
    set_has_local_pose();
  } else {
    clear_has_local_pose();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fnode_5fdata_2eproto__INCLUDED
