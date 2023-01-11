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
// source: google/cloud/run/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_INTERNAL_SERVICES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_INTERNAL_SERVICES_TRACING_CONNECTION_H

#include "google/cloud/run/services_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ServicesTracingConnection : public run::ServicesConnection {
 public:
  ~ServicesTracingConnection() override = default;

  explicit ServicesTracingConnection(
      std::shared_ptr<run::ServicesConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::run::v2::Service>> CreateService(
      google::cloud::run::v2::CreateServiceRequest const& request) override;

  StatusOr<google::cloud::run::v2::Service> GetService(
      google::cloud::run::v2::GetServiceRequest const& request) override;

  StreamRange<google::cloud::run::v2::Service> ListServices(
      google::cloud::run::v2::ListServicesRequest request) override;

  future<StatusOr<google::cloud::run::v2::Service>> UpdateService(
      google::cloud::run::v2::UpdateServiceRequest const& request) override;

  future<StatusOr<google::cloud::run::v2::Service>> DeleteService(
      google::cloud::run::v2::DeleteServiceRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<run::ServicesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_INTERNAL_SERVICES_TRACING_CONNECTION_H
