// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/v2/common.proto

#ifndef PROTOBUF_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto__INCLUDED
#define PROTOBUF_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include "google/api/annotations.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace bigtable {
namespace admin {
namespace v2 {
}  // namespace v2
}  // namespace admin
}  // namespace bigtable
namespace protobuf {
class Timestamp;
class TimestampDefaultTypeInternal;
extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace bigtable {
namespace admin {
namespace v2 {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto();
void protobuf_InitDefaults_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto();

enum StorageType {
  STORAGE_TYPE_UNSPECIFIED = 0,
  SSD = 1,
  HDD = 2,
  StorageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  StorageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool StorageType_IsValid(int value);
const StorageType StorageType_MIN = STORAGE_TYPE_UNSPECIFIED;
const StorageType StorageType_MAX = HDD;
const int StorageType_ARRAYSIZE = StorageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* StorageType_descriptor();
inline const ::std::string& StorageType_Name(StorageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    StorageType_descriptor(), value);
}
inline bool StorageType_Parse(
    const ::std::string& name, StorageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StorageType>(
    StorageType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace v2
}  // namespace admin
}  // namespace bigtable
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::bigtable::admin::v2::StorageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::bigtable::admin::v2::StorageType>() {
  return ::google::bigtable::admin::v2::StorageType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fbigtable_2fadmin_2fv2_2fcommon_2eproto__INCLUDED
