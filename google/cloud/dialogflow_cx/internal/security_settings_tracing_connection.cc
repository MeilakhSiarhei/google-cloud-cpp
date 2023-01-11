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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#include "google/cloud/dialogflow_cx/internal/security_settings_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecuritySettingsServiceTracingConnection::
    SecuritySettingsServiceTracingConnection(
        std::shared_ptr<dialogflow_cx::SecuritySettingsServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceTracingConnection::CreateSecuritySettings(
    google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
        request) {
  return child_->CreateSecuritySettings(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceTracingConnection::GetSecuritySettings(
    google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
        request) {
  return child_->GetSecuritySettings(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceTracingConnection::UpdateSecuritySettings(
    google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
        request) {
  return child_->UpdateSecuritySettings(request);
}

StreamRange<google::cloud::dialogflow::cx::v3::SecuritySettings>
SecuritySettingsServiceTracingConnection::ListSecuritySettings(
    google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest request) {
  return child_->ListSecuritySettings(request);
}

Status SecuritySettingsServiceTracingConnection::DeleteSecuritySettings(
    google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
        request) {
  return child_->DeleteSecuritySettings(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
