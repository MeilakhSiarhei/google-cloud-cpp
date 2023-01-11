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
// source: google/cloud/bigquery/migration/v2/migration_service.proto

#include "google/cloud/bigquery/internal/migration_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MigrationServiceTracingConnection::MigrationServiceTracingConnection(
    std::shared_ptr<bigquery::MigrationServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceTracingConnection::CreateMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        CreateMigrationWorkflowRequest const& request) {
  return child_->CreateMigrationWorkflow(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceTracingConnection::GetMigrationWorkflow(
    google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
        request) {
  return child_->GetMigrationWorkflow(request);
}

StreamRange<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceTracingConnection::ListMigrationWorkflows(
    google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest
        request) {
  return child_->ListMigrationWorkflows(request);
}

Status MigrationServiceTracingConnection::DeleteMigrationWorkflow(
    google::cloud::bigquery::migration::v2::
        DeleteMigrationWorkflowRequest const& request) {
  return child_->DeleteMigrationWorkflow(request);
}

Status MigrationServiceTracingConnection::StartMigrationWorkflow(
    google::cloud::bigquery::migration::v2::StartMigrationWorkflowRequest const&
        request) {
  return child_->StartMigrationWorkflow(request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceTracingConnection::GetMigrationSubtask(
    google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
        request) {
  return child_->GetMigrationSubtask(request);
}

StreamRange<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceTracingConnection::ListMigrationSubtasks(
    google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest
        request) {
  return child_->ListMigrationSubtasks(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
