// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/ml/v1beta1/operation_metadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/cloud/ml/v1beta1/operation_metadata.pb.h"

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
namespace cloud {
namespace ml {
namespace v1beta1 {

namespace {

const ::google::protobuf::Descriptor* OperationMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OperationMetadata_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* OperationMetadata_OperationType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto() {
  protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/cloud/ml/v1beta1/operation_metadata.proto");
  GOOGLE_CHECK(file != NULL);
  OperationMetadata_descriptor_ = file->message_type(0);
  static const int OperationMetadata_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, create_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, start_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, end_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, is_cancellation_requested_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, operation_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, model_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, version_),
  };
  OperationMetadata_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      OperationMetadata_descriptor_,
      OperationMetadata::internal_default_instance(),
      OperationMetadata_offsets_,
      -1,
      -1,
      -1,
      sizeof(OperationMetadata),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, _internal_metadata_));
  OperationMetadata_OperationType_descriptor_ = OperationMetadata_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      OperationMetadata_descriptor_, OperationMetadata::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto() {
  OperationMetadata_default_instance_.Shutdown();
  delete OperationMetadata_reflection_;
}

void protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_InitDefaults_google_2fapi_2fannotations_2eproto();
  ::google::cloud::ml::v1beta1::protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2fmodel_5fservice_2eproto();
  ::google::protobuf::protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  OperationMetadata_default_instance_.DefaultConstruct();
  OperationMetadata_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_once_);
void protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_once_,
                 &protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_impl);
}
void protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n0google/cloud/ml/v1beta1/operation_meta"
    "data.proto\022\027google.cloud.ml.v1beta1\032\034goo"
    "gle/api/annotations.proto\032+google/cloud/"
    "ml/v1beta1/model_service.proto\032\037google/p"
    "rotobuf/timestamp.proto\"\311\003\n\021OperationMet"
    "adata\022/\n\013create_time\030\001 \001(\0132\032.google.prot"
    "obuf.Timestamp\022.\n\nstart_time\030\002 \001(\0132\032.goo"
    "gle.protobuf.Timestamp\022,\n\010end_time\030\003 \001(\013"
    "2\032.google.protobuf.Timestamp\022!\n\031is_cance"
    "llation_requested\030\004 \001(\010\022P\n\016operation_typ"
    "e\030\005 \001(\01628.google.cloud.ml.v1beta1.Operat"
    "ionMetadata.OperationType\022\022\n\nmodel_name\030"
    "\006 \001(\t\0221\n\007version\030\007 \001(\0132 .google.cloud.ml"
    ".v1beta1.Version\"i\n\rOperationType\022\036\n\032OPE"
    "RATION_TYPE_UNSPECIFIED\020\000\022\022\n\016CREATE_VERS"
    "ION\020\001\022\022\n\016DELETE_VERSION\020\002\022\020\n\014DELETE_MODE"
    "L\020\003Bv\n\037com.google.cloud.ml.api.v1beta1B\026"
    "OperationMetadataProtoP\001Z9google.golang."
    "org/genproto/googleapis/cloud/ml/v1beta1"
    ";mlb\006proto3", 771);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/ml/v1beta1/operation_metadata.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  ::google::cloud::ml::v1beta1::protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2fmodel_5fservice_2eproto();
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_once_);
void protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_once_,
                 &protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto {
  StaticDescriptorInitializer_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto() {
    protobuf_AddDesc_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto();
  }
} static_descriptor_initializer_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* OperationMetadata_OperationType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationMetadata_OperationType_descriptor_;
}
bool OperationMetadata_OperationType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const OperationMetadata_OperationType OperationMetadata::OPERATION_TYPE_UNSPECIFIED;
const OperationMetadata_OperationType OperationMetadata::CREATE_VERSION;
const OperationMetadata_OperationType OperationMetadata::DELETE_VERSION;
const OperationMetadata_OperationType OperationMetadata::DELETE_MODEL;
const OperationMetadata_OperationType OperationMetadata::OperationType_MIN;
const OperationMetadata_OperationType OperationMetadata::OperationType_MAX;
const int OperationMetadata::OperationType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationMetadata::kCreateTimeFieldNumber;
const int OperationMetadata::kStartTimeFieldNumber;
const int OperationMetadata::kEndTimeFieldNumber;
const int OperationMetadata::kIsCancellationRequestedFieldNumber;
const int OperationMetadata::kOperationTypeFieldNumber;
const int OperationMetadata::kModelNameFieldNumber;
const int OperationMetadata::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationMetadata::OperationMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.ml.v1beta1.OperationMetadata)
}

void OperationMetadata::InitAsDefaultInstance() {
  create_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  start_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  end_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  version_ = const_cast< ::google::cloud::ml::v1beta1::Version*>(
      ::google::cloud::ml::v1beta1::Version::internal_default_instance());
}

OperationMetadata::OperationMetadata(const OperationMetadata& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.cloud.ml.v1beta1.OperationMetadata)
}

void OperationMetadata::SharedCtor() {
  model_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  create_time_ = NULL;
  start_time_ = NULL;
  end_time_ = NULL;
  version_ = NULL;
  ::memset(&is_cancellation_requested_, 0, reinterpret_cast<char*>(&operation_type_) -
    reinterpret_cast<char*>(&is_cancellation_requested_) + sizeof(operation_type_));
  _cached_size_ = 0;
}

OperationMetadata::~OperationMetadata() {
  // @@protoc_insertion_point(destructor:google.cloud.ml.v1beta1.OperationMetadata)
  SharedDtor();
}

void OperationMetadata::SharedDtor() {
  model_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &OperationMetadata_default_instance_.get()) {
    delete create_time_;
    delete start_time_;
    delete end_time_;
    delete version_;
  }
}

void OperationMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OperationMetadata_descriptor_;
}

const OperationMetadata& OperationMetadata::default_instance() {
  protobuf_InitDefaults_google_2fcloud_2fml_2fv1beta1_2foperation_5fmetadata_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<OperationMetadata> OperationMetadata_default_instance_;

OperationMetadata* OperationMetadata::New(::google::protobuf::Arena* arena) const {
  OperationMetadata* n = new OperationMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.ml.v1beta1.OperationMetadata)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(OperationMetadata, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<OperationMetadata*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(is_cancellation_requested_, operation_type_);
  if (GetArenaNoVirtual() == NULL && create_time_ != NULL) delete create_time_;
  create_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) delete start_time_;
  start_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) delete end_time_;
  end_time_ = NULL;
  model_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && version_ != NULL) delete version_;
  version_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool OperationMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.ml.v1beta1.OperationMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.Timestamp create_time = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_create_time()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_start_time;
        break;
      }

      // optional .google.protobuf.Timestamp start_time = 2;
      case 2: {
        if (tag == 18) {
         parse_start_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_start_time()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_end_time;
        break;
      }

      // optional .google.protobuf.Timestamp end_time = 3;
      case 3: {
        if (tag == 26) {
         parse_end_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_end_time()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_is_cancellation_requested;
        break;
      }

      // optional bool is_cancellation_requested = 4;
      case 4: {
        if (tag == 32) {
         parse_is_cancellation_requested:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_cancellation_requested_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_operation_type;
        break;
      }

      // optional .google.cloud.ml.v1beta1.OperationMetadata.OperationType operation_type = 5;
      case 5: {
        if (tag == 40) {
         parse_operation_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation_type(static_cast< ::google::cloud::ml::v1beta1::OperationMetadata_OperationType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_model_name;
        break;
      }

      // optional string model_name = 6;
      case 6: {
        if (tag == 50) {
         parse_model_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_model_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->model_name().data(), this->model_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.ml.v1beta1.OperationMetadata.model_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_version;
        break;
      }

      // optional .google.cloud.ml.v1beta1.Version version = 7;
      case 7: {
        if (tag == 58) {
         parse_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_version()));
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
  // @@protoc_insertion_point(parse_success:google.cloud.ml.v1beta1.OperationMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.ml.v1beta1.OperationMetadata)
  return false;
#undef DO_
}

void OperationMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.ml.v1beta1.OperationMetadata)
  // optional .google.protobuf.Timestamp create_time = 1;
  if (this->has_create_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->create_time_, output);
  }

  // optional .google.protobuf.Timestamp start_time = 2;
  if (this->has_start_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->start_time_, output);
  }

  // optional .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->end_time_, output);
  }

  // optional bool is_cancellation_requested = 4;
  if (this->is_cancellation_requested() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_cancellation_requested(), output);
  }

  // optional .google.cloud.ml.v1beta1.OperationMetadata.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->operation_type(), output);
  }

  // optional string model_name = 6;
  if (this->model_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_name().data(), this->model_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1beta1.OperationMetadata.model_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->model_name(), output);
  }

  // optional .google.cloud.ml.v1beta1.Version version = 7;
  if (this->has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->version_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.ml.v1beta1.OperationMetadata)
}

::google::protobuf::uint8* OperationMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.ml.v1beta1.OperationMetadata)
  // optional .google.protobuf.Timestamp create_time = 1;
  if (this->has_create_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->create_time_, false, target);
  }

  // optional .google.protobuf.Timestamp start_time = 2;
  if (this->has_start_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->start_time_, false, target);
  }

  // optional .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->end_time_, false, target);
  }

  // optional bool is_cancellation_requested = 4;
  if (this->is_cancellation_requested() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_cancellation_requested(), target);
  }

  // optional .google.cloud.ml.v1beta1.OperationMetadata.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->operation_type(), target);
  }

  // optional string model_name = 6;
  if (this->model_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_name().data(), this->model_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1beta1.OperationMetadata.model_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->model_name(), target);
  }

  // optional .google.cloud.ml.v1beta1.Version version = 7;
  if (this->has_version()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->version_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.ml.v1beta1.OperationMetadata)
  return target;
}

size_t OperationMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.ml.v1beta1.OperationMetadata)
  size_t total_size = 0;

  // optional .google.protobuf.Timestamp create_time = 1;
  if (this->has_create_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->create_time_);
  }

  // optional .google.protobuf.Timestamp start_time = 2;
  if (this->has_start_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->start_time_);
  }

  // optional .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->end_time_);
  }

  // optional bool is_cancellation_requested = 4;
  if (this->is_cancellation_requested() != 0) {
    total_size += 1 + 1;
  }

  // optional .google.cloud.ml.v1beta1.OperationMetadata.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation_type());
  }

  // optional string model_name = 6;
  if (this->model_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->model_name());
  }

  // optional .google.cloud.ml.v1beta1.Version version = 7;
  if (this->has_version()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->version_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.ml.v1beta1.OperationMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const OperationMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.ml.v1beta1.OperationMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.ml.v1beta1.OperationMetadata)
    UnsafeMergeFrom(*source);
  }
}

void OperationMetadata::MergeFrom(const OperationMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.ml.v1beta1.OperationMetadata)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void OperationMetadata::UnsafeMergeFrom(const OperationMetadata& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.has_create_time()) {
    mutable_create_time()->::google::protobuf::Timestamp::MergeFrom(from.create_time());
  }
  if (from.has_start_time()) {
    mutable_start_time()->::google::protobuf::Timestamp::MergeFrom(from.start_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::google::protobuf::Timestamp::MergeFrom(from.end_time());
  }
  if (from.is_cancellation_requested() != 0) {
    set_is_cancellation_requested(from.is_cancellation_requested());
  }
  if (from.operation_type() != 0) {
    set_operation_type(from.operation_type());
  }
  if (from.model_name().size() > 0) {

    model_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_name_);
  }
  if (from.has_version()) {
    mutable_version()->::google::cloud::ml::v1beta1::Version::MergeFrom(from.version());
  }
}

void OperationMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.ml.v1beta1.OperationMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationMetadata::CopyFrom(const OperationMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.ml.v1beta1.OperationMetadata)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool OperationMetadata::IsInitialized() const {

  return true;
}

void OperationMetadata::Swap(OperationMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationMetadata::InternalSwap(OperationMetadata* other) {
  std::swap(create_time_, other->create_time_);
  std::swap(start_time_, other->start_time_);
  std::swap(end_time_, other->end_time_);
  std::swap(is_cancellation_requested_, other->is_cancellation_requested_);
  std::swap(operation_type_, other->operation_type_);
  model_name_.Swap(&other->model_name_);
  std::swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OperationMetadata_descriptor_;
  metadata.reflection = OperationMetadata_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationMetadata

// optional .google.protobuf.Timestamp create_time = 1;
bool OperationMetadata::has_create_time() const {
  return this != internal_default_instance() && create_time_ != NULL;
}
void OperationMetadata::clear_create_time() {
  if (GetArenaNoVirtual() == NULL && create_time_ != NULL) delete create_time_;
  create_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadata::create_time() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.create_time)
  return create_time_ != NULL ? *create_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
::google::protobuf::Timestamp* OperationMetadata::mutable_create_time() {
  
  if (create_time_ == NULL) {
    create_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.OperationMetadata.create_time)
  return create_time_;
}
::google::protobuf::Timestamp* OperationMetadata::release_create_time() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.OperationMetadata.create_time)
  
  ::google::protobuf::Timestamp* temp = create_time_;
  create_time_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_create_time(::google::protobuf::Timestamp* create_time) {
  delete create_time_;
  if (create_time != NULL && create_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_create_time = new ::google::protobuf::Timestamp;
    new_create_time->CopyFrom(*create_time);
    create_time = new_create_time;
  }
  create_time_ = create_time;
  if (create_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.OperationMetadata.create_time)
}

// optional .google.protobuf.Timestamp start_time = 2;
bool OperationMetadata::has_start_time() const {
  return this != internal_default_instance() && start_time_ != NULL;
}
void OperationMetadata::clear_start_time() {
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) delete start_time_;
  start_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadata::start_time() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.start_time)
  return start_time_ != NULL ? *start_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
::google::protobuf::Timestamp* OperationMetadata::mutable_start_time() {
  
  if (start_time_ == NULL) {
    start_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.OperationMetadata.start_time)
  return start_time_;
}
::google::protobuf::Timestamp* OperationMetadata::release_start_time() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.OperationMetadata.start_time)
  
  ::google::protobuf::Timestamp* temp = start_time_;
  start_time_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_start_time(::google::protobuf::Timestamp* start_time) {
  delete start_time_;
  if (start_time != NULL && start_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_start_time = new ::google::protobuf::Timestamp;
    new_start_time->CopyFrom(*start_time);
    start_time = new_start_time;
  }
  start_time_ = start_time;
  if (start_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.OperationMetadata.start_time)
}

// optional .google.protobuf.Timestamp end_time = 3;
bool OperationMetadata::has_end_time() const {
  return this != internal_default_instance() && end_time_ != NULL;
}
void OperationMetadata::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) delete end_time_;
  end_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadata::end_time() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.end_time)
  return end_time_ != NULL ? *end_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
::google::protobuf::Timestamp* OperationMetadata::mutable_end_time() {
  
  if (end_time_ == NULL) {
    end_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.OperationMetadata.end_time)
  return end_time_;
}
::google::protobuf::Timestamp* OperationMetadata::release_end_time() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.OperationMetadata.end_time)
  
  ::google::protobuf::Timestamp* temp = end_time_;
  end_time_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_end_time(::google::protobuf::Timestamp* end_time) {
  delete end_time_;
  if (end_time != NULL && end_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_end_time = new ::google::protobuf::Timestamp;
    new_end_time->CopyFrom(*end_time);
    end_time = new_end_time;
  }
  end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.OperationMetadata.end_time)
}

// optional bool is_cancellation_requested = 4;
void OperationMetadata::clear_is_cancellation_requested() {
  is_cancellation_requested_ = false;
}
bool OperationMetadata::is_cancellation_requested() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.is_cancellation_requested)
  return is_cancellation_requested_;
}
void OperationMetadata::set_is_cancellation_requested(bool value) {
  
  is_cancellation_requested_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1beta1.OperationMetadata.is_cancellation_requested)
}

// optional .google.cloud.ml.v1beta1.OperationMetadata.OperationType operation_type = 5;
void OperationMetadata::clear_operation_type() {
  operation_type_ = 0;
}
::google::cloud::ml::v1beta1::OperationMetadata_OperationType OperationMetadata::operation_type() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.operation_type)
  return static_cast< ::google::cloud::ml::v1beta1::OperationMetadata_OperationType >(operation_type_);
}
void OperationMetadata::set_operation_type(::google::cloud::ml::v1beta1::OperationMetadata_OperationType value) {
  
  operation_type_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1beta1.OperationMetadata.operation_type)
}

// optional string model_name = 6;
void OperationMetadata::clear_model_name() {
  model_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& OperationMetadata::model_name() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.model_name)
  return model_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void OperationMetadata::set_model_name(const ::std::string& value) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1beta1.OperationMetadata.model_name)
}
void OperationMetadata::set_model_name(const char* value) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.ml.v1beta1.OperationMetadata.model_name)
}
void OperationMetadata::set_model_name(const char* value, size_t size) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.ml.v1beta1.OperationMetadata.model_name)
}
::std::string* OperationMetadata::mutable_model_name() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.OperationMetadata.model_name)
  return model_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* OperationMetadata::release_model_name() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.OperationMetadata.model_name)
  
  return model_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void OperationMetadata::set_allocated_model_name(::std::string* model_name) {
  if (model_name != NULL) {
    
  } else {
    
  }
  model_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_name);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.OperationMetadata.model_name)
}

// optional .google.cloud.ml.v1beta1.Version version = 7;
bool OperationMetadata::has_version() const {
  return this != internal_default_instance() && version_ != NULL;
}
void OperationMetadata::clear_version() {
  if (GetArenaNoVirtual() == NULL && version_ != NULL) delete version_;
  version_ = NULL;
}
const ::google::cloud::ml::v1beta1::Version& OperationMetadata::version() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1beta1.OperationMetadata.version)
  return version_ != NULL ? *version_
                         : *::google::cloud::ml::v1beta1::Version::internal_default_instance();
}
::google::cloud::ml::v1beta1::Version* OperationMetadata::mutable_version() {
  
  if (version_ == NULL) {
    version_ = new ::google::cloud::ml::v1beta1::Version;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1beta1.OperationMetadata.version)
  return version_;
}
::google::cloud::ml::v1beta1::Version* OperationMetadata::release_version() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1beta1.OperationMetadata.version)
  
  ::google::cloud::ml::v1beta1::Version* temp = version_;
  version_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_version(::google::cloud::ml::v1beta1::Version* version) {
  delete version_;
  version_ = version;
  if (version) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1beta1.OperationMetadata.version)
}

inline const OperationMetadata* OperationMetadata::internal_default_instance() {
  return &OperationMetadata_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace ml
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)
