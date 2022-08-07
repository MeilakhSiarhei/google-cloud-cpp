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
// source: google/cloud/shell/v1/cloudshell.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_CLOUD_SHELL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_CLOUD_SHELL_CONNECTION_H

#include "google/cloud/shell/cloud_shell_connection_idempotency_policy.h"
#include "google/cloud/shell/internal/cloud_shell_retry_traits.h"
#include "google/cloud/shell/internal/cloud_shell_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace shell {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CloudShellServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        shell_internal::CloudShellServiceRetryTraits>;

using CloudShellServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        shell_internal::CloudShellServiceRetryTraits>;

using CloudShellServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        shell_internal::CloudShellServiceRetryTraits>;

/**
 * The `CloudShellServiceConnection` object for `CloudShellServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudShellServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CloudShellServiceClient`.
 *
 * To create a concrete instance, see `MakeCloudShellServiceConnection()`.
 *
 * For mocking, see `shell_mocks::MockCloudShellServiceConnection`.
 */
class CloudShellServiceConnection {
 public:
  virtual ~CloudShellServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::shell::v1::Environment> GetEnvironment(
      google::cloud::shell::v1::GetEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
  StartEnvironment(
      google::cloud::shell::v1::StartEnvironmentRequest const& request);

  virtual future<
      StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
  AuthorizeEnvironment(
      google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>
  AddPublicKey(google::cloud::shell::v1::AddPublicKeyRequest const& request);

  virtual future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
  RemovePublicKey(
      google::cloud::shell::v1::RemovePublicKeyRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `CloudShellServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CloudShellServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudShellServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::shell::CloudShellServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudShellServiceConnection` created
 * by this function.
 */
std::shared_ptr<CloudShellServiceConnection> MakeCloudShellServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SHELL_CLOUD_SHELL_CONNECTION_H
