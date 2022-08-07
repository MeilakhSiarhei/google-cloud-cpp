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

#include "google/cloud/dialogflow_cx/deployments_connection.h"
#include "google/cloud/dialogflow_cx/deployments_options.h"
#include "google/cloud/dialogflow_cx/internal/deployments_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/deployments_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/deployments_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DeploymentsConnection::~DeploymentsConnection() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsConnection::ListDeployments(
    google::cloud::dialogflow::cx::v3::
        ListDeploymentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Deployment>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsConnection::GetDeployment(
    google::cloud::dialogflow::cx::v3::GetDeploymentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DeploymentsConnection> MakeDeploymentsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DeploymentsPolicyOptionList>(options,
                                                              __func__);
  options = dialogflow_cx_internal::DeploymentsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_cx_internal::CreateDefaultDeploymentsStub(
      background->cq(), options);
  return std::make_shared<dialogflow_cx_internal::DeploymentsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

std::shared_ptr<DeploymentsConnection> MakeDeploymentsConnection(
    Options options) {
  return MakeDeploymentsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
