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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_KITCHEN_SINK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_KITCHEN_SINK_CONNECTION_H

#include "generator/integration_tests/golden/golden_kitchen_sink_connection_idempotency_policy.h"
#include "generator/integration_tests/golden/internal/golden_kitchen_sink_retry_traits.h"
#include "generator/integration_tests/golden/internal/golden_kitchen_sink_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GoldenKitchenSinkRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    golden_internal::GoldenKitchenSinkRetryTraits>;

using GoldenKitchenSinkLimitedTimeRetryPolicy = ::google::cloud::internal::LimitedTimeRetryPolicy<
    golden_internal::GoldenKitchenSinkRetryTraits>;

using GoldenKitchenSinkLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        golden_internal::GoldenKitchenSinkRetryTraits>;

/**
 * The `GoldenKitchenSinkConnection` object for `GoldenKitchenSinkClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GoldenKitchenSinkClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `GoldenKitchenSinkClient`.
 *
 * To create a concrete instance, see `MakeGoldenKitchenSinkConnection()`.
 *
 * For mocking, see `golden_mocks::MockGoldenKitchenSinkConnection`.
 */
class GoldenKitchenSinkConnection {
 public:
  virtual ~GoldenKitchenSinkConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request);

  virtual StreamRange<std::string>
  ListLogs(google::test::admin::database::v1::ListLogsRequest request);

  virtual StreamRange<google::test::admin::database::v1::TailLogEntriesResponse>
  TailLogEntries(google::test::admin::database::v1::TailLogEntriesRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request);

  virtual Status
  DoNothing(google::protobuf::Empty const& request);

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::test::admin::database::v1::AppendRowsRequest,
      google::test::admin::database::v1::AppendRowsResponse>>
  AsyncAppendRows(ExperimentalTag);

  virtual Status
  ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const& request);

  virtual Status
  ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const& request);
};

/**
 * A factory function to construct an object of type `GoldenKitchenSinkConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of GoldenKitchenSinkClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `GoldenKitchenSinkConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::golden::GoldenKitchenSinkPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `GoldenKitchenSinkConnection` created by
 * this function.
 */
std::shared_ptr<GoldenKitchenSinkConnection> MakeGoldenKitchenSinkConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_KITCHEN_SINK_CONNECTION_H
