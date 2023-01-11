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
// source: google/iam/v1/iam_policy.proto

#include "google/cloud/iam/internal/iam_policy_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IAMPolicyTracingConnection::IAMPolicyTracingConnection(
    std::shared_ptr<iam::IAMPolicyConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::iam::v1::Policy> IAMPolicyTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> IAMPolicyTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMPolicyTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
