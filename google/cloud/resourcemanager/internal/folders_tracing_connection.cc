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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/internal/folders_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FoldersTracingConnection::FoldersTracingConnection(
    std::shared_ptr<resourcemanager::FoldersConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::resourcemanager::v3::Folder>
FoldersTracingConnection::GetFolder(
    google::cloud::resourcemanager::v3::GetFolderRequest const& request) {
  return child_->GetFolder(request);
}

StreamRange<google::cloud::resourcemanager::v3::Folder>
FoldersTracingConnection::ListFolders(
    google::cloud::resourcemanager::v3::ListFoldersRequest request) {
  return child_->ListFolders(request);
}

StreamRange<google::cloud::resourcemanager::v3::Folder>
FoldersTracingConnection::SearchFolders(
    google::cloud::resourcemanager::v3::SearchFoldersRequest request) {
  return child_->SearchFolders(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersTracingConnection::CreateFolder(
    google::cloud::resourcemanager::v3::CreateFolderRequest const& request) {
  return child_->CreateFolder(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersTracingConnection::UpdateFolder(
    google::cloud::resourcemanager::v3::UpdateFolderRequest const& request) {
  return child_->UpdateFolder(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersTracingConnection::MoveFolder(
    google::cloud::resourcemanager::v3::MoveFolderRequest const& request) {
  return child_->MoveFolder(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersTracingConnection::DeleteFolder(
    google::cloud::resourcemanager::v3::DeleteFolderRequest const& request) {
  return child_->DeleteFolder(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersTracingConnection::UndeleteFolder(
    google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request) {
  return child_->UndeleteFolder(request);
}

StatusOr<google::iam::v1::Policy> FoldersTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> FoldersTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FoldersTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google
