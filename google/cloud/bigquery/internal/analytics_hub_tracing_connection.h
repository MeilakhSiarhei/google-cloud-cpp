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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_ANALYTICS_HUB_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_ANALYTICS_HUB_TRACING_CONNECTION_H

#include "google/cloud/bigquery/analytics_hub_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AnalyticsHubServiceTracingConnection
    : public bigquery::AnalyticsHubServiceConnection {
 public:
  ~AnalyticsHubServiceTracingConnection() override = default;

  explicit AnalyticsHubServiceTracingConnection(
      std::shared_ptr<bigquery::AnalyticsHubServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
          request) override;

  StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>
  ListOrgDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request) override;

  Status DeleteDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request) override;

  StreamRange<google::cloud::bigquery::analyticshub::v1::Listing> ListListings(
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest request)
      override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> GetListing(
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> CreateListing(
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> UpdateListing(
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request) override;

  Status DeleteListing(
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<bigquery::AnalyticsHubServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_ANALYTICS_HUB_TRACING_CONNECTION_H
