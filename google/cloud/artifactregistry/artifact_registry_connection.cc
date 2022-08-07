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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/artifact_registry_connection.h"
#include "google/cloud/artifactregistry/artifact_registry_options.h"
#include "google/cloud/artifactregistry/internal/artifact_registry_connection_impl.h"
#include "google/cloud/artifactregistry/internal/artifact_registry_option_defaults.h"
#include "google/cloud/artifactregistry/internal/artifact_registry_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ArtifactRegistryConnection::~ArtifactRegistryConnection() = default;

StreamRange<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryConnection::ListDockerImages(
    google::devtools::artifactregistry::v1::
        ListDockerImagesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::DockerImage>>();
}

StatusOr<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryConnection::GetDockerImage(
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<
    google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>>
ArtifactRegistryConnection::ImportAptArtifacts(
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>>
ArtifactRegistryConnection::ImportYumArtifacts(
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryConnection::ListRepositories(
    google::devtools::artifactregistry::v1::
        ListRepositoriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Repository>>();
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryConnection::GetRepository(
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::artifactregistry::v1::Repository>>
ArtifactRegistryConnection::CreateRepository(
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::artifactregistry::v1::Repository>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryConnection::UpdateRepository(
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryConnection::DeleteRepository(
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryConnection::ListPackages(
    google::devtools::artifactregistry::v1::
        ListPackagesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Package>>();
}

StatusOr<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryConnection::GetPackage(
    google::devtools::artifactregistry::v1::GetPackageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryConnection::DeletePackage(
    google::devtools::artifactregistry::v1::DeletePackageRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryConnection::ListVersions(
    google::devtools::artifactregistry::v1::
        ListVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Version>>();
}

StatusOr<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryConnection::GetVersion(
    google::devtools::artifactregistry::v1::GetVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryConnection::DeleteVersion(
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::devtools::artifactregistry::v1::File>
ArtifactRegistryConnection::ListFiles(
    google::devtools::artifactregistry::v1::
        ListFilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::File>>();
}

StatusOr<google::devtools::artifactregistry::v1::File>
ArtifactRegistryConnection::GetFile(
    google::devtools::artifactregistry::v1::GetFileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnection::ListTags(
    google::devtools::artifactregistry::v1::
        ListTagsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Tag>>();
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnection::GetTag(
    google::devtools::artifactregistry::v1::GetTagRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnection::CreateTag(
    google::devtools::artifactregistry::v1::CreateTagRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnection::UpdateTag(
    google::devtools::artifactregistry::v1::UpdateTagRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ArtifactRegistryConnection::DeleteTag(
    google::devtools::artifactregistry::v1::DeleteTagRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ArtifactRegistryConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryConnection::GetProjectSettings(
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryConnection::UpdateProjectSettings(
    google::devtools::artifactregistry::v1::
        UpdateProjectSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ArtifactRegistryConnection> MakeArtifactRegistryConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ArtifactRegistryPolicyOptionList>(options,
                                                                   __func__);
  options = artifactregistry_internal::ArtifactRegistryDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = artifactregistry_internal::CreateDefaultArtifactRegistryStub(
      background->cq(), options);
  return std::make_shared<
      artifactregistry_internal::ArtifactRegistryConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry
}  // namespace cloud
}  // namespace google
