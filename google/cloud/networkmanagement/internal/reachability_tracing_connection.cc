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
// source: google/cloud/networkmanagement/v1/reachability.proto

#include "google/cloud/networkmanagement/internal/reachability_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkmanagement_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ReachabilityServiceTracingConnection::ReachabilityServiceTracingConnection(
    std::shared_ptr<networkmanagement::ReachabilityServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceTracingConnection::ListConnectivityTests(
    google::cloud::networkmanagement::v1::ListConnectivityTestsRequest
        request) {
  return child_->ListConnectivityTests(request);
}

StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>
ReachabilityServiceTracingConnection::GetConnectivityTest(
    google::cloud::networkmanagement::v1::GetConnectivityTestRequest const&
        request) {
  return child_->GetConnectivityTest(request);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceTracingConnection::CreateConnectivityTest(
    google::cloud::networkmanagement::v1::CreateConnectivityTestRequest const&
        request) {
  return child_->CreateConnectivityTest(request);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceTracingConnection::UpdateConnectivityTest(
    google::cloud::networkmanagement::v1::UpdateConnectivityTestRequest const&
        request) {
  return child_->UpdateConnectivityTest(request);
}

future<StatusOr<google::cloud::networkmanagement::v1::ConnectivityTest>>
ReachabilityServiceTracingConnection::RerunConnectivityTest(
    google::cloud::networkmanagement::v1::RerunConnectivityTestRequest const&
        request) {
  return child_->RerunConnectivityTest(request);
}

future<StatusOr<google::cloud::networkmanagement::v1::OperationMetadata>>
ReachabilityServiceTracingConnection::DeleteConnectivityTest(
    google::cloud::networkmanagement::v1::DeleteConnectivityTestRequest const&
        request) {
  return child_->DeleteConnectivityTest(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkmanagement_internal
}  // namespace cloud
}  // namespace google
