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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/internal/access_context_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace accesscontextmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AccessContextManagerTracingConnection::AccessContextManagerTracingConnection(
    std::shared_ptr<accesscontextmanager::AccessContextManagerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerTracingConnection::ListAccessPolicies(
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest
        request) {
  return child_->ListAccessPolicies(request);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerTracingConnection::GetAccessPolicy(
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  return child_->GetAccessPolicy(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
AccessContextManagerTracingConnection::CreateAccessPolicy(
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  return child_->CreateAccessPolicy(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
AccessContextManagerTracingConnection::UpdateAccessPolicy(
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  return child_->UpdateAccessPolicy(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteAccessPolicy(
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  return child_->DeleteAccessPolicy(request);
}

StreamRange<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerTracingConnection::ListAccessLevels(
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest
        request) {
  return child_->ListAccessLevels(request);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerTracingConnection::GetAccessLevel(
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  return child_->GetAccessLevel(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
AccessContextManagerTracingConnection::CreateAccessLevel(
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  return child_->CreateAccessLevel(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
AccessContextManagerTracingConnection::UpdateAccessLevel(
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  return child_->UpdateAccessLevel(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteAccessLevel(
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  return child_->DeleteAccessLevel(request);
}

future<StatusOr<
    google::identity::accesscontextmanager::v1::ReplaceAccessLevelsResponse>>
AccessContextManagerTracingConnection::ReplaceAccessLevels(
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  return child_->ReplaceAccessLevels(request);
}

StreamRange<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerTracingConnection::ListServicePerimeters(
    google::identity::accesscontextmanager::v1::ListServicePerimetersRequest
        request) {
  return child_->ListServicePerimeters(request);
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerTracingConnection::GetServicePerimeter(
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  return child_->GetServicePerimeter(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
AccessContextManagerTracingConnection::CreateServicePerimeter(
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  return child_->CreateServicePerimeter(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
AccessContextManagerTracingConnection::UpdateServicePerimeter(
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  return child_->UpdateServicePerimeter(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    AccessContextManagerOperationMetadata>>
AccessContextManagerTracingConnection::DeleteServicePerimeter(
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  return child_->DeleteServicePerimeter(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    ReplaceServicePerimetersResponse>>
AccessContextManagerTracingConnection::ReplaceServicePerimeters(
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  return child_->ReplaceServicePerimeters(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    CommitServicePerimetersResponse>>
AccessContextManagerTracingConnection::CommitServicePerimeters(
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  return child_->CommitServicePerimeters(request);
}

StreamRange<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerTracingConnection::ListGcpUserAccessBindings(
    google::identity::accesscontextmanager::v1::ListGcpUserAccessBindingsRequest
        request) {
  return child_->ListGcpUserAccessBindings(request);
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerTracingConnection::GetGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  return child_->GetGcpUserAccessBinding(request);
}

future<
    StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
AccessContextManagerTracingConnection::CreateGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  return child_->CreateGcpUserAccessBinding(request);
}

future<
    StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
AccessContextManagerTracingConnection::UpdateGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  return child_->UpdateGcpUserAccessBinding(request);
}

future<StatusOr<google::identity::accesscontextmanager::v1::
                    GcpUserAccessBindingOperationMetadata>>
AccessContextManagerTracingConnection::DeleteGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  return child_->DeleteGcpUserAccessBinding(request);
}

StatusOr<google::iam::v1::Policy>
AccessContextManagerTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy>
AccessContextManagerTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AccessContextManagerTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_internal
}  // namespace cloud
}  // namespace google
