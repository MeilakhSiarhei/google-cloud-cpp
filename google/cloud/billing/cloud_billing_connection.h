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
// source: google/cloud/billing/v1/cloud_billing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_BILLING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_BILLING_CONNECTION_H

#include "google/cloud/billing/cloud_billing_connection_idempotency_policy.h"
#include "google/cloud/billing/internal/cloud_billing_retry_traits.h"
#include "google/cloud/billing/internal/cloud_billing_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CloudBillingRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        billing_internal::CloudBillingRetryTraits>;

using CloudBillingLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        billing_internal::CloudBillingRetryTraits>;

using CloudBillingLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        billing_internal::CloudBillingRetryTraits>;

/**
 * The `CloudBillingConnection` object for `CloudBillingClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudBillingClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudBillingClient`.
 *
 * To create a concrete instance, see `MakeCloudBillingConnection()`.
 *
 * For mocking, see `billing_mocks::MockCloudBillingConnection`.
 */
class CloudBillingConnection {
 public:
  virtual ~CloudBillingConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  GetBillingAccount(
      google::cloud::billing::v1::GetBillingAccountRequest const& request);

  virtual StreamRange<google::cloud::billing::v1::BillingAccount>
  ListBillingAccounts(
      google::cloud::billing::v1::ListBillingAccountsRequest request);

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  UpdateBillingAccount(
      google::cloud::billing::v1::UpdateBillingAccountRequest const& request);

  virtual StatusOr<google::cloud::billing::v1::BillingAccount>
  CreateBillingAccount(
      google::cloud::billing::v1::CreateBillingAccountRequest const& request);

  virtual StreamRange<google::cloud::billing::v1::ProjectBillingInfo>
  ListProjectBillingInfo(
      google::cloud::billing::v1::ListProjectBillingInfoRequest request);

  virtual StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  GetProjectBillingInfo(
      google::cloud::billing::v1::GetProjectBillingInfoRequest const& request);

  virtual StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  UpdateProjectBillingInfo(
      google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudBillingConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudBillingClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudBillingConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::billing::CloudBillingPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudBillingConnection` created by
 * this function.
 */
std::shared_ptr<CloudBillingConnection> MakeCloudBillingConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_BILLING_CONNECTION_H
