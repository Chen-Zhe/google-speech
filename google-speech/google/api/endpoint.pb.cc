// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/endpoint.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/endpoint.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {

namespace {

const ::google::protobuf::Descriptor* Endpoint_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Endpoint_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fapi_2fendpoint_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fapi_2fendpoint_2eproto() {
  protobuf_AddDesc_google_2fapi_2fendpoint_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/api/endpoint.proto");
  GOOGLE_CHECK(file != NULL);
  Endpoint_descriptor_ = file->message_type(0);
  static const int Endpoint_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, aliases_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, apis_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, features_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, allow_cors_),
  };
  Endpoint_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Endpoint_descriptor_,
      Endpoint::internal_default_instance(),
      Endpoint_offsets_,
      -1,
      -1,
      -1,
      sizeof(Endpoint),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Endpoint, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fapi_2fendpoint_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Endpoint_descriptor_, Endpoint::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fapi_2fendpoint_2eproto() {
  Endpoint_default_instance_.Shutdown();
  delete Endpoint_reflection_;
}

void protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_InitDefaults_google_2fapi_2fannotations_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  Endpoint_default_instance_.DefaultConstruct();
  Endpoint_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto_once_);
void protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto_once_,
                 &protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto_impl);
}
void protobuf_AddDesc_google_2fapi_2fendpoint_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031google/api/endpoint.proto\022\ngoogle.api\032"
    "\034google/api/annotations.proto\"]\n\010Endpoin"
    "t\022\014\n\004name\030\001 \001(\t\022\017\n\007aliases\030\002 \003(\t\022\014\n\004apis"
    "\030\003 \003(\t\022\020\n\010features\030\004 \003(\t\022\022\n\nallow_cors\030\005"
    " \001(\010Bo\n\016com.google.apiB\rEndpointProtoP\001Z"
    "Egoogle.golang.org/genproto/googleapis/a"
    "pi/serviceconfig;serviceconfig\242\002\004GAPIb\006p"
    "roto3", 285);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/endpoint.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fapi_2fendpoint_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fapi_2fendpoint_2eproto_once_);
void protobuf_AddDesc_google_2fapi_2fendpoint_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fapi_2fendpoint_2eproto_once_,
                 &protobuf_AddDesc_google_2fapi_2fendpoint_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fapi_2fendpoint_2eproto {
  StaticDescriptorInitializer_google_2fapi_2fendpoint_2eproto() {
    protobuf_AddDesc_google_2fapi_2fendpoint_2eproto();
  }
} static_descriptor_initializer_google_2fapi_2fendpoint_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Endpoint::kNameFieldNumber;
const int Endpoint::kAliasesFieldNumber;
const int Endpoint::kApisFieldNumber;
const int Endpoint::kFeaturesFieldNumber;
const int Endpoint::kAllowCorsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Endpoint::Endpoint()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Endpoint)
}

void Endpoint::InitAsDefaultInstance() {
}

Endpoint::Endpoint(const Endpoint& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.api.Endpoint)
}

void Endpoint::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  allow_cors_ = false;
  _cached_size_ = 0;
}

Endpoint::~Endpoint() {
  // @@protoc_insertion_point(destructor:google.api.Endpoint)
  SharedDtor();
}

void Endpoint::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Endpoint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Endpoint::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Endpoint_descriptor_;
}

const Endpoint& Endpoint::default_instance() {
  protobuf_InitDefaults_google_2fapi_2fendpoint_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Endpoint> Endpoint_default_instance_;

Endpoint* Endpoint::New(::google::protobuf::Arena* arena) const {
  Endpoint* n = new Endpoint;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Endpoint::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Endpoint)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  allow_cors_ = false;
  aliases_.Clear();
  apis_.Clear();
  features_.Clear();
}

bool Endpoint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Endpoint)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_aliases;
        break;
      }

      // repeated string aliases = 2;
      case 2: {
        if (tag == 18) {
         parse_aliases:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_aliases()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->aliases(this->aliases_size() - 1).data(),
            this->aliases(this->aliases_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.aliases"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_aliases;
        if (input->ExpectTag(26)) goto parse_apis;
        break;
      }

      // repeated string apis = 3;
      case 3: {
        if (tag == 26) {
         parse_apis:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_apis()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->apis(this->apis_size() - 1).data(),
            this->apis(this->apis_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.apis"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_apis;
        if (input->ExpectTag(34)) goto parse_features;
        break;
      }

      // repeated string features = 4;
      case 4: {
        if (tag == 34) {
         parse_features:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_features()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->features(this->features_size() - 1).data(),
            this->features(this->features_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Endpoint.features"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_features;
        if (input->ExpectTag(40)) goto parse_allow_cors;
        break;
      }

      // optional bool allow_cors = 5;
      case 5: {
        if (tag == 40) {
         parse_allow_cors:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &allow_cors_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.api.Endpoint)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Endpoint)
  return false;
#undef DO_
}

void Endpoint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Endpoint)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated string aliases = 2;
  for (int i = 0; i < this->aliases_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->aliases(i).data(), this->aliases(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.aliases");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->aliases(i), output);
  }

  // repeated string apis = 3;
  for (int i = 0; i < this->apis_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->apis(i).data(), this->apis(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.apis");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->apis(i), output);
  }

  // repeated string features = 4;
  for (int i = 0; i < this->features_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->features(i).data(), this->features(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.features");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->features(i), output);
  }

  // optional bool allow_cors = 5;
  if (this->allow_cors() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->allow_cors(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.Endpoint)
}

::google::protobuf::uint8* Endpoint::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Endpoint)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated string aliases = 2;
  for (int i = 0; i < this->aliases_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->aliases(i).data(), this->aliases(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.aliases");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->aliases(i), target);
  }

  // repeated string apis = 3;
  for (int i = 0; i < this->apis_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->apis(i).data(), this->apis(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.apis");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->apis(i), target);
  }

  // repeated string features = 4;
  for (int i = 0; i < this->features_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->features(i).data(), this->features(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Endpoint.features");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->features(i), target);
  }

  // optional bool allow_cors = 5;
  if (this->allow_cors() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->allow_cors(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.Endpoint)
  return target;
}

size_t Endpoint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Endpoint)
  size_t total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional bool allow_cors = 5;
  if (this->allow_cors() != 0) {
    total_size += 1 + 1;
  }

  // repeated string aliases = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->aliases_size());
  for (int i = 0; i < this->aliases_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->aliases(i));
  }

  // repeated string apis = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->apis_size());
  for (int i = 0; i < this->apis_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->apis(i));
  }

  // repeated string features = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->features_size());
  for (int i = 0; i < this->features_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->features(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Endpoint::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Endpoint)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Endpoint* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Endpoint>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Endpoint)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Endpoint)
    UnsafeMergeFrom(*source);
  }
}

void Endpoint::MergeFrom(const Endpoint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Endpoint)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Endpoint::UnsafeMergeFrom(const Endpoint& from) {
  GOOGLE_DCHECK(&from != this);
  aliases_.UnsafeMergeFrom(from.aliases_);
  apis_.UnsafeMergeFrom(from.apis_);
  features_.UnsafeMergeFrom(from.features_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.allow_cors() != 0) {
    set_allow_cors(from.allow_cors());
  }
}

void Endpoint::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Endpoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Endpoint::CopyFrom(const Endpoint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Endpoint)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Endpoint::IsInitialized() const {

  return true;
}

void Endpoint::Swap(Endpoint* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Endpoint::InternalSwap(Endpoint* other) {
  name_.Swap(&other->name_);
  aliases_.UnsafeArenaSwap(&other->aliases_);
  apis_.UnsafeArenaSwap(&other->apis_);
  features_.UnsafeArenaSwap(&other->features_);
  std::swap(allow_cors_, other->allow_cors_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Endpoint::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Endpoint_descriptor_;
  metadata.reflection = Endpoint_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Endpoint

// optional string name = 1;
void Endpoint::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Endpoint::name() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Endpoint::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Endpoint.name)
}
void Endpoint::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.name)
}
void Endpoint::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.name)
}
::std::string* Endpoint::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Endpoint::release_name() {
  // @@protoc_insertion_point(field_release:google.api.Endpoint.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Endpoint::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.Endpoint.name)
}

// repeated string aliases = 2;
int Endpoint::aliases_size() const {
  return aliases_.size();
}
void Endpoint::clear_aliases() {
  aliases_.Clear();
}
const ::std::string& Endpoint::aliases(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.aliases)
  return aliases_.Get(index);
}
::std::string* Endpoint::mutable_aliases(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.aliases)
  return aliases_.Mutable(index);
}
void Endpoint::set_aliases(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.aliases)
  aliases_.Mutable(index)->assign(value);
}
void Endpoint::set_aliases(int index, const char* value) {
  aliases_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.aliases)
}
void Endpoint::set_aliases(int index, const char* value, size_t size) {
  aliases_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.aliases)
}
::std::string* Endpoint::add_aliases() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.aliases)
  return aliases_.Add();
}
void Endpoint::add_aliases(const ::std::string& value) {
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.aliases)
}
void Endpoint::add_aliases(const char* value) {
  aliases_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.aliases)
}
void Endpoint::add_aliases(const char* value, size_t size) {
  aliases_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.aliases)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::aliases() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.aliases)
  return aliases_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_aliases() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.aliases)
  return &aliases_;
}

// repeated string apis = 3;
int Endpoint::apis_size() const {
  return apis_.size();
}
void Endpoint::clear_apis() {
  apis_.Clear();
}
const ::std::string& Endpoint::apis(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.apis)
  return apis_.Get(index);
}
::std::string* Endpoint::mutable_apis(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.apis)
  return apis_.Mutable(index);
}
void Endpoint::set_apis(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.apis)
  apis_.Mutable(index)->assign(value);
}
void Endpoint::set_apis(int index, const char* value) {
  apis_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.apis)
}
void Endpoint::set_apis(int index, const char* value, size_t size) {
  apis_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.apis)
}
::std::string* Endpoint::add_apis() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.apis)
  return apis_.Add();
}
void Endpoint::add_apis(const ::std::string& value) {
  apis_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.apis)
}
void Endpoint::add_apis(const char* value) {
  apis_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.apis)
}
void Endpoint::add_apis(const char* value, size_t size) {
  apis_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.apis)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::apis() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.apis)
  return apis_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_apis() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.apis)
  return &apis_;
}

// repeated string features = 4;
int Endpoint::features_size() const {
  return features_.size();
}
void Endpoint::clear_features() {
  features_.Clear();
}
const ::std::string& Endpoint::features(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.features)
  return features_.Get(index);
}
::std::string* Endpoint::mutable_features(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Endpoint.features)
  return features_.Mutable(index);
}
void Endpoint::set_features(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Endpoint.features)
  features_.Mutable(index)->assign(value);
}
void Endpoint::set_features(int index, const char* value) {
  features_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Endpoint.features)
}
void Endpoint::set_features(int index, const char* value, size_t size) {
  features_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Endpoint.features)
}
::std::string* Endpoint::add_features() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Endpoint.features)
  return features_.Add();
}
void Endpoint::add_features(const ::std::string& value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Endpoint.features)
}
void Endpoint::add_features(const char* value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Endpoint.features)
}
void Endpoint::add_features(const char* value, size_t size) {
  features_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Endpoint.features)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Endpoint::features() const {
  // @@protoc_insertion_point(field_list:google.api.Endpoint.features)
  return features_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Endpoint::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Endpoint.features)
  return &features_;
}

// optional bool allow_cors = 5;
void Endpoint::clear_allow_cors() {
  allow_cors_ = false;
}
bool Endpoint::allow_cors() const {
  // @@protoc_insertion_point(field_get:google.api.Endpoint.allow_cors)
  return allow_cors_;
}
void Endpoint::set_allow_cors(bool value) {
  
  allow_cors_ = value;
  // @@protoc_insertion_point(field_set:google.api.Endpoint.allow_cors)
}

inline const Endpoint* Endpoint::internal_default_instance() {
  return &Endpoint_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
