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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_INTERNAL_BINAUTHZ_MANAGEMENT_SERVICE_V1_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_INTERNAL_BINAUTHZ_MANAGEMENT_SERVICE_V1_TRACING_CONNECTION_H

#include "google/cloud/binaryauthorization/binauthz_management_service_v1_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BinauthzManagementServiceV1TracingConnection
    : public binaryauthorization::BinauthzManagementServiceV1Connection {
 public:
  ~BinauthzManagementServiceV1TracingConnection() override = default;

  explicit BinauthzManagementServiceV1TracingConnection(
      std::shared_ptr<
          binaryauthorization::BinauthzManagementServiceV1Connection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetPolicy(
      google::cloud::binaryauthorization::v1::GetPolicyRequest const& request)
      override;

  StatusOr<google::cloud::binaryauthorization::v1::Policy> UpdatePolicy(
      google::cloud::binaryauthorization::v1::UpdatePolicyRequest const&
          request) override;

  StatusOr<google::cloud::binaryauthorization::v1::Attestor> CreateAttestor(
      google::cloud::binaryauthorization::v1::CreateAttestorRequest const&
          request) override;

  StatusOr<google::cloud::binaryauthorization::v1::Attestor> GetAttestor(
      google::cloud::binaryauthorization::v1::GetAttestorRequest const& request)
      override;

  StatusOr<google::cloud::binaryauthorization::v1::Attestor> UpdateAttestor(
      google::cloud::binaryauthorization::v1::UpdateAttestorRequest const&
          request) override;

  StreamRange<google::cloud::binaryauthorization::v1::Attestor> ListAttestors(
      google::cloud::binaryauthorization::v1::ListAttestorsRequest request)
      override;

  Status DeleteAttestor(
      google::cloud::binaryauthorization::v1::DeleteAttestorRequest const&
          request) override;

 private:
  std::shared_ptr<binaryauthorization::BinauthzManagementServiceV1Connection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_INTERNAL_BINAUTHZ_MANAGEMENT_SERVICE_V1_TRACING_CONNECTION_H
