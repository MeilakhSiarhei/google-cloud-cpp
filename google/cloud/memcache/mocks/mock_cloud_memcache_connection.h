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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_MOCKS_MOCK_CLOUD_MEMCACHE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_MOCKS_MOCK_CLOUD_MEMCACHE_CONNECTION_H

#include "google/cloud/memcache/cloud_memcache_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace memcache_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CloudMemcacheConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CloudMemcacheClient`. To do so,
 * construct an object of type `CloudMemcacheClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockCloudMemcacheConnection : public memcache::CloudMemcacheConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::memcache::v1::Instance>, ListInstances,
              (google::cloud::memcache::v1::ListInstancesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::memcache::v1::Instance>, GetInstance,
              (google::cloud::memcache::v1::GetInstanceRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::memcache::v1::Instance>>, CreateInstance,
      (google::cloud::memcache::v1::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::memcache::v1::Instance>>, UpdateInstance,
      (google::cloud::memcache::v1::UpdateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::memcache::v1::Instance>>, UpdateParameters,
      (google::cloud::memcache::v1::UpdateParametersRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>,
      DeleteInstance,
      (google::cloud::memcache::v1::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::memcache::v1::Instance>>, ApplyParameters,
      (google::cloud::memcache::v1::ApplyParametersRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::memcache::v1::Instance>>,
              RescheduleMaintenance,
              (google::cloud::memcache::v1::RescheduleMaintenanceRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_MOCKS_MOCK_CLOUD_MEMCACHE_CONNECTION_H
