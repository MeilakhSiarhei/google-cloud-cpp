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
// source: google/cloud/clouddms/v1/clouddms.proto

#include "google/cloud/datamigration/data_migration_connection.h"
#include "google/cloud/datamigration/data_migration_options.h"
#include "google/cloud/datamigration/internal/data_migration_connection_impl.h"
#include "google/cloud/datamigration/internal/data_migration_option_defaults.h"
#include "google/cloud/datamigration/internal/data_migration_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace datamigration {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataMigrationServiceConnection::~DataMigrationServiceConnection() = default;

StreamRange<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceConnection::ListMigrationJobs(
    google::cloud::clouddms::v1::
        ListMigrationJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::MigrationJob>>();
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceConnection::GetMigrationJob(
    google::cloud::clouddms::v1::GetMigrationJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::CreateMigrationJob(
    google::cloud::clouddms::v1::CreateMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::UpdateMigrationJob(
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceConnection::DeleteMigrationJob(
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::StartMigrationJob(
    google::cloud::clouddms::v1::StartMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::StopMigrationJob(
    google::cloud::clouddms::v1::StopMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::ResumeMigrationJob(
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::PromoteMigrationJob(
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::VerifyMigrationJob(
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::RestartMigrationJob(
    google::cloud::clouddms::v1::RestartMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::clouddms::v1::SshScript>
DataMigrationServiceConnection::GenerateSshScript(
    google::cloud::clouddms::v1::GenerateSshScriptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceConnection::ListConnectionProfiles(
    google::cloud::clouddms::v1::
        ListConnectionProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::ConnectionProfile>>();
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceConnection::GetConnectionProfile(
    google::cloud::clouddms::v1::GetConnectionProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceConnection::CreateConnectionProfile(
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceConnection::UpdateConnectionProfile(
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceConnection::DeleteConnectionProfile(
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<DataMigrationServiceConnection>
MakeDataMigrationServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DataMigrationServicePolicyOptionList>(
      options, __func__);
  options = datamigration_internal::DataMigrationServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = datamigration_internal::CreateDefaultDataMigrationServiceStub(
      background->cq(), options);
  return std::make_shared<
      datamigration_internal::DataMigrationServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration
}  // namespace cloud
}  // namespace google
