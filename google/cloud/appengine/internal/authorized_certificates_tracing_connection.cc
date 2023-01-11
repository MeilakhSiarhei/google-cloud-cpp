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

#include "google/cloud/appengine/internal/authorized_certificates_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AuthorizedCertificatesTracingConnection::
    AuthorizedCertificatesTracingConnection(
        std::shared_ptr<appengine::AuthorizedCertificatesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingConnection::ListAuthorizedCertificates(
    google::appengine::v1::ListAuthorizedCertificatesRequest request) {
  return child_->ListAuthorizedCertificates(request);
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingConnection::GetAuthorizedCertificate(
    google::appengine::v1::GetAuthorizedCertificateRequest const& request) {
  return child_->GetAuthorizedCertificate(request);
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingConnection::CreateAuthorizedCertificate(
    google::appengine::v1::CreateAuthorizedCertificateRequest const& request) {
  return child_->CreateAuthorizedCertificate(request);
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingConnection::UpdateAuthorizedCertificate(
    google::appengine::v1::UpdateAuthorizedCertificateRequest const& request) {
  return child_->UpdateAuthorizedCertificate(request);
}

Status AuthorizedCertificatesTracingConnection::DeleteAuthorizedCertificate(
    google::appengine::v1::DeleteAuthorizedCertificateRequest const& request) {
  return child_->DeleteAuthorizedCertificate(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
