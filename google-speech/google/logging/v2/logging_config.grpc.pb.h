// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: google/logging/v2/logging_config.proto
// Original file comments:
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2flogging_2fv2_2flogging_5fconfig_2eproto__INCLUDED
#define GRPC_google_2flogging_2fv2_2flogging_5fconfig_2eproto__INCLUDED

#include "google/logging/v2/logging_config.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace logging {
namespace v2 {

// Service for configuring sinks used to export log entries outside of
// Stackdriver Logging.
class ConfigServiceV2 GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Lists sinks.
    virtual ::grpc::Status ListSinks(::grpc::ClientContext* context, const ::google::logging::v2::ListSinksRequest& request, ::google::logging::v2::ListSinksResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::ListSinksResponse>> AsyncListSinks(::grpc::ClientContext* context, const ::google::logging::v2::ListSinksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::ListSinksResponse>>(AsyncListSinksRaw(context, request, cq));
    }
    // Gets a sink.
    virtual ::grpc::Status GetSink(::grpc::ClientContext* context, const ::google::logging::v2::GetSinkRequest& request, ::google::logging::v2::LogSink* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>> AsyncGetSink(::grpc::ClientContext* context, const ::google::logging::v2::GetSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>>(AsyncGetSinkRaw(context, request, cq));
    }
    // Creates a sink that exports specified log entries to a destination.  The
    // export of newly-ingested log entries begins immediately, unless the current
    // time is outside the sink's start and end times or the sink's
    // `writer_identity` is not permitted to write to the destination.  A sink can
    // export log entries only from the resource owning the sink.
    virtual ::grpc::Status CreateSink(::grpc::ClientContext* context, const ::google::logging::v2::CreateSinkRequest& request, ::google::logging::v2::LogSink* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>> AsyncCreateSink(::grpc::ClientContext* context, const ::google::logging::v2::CreateSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>>(AsyncCreateSinkRaw(context, request, cq));
    }
    // Updates a sink. If the named sink doesn't exist, then this method is
    // identical to
    // [sinks.create](/logging/docs/api/reference/rest/v2/projects.sinks/create).
    // If the named sink does exist, then this method replaces the following
    // fields in the existing sink with values from the new sink: `destination`,
    // `filter`, `output_version_format`, `start_time`, and `end_time`.
    // The updated filter might also have a new `writer_identity`; see the
    // `unique_writer_identity` field.
    virtual ::grpc::Status UpdateSink(::grpc::ClientContext* context, const ::google::logging::v2::UpdateSinkRequest& request, ::google::logging::v2::LogSink* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>> AsyncUpdateSink(::grpc::ClientContext* context, const ::google::logging::v2::UpdateSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>>(AsyncUpdateSinkRaw(context, request, cq));
    }
    // Deletes a sink. If the sink has a unique `writer_identity`, then that
    // service account is also deleted.
    virtual ::grpc::Status DeleteSink(::grpc::ClientContext* context, const ::google::logging::v2::DeleteSinkRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncDeleteSink(::grpc::ClientContext* context, const ::google::logging::v2::DeleteSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncDeleteSinkRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::ListSinksResponse>* AsyncListSinksRaw(::grpc::ClientContext* context, const ::google::logging::v2::ListSinksRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>* AsyncGetSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::GetSinkRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>* AsyncCreateSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::CreateSinkRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::logging::v2::LogSink>* AsyncUpdateSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::UpdateSinkRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncDeleteSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::DeleteSinkRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ListSinks(::grpc::ClientContext* context, const ::google::logging::v2::ListSinksRequest& request, ::google::logging::v2::ListSinksResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::ListSinksResponse>> AsyncListSinks(::grpc::ClientContext* context, const ::google::logging::v2::ListSinksRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::ListSinksResponse>>(AsyncListSinksRaw(context, request, cq));
    }
    ::grpc::Status GetSink(::grpc::ClientContext* context, const ::google::logging::v2::GetSinkRequest& request, ::google::logging::v2::LogSink* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>> AsyncGetSink(::grpc::ClientContext* context, const ::google::logging::v2::GetSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>>(AsyncGetSinkRaw(context, request, cq));
    }
    ::grpc::Status CreateSink(::grpc::ClientContext* context, const ::google::logging::v2::CreateSinkRequest& request, ::google::logging::v2::LogSink* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>> AsyncCreateSink(::grpc::ClientContext* context, const ::google::logging::v2::CreateSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>>(AsyncCreateSinkRaw(context, request, cq));
    }
    ::grpc::Status UpdateSink(::grpc::ClientContext* context, const ::google::logging::v2::UpdateSinkRequest& request, ::google::logging::v2::LogSink* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>> AsyncUpdateSink(::grpc::ClientContext* context, const ::google::logging::v2::UpdateSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>>(AsyncUpdateSinkRaw(context, request, cq));
    }
    ::grpc::Status DeleteSink(::grpc::ClientContext* context, const ::google::logging::v2::DeleteSinkRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncDeleteSink(::grpc::ClientContext* context, const ::google::logging::v2::DeleteSinkRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncDeleteSinkRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::logging::v2::ListSinksResponse>* AsyncListSinksRaw(::grpc::ClientContext* context, const ::google::logging::v2::ListSinksRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>* AsyncGetSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::GetSinkRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>* AsyncCreateSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::CreateSinkRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::logging::v2::LogSink>* AsyncUpdateSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::UpdateSinkRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncDeleteSinkRaw(::grpc::ClientContext* context, const ::google::logging::v2::DeleteSinkRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_ListSinks_;
    const ::grpc::RpcMethod rpcmethod_GetSink_;
    const ::grpc::RpcMethod rpcmethod_CreateSink_;
    const ::grpc::RpcMethod rpcmethod_UpdateSink_;
    const ::grpc::RpcMethod rpcmethod_DeleteSink_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Lists sinks.
    virtual ::grpc::Status ListSinks(::grpc::ServerContext* context, const ::google::logging::v2::ListSinksRequest* request, ::google::logging::v2::ListSinksResponse* response);
    // Gets a sink.
    virtual ::grpc::Status GetSink(::grpc::ServerContext* context, const ::google::logging::v2::GetSinkRequest* request, ::google::logging::v2::LogSink* response);
    // Creates a sink that exports specified log entries to a destination.  The
    // export of newly-ingested log entries begins immediately, unless the current
    // time is outside the sink's start and end times or the sink's
    // `writer_identity` is not permitted to write to the destination.  A sink can
    // export log entries only from the resource owning the sink.
    virtual ::grpc::Status CreateSink(::grpc::ServerContext* context, const ::google::logging::v2::CreateSinkRequest* request, ::google::logging::v2::LogSink* response);
    // Updates a sink. If the named sink doesn't exist, then this method is
    // identical to
    // [sinks.create](/logging/docs/api/reference/rest/v2/projects.sinks/create).
    // If the named sink does exist, then this method replaces the following
    // fields in the existing sink with values from the new sink: `destination`,
    // `filter`, `output_version_format`, `start_time`, and `end_time`.
    // The updated filter might also have a new `writer_identity`; see the
    // `unique_writer_identity` field.
    virtual ::grpc::Status UpdateSink(::grpc::ServerContext* context, const ::google::logging::v2::UpdateSinkRequest* request, ::google::logging::v2::LogSink* response);
    // Deletes a sink. If the sink has a unique `writer_identity`, then that
    // service account is also deleted.
    virtual ::grpc::Status DeleteSink(::grpc::ServerContext* context, const ::google::logging::v2::DeleteSinkRequest* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ListSinks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListSinks() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ListSinks() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListSinks(::grpc::ServerContext* context, const ::google::logging::v2::ListSinksRequest* request, ::google::logging::v2::ListSinksResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListSinks(::grpc::ServerContext* context, ::google::logging::v2::ListSinksRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::logging::v2::ListSinksResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetSink() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSink(::grpc::ServerContext* context, const ::google::logging::v2::GetSinkRequest* request, ::google::logging::v2::LogSink* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetSink(::grpc::ServerContext* context, ::google::logging::v2::GetSinkRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::logging::v2::LogSink>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateSink() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_CreateSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateSink(::grpc::ServerContext* context, const ::google::logging::v2::CreateSinkRequest* request, ::google::logging::v2::LogSink* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateSink(::grpc::ServerContext* context, ::google::logging::v2::CreateSinkRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::logging::v2::LogSink>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateSink() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_UpdateSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateSink(::grpc::ServerContext* context, const ::google::logging::v2::UpdateSinkRequest* request, ::google::logging::v2::LogSink* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateSink(::grpc::ServerContext* context, ::google::logging::v2::UpdateSinkRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::logging::v2::LogSink>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DeleteSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DeleteSink() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_DeleteSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteSink(::grpc::ServerContext* context, const ::google::logging::v2::DeleteSinkRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDeleteSink(::grpc::ServerContext* context, ::google::logging::v2::DeleteSinkRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ListSinks<WithAsyncMethod_GetSink<WithAsyncMethod_CreateSink<WithAsyncMethod_UpdateSink<WithAsyncMethod_DeleteSink<Service > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ListSinks : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListSinks() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ListSinks() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListSinks(::grpc::ServerContext* context, const ::google::logging::v2::ListSinksRequest* request, ::google::logging::v2::ListSinksResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetSink() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSink(::grpc::ServerContext* context, const ::google::logging::v2::GetSinkRequest* request, ::google::logging::v2::LogSink* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CreateSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateSink() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_CreateSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateSink(::grpc::ServerContext* context, const ::google::logging::v2::CreateSinkRequest* request, ::google::logging::v2::LogSink* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateSink() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_UpdateSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateSink(::grpc::ServerContext* context, const ::google::logging::v2::UpdateSinkRequest* request, ::google::logging::v2::LogSink* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DeleteSink : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DeleteSink() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_DeleteSink() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteSink(::grpc::ServerContext* context, const ::google::logging::v2::DeleteSinkRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace v2
}  // namespace logging
}  // namespace google


#endif  // GRPC_google_2flogging_2fv2_2flogging_5fconfig_2eproto__INCLUDED
