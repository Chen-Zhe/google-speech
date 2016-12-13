// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: google/bigtable/admin/table/v1/bigtable_table_service.proto
// Original file comments:
// Copyright (c) 2015, Google Inc.
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
#ifndef GRPC_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto__INCLUDED
#define GRPC_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto__INCLUDED

#include "google/bigtable/admin/table/v1/bigtable_table_service.pb.h"

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
namespace bigtable {
namespace admin {
namespace table {
namespace v1 {

// Service for creating, configuring, and deleting Cloud Bigtable tables.
// Provides access to the table schemas only, not the data stored within the tables.
class BigtableTableService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Creates a new table, to be served from a specified cluster.
    // The table can be created with a full set of initial column families,
    // specified in the request.
    virtual ::grpc::Status CreateTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest& request, ::google::bigtable::admin::table::v1::Table* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::Table>> AsyncCreateTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::Table>>(AsyncCreateTableRaw(context, request, cq));
    }
    // Lists the names of all tables served from a specified cluster.
    virtual ::grpc::Status ListTables(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest& request, ::google::bigtable::admin::table::v1::ListTablesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ListTablesResponse>> AsyncListTables(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ListTablesResponse>>(AsyncListTablesRaw(context, request, cq));
    }
    // Gets the schema of the specified table, including its column families.
    virtual ::grpc::Status GetTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest& request, ::google::bigtable::admin::table::v1::Table* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::Table>> AsyncGetTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::Table>>(AsyncGetTableRaw(context, request, cq));
    }
    // Permanently deletes a specified table and all of its data.
    virtual ::grpc::Status DeleteTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncDeleteTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncDeleteTableRaw(context, request, cq));
    }
    // Changes the name of a specified table.
    // Cannot be used to move tables between clusters, zones, or projects.
    virtual ::grpc::Status RenameTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncRenameTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncRenameTableRaw(context, request, cq));
    }
    // Creates a new column family within a specified table.
    virtual ::grpc::Status CreateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest& request, ::google::bigtable::admin::table::v1::ColumnFamily* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ColumnFamily>> AsyncCreateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ColumnFamily>>(AsyncCreateColumnFamilyRaw(context, request, cq));
    }
    // Changes the configuration of a specified column family.
    virtual ::grpc::Status UpdateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily& request, ::google::bigtable::admin::table::v1::ColumnFamily* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ColumnFamily>> AsyncUpdateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ColumnFamily>>(AsyncUpdateColumnFamilyRaw(context, request, cq));
    }
    // Permanently deletes a specified column family and all of its data.
    virtual ::grpc::Status DeleteColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncDeleteColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncDeleteColumnFamilyRaw(context, request, cq));
    }
    // Delete all rows in a table corresponding to a particular prefix
    virtual ::grpc::Status BulkDeleteRows(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncBulkDeleteRows(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncBulkDeleteRowsRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::Table>* AsyncCreateTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ListTablesResponse>* AsyncListTablesRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::Table>* AsyncGetTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncDeleteTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncRenameTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ColumnFamily>* AsyncCreateColumnFamilyRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::bigtable::admin::table::v1::ColumnFamily>* AsyncUpdateColumnFamilyRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncDeleteColumnFamilyRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncBulkDeleteRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest& request, ::google::bigtable::admin::table::v1::Table* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::Table>> AsyncCreateTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::Table>>(AsyncCreateTableRaw(context, request, cq));
    }
    ::grpc::Status ListTables(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest& request, ::google::bigtable::admin::table::v1::ListTablesResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ListTablesResponse>> AsyncListTables(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ListTablesResponse>>(AsyncListTablesRaw(context, request, cq));
    }
    ::grpc::Status GetTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest& request, ::google::bigtable::admin::table::v1::Table* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::Table>> AsyncGetTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::Table>>(AsyncGetTableRaw(context, request, cq));
    }
    ::grpc::Status DeleteTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncDeleteTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncDeleteTableRaw(context, request, cq));
    }
    ::grpc::Status RenameTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncRenameTable(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncRenameTableRaw(context, request, cq));
    }
    ::grpc::Status CreateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest& request, ::google::bigtable::admin::table::v1::ColumnFamily* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ColumnFamily>> AsyncCreateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ColumnFamily>>(AsyncCreateColumnFamilyRaw(context, request, cq));
    }
    ::grpc::Status UpdateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily& request, ::google::bigtable::admin::table::v1::ColumnFamily* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ColumnFamily>> AsyncUpdateColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ColumnFamily>>(AsyncUpdateColumnFamilyRaw(context, request, cq));
    }
    ::grpc::Status DeleteColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncDeleteColumnFamily(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncDeleteColumnFamilyRaw(context, request, cq));
    }
    ::grpc::Status BulkDeleteRows(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest& request, ::google::protobuf::Empty* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncBulkDeleteRows(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncBulkDeleteRowsRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::Table>* AsyncCreateTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ListTablesResponse>* AsyncListTablesRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::Table>* AsyncGetTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncDeleteTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncRenameTableRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ColumnFamily>* AsyncCreateColumnFamilyRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::bigtable::admin::table::v1::ColumnFamily>* AsyncUpdateColumnFamilyRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncDeleteColumnFamilyRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncBulkDeleteRowsRaw(::grpc::ClientContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_CreateTable_;
    const ::grpc::RpcMethod rpcmethod_ListTables_;
    const ::grpc::RpcMethod rpcmethod_GetTable_;
    const ::grpc::RpcMethod rpcmethod_DeleteTable_;
    const ::grpc::RpcMethod rpcmethod_RenameTable_;
    const ::grpc::RpcMethod rpcmethod_CreateColumnFamily_;
    const ::grpc::RpcMethod rpcmethod_UpdateColumnFamily_;
    const ::grpc::RpcMethod rpcmethod_DeleteColumnFamily_;
    const ::grpc::RpcMethod rpcmethod_BulkDeleteRows_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Creates a new table, to be served from a specified cluster.
    // The table can be created with a full set of initial column families,
    // specified in the request.
    virtual ::grpc::Status CreateTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest* request, ::google::bigtable::admin::table::v1::Table* response);
    // Lists the names of all tables served from a specified cluster.
    virtual ::grpc::Status ListTables(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest* request, ::google::bigtable::admin::table::v1::ListTablesResponse* response);
    // Gets the schema of the specified table, including its column families.
    virtual ::grpc::Status GetTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest* request, ::google::bigtable::admin::table::v1::Table* response);
    // Permanently deletes a specified table and all of its data.
    virtual ::grpc::Status DeleteTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest* request, ::google::protobuf::Empty* response);
    // Changes the name of a specified table.
    // Cannot be used to move tables between clusters, zones, or projects.
    virtual ::grpc::Status RenameTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest* request, ::google::protobuf::Empty* response);
    // Creates a new column family within a specified table.
    virtual ::grpc::Status CreateColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest* request, ::google::bigtable::admin::table::v1::ColumnFamily* response);
    // Changes the configuration of a specified column family.
    virtual ::grpc::Status UpdateColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily* request, ::google::bigtable::admin::table::v1::ColumnFamily* response);
    // Permanently deletes a specified column family and all of its data.
    virtual ::grpc::Status DeleteColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest* request, ::google::protobuf::Empty* response);
    // Delete all rows in a table corresponding to a particular prefix
    virtual ::grpc::Status BulkDeleteRows(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateTable() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest* request, ::google::bigtable::admin::table::v1::Table* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateTable(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::CreateTableRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::admin::table::v1::Table>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListTables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListTables() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ListTables() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListTables(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest* request, ::google::bigtable::admin::table::v1::ListTablesResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListTables(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::ListTablesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::admin::table::v1::ListTablesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetTable() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest* request, ::google::bigtable::admin::table::v1::Table* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTable(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::GetTableRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::admin::table::v1::Table>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DeleteTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DeleteTable() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_DeleteTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDeleteTable(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::DeleteTableRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_RenameTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_RenameTable() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_RenameTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RenameTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRenameTable(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::RenameTableRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateColumnFamily : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateColumnFamily() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_CreateColumnFamily() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest* request, ::google::bigtable::admin::table::v1::ColumnFamily* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateColumnFamily(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::admin::table::v1::ColumnFamily>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateColumnFamily : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateColumnFamily() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_UpdateColumnFamily() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily* request, ::google::bigtable::admin::table::v1::ColumnFamily* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateColumnFamily(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::ColumnFamily* request, ::grpc::ServerAsyncResponseWriter< ::google::bigtable::admin::table::v1::ColumnFamily>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DeleteColumnFamily : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DeleteColumnFamily() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_DeleteColumnFamily() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDeleteColumnFamily(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(7, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_BulkDeleteRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_BulkDeleteRows() {
      ::grpc::Service::MarkMethodAsync(8);
    }
    ~WithAsyncMethod_BulkDeleteRows() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BulkDeleteRows(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBulkDeleteRows(::grpc::ServerContext* context, ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(8, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateTable<WithAsyncMethod_ListTables<WithAsyncMethod_GetTable<WithAsyncMethod_DeleteTable<WithAsyncMethod_RenameTable<WithAsyncMethod_CreateColumnFamily<WithAsyncMethod_UpdateColumnFamily<WithAsyncMethod_DeleteColumnFamily<WithAsyncMethod_BulkDeleteRows<Service > > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateTable() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::CreateTableRequest* request, ::google::bigtable::admin::table::v1::Table* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListTables : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListTables() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ListTables() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListTables(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::ListTablesRequest* request, ::google::bigtable::admin::table::v1::ListTablesResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetTable() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::GetTableRequest* request, ::google::bigtable::admin::table::v1::Table* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DeleteTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DeleteTable() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_DeleteTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::DeleteTableRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_RenameTable : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_RenameTable() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_RenameTable() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RenameTable(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::RenameTableRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CreateColumnFamily : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateColumnFamily() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_CreateColumnFamily() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::CreateColumnFamilyRequest* request, ::google::bigtable::admin::table::v1::ColumnFamily* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateColumnFamily : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateColumnFamily() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_UpdateColumnFamily() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::ColumnFamily* request, ::google::bigtable::admin::table::v1::ColumnFamily* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DeleteColumnFamily : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DeleteColumnFamily() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_DeleteColumnFamily() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DeleteColumnFamily(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::DeleteColumnFamilyRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_BulkDeleteRows : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_BulkDeleteRows() {
      ::grpc::Service::MarkMethodGeneric(8);
    }
    ~WithGenericMethod_BulkDeleteRows() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status BulkDeleteRows(::grpc::ServerContext* context, const ::google::bigtable::admin::table::v1::BulkDeleteRowsRequest* request, ::google::protobuf::Empty* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace v1
}  // namespace table
}  // namespace admin
}  // namespace bigtable
}  // namespace google


#endif  // GRPC_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto__INCLUDED
