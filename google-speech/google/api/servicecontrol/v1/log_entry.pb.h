// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/servicecontrol/v1/log_entry.proto

#ifndef PROTOBUF_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/logging/type/log_severity.pb.h"
#include <google/protobuf/any.pb.h>
#include <google/protobuf/struct.pb.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {
class LogEntry;
class LogEntryDefaultTypeInternal;
extern LogEntryDefaultTypeInternal _LogEntry_default_instance_;
}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
namespace logging {
namespace type {
}  // namespace type
}  // namespace logging
namespace protobuf {
class Any;
class AnyDefaultTypeInternal;
extern AnyDefaultTypeInternal _Any_default_instance_;
class ListValue;
class ListValueDefaultTypeInternal;
extern ListValueDefaultTypeInternal _ListValue_default_instance_;
class Struct;
class StructDefaultTypeInternal;
extern StructDefaultTypeInternal _Struct_default_instance_;
class Timestamp;
class TimestampDefaultTypeInternal;
extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
class Value;
class ValueDefaultTypeInternal;
extern ValueDefaultTypeInternal _Value_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace api {
namespace servicecontrol {
namespace v1 {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto();
void protobuf_InitDefaults_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto();

// ===================================================================


// -------------------------------------------------------------------

class LogEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.servicecontrol.v1.LogEntry) */ {
 public:
  LogEntry();
  virtual ~LogEntry();

  LogEntry(const LogEntry& from);

  inline LogEntry& operator=(const LogEntry& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LogEntry& default_instance();

  enum PayloadCase {
    kProtoPayload = 2,
    kTextPayload = 3,
    kStructPayload = 6,
    PAYLOAD_NOT_SET = 0,
  };

  static inline const LogEntry* internal_default_instance() {
    return reinterpret_cast<const LogEntry*>(
               &_LogEntry_default_instance_);
  }

  void Swap(LogEntry* other);

  // implements Message ----------------------------------------------

  inline LogEntry* New() const PROTOBUF_FINAL { return New(NULL); }

  LogEntry* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LogEntry& from);
  void MergeFrom(const LogEntry& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LogEntry* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // string name = 10;
  void clear_name();
  static const int kNameFieldNumber = 10;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .google.protobuf.Timestamp timestamp = 11;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 11;
  const ::google::protobuf::Timestamp& timestamp() const;
  ::google::protobuf::Timestamp* mutable_timestamp();
  ::google::protobuf::Timestamp* release_timestamp();
  void set_allocated_timestamp(::google::protobuf::Timestamp* timestamp);

  // .google.logging.type.LogSeverity severity = 12;
  void clear_severity();
  static const int kSeverityFieldNumber = 12;
  ::google::logging::type::LogSeverity severity() const;
  void set_severity(::google::logging::type::LogSeverity value);

  // string insert_id = 4;
  void clear_insert_id();
  static const int kInsertIdFieldNumber = 4;
  const ::std::string& insert_id() const;
  void set_insert_id(const ::std::string& value);
  void set_insert_id(const char* value);
  void set_insert_id(const char* value, size_t size);
  ::std::string* mutable_insert_id();
  ::std::string* release_insert_id();
  void set_allocated_insert_id(::std::string* insert_id);

  // map<string, string> labels = 13;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 13;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      labels() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_labels();

  // .google.protobuf.Any proto_payload = 2;
  bool has_proto_payload() const;
  void clear_proto_payload();
  static const int kProtoPayloadFieldNumber = 2;
  const ::google::protobuf::Any& proto_payload() const;
  ::google::protobuf::Any* mutable_proto_payload();
  ::google::protobuf::Any* release_proto_payload();
  void set_allocated_proto_payload(::google::protobuf::Any* proto_payload);

  // string text_payload = 3;
  private:
  bool has_text_payload() const;
  public:
  void clear_text_payload();
  static const int kTextPayloadFieldNumber = 3;
  const ::std::string& text_payload() const;
  void set_text_payload(const ::std::string& value);
  void set_text_payload(const char* value);
  void set_text_payload(const char* value, size_t size);
  ::std::string* mutable_text_payload();
  ::std::string* release_text_payload();
  void set_allocated_text_payload(::std::string* text_payload);

  // .google.protobuf.Struct struct_payload = 6;
  bool has_struct_payload() const;
  void clear_struct_payload();
  static const int kStructPayloadFieldNumber = 6;
  const ::google::protobuf::Struct& struct_payload() const;
  ::google::protobuf::Struct* mutable_struct_payload();
  ::google::protobuf::Struct* release_struct_payload();
  void set_allocated_struct_payload(::google::protobuf::Struct* struct_payload);

  PayloadCase payload_case() const;
  // @@protoc_insertion_point(class_scope:google.api.servicecontrol.v1.LogEntry)
 private:
  void set_has_proto_payload();
  void set_has_text_payload();
  void set_has_struct_payload();

  inline bool has_payload() const;
  void clear_payload();
  inline void clear_has_payload();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      LogEntry_LabelsEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > labels_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr insert_id_;
  ::google::protobuf::Timestamp* timestamp_;
  int severity_;
  union PayloadUnion {
    PayloadUnion() {}
    ::google::protobuf::Any* proto_payload_;
    ::google::protobuf::internal::ArenaStringPtr text_payload_;
    ::google::protobuf::Struct* struct_payload_;
  } payload_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_InitDefaults_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto();

};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// LogEntry

// string name = 10;
inline void LogEntry::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogEntry::name() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.name)
  return name_.GetNoArena();
}
inline void LogEntry::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.LogEntry.name)
}
inline void LogEntry::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.LogEntry.name)
}
inline void LogEntry::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.LogEntry.name)
}
inline ::std::string* LogEntry::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.LogEntry.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogEntry::release_name() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.LogEntry.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogEntry::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.name)
}

// .google.protobuf.Timestamp timestamp = 11;
inline bool LogEntry::has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != NULL;
}
inline void LogEntry::clear_timestamp() {
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) delete timestamp_;
  timestamp_ = NULL;
}
inline const ::google::protobuf::Timestamp& LogEntry::timestamp() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.timestamp)
  return timestamp_ != NULL ? *timestamp_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
inline ::google::protobuf::Timestamp* LogEntry::mutable_timestamp() {
  
  if (timestamp_ == NULL) {
    timestamp_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.LogEntry.timestamp)
  return timestamp_;
}
inline ::google::protobuf::Timestamp* LogEntry::release_timestamp() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.LogEntry.timestamp)
  
  ::google::protobuf::Timestamp* temp = timestamp_;
  timestamp_ = NULL;
  return temp;
}
inline void LogEntry::set_allocated_timestamp(::google::protobuf::Timestamp* timestamp) {
  delete timestamp_;
  if (timestamp != NULL && timestamp->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_timestamp = new ::google::protobuf::Timestamp;
    new_timestamp->CopyFrom(*timestamp);
    timestamp = new_timestamp;
  }
  timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.timestamp)
}

// .google.logging.type.LogSeverity severity = 12;
inline void LogEntry::clear_severity() {
  severity_ = 0;
}
inline ::google::logging::type::LogSeverity LogEntry::severity() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.severity)
  return static_cast< ::google::logging::type::LogSeverity >(severity_);
}
inline void LogEntry::set_severity(::google::logging::type::LogSeverity value) {
  
  severity_ = value;
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.LogEntry.severity)
}

// string insert_id = 4;
inline void LogEntry::clear_insert_id() {
  insert_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogEntry::insert_id() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.insert_id)
  return insert_id_.GetNoArena();
}
inline void LogEntry::set_insert_id(const ::std::string& value) {
  
  insert_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.LogEntry.insert_id)
}
inline void LogEntry::set_insert_id(const char* value) {
  
  insert_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.LogEntry.insert_id)
}
inline void LogEntry::set_insert_id(const char* value, size_t size) {
  
  insert_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.LogEntry.insert_id)
}
inline ::std::string* LogEntry::mutable_insert_id() {
  
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.LogEntry.insert_id)
  return insert_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogEntry::release_insert_id() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.LogEntry.insert_id)
  
  return insert_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogEntry::set_allocated_insert_id(::std::string* insert_id) {
  if (insert_id != NULL) {
    
  } else {
    
  }
  insert_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), insert_id);
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.insert_id)
}

// map<string, string> labels = 13;
inline int LogEntry::labels_size() const {
  return labels_.size();
}
inline void LogEntry::clear_labels() {
  labels_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
LogEntry::labels() const {
  // @@protoc_insertion_point(field_map:google.api.servicecontrol.v1.LogEntry.labels)
  return labels_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
LogEntry::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_map:google.api.servicecontrol.v1.LogEntry.labels)
  return labels_.MutableMap();
}

// .google.protobuf.Any proto_payload = 2;
inline bool LogEntry::has_proto_payload() const {
  return payload_case() == kProtoPayload;
}
inline void LogEntry::set_has_proto_payload() {
  _oneof_case_[0] = kProtoPayload;
}
inline void LogEntry::clear_proto_payload() {
  if (has_proto_payload()) {
    delete payload_.proto_payload_;
    clear_has_payload();
  }
}
inline  const ::google::protobuf::Any& LogEntry::proto_payload() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.proto_payload)
  return has_proto_payload()
      ? *payload_.proto_payload_
      : ::google::protobuf::Any::default_instance();
}
inline ::google::protobuf::Any* LogEntry::mutable_proto_payload() {
  if (!has_proto_payload()) {
    clear_payload();
    set_has_proto_payload();
    payload_.proto_payload_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.LogEntry.proto_payload)
  return payload_.proto_payload_;
}
inline ::google::protobuf::Any* LogEntry::release_proto_payload() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.LogEntry.proto_payload)
  if (has_proto_payload()) {
    clear_has_payload();
    ::google::protobuf::Any* temp = payload_.proto_payload_;
    payload_.proto_payload_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LogEntry::set_allocated_proto_payload(::google::protobuf::Any* proto_payload) {
  clear_payload();
  if (proto_payload) {
    set_has_proto_payload();
    payload_.proto_payload_ = proto_payload;
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.proto_payload)
}

// string text_payload = 3;
inline bool LogEntry::has_text_payload() const {
  return payload_case() == kTextPayload;
}
inline void LogEntry::set_has_text_payload() {
  _oneof_case_[0] = kTextPayload;
}
inline void LogEntry::clear_text_payload() {
  if (has_text_payload()) {
    payload_.text_payload_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_payload();
  }
}
inline const ::std::string& LogEntry::text_payload() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.text_payload)
  if (has_text_payload()) {
    return payload_.text_payload_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void LogEntry::set_text_payload(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.LogEntry.text_payload)
  if (!has_text_payload()) {
    clear_payload();
    set_has_text_payload();
    payload_.text_payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  payload_.text_payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.servicecontrol.v1.LogEntry.text_payload)
}
inline void LogEntry::set_text_payload(const char* value) {
  if (!has_text_payload()) {
    clear_payload();
    set_has_text_payload();
    payload_.text_payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  payload_.text_payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.servicecontrol.v1.LogEntry.text_payload)
}
inline void LogEntry::set_text_payload(const char* value, size_t size) {
  if (!has_text_payload()) {
    clear_payload();
    set_has_text_payload();
    payload_.text_payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  payload_.text_payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.servicecontrol.v1.LogEntry.text_payload)
}
inline ::std::string* LogEntry::mutable_text_payload() {
  if (!has_text_payload()) {
    clear_payload();
    set_has_text_payload();
    payload_.text_payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.LogEntry.text_payload)
  return payload_.text_payload_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogEntry::release_text_payload() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.LogEntry.text_payload)
  if (has_text_payload()) {
    clear_has_payload();
    return payload_.text_payload_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void LogEntry::set_allocated_text_payload(::std::string* text_payload) {
  if (!has_text_payload()) {
    payload_.text_payload_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_payload();
  if (text_payload != NULL) {
    set_has_text_payload();
    payload_.text_payload_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        text_payload);
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.text_payload)
}

// .google.protobuf.Struct struct_payload = 6;
inline bool LogEntry::has_struct_payload() const {
  return payload_case() == kStructPayload;
}
inline void LogEntry::set_has_struct_payload() {
  _oneof_case_[0] = kStructPayload;
}
inline void LogEntry::clear_struct_payload() {
  if (has_struct_payload()) {
    delete payload_.struct_payload_;
    clear_has_payload();
  }
}
inline  const ::google::protobuf::Struct& LogEntry::struct_payload() const {
  // @@protoc_insertion_point(field_get:google.api.servicecontrol.v1.LogEntry.struct_payload)
  return has_struct_payload()
      ? *payload_.struct_payload_
      : ::google::protobuf::Struct::default_instance();
}
inline ::google::protobuf::Struct* LogEntry::mutable_struct_payload() {
  if (!has_struct_payload()) {
    clear_payload();
    set_has_struct_payload();
    payload_.struct_payload_ = new ::google::protobuf::Struct;
  }
  // @@protoc_insertion_point(field_mutable:google.api.servicecontrol.v1.LogEntry.struct_payload)
  return payload_.struct_payload_;
}
inline ::google::protobuf::Struct* LogEntry::release_struct_payload() {
  // @@protoc_insertion_point(field_release:google.api.servicecontrol.v1.LogEntry.struct_payload)
  if (has_struct_payload()) {
    clear_has_payload();
    ::google::protobuf::Struct* temp = payload_.struct_payload_;
    payload_.struct_payload_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void LogEntry::set_allocated_struct_payload(::google::protobuf::Struct* struct_payload) {
  clear_payload();
  if (struct_payload) {
    if (static_cast< ::google::protobuf::Struct*>(struct_payload)->GetArena() != NULL) {
      ::google::protobuf::Struct* new_struct_payload = new ::google::protobuf::Struct;
      new_struct_payload->CopyFrom(*struct_payload);
      struct_payload = new_struct_payload;
    }
    set_has_struct_payload();
    payload_.struct_payload_ = struct_payload;
  }
  // @@protoc_insertion_point(field_set_allocated:google.api.servicecontrol.v1.LogEntry.struct_payload)
}

inline bool LogEntry::has_payload() const {
  return payload_case() != PAYLOAD_NOT_SET;
}
inline void LogEntry::clear_has_payload() {
  _oneof_case_[0] = PAYLOAD_NOT_SET;
}
inline LogEntry::PayloadCase LogEntry::payload_case() const {
  return LogEntry::PayloadCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace servicecontrol
}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fservicecontrol_2fv1_2flog_5fentry_2eproto__INCLUDED
