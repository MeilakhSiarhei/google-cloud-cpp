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

#include "google/cloud/billing/cloud_billing_connection.h"
#include "google/cloud/billing/cloud_billing_options.h"
#include "google/cloud/billing/internal/cloud_billing_connection_impl.h"
#include "google/cloud/billing/internal/cloud_billing_option_defaults.h"
#include "google/cloud/billing/internal/cloud_billing_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBillingConnection::~CloudBillingConnection() = default;

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingConnection::GetBillingAccount(
    google::cloud::billing::v1::GetBillingAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::billing::v1::BillingAccount>
CloudBillingConnection::ListBillingAccounts(
    google::cloud::billing::v1::
        ListBillingAccountsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::billing::v1::BillingAccount>>();
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingConnection::UpdateBillingAccount(
    google::cloud::billing::v1::UpdateBillingAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingConnection::CreateBillingAccount(
    google::cloud::billing::v1::CreateBillingAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingConnection::ListProjectBillingInfo(
    google::cloud::billing::v1::
        ListProjectBillingInfoRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::billing::v1::ProjectBillingInfo>>();
}

StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingConnection::GetProjectBillingInfo(
    google::cloud::billing::v1::GetProjectBillingInfoRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingConnection::UpdateProjectBillingInfo(
    google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> CloudBillingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> CloudBillingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudBillingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudBillingConnection> MakeCloudBillingConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudBillingPolicyOptionList>(options,
                                                               __func__);
  options = billing_internal::CloudBillingDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = billing_internal::CreateDefaultCloudBillingStub(background->cq(),
                                                              options);
  return std::make_shared<billing_internal::CloudBillingConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google
