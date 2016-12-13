// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/system_parameter.proto

#ifndef PROTOBUF_google_2fapi_2fsystem_5fparameter_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fsystem_5fparameter_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class SystemParameter;
class SystemParameterDefaultTypeInternal;
extern SystemParameterDefaultTypeInternal _SystemParameter_default_instance_;
class SystemParameterRule;
class SystemParameterRuleDefaultTypeInternal;
extern SystemParameterRuleDefaultTypeInternal _SystemParameterRule_default_instance_;
class SystemParameters;
class SystemParametersDefaultTypeInternal;
extern SystemParametersDefaultTypeInternal _SystemParameters_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fapi_2fsystem_5fparameter_2eproto();
void protobuf_InitDefaults_google_2fapi_2fsystem_5fparameter_2eproto();

// ===================================================================

class SystemParameters : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.SystemParameters) */ {
 public:
  SystemParameters();
  virtual ~SystemParameters();

  SystemParameters(const SystemParameters& from);

  inline SystemParameters& operator=(const SystemParameters& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SystemParameters& default_instance();

  static inline const SystemParameters* internal_default_instance() {
    return reinterpret_cast<const SystemParameters*>(
               &_SystemParameters_default_instance_);
  }

  void Swap(SystemParameters* other);

  // implements Message ----------------------------------------------

  inline SystemParameters* New() const PROTOBUF_FINAL { return New(NULL); }

  SystemParameters* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SystemParameters& from);
  void MergeFrom(const SystemParameters& from);
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
  void InternalSwap(SystemParameters* other);
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

  // repeated .google.api.SystemParameterRule rules = 1;
  int rules_size() const;
  void clear_rules();
  static const int kRulesFieldNumber = 1;
  const ::google::api::SystemParameterRule& rules(int index) const;
  ::google::api::SystemParameterRule* mutable_rules(int index);
  ::google::api::SystemParameterRule* add_rules();
  ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameterRule >*
      mutable_rules();
  const ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameterRule >&
      rules() const;

  // @@protoc_insertion_point(class_scope:google.api.SystemParameters)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameterRule > rules_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fsystem_5fparameter_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fsystem_5fparameter_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fapi_2fsystem_5fparameter_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fsystem_5fparameter_2eproto();

};
// -------------------------------------------------------------------

class SystemParameterRule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.SystemParameterRule) */ {
 public:
  SystemParameterRule();
  virtual ~SystemParameterRule();

  SystemParameterRule(const SystemParameterRule& from);

  inline SystemParameterRule& operator=(const SystemParameterRule& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SystemParameterRule& default_instance();

  static inline const SystemParameterRule* internal_default_instance() {
    return reinterpret_cast<const SystemParameterRule*>(
               &_SystemParameterRule_default_instance_);
  }

  void Swap(SystemParameterRule* other);

  // implements Message ----------------------------------------------

  inline SystemParameterRule* New() const PROTOBUF_FINAL { return New(NULL); }

  SystemParameterRule* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SystemParameterRule& from);
  void MergeFrom(const SystemParameterRule& from);
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
  void InternalSwap(SystemParameterRule* other);
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

  // string selector = 1;
  void clear_selector();
  static const int kSelectorFieldNumber = 1;
  const ::std::string& selector() const;
  void set_selector(const ::std::string& value);
  void set_selector(const char* value);
  void set_selector(const char* value, size_t size);
  ::std::string* mutable_selector();
  ::std::string* release_selector();
  void set_allocated_selector(::std::string* selector);

  // repeated .google.api.SystemParameter parameters = 2;
  int parameters_size() const;
  void clear_parameters();
  static const int kParametersFieldNumber = 2;
  const ::google::api::SystemParameter& parameters(int index) const;
  ::google::api::SystemParameter* mutable_parameters(int index);
  ::google::api::SystemParameter* add_parameters();
  ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameter >*
      mutable_parameters();
  const ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameter >&
      parameters() const;

  // @@protoc_insertion_point(class_scope:google.api.SystemParameterRule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameter > parameters_;
  ::google::protobuf::internal::ArenaStringPtr selector_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fsystem_5fparameter_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fsystem_5fparameter_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fapi_2fsystem_5fparameter_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fsystem_5fparameter_2eproto();

};
// -------------------------------------------------------------------

class SystemParameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.SystemParameter) */ {
 public:
  SystemParameter();
  virtual ~SystemParameter();

  SystemParameter(const SystemParameter& from);

  inline SystemParameter& operator=(const SystemParameter& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SystemParameter& default_instance();

  static inline const SystemParameter* internal_default_instance() {
    return reinterpret_cast<const SystemParameter*>(
               &_SystemParameter_default_instance_);
  }

  void Swap(SystemParameter* other);

  // implements Message ----------------------------------------------

  inline SystemParameter* New() const PROTOBUF_FINAL { return New(NULL); }

  SystemParameter* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SystemParameter& from);
  void MergeFrom(const SystemParameter& from);
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
  void InternalSwap(SystemParameter* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string http_header = 2;
  void clear_http_header();
  static const int kHttpHeaderFieldNumber = 2;
  const ::std::string& http_header() const;
  void set_http_header(const ::std::string& value);
  void set_http_header(const char* value);
  void set_http_header(const char* value, size_t size);
  ::std::string* mutable_http_header();
  ::std::string* release_http_header();
  void set_allocated_http_header(::std::string* http_header);

  // string url_query_parameter = 3;
  void clear_url_query_parameter();
  static const int kUrlQueryParameterFieldNumber = 3;
  const ::std::string& url_query_parameter() const;
  void set_url_query_parameter(const ::std::string& value);
  void set_url_query_parameter(const char* value);
  void set_url_query_parameter(const char* value, size_t size);
  ::std::string* mutable_url_query_parameter();
  ::std::string* release_url_query_parameter();
  void set_allocated_url_query_parameter(::std::string* url_query_parameter);

  // @@protoc_insertion_point(class_scope:google.api.SystemParameter)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr http_header_;
  ::google::protobuf::internal::ArenaStringPtr url_query_parameter_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_google_2fapi_2fsystem_5fparameter_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fapi_2fsystem_5fparameter_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_google_2fapi_2fsystem_5fparameter_2eproto();
  friend void protobuf_ShutdownFile_google_2fapi_2fsystem_5fparameter_2eproto();

};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SystemParameters

// repeated .google.api.SystemParameterRule rules = 1;
inline int SystemParameters::rules_size() const {
  return rules_.size();
}
inline void SystemParameters::clear_rules() {
  rules_.Clear();
}
inline const ::google::api::SystemParameterRule& SystemParameters::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.SystemParameters.rules)
  return rules_.Get(index);
}
inline ::google::api::SystemParameterRule* SystemParameters::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.SystemParameters.rules)
  return rules_.Mutable(index);
}
inline ::google::api::SystemParameterRule* SystemParameters::add_rules() {
  // @@protoc_insertion_point(field_add:google.api.SystemParameters.rules)
  return rules_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameterRule >*
SystemParameters::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.SystemParameters.rules)
  return &rules_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameterRule >&
SystemParameters::rules() const {
  // @@protoc_insertion_point(field_list:google.api.SystemParameters.rules)
  return rules_;
}

// -------------------------------------------------------------------

// SystemParameterRule

// string selector = 1;
inline void SystemParameterRule::clear_selector() {
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SystemParameterRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.SystemParameterRule.selector)
  return selector_.GetNoArena();
}
inline void SystemParameterRule::set_selector(const ::std::string& value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.SystemParameterRule.selector)
}
inline void SystemParameterRule::set_selector(const char* value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.SystemParameterRule.selector)
}
inline void SystemParameterRule::set_selector(const char* value, size_t size) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.SystemParameterRule.selector)
}
inline ::std::string* SystemParameterRule::mutable_selector() {
  
  // @@protoc_insertion_point(field_mutable:google.api.SystemParameterRule.selector)
  return selector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SystemParameterRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.SystemParameterRule.selector)
  
  return selector_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SystemParameterRule::set_allocated_selector(::std::string* selector) {
  if (selector != NULL) {
    
  } else {
    
  }
  selector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selector);
  // @@protoc_insertion_point(field_set_allocated:google.api.SystemParameterRule.selector)
}

// repeated .google.api.SystemParameter parameters = 2;
inline int SystemParameterRule::parameters_size() const {
  return parameters_.size();
}
inline void SystemParameterRule::clear_parameters() {
  parameters_.Clear();
}
inline const ::google::api::SystemParameter& SystemParameterRule::parameters(int index) const {
  // @@protoc_insertion_point(field_get:google.api.SystemParameterRule.parameters)
  return parameters_.Get(index);
}
inline ::google::api::SystemParameter* SystemParameterRule::mutable_parameters(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.SystemParameterRule.parameters)
  return parameters_.Mutable(index);
}
inline ::google::api::SystemParameter* SystemParameterRule::add_parameters() {
  // @@protoc_insertion_point(field_add:google.api.SystemParameterRule.parameters)
  return parameters_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameter >*
SystemParameterRule::mutable_parameters() {
  // @@protoc_insertion_point(field_mutable_list:google.api.SystemParameterRule.parameters)
  return &parameters_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::SystemParameter >&
SystemParameterRule::parameters() const {
  // @@protoc_insertion_point(field_list:google.api.SystemParameterRule.parameters)
  return parameters_;
}

// -------------------------------------------------------------------

// SystemParameter

// string name = 1;
inline void SystemParameter::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SystemParameter::name() const {
  // @@protoc_insertion_point(field_get:google.api.SystemParameter.name)
  return name_.GetNoArena();
}
inline void SystemParameter::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.SystemParameter.name)
}
inline void SystemParameter::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.SystemParameter.name)
}
inline void SystemParameter::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.SystemParameter.name)
}
inline ::std::string* SystemParameter::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.SystemParameter.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SystemParameter::release_name() {
  // @@protoc_insertion_point(field_release:google.api.SystemParameter.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SystemParameter::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.SystemParameter.name)
}

// string http_header = 2;
inline void SystemParameter::clear_http_header() {
  http_header_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SystemParameter::http_header() const {
  // @@protoc_insertion_point(field_get:google.api.SystemParameter.http_header)
  return http_header_.GetNoArena();
}
inline void SystemParameter::set_http_header(const ::std::string& value) {
  
  http_header_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.SystemParameter.http_header)
}
inline void SystemParameter::set_http_header(const char* value) {
  
  http_header_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.SystemParameter.http_header)
}
inline void SystemParameter::set_http_header(const char* value, size_t size) {
  
  http_header_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.SystemParameter.http_header)
}
inline ::std::string* SystemParameter::mutable_http_header() {
  
  // @@protoc_insertion_point(field_mutable:google.api.SystemParameter.http_header)
  return http_header_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SystemParameter::release_http_header() {
  // @@protoc_insertion_point(field_release:google.api.SystemParameter.http_header)
  
  return http_header_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SystemParameter::set_allocated_http_header(::std::string* http_header) {
  if (http_header != NULL) {
    
  } else {
    
  }
  http_header_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), http_header);
  // @@protoc_insertion_point(field_set_allocated:google.api.SystemParameter.http_header)
}

// string url_query_parameter = 3;
inline void SystemParameter::clear_url_query_parameter() {
  url_query_parameter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SystemParameter::url_query_parameter() const {
  // @@protoc_insertion_point(field_get:google.api.SystemParameter.url_query_parameter)
  return url_query_parameter_.GetNoArena();
}
inline void SystemParameter::set_url_query_parameter(const ::std::string& value) {
  
  url_query_parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.SystemParameter.url_query_parameter)
}
inline void SystemParameter::set_url_query_parameter(const char* value) {
  
  url_query_parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.SystemParameter.url_query_parameter)
}
inline void SystemParameter::set_url_query_parameter(const char* value, size_t size) {
  
  url_query_parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.SystemParameter.url_query_parameter)
}
inline ::std::string* SystemParameter::mutable_url_query_parameter() {
  
  // @@protoc_insertion_point(field_mutable:google.api.SystemParameter.url_query_parameter)
  return url_query_parameter_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SystemParameter::release_url_query_parameter() {
  // @@protoc_insertion_point(field_release:google.api.SystemParameter.url_query_parameter)
  
  return url_query_parameter_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SystemParameter::set_allocated_url_query_parameter(::std::string* url_query_parameter) {
  if (url_query_parameter != NULL) {
    
  } else {
    
  }
  url_query_parameter_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url_query_parameter);
  // @@protoc_insertion_point(field_set_allocated:google.api.SystemParameter.url_query_parameter)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fsystem_5fparameter_2eproto__INCLUDED
