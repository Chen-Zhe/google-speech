// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: google/storagetransfer/v1/transfer.proto
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
#ifndef GRPC_google_2fstoragetransfer_2fv1_2ftransfer_2eproto__INCLUDED
#define GRPC_google_2fstoragetransfer_2fv1_2ftransfer_2eproto__INCLUDED

#include "google/storagetransfer/v1/transfer.pb.h"

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
namespace storagetransfer {
namespace v1 {

// Transfers data between between Google Cloud Storage buckets or from a data
// source external to Google to a Cloud Storage bucket.
class StorageTransferService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Returns the Google service account that is used by Storage Transfer
    // Service to access buckets in the project where transfers
    // run or in other projects. Each Google service account is associated
    // with one Google Cloud Platform Console project. Users
    // should add this service account to the Google Cloud Storage bucket
    // ACLs to grant access to Storage Transfer Service. This service
    // account is created and owned by Storage Transfer Service and can
    // only be used by Storage Transfer Service.
    virtual ::grpc::Status GetGoogleServiceAccount(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::google::storagetransfer::v1::GoogleServiceAccount* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::GoogleServiceAccount>> AsyncGetGoogleServiceAccount(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::GoogleServiceAccount>>(AsyncGetGoogleServiceAccountRaw(context, request, cq));
    }
    // Creates a transfer job that runs periodically.
    virtual ::grpc::Status CreateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>> AsyncCreateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>>(AsyncCreateTransferJobRaw(context, request, cq));
    }
    // Updates a transfer job. Updating a job's transfer spec does not affect
    // transfer operations that are running already. Updating the scheduling
    // of a job is not allowed.
    virtual ::grpc::Status UpdateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>> AsyncUpdateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>>(AsyncUpdateTransferJobRaw(context, request, cq));
    }
    // Gets a transfer job.
    virtual ::grpc::Status GetTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>> AsyncGetTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>>(AsyncGetTransferJobRaw(context, request, cq));
    }
    // Lists transfer jobs.
    virtual ::grpc::Status ListTransferJobs(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::google::storagetransfer::v1::ListTransferJobsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::ListTransferJobsResponse>> AsyncListTransferJobs(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::ListTransferJobsResponse>>(AsyncListTransferJobsRaw(context, request, cq));
    }
    // Pauses a transfer operation.
    virtual ::grpc::Status PauseTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncPauseTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncPauseTransferOperationRaw(context, request, cq));
    }
    // Resumes a transfer operation that is paused.
    virtual ::grpc::Status ResumeTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncResumeTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncResumeTransferOperationRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::GoogleServiceAccount>* AsyncGetGoogleServiceAccountRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>* AsyncCreateTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>* AsyncUpdateTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::TransferJob>* AsyncGetTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::storagetransfer::v1::ListTransferJobsResponse>* AsyncListTransferJobsRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncPauseTransferOperationRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncResumeTransferOperationRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetGoogleServiceAccount(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::google::storagetransfer::v1::GoogleServiceAccount* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::GoogleServiceAccount>> AsyncGetGoogleServiceAccount(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::GoogleServiceAccount>>(AsyncGetGoogleServiceAccountRaw(context, request, cq));
    }
    ::grpc::Status CreateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>> AsyncCreateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>>(AsyncCreateTransferJobRaw(context, request, cq));
    }
    ::grpc::Status UpdateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>> AsyncUpdateTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>>(AsyncUpdateTransferJobRaw(context, request, cq));
    }
    ::grpc::Status GetTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::google::storagetransfer::v1::TransferJob* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>> AsyncGetTransferJob(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>>(AsyncGetTransferJobRaw(context, request, cq));
    }
    ::grpc::Status ListTransferJobs(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::google::storagetransfer::v1::ListTransferJobsResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::ListTransferJobsResponse>> AsyncListTransferJobs(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::ListTransferJobsResponse>>(AsyncListTransferJobsRaw(context, request, cq));
    }
    ::grpc::Status PauseTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncPauseTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncPauseTransferOperationRaw(context, request, cq));
    }
    ::grpc::Status ResumeTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncResumeTransferOperation(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncResumeTransferOperationRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::GoogleServiceAccount>* AsyncGetGoogleServiceAccountRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>* AsyncCreateTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>* AsyncUpdateTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::TransferJob>* AsyncGetTransferJobRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::storagetransfer::v1::ListTransferJobsResponse>* AsyncListTransferJobsRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncPauseTransferOperationRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncResumeTransferOperationRaw(::grpc::ClientContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_GetGoogleServiceAccount_;
    const ::grpc::RpcMethod rpcmethod_CreateTransferJob_;
    const ::grpc::RpcMethod rpcmethod_UpdateTransferJob_;
    const ::grpc::RpcMethod rpcmethod_GetTransferJob_;
    const ::grpc::RpcMethod rpcmethod_ListTransferJobs_;
    const ::grpc::RpcMethod rpcmethod_PauseTransferOperation_;
    const ::grpc::RpcMethod rpcmethod_ResumeTransferOperation_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Returns the Google service account that is used by Storage Transfer
    // Service to access buckets in the project where transfers
    // run or in other projects. Each Google service account is associated
    // with one Google Cloud Platform Console project. Users
    // should add this service account to the Google Cloud Storage bucket
    // ACLs to grant access to Storage Transfer Service. This service
    // account is created and owned by Storage Transfer Service and can
    // only be used by Storage Transfer Service.
    virtual ::grpc::Status GetGoogleServiceAccount(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest* request, ::google::storagetransfer::v1::GoogleServiceAccount* response);
    // Creates a transfer job that runs periodically.
    virtual ::grpc::Status CreateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response);
    // Updates a transfer job. Updating a job's transfer spec does not affect
    // transfer operations that are running already. Updating the scheduling
    // of a job is not allowed.
    virtual ::grpc::Status UpdateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response);
    // Gets a transfer job.
    virtual ::grpc::Status GetTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response);
    // Lists transfer jobs.
    virtual ::grpc::Status ListTransferJobs(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest* request, ::google::storagetransfer::v1::ListTransferJobsResponse* response);
    // Pauses a transfer operation.
    virtual ::grpc::Status PauseTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest* request, ::google::protobuf::Empty* response);
    // Resumes a transfer operation that is paused.
    virtual ::grpc::Status ResumeTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetGoogleServiceAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetGoogleServiceAccount() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetGoogleServiceAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGoogleServiceAccount(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest* request, ::google::storagetransfer::v1::GoogleServiceAccount* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetGoogleServiceAccount(::grpc::ServerContext* context, ::google::storagetransfer::v1::GetGoogleServiceAccountRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::storagetransfer::v1::GoogleServiceAccount>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateTransferJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateTransferJob() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CreateTransferJob() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateTransferJob(::grpc::ServerContext* context, ::google::storagetransfer::v1::CreateTransferJobRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::storagetransfer::v1::TransferJob>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateTransferJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateTransferJob() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_UpdateTransferJob() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateTransferJob(::grpc::ServerContext* context, ::google::storagetransfer::v1::UpdateTransferJobRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::storagetransfer::v1::TransferJob>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTransferJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetTransferJob() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_GetTransferJob() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTransferJob(::grpc::ServerContext* context, ::google::storagetransfer::v1::GetTransferJobRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::storagetransfer::v1::TransferJob>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListTransferJobs : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListTransferJobs() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_ListTransferJobs() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListTransferJobs(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest* request, ::google::storagetransfer::v1::ListTransferJobsResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListTransferJobs(::grpc::ServerContext* context, ::google::storagetransfer::v1::ListTransferJobsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::storagetransfer::v1::ListTransferJobsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PauseTransferOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_PauseTransferOperation() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_PauseTransferOperation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PauseTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPauseTransferOperation(::grpc::ServerContext* context, ::google::storagetransfer::v1::PauseTransferOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ResumeTransferOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ResumeTransferOperation() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_ResumeTransferOperation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ResumeTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestResumeTransferOperation(::grpc::ServerContext* context, ::google::storagetransfer::v1::ResumeTransferOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetGoogleServiceAccount<WithAsyncMethod_CreateTransferJob<WithAsyncMethod_UpdateTransferJob<WithAsyncMethod_GetTransferJob<WithAsyncMethod_ListTransferJobs<WithAsyncMethod_PauseTransferOperation<WithAsyncMethod_ResumeTransferOperation<Service > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetGoogleServiceAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetGoogleServiceAccount() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetGoogleServiceAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetGoogleServiceAccount(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetGoogleServiceAccountRequest* request, ::google::storagetransfer::v1::GoogleServiceAccount* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CreateTransferJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateTransferJob() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CreateTransferJob() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::CreateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateTransferJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateTransferJob() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_UpdateTransferJob() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::UpdateTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetTransferJob : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetTransferJob() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_GetTransferJob() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTransferJob(::grpc::ServerContext* context, const ::google::storagetransfer::v1::GetTransferJobRequest* request, ::google::storagetransfer::v1::TransferJob* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListTransferJobs : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListTransferJobs() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_ListTransferJobs() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListTransferJobs(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ListTransferJobsRequest* request, ::google::storagetransfer::v1::ListTransferJobsResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PauseTransferOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_PauseTransferOperation() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_PauseTransferOperation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PauseTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::PauseTransferOperationRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ResumeTransferOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ResumeTransferOperation() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_ResumeTransferOperation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ResumeTransferOperation(::grpc::ServerContext* context, const ::google::storagetransfer::v1::ResumeTransferOperationRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace v1
}  // namespace storagetransfer
}  // namespace google


#endif  // GRPC_google_2fstoragetransfer_2fv1_2ftransfer_2eproto__INCLUDED
