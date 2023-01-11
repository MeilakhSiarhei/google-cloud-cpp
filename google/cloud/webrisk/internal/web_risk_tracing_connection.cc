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
// source: google/cloud/webrisk/v1/webrisk.proto

#include "google/cloud/webrisk/internal/web_risk_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace webrisk_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WebRiskServiceTracingConnection::WebRiskServiceTracingConnection(
    std::shared_ptr<webrisk::WebRiskServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
WebRiskServiceTracingConnection::ComputeThreatListDiff(
    google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request) {
  return child_->ComputeThreatListDiff(request);
}

StatusOr<google::cloud::webrisk::v1::SearchUrisResponse>
WebRiskServiceTracingConnection::SearchUris(
    google::cloud::webrisk::v1::SearchUrisRequest const& request) {
  return child_->SearchUris(request);
}

StatusOr<google::cloud::webrisk::v1::SearchHashesResponse>
WebRiskServiceTracingConnection::SearchHashes(
    google::cloud::webrisk::v1::SearchHashesRequest const& request) {
  return child_->SearchHashes(request);
}

StatusOr<google::cloud::webrisk::v1::Submission>
WebRiskServiceTracingConnection::CreateSubmission(
    google::cloud::webrisk::v1::CreateSubmissionRequest const& request) {
  return child_->CreateSubmission(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_internal
}  // namespace cloud
}  // namespace google
