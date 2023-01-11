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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EntityTypesTracingConnection::EntityTypesTracingConnection(
    std::shared_ptr<dialogflow_es::EntityTypesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::ListEntityTypes(
    google::cloud::dialogflow::v2::ListEntityTypesRequest request) {
  return child_->ListEntityTypes(request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::GetEntityType(
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  return child_->GetEntityType(request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::CreateEntityType(
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  return child_->CreateEntityType(request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesTracingConnection::UpdateEntityType(
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  return child_->UpdateEntityType(request);
}

Status EntityTypesTracingConnection::DeleteEntityType(
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  return child_->DeleteEntityType(request);
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
EntityTypesTracingConnection::BatchUpdateEntityTypes(
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  return child_->BatchUpdateEntityTypes(request);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchDeleteEntityTypes(
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  return child_->BatchDeleteEntityTypes(request);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchCreateEntities(
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  return child_->BatchCreateEntities(request);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchUpdateEntities(
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  return child_->BatchUpdateEntities(request);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesTracingConnection::BatchDeleteEntities(
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  return child_->BatchDeleteEntities(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
