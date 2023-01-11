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
// source: google/cloud/workflows/v1/workflows.proto

#include "google/cloud/workflows/internal/workflows_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowsTracingConnection::WorkflowsTracingConnection(
    std::shared_ptr<workflows::WorkflowsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::workflows::v1::Workflow>
WorkflowsTracingConnection::ListWorkflows(
    google::cloud::workflows::v1::ListWorkflowsRequest request) {
  return child_->ListWorkflows(request);
}

StatusOr<google::cloud::workflows::v1::Workflow>
WorkflowsTracingConnection::GetWorkflow(
    google::cloud::workflows::v1::GetWorkflowRequest const& request) {
  return child_->GetWorkflow(request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsTracingConnection::CreateWorkflow(
    google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
  return child_->CreateWorkflow(request);
}

future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
WorkflowsTracingConnection::DeleteWorkflow(
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
  return child_->DeleteWorkflow(request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsTracingConnection::UpdateWorkflow(
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
  return child_->UpdateWorkflow(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_internal
}  // namespace cloud
}  // namespace google
