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
// source: google/cloud/resourcemanager/v3/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_INTERNAL_PROJECTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_INTERNAL_PROJECTS_TRACING_CONNECTION_H

#include "google/cloud/resourcemanager/projects_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ProjectsTracingConnection : public resourcemanager::ProjectsConnection {
 public:
  ~ProjectsTracingConnection() override = default;

  explicit ProjectsTracingConnection(
      std::shared_ptr<resourcemanager::ProjectsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::resourcemanager::v3::Project> GetProject(
      google::cloud::resourcemanager::v3::GetProjectRequest const& request)
      override;

  StreamRange<google::cloud::resourcemanager::v3::Project> ListProjects(
      google::cloud::resourcemanager::v3::ListProjectsRequest request) override;

  StreamRange<google::cloud::resourcemanager::v3::Project> SearchProjects(
      google::cloud::resourcemanager::v3::SearchProjectsRequest request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> CreateProject(
      google::cloud::resourcemanager::v3::CreateProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> UpdateProject(
      google::cloud::resourcemanager::v3::UpdateProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> MoveProject(
      google::cloud::resourcemanager::v3::MoveProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> DeleteProject(
      google::cloud::resourcemanager::v3::DeleteProjectRequest const& request)
      override;

  future<StatusOr<google::cloud::resourcemanager::v3::Project>> UndeleteProject(
      google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<resourcemanager::ProjectsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_INTERNAL_PROJECTS_TRACING_CONNECTION_H
