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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_INTERNAL_CLOUD_MEMCACHE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_INTERNAL_CLOUD_MEMCACHE_TRACING_CONNECTION_H

#include "google/cloud/memcache/cloud_memcache_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace memcache_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudMemcacheTracingConnection
    : public memcache::CloudMemcacheConnection {
 public:
  ~CloudMemcacheTracingConnection() override = default;

  explicit CloudMemcacheTracingConnection(
      std::shared_ptr<memcache::CloudMemcacheConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::memcache::v1::Instance> ListInstances(
      google::cloud::memcache::v1::ListInstancesRequest request) override;

  StatusOr<google::cloud::memcache::v1::Instance> GetInstance(
      google::cloud::memcache::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> CreateInstance(
      google::cloud::memcache::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> UpdateInstance(
      google::cloud::memcache::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> UpdateParameters(
      google::cloud::memcache::v1::UpdateParametersRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
  DeleteInstance(google::cloud::memcache::v1::DeleteInstanceRequest const&
                     request) override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> ApplyParameters(
      google::cloud::memcache::v1::ApplyParametersRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> RescheduleMaintenance(
      google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request)
      override;

 private:
  std::shared_ptr<memcache::CloudMemcacheConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_INTERNAL_CLOUD_MEMCACHE_TRACING_CONNECTION_H
