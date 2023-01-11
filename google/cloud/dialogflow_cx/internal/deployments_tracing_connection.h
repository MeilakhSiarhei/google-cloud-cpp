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
// source: google/cloud/dialogflow/cx/v3/deployment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_DEPLOYMENTS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_DEPLOYMENTS_TRACING_CONNECTION_H

#include "google/cloud/dialogflow_cx/deployments_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DeploymentsTracingConnection
    : public dialogflow_cx::DeploymentsConnection {
 public:
  ~DeploymentsTracingConnection() override = default;

  explicit DeploymentsTracingConnection(
      std::shared_ptr<dialogflow_cx::DeploymentsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::dialogflow::cx::v3::Deployment> ListDeployments(
      google::cloud::dialogflow::cx::v3::ListDeploymentsRequest request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Deployment> GetDeployment(
      google::cloud::dialogflow::cx::v3::GetDeploymentRequest const& request)
      override;

 private:
  std::shared_ptr<dialogflow_cx::DeploymentsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_DEPLOYMENTS_TRACING_CONNECTION_H
