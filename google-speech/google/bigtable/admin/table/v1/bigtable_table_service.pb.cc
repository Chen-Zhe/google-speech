// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/table/v1/bigtable_table_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/bigtable/admin/table/v1/bigtable_table_service.pb.h"

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
namespace bigtable {
namespace admin {
namespace table {
namespace v1 {

namespace {


}  // namespace


void protobuf_AssignDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto() {
  protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/bigtable/admin/table/v1/bigtable_table_service.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto() {
}

void protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::api::protobuf_InitDefaults_google_2fapi_2fannotations_2eproto();
  ::google::bigtable::admin::table::v1::protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fdata_2eproto();
  ::google::bigtable::admin::table::v1::protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_5fmessages_2eproto();
  ::google::protobuf::protobuf_InitDefaults_google_2fprotobuf_2fempty_2eproto();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_once_);
void protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_once_,
                 &protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_impl);
}
void protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n;google/bigtable/admin/table/v1/bigtabl"
    "e_table_service.proto\022\036google.bigtable.a"
    "dmin.table.v1\032\034google/api/annotations.pr"
    "oto\0328google/bigtable/admin/table/v1/bigt"
    "able_table_data.proto\032Dgoogle/bigtable/a"
    "dmin/table/v1/bigtable_table_service_mes"
    "sages.proto\032\033google/protobuf/empty.proto"
    "2\276\014\n\024BigtableTableService\022\244\001\n\013CreateTabl"
    "e\0222.google.bigtable.admin.table.v1.Creat"
    "eTableRequest\032%.google.bigtable.admin.ta"
    "ble.v1.Table\":\202\323\344\223\0024\"//v1/{name=projects"
    "/*/zones/*/clusters/*}/tables:\001*\022\254\001\n\nLis"
    "tTables\0221.google.bigtable.admin.table.v1"
    ".ListTablesRequest\0322.google.bigtable.adm"
    "in.table.v1.ListTablesResponse\"7\202\323\344\223\0021\022/"
    "/v1/{name=projects/*/zones/*/clusters/*}"
    "/tables\022\235\001\n\010GetTable\022/.google.bigtable.a"
    "dmin.table.v1.GetTableRequest\032%.google.b"
    "igtable.admin.table.v1.Table\"9\202\323\344\223\0023\0221/v"
    "1/{name=projects/*/zones/*/clusters/*/ta"
    "bles/*}\022\224\001\n\013DeleteTable\0222.google.bigtabl"
    "e.admin.table.v1.DeleteTableRequest\032\026.go"
    "ogle.protobuf.Empty\"9\202\323\344\223\0023*1/v1/{name=p"
    "rojects/*/zones/*/clusters/*/tables/*}\022\236"
    "\001\n\013RenameTable\0222.google.bigtable.admin.t"
    "able.v1.RenameTableRequest\032\026.google.prot"
    "obuf.Empty\"C\202\323\344\223\002=\"8/v1/{name=projects/*"
    "/zones/*/clusters/*/tables/*}:rename:\001*\022"
    "\312\001\n\022CreateColumnFamily\0229.google.bigtable"
    ".admin.table.v1.CreateColumnFamilyReques"
    "t\032,.google.bigtable.admin.table.v1.Colum"
    "nFamily\"K\202\323\344\223\002E\"@/v1/{name=projects/*/zo"
    "nes/*/clusters/*/tables/*}/columnFamilie"
    "s:\001*\022\277\001\n\022UpdateColumnFamily\022,.google.big"
    "table.admin.table.v1.ColumnFamily\032,.goog"
    "le.bigtable.admin.table.v1.ColumnFamily\""
    "M\202\323\344\223\002G\032B/v1/{name=projects/*/zones/*/cl"
    "usters/*/tables/*/columnFamilies/*}:\001*\022\263"
    "\001\n\022DeleteColumnFamily\0229.google.bigtable."
    "admin.table.v1.DeleteColumnFamilyRequest"
    "\032\026.google.protobuf.Empty\"J\202\323\344\223\002D*B/v1/{n"
    "ame=projects/*/zones/*/clusters/*/tables"
    "/*/columnFamilies/*}\022\262\001\n\016BulkDeleteRows\022"
    "5.google.bigtable.admin.table.v1.BulkDel"
    "eteRowsRequest\032\026.google.protobuf.Empty\"Q"
    "\202\323\344\223\002K\"F/v1/{table_name=projects/*/zones"
    "/*/clusters/*/tables/*}:bulkDeleteRows:\001"
    "*B\207\001\n\"com.google.bigtable.admin.table.v1"
    "B\032BigtableTableServicesProtoP\001ZCgoogle.g"
    "olang.org/genproto/googleapis/bigtable/a"
    "dmin/table/v1;tableb\006proto3", 2027);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/bigtable/admin/table/v1/bigtable_table_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_AddDesc_google_2fapi_2fannotations_2eproto();
  ::google::bigtable::admin::table::v1::protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fdata_2eproto();
  ::google::bigtable::admin::table::v1::protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_5fmessages_2eproto();
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fempty_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_once_);
void protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_once_,
                 &protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto {
  StaticDescriptorInitializer_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto() {
    protobuf_AddDesc_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto();
  }
} static_descriptor_initializer_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace table
}  // namespace admin
}  // namespace bigtable
}  // namespace google

// @@protoc_insertion_point(global_scope)