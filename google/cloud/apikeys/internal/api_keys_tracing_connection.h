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
// source: google/api/apikeys/v2/apikeys.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_INTERNAL_API_KEYS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_INTERNAL_API_KEYS_TRACING_CONNECTION_H

#include "google/cloud/apikeys/api_keys_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apikeys_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ApiKeysTracingConnection : public apikeys::ApiKeysConnection {
 public:
  ~ApiKeysTracingConnection() override = default;

  explicit ApiKeysTracingConnection(
      std::shared_ptr<apikeys::ApiKeysConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::api::apikeys::v2::Key>> CreateKey(
      google::api::apikeys::v2::CreateKeyRequest const& request) override;

  StreamRange<google::api::apikeys::v2::Key> ListKeys(
      google::api::apikeys::v2::ListKeysRequest request) override;

  StatusOr<google::api::apikeys::v2::Key> GetKey(
      google::api::apikeys::v2::GetKeyRequest const& request) override;

  StatusOr<google::api::apikeys::v2::GetKeyStringResponse> GetKeyString(
      google::api::apikeys::v2::GetKeyStringRequest const& request) override;

  future<StatusOr<google::api::apikeys::v2::Key>> UpdateKey(
      google::api::apikeys::v2::UpdateKeyRequest const& request) override;

  future<StatusOr<google::api::apikeys::v2::Key>> DeleteKey(
      google::api::apikeys::v2::DeleteKeyRequest const& request) override;

  future<StatusOr<google::api::apikeys::v2::Key>> UndeleteKey(
      google::api::apikeys::v2::UndeleteKeyRequest const& request) override;

  StatusOr<google::api::apikeys::v2::LookupKeyResponse> LookupKey(
      google::api::apikeys::v2::LookupKeyRequest const& request) override;

 private:
  std::shared_ptr<apikeys::ApiKeysConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_INTERNAL_API_KEYS_TRACING_CONNECTION_H
