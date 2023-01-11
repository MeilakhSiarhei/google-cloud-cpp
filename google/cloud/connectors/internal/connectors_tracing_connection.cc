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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/internal/connectors_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace connectors_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConnectorsTracingConnection::ConnectorsTracingConnection(
    std::shared_ptr<connectors::ConnectorsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::connectors::v1::Connection>
ConnectorsTracingConnection::ListConnections(
    google::cloud::connectors::v1::ListConnectionsRequest request) {
  return child_->ListConnections(request);
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsTracingConnection::GetConnection(
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  return child_->GetConnection(request);
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsTracingConnection::CreateConnection(
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  return child_->CreateConnection(request);
}

future<StatusOr<google::cloud::connectors::v1::Connection>>
ConnectorsTracingConnection::UpdateConnection(
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  return child_->UpdateConnection(request);
}

future<StatusOr<google::cloud::connectors::v1::OperationMetadata>>
ConnectorsTracingConnection::DeleteConnection(
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  return child_->DeleteConnection(request);
}

StreamRange<google::cloud::connectors::v1::Provider>
ConnectorsTracingConnection::ListProviders(
    google::cloud::connectors::v1::ListProvidersRequest request) {
  return child_->ListProviders(request);
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsTracingConnection::GetProvider(
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  return child_->GetProvider(request);
}

StreamRange<google::cloud::connectors::v1::Connector>
ConnectorsTracingConnection::ListConnectors(
    google::cloud::connectors::v1::ListConnectorsRequest request) {
  return child_->ListConnectors(request);
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsTracingConnection::GetConnector(
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  return child_->GetConnector(request);
}

StreamRange<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsTracingConnection::ListConnectorVersions(
    google::cloud::connectors::v1::ListConnectorVersionsRequest request) {
  return child_->ListConnectorVersions(request);
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsTracingConnection::GetConnectorVersion(
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  return child_->GetConnectorVersion(request);
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsTracingConnection::GetConnectionSchemaMetadata(
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  return child_->GetConnectionSchemaMetadata(request);
}

StreamRange<google::cloud::connectors::v1::RuntimeEntitySchema>
ConnectorsTracingConnection::ListRuntimeEntitySchemas(
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest request) {
  return child_->ListRuntimeEntitySchemas(request);
}

StreamRange<google::cloud::connectors::v1::RuntimeActionSchema>
ConnectorsTracingConnection::ListRuntimeActionSchemas(
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest request) {
  return child_->ListRuntimeActionSchemas(request);
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsTracingConnection::GetRuntimeConfig(
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  return child_->GetRuntimeConfig(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_internal
}  // namespace cloud
}  // namespace google
