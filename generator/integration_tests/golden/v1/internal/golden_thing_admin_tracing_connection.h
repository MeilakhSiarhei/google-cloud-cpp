// Copyright 2022 Google LLC
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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_THING_ADMIN_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_THING_ADMIN_TRACING_CONNECTION_H

#include "generator/integration_tests/golden/v1/golden_thing_admin_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class GoldenThingAdminTracingConnection
    : public golden_v1::GoldenThingAdminConnection {
 public:
  ~GoldenThingAdminTracingConnection() override = default;

  explicit GoldenThingAdminTracingConnection(
    std::shared_ptr<golden_v1::GoldenThingAdminConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::test::admin::database::v1::Database>
  ListDatabases(google::test::admin::database::v1::ListDatabasesRequest request) override;

  future<StatusOr<google::test::admin::database::v1::Database>>
  CreateDatabase(google::test::admin::database::v1::CreateDatabaseRequest const& request) override;

  StatusOr<google::test::admin::database::v1::Database>
  GetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request) override;

  future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) override;

  Status
  DropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(google::test::admin::database::v1::GetDatabaseDdlRequest const& request) override;

  StatusOr<google::iam::v1::Policy>
  SetIamPolicy(google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy>
  GetIamPolicy(google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::test::admin::database::v1::Backup>>
  CreateBackup(google::test::admin::database::v1::CreateBackupRequest const& request) override;

  StatusOr<google::test::admin::database::v1::Backup>
  GetBackup(google::test::admin::database::v1::GetBackupRequest const& request) override;

  StatusOr<google::test::admin::database::v1::Backup>
  UpdateBackup(google::test::admin::database::v1::UpdateBackupRequest const& request) override;

  Status
  DeleteBackup(google::test::admin::database::v1::DeleteBackupRequest const& request) override;

  StreamRange<google::test::admin::database::v1::Backup>
  ListBackups(google::test::admin::database::v1::ListBackupsRequest request) override;

  future<StatusOr<google::test::admin::database::v1::Database>>
  RestoreDatabase(google::test::admin::database::v1::RestoreDatabaseRequest const& request) override;

  StreamRange<google::longrunning::Operation>
  ListDatabaseOperations(google::test::admin::database::v1::ListDatabaseOperationsRequest request) override;

  StreamRange<google::longrunning::Operation>
  ListBackupOperations(google::test::admin::database::v1::ListBackupOperationsRequest request) override;

  future<StatusOr<google::test::admin::database::v1::Database>>
  LongRunningWithoutRouting(google::test::admin::database::v1::RestoreDatabaseRequest const& request) override;

  future<StatusOr<google::test::admin::database::v1::Database>>
  AsyncGetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request) override;

  future<Status>
  AsyncDropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request) override;

 private:
  std::shared_ptr<golden_v1::GoldenThingAdminConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_INTERNAL_GOLDEN_THING_ADMIN_TRACING_CONNECTION_H
