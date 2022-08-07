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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/iam_connection.h"
#include "google/cloud/iam/iam_options.h"
#include "google/cloud/iam/internal/iam_connection_impl.h"
#include "google/cloud/iam/internal/iam_option_defaults.h"
#include "google/cloud/iam/internal/iam_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMConnection::~IAMConnection() = default;

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMConnection::ListServiceAccounts(
    google::iam::admin::v1::
        ListServiceAccountsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::iam::admin::v1::ServiceAccount>>();
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnection::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnection::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnection::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMConnection::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMConnection::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnection::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnection::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnection::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> IAMConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> IAMConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::iam::admin::v1::Role> IAMConnection::QueryGrantableRoles(
    google::iam::admin::v1::
        QueryGrantableRolesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::iam::admin::v1::Role>>();
}

StreamRange<google::iam::admin::v1::Role> IAMConnection::ListRoles(
    google::iam::admin::v1::
        ListRolesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::iam::admin::v1::Role>>();
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::GetRole(
    google::iam::admin::v1::GetRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::iam::admin::v1::Permission>
IAMConnection::QueryTestablePermissions(
    google::iam::admin::v1::
        QueryTestablePermissionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::iam::admin::v1::Permission>>();
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMConnection::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::LintPolicyResponse> IAMConnection::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<IAMConnection> MakeIAMConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 IAMPolicyOptionList>(options, __func__);
  options = iam_internal::IAMDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = iam_internal::CreateDefaultIAMStub(background->cq(), options);
  return std::make_shared<iam_internal::IAMConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam
}  // namespace cloud
}  // namespace google
