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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_INTERNAL_CONTACT_CENTER_INSIGHTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_INTERNAL_CONTACT_CENTER_INSIGHTS_TRACING_CONNECTION_H

#include "google/cloud/contactcenterinsights/contact_center_insights_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace contactcenterinsights_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ContactCenterInsightsTracingConnection
    : public contactcenterinsights::ContactCenterInsightsConnection {
 public:
  ~ContactCenterInsightsTracingConnection() override = default;

  explicit ContactCenterInsightsTracingConnection(
      std::shared_ptr<contactcenterinsights::ContactCenterInsightsConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  CreateConversation(
      google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  UpdateConversation(
      google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  GetConversation(
      google::cloud::contactcenterinsights::v1::GetConversationRequest const&
          request) override;

  StreamRange<google::cloud::contactcenterinsights::v1::Conversation>
  ListConversations(
      google::cloud::contactcenterinsights::v1::ListConversationsRequest
          request) override;

  Status DeleteConversation(
      google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
          request) override;

  future<StatusOr<google::cloud::contactcenterinsights::v1::Analysis>>
  CreateAnalysis(
      google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Analysis> GetAnalysis(
      google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
          request) override;

  StreamRange<google::cloud::contactcenterinsights::v1::Analysis> ListAnalyses(
      google::cloud::contactcenterinsights::v1::ListAnalysesRequest request)
      override;

  Status DeleteAnalysis(
      google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
          request) override;

  future<StatusOr<google::cloud::contactcenterinsights::v1::
                      BulkAnalyzeConversationsResponse>>
  BulkAnalyzeConversations(
      google::cloud::contactcenterinsights::v1::
          BulkAnalyzeConversationsRequest const& request) override;

  future<StatusOr<
      google::cloud::contactcenterinsights::v1::IngestConversationsResponse>>
  IngestConversations(google::cloud::contactcenterinsights::v1::
                          IngestConversationsRequest const& request) override;

  future<StatusOr<
      google::cloud::contactcenterinsights::v1::ExportInsightsDataResponse>>
  ExportInsightsData(
      google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
          request) override;

  future<StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>>
  CreateIssueModel(
      google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
  UpdateIssueModel(
      google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::IssueModel> GetIssueModel(
      google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
  ListIssueModels(
      google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
          request) override;

  future<StatusOr<
      google::cloud::contactcenterinsights::v1::DeleteIssueModelMetadata>>
  DeleteIssueModel(
      google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
          request) override;

  future<StatusOr<
      google::cloud::contactcenterinsights::v1::DeployIssueModelResponse>>
  DeployIssueModel(
      google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
          request) override;

  future<StatusOr<
      google::cloud::contactcenterinsights::v1::UndeployIssueModelResponse>>
  UndeployIssueModel(
      google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Issue> GetIssue(
      google::cloud::contactcenterinsights::v1::GetIssueRequest const& request)
      override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
  ListIssues(google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
                 request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Issue> UpdateIssue(
      google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
          request) override;

  Status DeleteIssue(
      google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::
               CalculateIssueModelStatsResponse>
  CalculateIssueModelStats(
      google::cloud::contactcenterinsights::v1::
          CalculateIssueModelStatsRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  CreatePhraseMatcher(google::cloud::contactcenterinsights::v1::
                          CreatePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  GetPhraseMatcher(
      google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
          request) override;

  StreamRange<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  ListPhraseMatchers(
      google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest
          request) override;

  Status DeletePhraseMatcher(
      google::cloud::contactcenterinsights::v1::
          DeletePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  UpdatePhraseMatcher(google::cloud::contactcenterinsights::v1::
                          UpdatePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
  CalculateStats(
      google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Settings> GetSettings(
      google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Settings> UpdateSettings(
      google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> CreateView(
      google::cloud::contactcenterinsights::v1::CreateViewRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> GetView(
      google::cloud::contactcenterinsights::v1::GetViewRequest const& request)
      override;

  StreamRange<google::cloud::contactcenterinsights::v1::View> ListViews(
      google::cloud::contactcenterinsights::v1::ListViewsRequest request)
      override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> UpdateView(
      google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
          request) override;

  Status DeleteView(
      google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
          request) override;

 private:
  std::shared_ptr<contactcenterinsights::ContactCenterInsightsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_INTERNAL_CONTACT_CENTER_INSIGHTS_TRACING_CONNECTION_H
