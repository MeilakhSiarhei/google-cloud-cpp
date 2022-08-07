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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#include "google/cloud/vmmigration/vm_migration_connection.h"
#include "google/cloud/vmmigration/internal/vm_migration_connection_impl.h"
#include "google/cloud/vmmigration/internal/vm_migration_option_defaults.h"
#include "google/cloud/vmmigration/internal/vm_migration_stub_factory.h"
#include "google/cloud/vmmigration/vm_migration_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace vmmigration {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VmMigrationConnection::~VmMigrationConnection() = default;

StreamRange<google::cloud::vmmigration::v1::Source>
VmMigrationConnection::ListSources(
    google::cloud::vmmigration::v1::
        ListSourcesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::Source>>();
}

StatusOr<google::cloud::vmmigration::v1::Source>
VmMigrationConnection::GetSource(
    google::cloud::vmmigration::v1::GetSourceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationConnection::CreateSource(
    google::cloud::vmmigration::v1::CreateSourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::Source>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationConnection::UpdateSource(
    google::cloud::vmmigration::v1::UpdateSourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::Source>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationConnection::DeleteSource(
    google::cloud::vmmigration::v1::DeleteSourceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
VmMigrationConnection::FetchInventory(
    google::cloud::vmmigration::v1::FetchInventoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationConnection::ListUtilizationReports(
    google::cloud::vmmigration::v1::
        ListUtilizationReportsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::UtilizationReport>>();
}

StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationConnection::GetUtilizationReport(
    google::cloud::vmmigration::v1::GetUtilizationReportRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>
VmMigrationConnection::CreateUtilizationReport(
    google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationConnection::DeleteUtilizationReport(
    google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationConnection::ListDatacenterConnectors(
    google::cloud::vmmigration::v1::
        ListDatacenterConnectorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>>();
}

StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationConnection::GetDatacenterConnector(
    google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>
VmMigrationConnection::CreateDatacenterConnector(
    google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationConnection::DeleteDatacenterConnector(
    google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>
VmMigrationConnection::UpgradeAppliance(
    google::cloud::vmmigration::v1::UpgradeApplianceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationConnection::CreateMigratingVm(
    google::cloud::vmmigration::v1::CreateMigratingVmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::MigratingVm>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationConnection::ListMigratingVms(
    google::cloud::vmmigration::v1::
        ListMigratingVmsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::MigratingVm>>();
}

StatusOr<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationConnection::GetMigratingVm(
    google::cloud::vmmigration::v1::GetMigratingVmRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationConnection::UpdateMigratingVm(
    google::cloud::vmmigration::v1::UpdateMigratingVmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::MigratingVm>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationConnection::DeleteMigratingVm(
    google::cloud::vmmigration::v1::DeleteMigratingVmRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>
VmMigrationConnection::StartMigration(
    google::cloud::vmmigration::v1::StartMigrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>
VmMigrationConnection::ResumeMigration(
    google::cloud::vmmigration::v1::ResumeMigrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>
VmMigrationConnection::PauseMigration(
    google::cloud::vmmigration::v1::PauseMigrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>
VmMigrationConnection::FinalizeMigration(
    google::cloud::vmmigration::v1::FinalizeMigrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>
VmMigrationConnection::CreateCloneJob(
    google::cloud::vmmigration::v1::CreateCloneJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::CloneJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>
VmMigrationConnection::CancelCloneJob(
    google::cloud::vmmigration::v1::CancelCloneJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmmigration::v1::CloneJob>
VmMigrationConnection::ListCloneJobs(
    google::cloud::vmmigration::v1::
        ListCloneJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::CloneJob>>();
}

StatusOr<google::cloud::vmmigration::v1::CloneJob>
VmMigrationConnection::GetCloneJob(
    google::cloud::vmmigration::v1::GetCloneJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>
VmMigrationConnection::CreateCutoverJob(
    google::cloud::vmmigration::v1::CreateCutoverJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::CutoverJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>
VmMigrationConnection::CancelCutoverJob(
    google::cloud::vmmigration::v1::CancelCutoverJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationConnection::ListCutoverJobs(
    google::cloud::vmmigration::v1::
        ListCutoverJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::CutoverJob>>();
}

StatusOr<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationConnection::GetCutoverJob(
    google::cloud::vmmigration::v1::GetCutoverJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmmigration::v1::Group>
VmMigrationConnection::ListGroups(
    google::cloud::vmmigration::v1::
        ListGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::Group>>();
}

StatusOr<google::cloud::vmmigration::v1::Group> VmMigrationConnection::GetGroup(
    google::cloud::vmmigration::v1::GetGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationConnection::CreateGroup(
    google::cloud::vmmigration::v1::CreateGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::Group>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationConnection::UpdateGroup(
    google::cloud::vmmigration::v1::UpdateGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::Group>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationConnection::DeleteGroup(
    google::cloud::vmmigration::v1::DeleteGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>
VmMigrationConnection::AddGroupMigration(
    google::cloud::vmmigration::v1::AddGroupMigrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>
VmMigrationConnection::RemoveGroupMigration(
    google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmmigration::v1::TargetProject>
VmMigrationConnection::ListTargetProjects(
    google::cloud::vmmigration::v1::
        ListTargetProjectsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmmigration::v1::TargetProject>>();
}

StatusOr<google::cloud::vmmigration::v1::TargetProject>
VmMigrationConnection::GetTargetProject(
    google::cloud::vmmigration::v1::GetTargetProjectRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationConnection::CreateTargetProject(
    google::cloud::vmmigration::v1::CreateTargetProjectRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::TargetProject>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationConnection::UpdateTargetProject(
    google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::TargetProject>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationConnection::DeleteTargetProject(
    google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VmMigrationConnection> MakeVmMigrationConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VmMigrationPolicyOptionList>(options,
                                                              __func__);
  options = vmmigration_internal::VmMigrationDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = vmmigration_internal::CreateDefaultVmMigrationStub(
      background->cq(), options);
  return std::make_shared<vmmigration_internal::VmMigrationConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration
}  // namespace cloud
}  // namespace google
