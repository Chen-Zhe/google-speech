// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/billing.proto

#ifndef PROTOBUF_google_2fapi_2fbilling_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fbilling_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/api/metric.pb.h"
// @@protoc_insertion_point(includes)

namespace google {
namespace api {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2fbilling_2eproto();
void protobuf_InitDefaults_google_2fapi_2fbilling_2eproto();
void protobuf_AssignDesc_google_2fapi_2fbilling_2eproto();
void protobuf_ShutdownFile_google_2fapi_2fbilling_2eproto();

class Billing;
class BillingStatusRule;

// ===================================================================

class Billing : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Billing) */ {
 public:
  Billing();
  virtual ~Billing();

  Billing(const Billing& from);

  inline Billing& operator=(const Billing& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Billing& default_instance();

  static const Billing* internal_default_instance();

  void Swap(Billing* other);

  // implements Message ----------------------------------------------

  inline Billing* New() const { return New(NULL); }

  Billing* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Billing& from);
  void MergeFrom(const Billing& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Billing* other);
  void UnsafeMergeFrom(const Billing& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string metrics = 1;
  int metrics_size() const;
  void clear_metrics();
  static const int kMetricsFieldNumber = 1;
  const ::std::string& metrics(int index) const;
  ::std::string* mutable_metrics(int index);
  void set_metrics(int index, const ::std::string& value);
  void set_metrics(int index, const char* value);
  void set_metrics(int index, const char* value, size_t size);
  ::std::string* add_metrics();
  void add_metrics(const ::std::string& value);
  void add_metrics(const char* value);
  void add_metrics(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& metrics() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_metrics();

  // repeated .google.api.BillingStatusRule rules = 5;
  int rules_size() const;
  void clear_rules();
  static const int kRulesFieldNumber = 5;
  const ::google::api::BillingStatusRule& rules(int index) const;
  ::google::api::BillingStatusRule* mutable_rules(int index);
  ::google::api::BillingStatusRule* add_rules();
  ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >*
      mutable_rules();
  const ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >&
      rules() const;

  // @@protoc_insertion_point(class_scope:google.api.Billing)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> metrics_;
  ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule > rules_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fbilling_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fbilling_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fapi_2fbilling_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fbilling_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Billing> Billing_default_instance_;

// -------------------------------------------------------------------

class BillingStatusRule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.BillingStatusRule) */ {
 public:
  BillingStatusRule();
  virtual ~BillingStatusRule();

  BillingStatusRule(const BillingStatusRule& from);

  inline BillingStatusRule& operator=(const BillingStatusRule& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BillingStatusRule& default_instance();

  static const BillingStatusRule* internal_default_instance();

  void Swap(BillingStatusRule* other);

  // implements Message ----------------------------------------------

  inline BillingStatusRule* New() const { return New(NULL); }

  BillingStatusRule* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BillingStatusRule& from);
  void MergeFrom(const BillingStatusRule& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BillingStatusRule* other);
  void UnsafeMergeFrom(const BillingStatusRule& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string selector = 1;
  void clear_selector();
  static const int kSelectorFieldNumber = 1;
  const ::std::string& selector() const;
  void set_selector(const ::std::string& value);
  void set_selector(const char* value);
  void set_selector(const char* value, size_t size);
  ::std::string* mutable_selector();
  ::std::string* release_selector();
  void set_allocated_selector(::std::string* selector);

  // repeated string allowed_statuses = 2;
  int allowed_statuses_size() const;
  void clear_allowed_statuses();
  static const int kAllowedStatusesFieldNumber = 2;
  const ::std::string& allowed_statuses(int index) const;
  ::std::string* mutable_allowed_statuses(int index);
  void set_allowed_statuses(int index, const ::std::string& value);
  void set_allowed_statuses(int index, const char* value);
  void set_allowed_statuses(int index, const char* value, size_t size);
  ::std::string* add_allowed_statuses();
  void add_allowed_statuses(const ::std::string& value);
  void add_allowed_statuses(const char* value);
  void add_allowed_statuses(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& allowed_statuses() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_allowed_statuses();

  // @@protoc_insertion_point(class_scope:google.api.BillingStatusRule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> allowed_statuses_;
  ::google::protobuf::internal::ArenaStringPtr selector_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fbilling_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fbilling_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fapi_2fbilling_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fbilling_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<BillingStatusRule> BillingStatusRule_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Billing

// repeated string metrics = 1;
inline int Billing::metrics_size() const {
  return metrics_.size();
}
inline void Billing::clear_metrics() {
  metrics_.Clear();
}
inline const ::std::string& Billing::metrics(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Billing.metrics)
  return metrics_.Get(index);
}
inline ::std::string* Billing::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Billing.metrics)
  return metrics_.Mutable(index);
}
inline void Billing::set_metrics(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Billing.metrics)
  metrics_.Mutable(index)->assign(value);
}
inline void Billing::set_metrics(int index, const char* value) {
  metrics_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Billing.metrics)
}
inline void Billing::set_metrics(int index, const char* value, size_t size) {
  metrics_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Billing.metrics)
}
inline ::std::string* Billing::add_metrics() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Billing.metrics)
  return metrics_.Add();
}
inline void Billing::add_metrics(const ::std::string& value) {
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Billing.metrics)
}
inline void Billing::add_metrics(const char* value) {
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Billing.metrics)
}
inline void Billing::add_metrics(const char* value, size_t size) {
  metrics_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Billing.metrics)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Billing::metrics() const {
  // @@protoc_insertion_point(field_list:google.api.Billing.metrics)
  return metrics_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Billing::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Billing.metrics)
  return &metrics_;
}

// repeated .google.api.BillingStatusRule rules = 5;
inline int Billing::rules_size() const {
  return rules_.size();
}
inline void Billing::clear_rules() {
  rules_.Clear();
}
inline const ::google::api::BillingStatusRule& Billing::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Billing.rules)
  return rules_.Get(index);
}
inline ::google::api::BillingStatusRule* Billing::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Billing.rules)
  return rules_.Mutable(index);
}
inline ::google::api::BillingStatusRule* Billing::add_rules() {
  // @@protoc_insertion_point(field_add:google.api.Billing.rules)
  return rules_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >*
Billing::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Billing.rules)
  return &rules_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >&
Billing::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Billing.rules)
  return rules_;
}

inline const Billing* Billing::internal_default_instance() {
  return &Billing_default_instance_.get();
}
// -------------------------------------------------------------------

// BillingStatusRule

// optional string selector = 1;
inline void BillingStatusRule::clear_selector() {
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BillingStatusRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.BillingStatusRule.selector)
  return selector_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BillingStatusRule::set_selector(const ::std::string& value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.BillingStatusRule.selector)
}
inline void BillingStatusRule::set_selector(const char* value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.BillingStatusRule.selector)
}
inline void BillingStatusRule::set_selector(const char* value, size_t size) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.BillingStatusRule.selector)
}
inline ::std::string* BillingStatusRule::mutable_selector() {
  
  // @@protoc_insertion_point(field_mutable:google.api.BillingStatusRule.selector)
  return selector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BillingStatusRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.BillingStatusRule.selector)
  
  return selector_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BillingStatusRule::set_allocated_selector(::std::string* selector) {
  if (selector != NULL) {
    
  } else {
    
  }
  selector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selector);
  // @@protoc_insertion_point(field_set_allocated:google.api.BillingStatusRule.selector)
}

// repeated string allowed_statuses = 2;
inline int BillingStatusRule::allowed_statuses_size() const {
  return allowed_statuses_.size();
}
inline void BillingStatusRule::clear_allowed_statuses() {
  allowed_statuses_.Clear();
}
inline const ::std::string& BillingStatusRule::allowed_statuses(int index) const {
  // @@protoc_insertion_point(field_get:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_.Get(index);
}
inline ::std::string* BillingStatusRule::mutable_allowed_statuses(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_.Mutable(index);
}
inline void BillingStatusRule::set_allowed_statuses(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.BillingStatusRule.allowed_statuses)
  allowed_statuses_.Mutable(index)->assign(value);
}
inline void BillingStatusRule::set_allowed_statuses(int index, const char* value) {
  allowed_statuses_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.BillingStatusRule.allowed_statuses)
}
inline void BillingStatusRule::set_allowed_statuses(int index, const char* value, size_t size) {
  allowed_statuses_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.BillingStatusRule.allowed_statuses)
}
inline ::std::string* BillingStatusRule::add_allowed_statuses() {
  // @@protoc_insertion_point(field_add_mutable:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_.Add();
}
inline void BillingStatusRule::add_allowed_statuses(const ::std::string& value) {
  allowed_statuses_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.BillingStatusRule.allowed_statuses)
}
inline void BillingStatusRule::add_allowed_statuses(const char* value) {
  allowed_statuses_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.BillingStatusRule.allowed_statuses)
}
inline void BillingStatusRule::add_allowed_statuses(const char* value, size_t size) {
  allowed_statuses_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.BillingStatusRule.allowed_statuses)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BillingStatusRule::allowed_statuses() const {
  // @@protoc_insertion_point(field_list:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BillingStatusRule::mutable_allowed_statuses() {
  // @@protoc_insertion_point(field_mutable_list:google.api.BillingStatusRule.allowed_statuses)
  return &allowed_statuses_;
}

inline const BillingStatusRule* BillingStatusRule::internal_default_instance() {
  return &BillingStatusRule_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fbilling_2eproto__INCLUDED
