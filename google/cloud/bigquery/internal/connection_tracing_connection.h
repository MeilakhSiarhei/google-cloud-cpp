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
// source: google/cloud/bigquery/connection/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_CONNECTION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_CONNECTION_TRACING_CONNECTION_H

#include "google/cloud/bigquery/connection_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConnectionServiceTracingConnection
    : public bigquery::ConnectionServiceConnection {
 public:
  ~ConnectionServiceTracingConnection() override = default;

  explicit ConnectionServiceTracingConnection(
      std::shared_ptr<bigquery::ConnectionServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  CreateConnection(
      google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::connection::v1::Connection> GetConnection(
      google::cloud::bigquery::connection::v1::GetConnectionRequest const&
          request) override;

  StreamRange<google::cloud::bigquery::connection::v1::Connection>
  ListConnections(
      google::cloud::bigquery::connection::v1::ListConnectionsRequest request)
      override;

  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  UpdateConnection(
      google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
          request) override;

  Status DeleteConnection(
      google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<bigquery::ConnectionServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_CONNECTION_TRACING_CONNECTION_H
