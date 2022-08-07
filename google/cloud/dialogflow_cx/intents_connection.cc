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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#include "google/cloud/dialogflow_cx/intents_connection.h"
#include "google/cloud/dialogflow_cx/intents_options.h"
#include "google/cloud/dialogflow_cx/internal/intents_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/intents_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/intents_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IntentsConnection::~IntentsConnection() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnection::ListIntents(
    google::cloud::dialogflow::cx::v3::
        ListIntentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Intent>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnection::GetIntent(
    google::cloud::dialogflow::cx::v3::GetIntentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnection::CreateIntent(
    google::cloud::dialogflow::cx::v3::CreateIntentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnection::UpdateIntent(
    google::cloud::dialogflow::cx::v3::UpdateIntentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IntentsConnection::DeleteIntent(
    google::cloud::dialogflow::cx::v3::DeleteIntentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<IntentsConnection> MakeIntentsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 IntentsPolicyOptionList>(options, __func__);
  options = dialogflow_cx_internal::IntentsDefaultOptions(location,
                                                          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_cx_internal::CreateDefaultIntentsStub(background->cq(),
                                                               options);
  return std::make_shared<dialogflow_cx_internal::IntentsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

std::shared_ptr<IntentsConnection> MakeIntentsConnection(Options options) {
  return MakeIntentsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
