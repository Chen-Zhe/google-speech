// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/clouderrorreporting/v1beta1/report_errors_service.proto

#ifndef PROTOBUF_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto__INCLUDED
#define PROTOBUF_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/devtools/clouderrorreporting/v1beta1/common.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {
class ErrorContext;
class ErrorContextDefaultTypeInternal;
extern ErrorContextDefaultTypeInternal _ErrorContext_default_instance_;
class ErrorEvent;
class ErrorEventDefaultTypeInternal;
extern ErrorEventDefaultTypeInternal _ErrorEvent_default_instance_;
class ErrorGroup;
class ErrorGroupDefaultTypeInternal;
extern ErrorGroupDefaultTypeInternal _ErrorGroup_default_instance_;
class HttpRequestContext;
class HttpRequestContextDefaultTypeInternal;
extern HttpRequestContextDefaultTypeInternal _HttpRequestContext_default_instance_;
class ReportErrorEventRequest;
class ReportErrorEventRequestDefaultTypeInternal;
extern ReportErrorEventRequestDefaultTypeInternal _ReportErrorEventRequest_default_instance_;
class ReportErrorEventResponse;
class ReportErrorEventResponseDefaultTypeInternal;
extern ReportErrorEventResponseDefaultTypeInternal _ReportErrorEventResponse_default_instance_;
class ReportedErrorEvent;
class ReportedErrorEventDefaultTypeInternal;
extern ReportedErrorEventDefaultTypeInternal _ReportedErrorEvent_default_instance_;
class ServiceContext;
class ServiceContextDefaultTypeInternal;
extern ServiceContextDefaultTypeInternal _ServiceContext_default_instance_;
class SourceLocation;
class SourceLocationDefaultTypeInternal;
extern SourceLocationDefaultTypeInternal _SourceLocation_default_instance_;
class TrackingIssue;
class TrackingIssueDefaultTypeInternal;
extern TrackingIssueDefaultTypeInternal _TrackingIssue_default_instance_;
}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
namespace protobuf {
class Timestamp;
class TimestampDefaultTypeInternal;
extern TimestampDefaultTypeInternal _Timestamp_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();
void protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();

// ===================================================================

class ReportErrorEventRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest) */ {
 public:
  ReportErrorEventRequest();
  virtual ~ReportErrorEventRequest();

  ReportErrorEventRequest(const ReportErrorEventRequest& from);

  inline ReportErrorEventRequest& operator=(const ReportErrorEventRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ReportErrorEventRequest& default_instance();

  static inline const ReportErrorEventRequest* internal_default_instance() {
    return reinterpret_cast<const ReportErrorEventRequest*>(
               &_ReportErrorEventRequest_default_instance_);
  }

  void Swap(ReportErrorEventRequest* other);

  // implements Message ----------------------------------------------

  inline ReportErrorEventRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  ReportErrorEventRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReportErrorEventRequest& from);
  void MergeFrom(const ReportErrorEventRequest& from);
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
  void InternalSwap(ReportErrorEventRequest* other);
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

  // string project_name = 1;
  void clear_project_name();
  static const int kProjectNameFieldNumber = 1;
  const ::std::string& project_name() const;
  void set_project_name(const ::std::string& value);
  void set_project_name(const char* value);
  void set_project_name(const char* value, size_t size);
  ::std::string* mutable_project_name();
  ::std::string* release_project_name();
  void set_allocated_project_name(::std::string* project_name);

  // .google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent event = 2;
  bool has_event() const;
  void clear_event();
  static const int kEventFieldNumber = 2;
  const ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent& event() const;
  ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* mutable_event();
  ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* release_event();
  void set_allocated_event(::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* event);

  // @@protoc_insertion_point(class_scope:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr project_name_;
  ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* event_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();
  friend void protobuf_ShutdownFile_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();

};
// -------------------------------------------------------------------

class ReportErrorEventResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventResponse) */ {
 public:
  ReportErrorEventResponse();
  virtual ~ReportErrorEventResponse();

  ReportErrorEventResponse(const ReportErrorEventResponse& from);

  inline ReportErrorEventResponse& operator=(const ReportErrorEventResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ReportErrorEventResponse& default_instance();

  static inline const ReportErrorEventResponse* internal_default_instance() {
    return reinterpret_cast<const ReportErrorEventResponse*>(
               &_ReportErrorEventResponse_default_instance_);
  }

  void Swap(ReportErrorEventResponse* other);

  // implements Message ----------------------------------------------

  inline ReportErrorEventResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  ReportErrorEventResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReportErrorEventResponse& from);
  void MergeFrom(const ReportErrorEventResponse& from);
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
  void InternalSwap(ReportErrorEventResponse* other);
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

  // @@protoc_insertion_point(class_scope:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();
  friend void protobuf_ShutdownFile_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();

};
// -------------------------------------------------------------------

class ReportedErrorEvent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent) */ {
 public:
  ReportedErrorEvent();
  virtual ~ReportedErrorEvent();

  ReportedErrorEvent(const ReportedErrorEvent& from);

  inline ReportedErrorEvent& operator=(const ReportedErrorEvent& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ReportedErrorEvent& default_instance();

  static inline const ReportedErrorEvent* internal_default_instance() {
    return reinterpret_cast<const ReportedErrorEvent*>(
               &_ReportedErrorEvent_default_instance_);
  }

  void Swap(ReportedErrorEvent* other);

  // implements Message ----------------------------------------------

  inline ReportedErrorEvent* New() const PROTOBUF_FINAL { return New(NULL); }

  ReportedErrorEvent* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReportedErrorEvent& from);
  void MergeFrom(const ReportedErrorEvent& from);
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
  void InternalSwap(ReportedErrorEvent* other);
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

  // .google.protobuf.Timestamp event_time = 1;
  bool has_event_time() const;
  void clear_event_time();
  static const int kEventTimeFieldNumber = 1;
  const ::google::protobuf::Timestamp& event_time() const;
  ::google::protobuf::Timestamp* mutable_event_time();
  ::google::protobuf::Timestamp* release_event_time();
  void set_allocated_event_time(::google::protobuf::Timestamp* event_time);

  // .google.devtools.clouderrorreporting.v1beta1.ServiceContext service_context = 2;
  bool has_service_context() const;
  void clear_service_context();
  static const int kServiceContextFieldNumber = 2;
  const ::google::devtools::clouderrorreporting::v1beta1::ServiceContext& service_context() const;
  ::google::devtools::clouderrorreporting::v1beta1::ServiceContext* mutable_service_context();
  ::google::devtools::clouderrorreporting::v1beta1::ServiceContext* release_service_context();
  void set_allocated_service_context(::google::devtools::clouderrorreporting::v1beta1::ServiceContext* service_context);

  // string message = 3;
  void clear_message();
  static const int kMessageFieldNumber = 3;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // .google.devtools.clouderrorreporting.v1beta1.ErrorContext context = 4;
  bool has_context() const;
  void clear_context();
  static const int kContextFieldNumber = 4;
  const ::google::devtools::clouderrorreporting::v1beta1::ErrorContext& context() const;
  ::google::devtools::clouderrorreporting::v1beta1::ErrorContext* mutable_context();
  ::google::devtools::clouderrorreporting::v1beta1::ErrorContext* release_context();
  void set_allocated_context(::google::devtools::clouderrorreporting::v1beta1::ErrorContext* context);

  // @@protoc_insertion_point(class_scope:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::google::protobuf::Timestamp* event_time_;
  ::google::devtools::clouderrorreporting::v1beta1::ServiceContext* service_context_;
  ::google::devtools::clouderrorreporting::v1beta1::ErrorContext* context_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();
  friend void protobuf_ShutdownFile_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto();

};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ReportErrorEventRequest

// string project_name = 1;
inline void ReportErrorEventRequest::clear_project_name() {
  project_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReportErrorEventRequest::project_name() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
  return project_name_.GetNoArena();
}
inline void ReportErrorEventRequest::set_project_name(const ::std::string& value) {
  
  project_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
}
inline void ReportErrorEventRequest::set_project_name(const char* value) {
  
  project_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
}
inline void ReportErrorEventRequest::set_project_name(const char* value, size_t size) {
  
  project_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
}
inline ::std::string* ReportErrorEventRequest::mutable_project_name() {
  
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
  return project_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReportErrorEventRequest::release_project_name() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
  
  return project_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReportErrorEventRequest::set_allocated_project_name(::std::string* project_name) {
  if (project_name != NULL) {
    
  } else {
    
  }
  project_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), project_name);
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.project_name)
}

// .google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent event = 2;
inline bool ReportErrorEventRequest::has_event() const {
  return this != internal_default_instance() && event_ != NULL;
}
inline void ReportErrorEventRequest::clear_event() {
  if (GetArenaNoVirtual() == NULL && event_ != NULL) delete event_;
  event_ = NULL;
}
inline const ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent& ReportErrorEventRequest::event() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.event)
  return event_ != NULL ? *event_
                         : *::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent::internal_default_instance();
}
inline ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* ReportErrorEventRequest::mutable_event() {
  
  if (event_ == NULL) {
    event_ = new ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.event)
  return event_;
}
inline ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* ReportErrorEventRequest::release_event() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.event)
  
  ::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* temp = event_;
  event_ = NULL;
  return temp;
}
inline void ReportErrorEventRequest::set_allocated_event(::google::devtools::clouderrorreporting::v1beta1::ReportedErrorEvent* event) {
  delete event_;
  event_ = event;
  if (event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.ReportErrorEventRequest.event)
}

// -------------------------------------------------------------------

// ReportErrorEventResponse

// -------------------------------------------------------------------

// ReportedErrorEvent

// .google.protobuf.Timestamp event_time = 1;
inline bool ReportedErrorEvent::has_event_time() const {
  return this != internal_default_instance() && event_time_ != NULL;
}
inline void ReportedErrorEvent::clear_event_time() {
  if (GetArenaNoVirtual() == NULL && event_time_ != NULL) delete event_time_;
  event_time_ = NULL;
}
inline const ::google::protobuf::Timestamp& ReportedErrorEvent::event_time() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.event_time)
  return event_time_ != NULL ? *event_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
inline ::google::protobuf::Timestamp* ReportedErrorEvent::mutable_event_time() {
  
  if (event_time_ == NULL) {
    event_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.event_time)
  return event_time_;
}
inline ::google::protobuf::Timestamp* ReportedErrorEvent::release_event_time() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.event_time)
  
  ::google::protobuf::Timestamp* temp = event_time_;
  event_time_ = NULL;
  return temp;
}
inline void ReportedErrorEvent::set_allocated_event_time(::google::protobuf::Timestamp* event_time) {
  delete event_time_;
  if (event_time != NULL && event_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_event_time = new ::google::protobuf::Timestamp;
    new_event_time->CopyFrom(*event_time);
    event_time = new_event_time;
  }
  event_time_ = event_time;
  if (event_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.event_time)
}

// .google.devtools.clouderrorreporting.v1beta1.ServiceContext service_context = 2;
inline bool ReportedErrorEvent::has_service_context() const {
  return this != internal_default_instance() && service_context_ != NULL;
}
inline void ReportedErrorEvent::clear_service_context() {
  if (GetArenaNoVirtual() == NULL && service_context_ != NULL) delete service_context_;
  service_context_ = NULL;
}
inline const ::google::devtools::clouderrorreporting::v1beta1::ServiceContext& ReportedErrorEvent::service_context() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.service_context)
  return service_context_ != NULL ? *service_context_
                         : *::google::devtools::clouderrorreporting::v1beta1::ServiceContext::internal_default_instance();
}
inline ::google::devtools::clouderrorreporting::v1beta1::ServiceContext* ReportedErrorEvent::mutable_service_context() {
  
  if (service_context_ == NULL) {
    service_context_ = new ::google::devtools::clouderrorreporting::v1beta1::ServiceContext;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.service_context)
  return service_context_;
}
inline ::google::devtools::clouderrorreporting::v1beta1::ServiceContext* ReportedErrorEvent::release_service_context() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.service_context)
  
  ::google::devtools::clouderrorreporting::v1beta1::ServiceContext* temp = service_context_;
  service_context_ = NULL;
  return temp;
}
inline void ReportedErrorEvent::set_allocated_service_context(::google::devtools::clouderrorreporting::v1beta1::ServiceContext* service_context) {
  delete service_context_;
  service_context_ = service_context;
  if (service_context) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.service_context)
}

// string message = 3;
inline void ReportedErrorEvent::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReportedErrorEvent::message() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
  return message_.GetNoArena();
}
inline void ReportedErrorEvent::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
}
inline void ReportedErrorEvent::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
}
inline void ReportedErrorEvent::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
}
inline ::std::string* ReportedErrorEvent::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReportedErrorEvent::release_message() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReportedErrorEvent::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.message)
}

// .google.devtools.clouderrorreporting.v1beta1.ErrorContext context = 4;
inline bool ReportedErrorEvent::has_context() const {
  return this != internal_default_instance() && context_ != NULL;
}
inline void ReportedErrorEvent::clear_context() {
  if (GetArenaNoVirtual() == NULL && context_ != NULL) delete context_;
  context_ = NULL;
}
inline const ::google::devtools::clouderrorreporting::v1beta1::ErrorContext& ReportedErrorEvent::context() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.context)
  return context_ != NULL ? *context_
                         : *::google::devtools::clouderrorreporting::v1beta1::ErrorContext::internal_default_instance();
}
inline ::google::devtools::clouderrorreporting::v1beta1::ErrorContext* ReportedErrorEvent::mutable_context() {
  
  if (context_ == NULL) {
    context_ = new ::google::devtools::clouderrorreporting::v1beta1::ErrorContext;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.context)
  return context_;
}
inline ::google::devtools::clouderrorreporting::v1beta1::ErrorContext* ReportedErrorEvent::release_context() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.context)
  
  ::google::devtools::clouderrorreporting::v1beta1::ErrorContext* temp = context_;
  context_ = NULL;
  return temp;
}
inline void ReportedErrorEvent::set_allocated_context(::google::devtools::clouderrorreporting::v1beta1::ErrorContext* context) {
  delete context_;
  context_ = context;
  if (context) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.ReportedErrorEvent.context)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2freport_5ferrors_5fservice_2eproto__INCLUDED
