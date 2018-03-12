// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/proto/submaps_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_2d/proto/submaps_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_2d {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* SubmapsOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SubmapsOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_2d/proto/submaps_options.proto");
  GOOGLE_CHECK(file != NULL);
  SubmapsOptions_descriptor_ = file->message_type(0);
  static const int SubmapsOptions_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions, resolution_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions, num_range_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions, range_data_inserter_options_),
  };
  SubmapsOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SubmapsOptions_descriptor_,
      SubmapsOptions::default_instance_,
      SubmapsOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmapsOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SubmapsOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SubmapsOptions_descriptor_, &SubmapsOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto() {
  delete SubmapsOptions::default_instance_;
  delete SubmapsOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping_2d::proto::protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n3cartographer/mapping_2d/proto/submaps_"
    "options.proto\022\035cartographer.mapping_2d.p"
    "roto\032\?cartographer/mapping_2d/proto/rang"
    "e_data_inserter_options.proto\"\232\001\n\016Submap"
    "sOptions\022\022\n\nresolution\030\001 \001(\001\022\026\n\016num_rang"
    "e_data\030\003 \001(\005\022\\\n\033range_data_inserter_opti"
    "ons\030\005 \001(\01327.cartographer.mapping_2d.prot"
    "o.RangeDataInserterOptions", 306);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_2d/proto/submaps_options.proto", &protobuf_RegisterTypes);
  SubmapsOptions::default_instance_ = new SubmapsOptions();
  SubmapsOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SubmapsOptions::kResolutionFieldNumber;
const int SubmapsOptions::kNumRangeDataFieldNumber;
const int SubmapsOptions::kRangeDataInserterOptionsFieldNumber;
#endif  // !_MSC_VER

SubmapsOptions::SubmapsOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SubmapsOptions::InitAsDefaultInstance() {
  range_data_inserter_options_ = const_cast< ::cartographer::mapping_2d::proto::RangeDataInserterOptions*>(&::cartographer::mapping_2d::proto::RangeDataInserterOptions::default_instance());
}

SubmapsOptions::SubmapsOptions(const SubmapsOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SubmapsOptions::SharedCtor() {
  _cached_size_ = 0;
  resolution_ = 0;
  num_range_data_ = 0;
  range_data_inserter_options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SubmapsOptions::~SubmapsOptions() {
  SharedDtor();
}

void SubmapsOptions::SharedDtor() {
  if (this != default_instance_) {
    delete range_data_inserter_options_;
  }
}

void SubmapsOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SubmapsOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SubmapsOptions_descriptor_;
}

const SubmapsOptions& SubmapsOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
  return *default_instance_;
}

SubmapsOptions* SubmapsOptions::default_instance_ = NULL;

SubmapsOptions* SubmapsOptions::New() const {
  return new SubmapsOptions;
}

void SubmapsOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    resolution_ = 0;
    num_range_data_ = 0;
    if (has_range_data_inserter_options()) {
      if (range_data_inserter_options_ != NULL) range_data_inserter_options_->::cartographer::mapping_2d::proto::RangeDataInserterOptions::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SubmapsOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double resolution = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &resolution_)));
          set_has_resolution();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_num_range_data;
        break;
      }

      // optional int32 num_range_data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_num_range_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_range_data_)));
          set_has_num_range_data();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_range_data_inserter_options;
        break;
      }

      // optional .cartographer.mapping_2d.proto.RangeDataInserterOptions range_data_inserter_options = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_range_data_inserter_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_range_data_inserter_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SubmapsOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double resolution = 1;
  if (has_resolution()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->resolution(), output);
  }

  // optional int32 num_range_data = 3;
  if (has_num_range_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->num_range_data(), output);
  }

  // optional .cartographer.mapping_2d.proto.RangeDataInserterOptions range_data_inserter_options = 5;
  if (has_range_data_inserter_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->range_data_inserter_options(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SubmapsOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double resolution = 1;
  if (has_resolution()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->resolution(), target);
  }

  // optional int32 num_range_data = 3;
  if (has_num_range_data()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->num_range_data(), target);
  }

  // optional .cartographer.mapping_2d.proto.RangeDataInserterOptions range_data_inserter_options = 5;
  if (has_range_data_inserter_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->range_data_inserter_options(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SubmapsOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double resolution = 1;
    if (has_resolution()) {
      total_size += 1 + 8;
    }

    // optional int32 num_range_data = 3;
    if (has_num_range_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_range_data());
    }

    // optional .cartographer.mapping_2d.proto.RangeDataInserterOptions range_data_inserter_options = 5;
    if (has_range_data_inserter_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->range_data_inserter_options());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SubmapsOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SubmapsOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SubmapsOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SubmapsOptions::MergeFrom(const SubmapsOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_resolution()) {
      set_resolution(from.resolution());
    }
    if (from.has_num_range_data()) {
      set_num_range_data(from.num_range_data());
    }
    if (from.has_range_data_inserter_options()) {
      mutable_range_data_inserter_options()->::cartographer::mapping_2d::proto::RangeDataInserterOptions::MergeFrom(from.range_data_inserter_options());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SubmapsOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubmapsOptions::CopyFrom(const SubmapsOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmapsOptions::IsInitialized() const {

  return true;
}

void SubmapsOptions::Swap(SubmapsOptions* other) {
  if (other != this) {
    std::swap(resolution_, other->resolution_);
    std::swap(num_range_data_, other->num_range_data_);
    std::swap(range_data_inserter_options_, other->range_data_inserter_options_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SubmapsOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SubmapsOptions_descriptor_;
  metadata.reflection = SubmapsOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_2d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
