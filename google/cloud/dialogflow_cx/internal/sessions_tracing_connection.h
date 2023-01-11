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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSIONS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_cx/sessions_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SessionsTracingConnection : public dialogflow_cx::SessionsConnection {
 public:
  ~SessionsTracingConnection() override = default;

  explicit SessionsTracingConnection(
      std::shared_ptr<dialogflow_cx::SessionsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
  DetectIntent(google::cloud::dialogflow::cx::v3::DetectIntentRequest const&
                   request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
  AsyncStreamingDetectIntent() override;

  StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse> MatchIntent(
      google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
  FulfillIntent(google::cloud::dialogflow::cx::v3::FulfillIntentRequest const&
                    request) override;

 private:
  std::shared_ptr<dialogflow_cx::SessionsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSIONS_TRACING_CONNECTION_H
