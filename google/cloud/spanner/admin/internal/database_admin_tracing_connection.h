// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_TRACING_CONNECTION_H

#include "google/cloud/spanner/admin/database_admin_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DatabaseAdminTracingConnection
    : public spanner_admin::DatabaseAdminConnection {
 public:
  ~DatabaseAdminTracingConnection() override = default;

  explicit DatabaseAdminTracingConnection(
      std::shared_ptr<spanner_admin::DatabaseAdminConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::spanner::admin::database::v1::Database> ListDatabases(
      google::spanner::admin::database::v1::ListDatabasesRequest request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  CreateDatabase(
      google::spanner::admin::database::v1::CreateDatabaseRequest const&
          request) override;

  StatusOr<google::spanner::admin::database::v1::Database> GetDatabase(
      google::spanner::admin::database::v1::GetDatabaseRequest const& request)
      override;

  future<
      StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
          request) override;

  Status DropDatabase(
      google::spanner::admin::database::v1::DropDatabaseRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::spanner::admin::database::v1::Backup>> CreateBackup(
      google::spanner::admin::database::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Backup>> CopyBackup(
      google::spanner::admin::database::v1::CopyBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::Backup> GetBackup(
      google::spanner::admin::database::v1::GetBackupRequest const& request)
      override;

  StatusOr<google::spanner::admin::database::v1::Backup> UpdateBackup(
      google::spanner::admin::database::v1::UpdateBackupRequest const& request)
      override;

  Status DeleteBackup(
      google::spanner::admin::database::v1::DeleteBackupRequest const& request)
      override;

  StreamRange<google::spanner::admin::database::v1::Backup> ListBackups(
      google::spanner::admin::database::v1::ListBackupsRequest request)
      override;

  future<StatusOr<google::spanner::admin::database::v1::Database>>
  RestoreDatabase(
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&
          request) override;

  StreamRange<google::longrunning::Operation> ListDatabaseOperations(
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest
          request) override;

  StreamRange<google::longrunning::Operation> ListBackupOperations(
      google::spanner::admin::database::v1::ListBackupOperationsRequest request)
      override;

  StreamRange<google::spanner::admin::database::v1::DatabaseRole>
  ListDatabaseRoles(
      google::spanner::admin::database::v1::ListDatabaseRolesRequest request)
      override;

 private:
  std::shared_ptr<spanner_admin::DatabaseAdminConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_DATABASE_ADMIN_TRACING_CONNECTION_H
