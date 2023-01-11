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
// source: google/cloud/ids/v1/ids.proto

#include "google/cloud/ids/internal/ids_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace ids_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IDSTracingConnection::IDSTracingConnection(
    std::shared_ptr<ids::IDSConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::ids::v1::Endpoint>
IDSTracingConnection::ListEndpoints(
    google::cloud::ids::v1::ListEndpointsRequest request) {
  return child_->ListEndpoints(request);
}

StatusOr<google::cloud::ids::v1::Endpoint> IDSTracingConnection::GetEndpoint(
    google::cloud::ids::v1::GetEndpointRequest const& request) {
  return child_->GetEndpoint(request);
}

future<StatusOr<google::cloud::ids::v1::Endpoint>>
IDSTracingConnection::CreateEndpoint(
    google::cloud::ids::v1::CreateEndpointRequest const& request) {
  return child_->CreateEndpoint(request);
}

future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
IDSTracingConnection::DeleteEndpoint(
    google::cloud::ids::v1::DeleteEndpointRequest const& request) {
  return child_->DeleteEndpoint(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_internal
}  // namespace cloud
}  // namespace google
