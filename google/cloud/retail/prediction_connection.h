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
// source: google/cloud/retail/v2/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_PREDICTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_PREDICTION_CONNECTION_H

#include "google/cloud/retail/internal/prediction_retry_traits.h"
#include "google/cloud/retail/internal/prediction_stub.h"
#include "google/cloud/retail/prediction_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using PredictionServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        retail_internal::PredictionServiceRetryTraits>;

using PredictionServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        retail_internal::PredictionServiceRetryTraits>;

using PredictionServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        retail_internal::PredictionServiceRetryTraits>;

/**
 * The `PredictionServiceConnection` object for `PredictionServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PredictionServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `PredictionServiceClient`.
 *
 * To create a concrete instance, see `MakePredictionServiceConnection()`.
 *
 * For mocking, see `retail_mocks::MockPredictionServiceConnection`.
 */
class PredictionServiceConnection {
 public:
  virtual ~PredictionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      google::cloud::retail::v2::PredictRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `PredictionServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * PredictionServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PredictionServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::retail::PredictionServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `PredictionServiceConnection` created
 * by this function.
 */
std::shared_ptr<PredictionServiceConnection> MakePredictionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_PREDICTION_CONNECTION_H
