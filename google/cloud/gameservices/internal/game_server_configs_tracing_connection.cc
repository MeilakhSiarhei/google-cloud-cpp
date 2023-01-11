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
// source: google/cloud/gaming/v1/game_server_configs_service.proto

#include "google/cloud/gameservices/internal/game_server_configs_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GameServerConfigsServiceTracingConnection::
    GameServerConfigsServiceTracingConnection(
        std::shared_ptr<gameservices::GameServerConfigsServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::gaming::v1::GameServerConfig>
GameServerConfigsServiceTracingConnection::ListGameServerConfigs(
    google::cloud::gaming::v1::ListGameServerConfigsRequest request) {
  return child_->ListGameServerConfigs(request);
}

StatusOr<google::cloud::gaming::v1::GameServerConfig>
GameServerConfigsServiceTracingConnection::GetGameServerConfig(
    google::cloud::gaming::v1::GetGameServerConfigRequest const& request) {
  return child_->GetGameServerConfig(request);
}

future<StatusOr<google::cloud::gaming::v1::GameServerConfig>>
GameServerConfigsServiceTracingConnection::CreateGameServerConfig(
    google::cloud::gaming::v1::CreateGameServerConfigRequest const& request) {
  return child_->CreateGameServerConfig(request);
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
GameServerConfigsServiceTracingConnection::DeleteGameServerConfig(
    google::cloud::gaming::v1::DeleteGameServerConfigRequest const& request) {
  return child_->DeleteGameServerConfig(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
