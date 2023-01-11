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

#include "google/cloud/vmmigration/internal/vm_migration_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace vmmigration_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VmMigrationTracingConnection::VmMigrationTracingConnection(
    std::shared_ptr<vmmigration::VmMigrationConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::vmmigration::v1::Source>
VmMigrationTracingConnection::ListSources(
    google::cloud::vmmigration::v1::ListSourcesRequest request) {
  return child_->ListSources(request);
}

StatusOr<google::cloud::vmmigration::v1::Source>
VmMigrationTracingConnection::GetSource(
    google::cloud::vmmigration::v1::GetSourceRequest const& request) {
  return child_->GetSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationTracingConnection::CreateSource(
    google::cloud::vmmigration::v1::CreateSourceRequest const& request) {
  return child_->CreateSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationTracingConnection::UpdateSource(
    google::cloud::vmmigration::v1::UpdateSourceRequest const& request) {
  return child_->UpdateSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationTracingConnection::DeleteSource(
    google::cloud::vmmigration::v1::DeleteSourceRequest const& request) {
  return child_->DeleteSource(request);
}

StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
VmMigrationTracingConnection::FetchInventory(
    google::cloud::vmmigration::v1::FetchInventoryRequest const& request) {
  return child_->FetchInventory(request);
}

StreamRange<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationTracingConnection::ListUtilizationReports(
    google::cloud::vmmigration::v1::ListUtilizationReportsRequest request) {
  return child_->ListUtilizationReports(request);
}

StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationTracingConnection::GetUtilizationReport(
    google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
        request) {
  return child_->GetUtilizationReport(request);
}

future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>
VmMigrationTracingConnection::CreateUtilizationReport(
    google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
        request) {
  return child_->CreateUtilizationReport(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationTracingConnection::DeleteUtilizationReport(
    google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
        request) {
  return child_->DeleteUtilizationReport(request);
}

StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationTracingConnection::ListDatacenterConnectors(
    google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request) {
  return child_->ListDatacenterConnectors(request);
}

StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationTracingConnection::GetDatacenterConnector(
    google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
        request) {
  return child_->GetDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>
VmMigrationTracingConnection::CreateDatacenterConnector(
    google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
        request) {
  return child_->CreateDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationTracingConnection::DeleteDatacenterConnector(
    google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
        request) {
  return child_->DeleteDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>
VmMigrationTracingConnection::UpgradeAppliance(
    google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request) {
  return child_->UpgradeAppliance(request);
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationTracingConnection::CreateMigratingVm(
    google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request) {
  return child_->CreateMigratingVm(request);
}

StreamRange<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationTracingConnection::ListMigratingVms(
    google::cloud::vmmigration::v1::ListMigratingVmsRequest request) {
  return child_->ListMigratingVms(request);
}

StatusOr<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationTracingConnection::GetMigratingVm(
    google::cloud::vmmigration::v1::GetMigratingVmRequest const& request) {
  return child_->GetMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationTracingConnection::UpdateMigratingVm(
    google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request) {
  return child_->UpdateMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationTracingConnection::DeleteMigratingVm(
    google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request) {
  return child_->DeleteMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>
VmMigrationTracingConnection::StartMigration(
    google::cloud::vmmigration::v1::StartMigrationRequest const& request) {
  return child_->StartMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>
VmMigrationTracingConnection::ResumeMigration(
    google::cloud::vmmigration::v1::ResumeMigrationRequest const& request) {
  return child_->ResumeMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>
VmMigrationTracingConnection::PauseMigration(
    google::cloud::vmmigration::v1::PauseMigrationRequest const& request) {
  return child_->PauseMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>
VmMigrationTracingConnection::FinalizeMigration(
    google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request) {
  return child_->FinalizeMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>
VmMigrationTracingConnection::CreateCloneJob(
    google::cloud::vmmigration::v1::CreateCloneJobRequest const& request) {
  return child_->CreateCloneJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>
VmMigrationTracingConnection::CancelCloneJob(
    google::cloud::vmmigration::v1::CancelCloneJobRequest const& request) {
  return child_->CancelCloneJob(request);
}

StreamRange<google::cloud::vmmigration::v1::CloneJob>
VmMigrationTracingConnection::ListCloneJobs(
    google::cloud::vmmigration::v1::ListCloneJobsRequest request) {
  return child_->ListCloneJobs(request);
}

StatusOr<google::cloud::vmmigration::v1::CloneJob>
VmMigrationTracingConnection::GetCloneJob(
    google::cloud::vmmigration::v1::GetCloneJobRequest const& request) {
  return child_->GetCloneJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>
VmMigrationTracingConnection::CreateCutoverJob(
    google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request) {
  return child_->CreateCutoverJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>
VmMigrationTracingConnection::CancelCutoverJob(
    google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request) {
  return child_->CancelCutoverJob(request);
}

StreamRange<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationTracingConnection::ListCutoverJobs(
    google::cloud::vmmigration::v1::ListCutoverJobsRequest request) {
  return child_->ListCutoverJobs(request);
}

StatusOr<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationTracingConnection::GetCutoverJob(
    google::cloud::vmmigration::v1::GetCutoverJobRequest const& request) {
  return child_->GetCutoverJob(request);
}

StreamRange<google::cloud::vmmigration::v1::Group>
VmMigrationTracingConnection::ListGroups(
    google::cloud::vmmigration::v1::ListGroupsRequest request) {
  return child_->ListGroups(request);
}

StatusOr<google::cloud::vmmigration::v1::Group>
VmMigrationTracingConnection::GetGroup(
    google::cloud::vmmigration::v1::GetGroupRequest const& request) {
  return child_->GetGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationTracingConnection::CreateGroup(
    google::cloud::vmmigration::v1::CreateGroupRequest const& request) {
  return child_->CreateGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationTracingConnection::UpdateGroup(
    google::cloud::vmmigration::v1::UpdateGroupRequest const& request) {
  return child_->UpdateGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationTracingConnection::DeleteGroup(
    google::cloud::vmmigration::v1::DeleteGroupRequest const& request) {
  return child_->DeleteGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>
VmMigrationTracingConnection::AddGroupMigration(
    google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request) {
  return child_->AddGroupMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>
VmMigrationTracingConnection::RemoveGroupMigration(
    google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
        request) {
  return child_->RemoveGroupMigration(request);
}

StreamRange<google::cloud::vmmigration::v1::TargetProject>
VmMigrationTracingConnection::ListTargetProjects(
    google::cloud::vmmigration::v1::ListTargetProjectsRequest request) {
  return child_->ListTargetProjects(request);
}

StatusOr<google::cloud::vmmigration::v1::TargetProject>
VmMigrationTracingConnection::GetTargetProject(
    google::cloud::vmmigration::v1::GetTargetProjectRequest const& request) {
  return child_->GetTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationTracingConnection::CreateTargetProject(
    google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request) {
  return child_->CreateTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationTracingConnection::UpdateTargetProject(
    google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request) {
  return child_->UpdateTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationTracingConnection::DeleteTargetProject(
    google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request) {
  return child_->DeleteTargetProject(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_internal
}  // namespace cloud
}  // namespace google
