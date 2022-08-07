// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CONNECTION_H

#include "google/cloud/spanner/admin/instance_admin_connection_idempotency_policy.h"
#include "google/cloud/spanner/admin/internal/instance_admin_retry_traits.h"
#include "google/cloud/spanner/admin/internal/instance_admin_stub.h"
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
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using InstanceAdminRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        spanner_admin_internal::InstanceAdminRetryTraits>;

using InstanceAdminLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        spanner_admin_internal::InstanceAdminRetryTraits>;

using InstanceAdminLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        spanner_admin_internal::InstanceAdminRetryTraits>;

/**
 * The `InstanceAdminConnection` object for `InstanceAdminClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `InstanceAdminClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `InstanceAdminClient`.
 *
 * To create a concrete instance, see `MakeInstanceAdminConnection()`.
 *
 * For mocking, see `spanner_admin_mocks::MockInstanceAdminConnection`.
 */
class InstanceAdminConnection {
 public:
  virtual ~InstanceAdminConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
  ListInstanceConfigs(
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest request);

  virtual StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request);

  virtual StreamRange<google::spanner::admin::instance::v1::Instance>
  ListInstances(
      google::spanner::admin::instance::v1::ListInstancesRequest request);

  virtual StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      google::spanner::admin::instance::v1::GetInstanceRequest const& request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request);

  virtual future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request);

  virtual Status DeleteInstance(
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `InstanceAdminConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of InstanceAdminClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `InstanceAdminConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::spanner_admin::InstanceAdminPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `InstanceAdminConnection` created by
 * this function.
 */
std::shared_ptr<InstanceAdminConnection> MakeInstanceAdminConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CONNECTION_H
