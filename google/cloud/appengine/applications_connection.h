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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_APPLICATIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_APPLICATIONS_CONNECTION_H

#include "google/cloud/appengine/applications_connection_idempotency_policy.h"
#include "google/cloud/appengine/internal/applications_retry_traits.h"
#include "google/cloud/appengine/internal/applications_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ApplicationsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        appengine_internal::ApplicationsRetryTraits>;

using ApplicationsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        appengine_internal::ApplicationsRetryTraits>;

using ApplicationsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        appengine_internal::ApplicationsRetryTraits>;

/**
 * The `ApplicationsConnection` object for `ApplicationsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ApplicationsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ApplicationsClient`.
 *
 * To create a concrete instance, see `MakeApplicationsConnection()`.
 *
 * For mocking, see `appengine_mocks::MockApplicationsConnection`.
 */
class ApplicationsConnection {
 public:
  virtual ~ApplicationsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::appengine::v1::Application> GetApplication(
      google::appengine::v1::GetApplicationRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Application>>
  CreateApplication(
      google::appengine::v1::CreateApplicationRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Application>>
  UpdateApplication(
      google::appengine::v1::UpdateApplicationRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Application>>
  RepairApplication(
      google::appengine::v1::RepairApplicationRequest const& request);
};

/**
 * A factory function to construct an object of type `ApplicationsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ApplicationsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ApplicationsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::appengine::ApplicationsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ApplicationsConnection` created by
 * this function.
 */
std::shared_ptr<ApplicationsConnection> MakeApplicationsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_APPLICATIONS_CONNECTION_H
