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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_FOLDERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_FOLDERS_CONNECTION_H

#include "google/cloud/resourcemanager/folders_connection_idempotency_policy.h"
#include "google/cloud/resourcemanager/internal/folders_retry_traits.h"
#include "google/cloud/resourcemanager/internal/folders_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using FoldersRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    resourcemanager_internal::FoldersRetryTraits>;

using FoldersLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        resourcemanager_internal::FoldersRetryTraits>;

using FoldersLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        resourcemanager_internal::FoldersRetryTraits>;

/**
 * The `FoldersConnection` object for `FoldersClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FoldersClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `FoldersClient`.
 *
 * To create a concrete instance, see `MakeFoldersConnection()`.
 *
 * For mocking, see `resourcemanager_mocks::MockFoldersConnection`.
 */
class FoldersConnection {
 public:
  virtual ~FoldersConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::resourcemanager::v3::Folder> GetFolder(
      google::cloud::resourcemanager::v3::GetFolderRequest const& request);

  virtual StreamRange<google::cloud::resourcemanager::v3::Folder> ListFolders(
      google::cloud::resourcemanager::v3::ListFoldersRequest request);

  virtual StreamRange<google::cloud::resourcemanager::v3::Folder> SearchFolders(
      google::cloud::resourcemanager::v3::SearchFoldersRequest request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  CreateFolder(
      google::cloud::resourcemanager::v3::CreateFolderRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  UpdateFolder(
      google::cloud::resourcemanager::v3::UpdateFolderRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  MoveFolder(
      google::cloud::resourcemanager::v3::MoveFolderRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  DeleteFolder(
      google::cloud::resourcemanager::v3::DeleteFolderRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  UndeleteFolder(
      google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `FoldersConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of FoldersClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `FoldersConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::resourcemanager::FoldersPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `FoldersConnection` created by
 * this function.
 */
std::shared_ptr<FoldersConnection> MakeFoldersConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_FOLDERS_CONNECTION_H
