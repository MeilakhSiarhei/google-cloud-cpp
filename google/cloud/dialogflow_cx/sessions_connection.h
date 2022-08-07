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
// source: google/cloud/dialogflow/cx/v3/session.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SESSIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SESSIONS_CONNECTION_H

#include "google/cloud/dialogflow_cx/internal/sessions_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/sessions_stub.h"
#include "google/cloud/dialogflow_cx/sessions_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SessionsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_cx_internal::SessionsRetryTraits>;

using SessionsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_cx_internal::SessionsRetryTraits>;

using SessionsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_cx_internal::SessionsRetryTraits>;

/**
 * The `SessionsConnection` object for `SessionsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SessionsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SessionsClient`.
 *
 * To create a concrete instance, see `MakeSessionsConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockSessionsConnection`.
 */
class SessionsConnection {
 public:
  virtual ~SessionsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
  DetectIntent(
      google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request);

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
      AsyncStreamingDetectIntent(ExperimentalTag);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>
  MatchIntent(
      google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
  FulfillIntent(
      google::cloud::dialogflow::cx::v3::FulfillIntentRequest const& request);
};

/**
 * A factory function to construct an object of type `SessionsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SessionsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SessionsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::SessionsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `SessionsConnection` created by
 * this function.
 */
std::shared_ptr<SessionsConnection> MakeSessionsConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<SessionsConnection> MakeSessionsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_SESSIONS_CONNECTION_H
