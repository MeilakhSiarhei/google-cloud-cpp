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
// source: google/cloud/retail/v2/user_event_service.proto

#include "google/cloud/retail/user_event_connection.h"
#include "google/cloud/retail/internal/user_event_connection_impl.h"
#include "google/cloud/retail/internal/user_event_option_defaults.h"
#include "google/cloud/retail/internal/user_event_stub_factory.h"
#include "google/cloud/retail/user_event_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UserEventServiceConnection::~UserEventServiceConnection() = default;

StatusOr<google::cloud::retail::v2::UserEvent>
UserEventServiceConnection::WriteUserEvent(
    google::cloud::retail::v2::WriteUserEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::api::HttpBody> UserEventServiceConnection::CollectUserEvent(
    google::cloud::retail::v2::CollectUserEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::retail::v2::PurgeUserEventsResponse>>
UserEventServiceConnection::PurgeUserEvents(
    google::cloud::retail::v2::PurgeUserEventsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::PurgeUserEventsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::ImportUserEventsResponse>>
UserEventServiceConnection::ImportUserEvents(
    google::cloud::retail::v2::ImportUserEventsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::ImportUserEventsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::retail::v2::RejoinUserEventsResponse>>
UserEventServiceConnection::RejoinUserEvents(
    google::cloud::retail::v2::RejoinUserEventsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::retail::v2::RejoinUserEventsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<UserEventServiceConnection> MakeUserEventServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 UserEventServicePolicyOptionList>(options,
                                                                   __func__);
  options = retail_internal::UserEventServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = retail_internal::CreateDefaultUserEventServiceStub(
      background->cq(), options);
  return std::make_shared<retail_internal::UserEventServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google
