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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_AGENT_ENDPOINT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_AGENT_ENDPOINT_CONNECTION_H

#include "google/cloud/osconfig/agent_endpoint_connection_idempotency_policy.h"
#include "google/cloud/osconfig/internal/agent_endpoint_retry_traits.h"
#include "google/cloud/osconfig/internal/agent_endpoint_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AgentEndpointServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        osconfig_internal::AgentEndpointServiceRetryTraits>;

using AgentEndpointServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        osconfig_internal::AgentEndpointServiceRetryTraits>;

using AgentEndpointServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        osconfig_internal::AgentEndpointServiceRetryTraits>;

/**
 * The `AgentEndpointServiceConnection` object for `AgentEndpointServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AgentEndpointServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AgentEndpointServiceClient`.
 *
 * To create a concrete instance, see `MakeAgentEndpointServiceConnection()`.
 *
 * For mocking, see `osconfig_mocks::MockAgentEndpointServiceConnection`.
 */
class AgentEndpointServiceConnection {
 public:
  virtual ~AgentEndpointServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::osconfig::agentendpoint::v1::
                          ReceiveTaskNotificationResponse>
  ReceiveTaskNotification(google::cloud::osconfig::agentendpoint::v1::
                              ReceiveTaskNotificationRequest const& request);

  virtual StatusOr<
      google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
  StartNextTask(
      google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
          request);

  virtual StatusOr<
      google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
  ReportTaskProgress(google::cloud::osconfig::agentendpoint::v1::
                         ReportTaskProgressRequest const& request);

  virtual StatusOr<
      google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
  ReportTaskComplete(google::cloud::osconfig::agentendpoint::v1::
                         ReportTaskCompleteRequest const& request);

  virtual StatusOr<
      google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
  RegisterAgent(
      google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
          request);

  virtual StatusOr<
      google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
  ReportInventory(
      google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `AgentEndpointServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AgentEndpointServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AgentEndpointServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::osconfig::AgentEndpointServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AgentEndpointServiceConnection`
 * created by this function.
 */
std::shared_ptr<AgentEndpointServiceConnection>
MakeAgentEndpointServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_AGENT_ENDPOINT_CONNECTION_H
