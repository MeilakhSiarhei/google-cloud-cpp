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
// source: google/cloud/apigeeconnect/v1/connection.proto

#include "google/cloud/apigeeconnect/internal/connection_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConnectionServiceTracingConnection::ConnectionServiceTracingConnection(
    std::shared_ptr<apigeeconnect::ConnectionServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::apigeeconnect::v1::Connection>
ConnectionServiceTracingConnection::ListConnections(
    google::cloud::apigeeconnect::v1::ListConnectionsRequest request) {
  return child_->ListConnections(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeconnect_internal
}  // namespace cloud
}  // namespace google
