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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_PROFILES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_PROFILES_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_es/conversation_profiles_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConversationProfilesTracingConnection
    : public dialogflow_es::ConversationProfilesConnection {
 public:
  ~ConversationProfilesTracingConnection() override = default;

  explicit ConversationProfilesTracingConnection(
      std::shared_ptr<dialogflow_es::ConversationProfilesConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::v2::ConversationProfile>
  ListConversationProfiles(
      google::cloud::dialogflow::v2::ListConversationProfilesRequest request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
  GetConversationProfile(
      google::cloud::dialogflow::v2::GetConversationProfileRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
  CreateConversationProfile(
      google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
  UpdateConversationProfile(
      google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
          request) override;

  Status DeleteConversationProfile(
      google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationProfile>>
  SetSuggestionFeatureConfig(
      google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationProfile>>
  ClearSuggestionFeatureConfig(
      google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
          request) override;

 private:
  std::shared_ptr<dialogflow_es::ConversationProfilesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_PROFILES_TRACING_CONNECTION_H
