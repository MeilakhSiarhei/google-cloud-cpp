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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#include "google/cloud/dialogflow_cx/flows_connection.h"
#include "google/cloud/dialogflow_cx/flows_options.h"
#include "google/cloud/dialogflow_cx/internal/flows_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/flows_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/flows_stub_factory.h"
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

FlowsConnection::~FlowsConnection() = default;

StatusOr<google::cloud::dialogflow::cx::v3::Flow> FlowsConnection::CreateFlow(
    google::cloud::dialogflow::cx::v3::CreateFlowRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status FlowsConnection::DeleteFlow(
    google::cloud::dialogflow::cx::v3::DeleteFlowRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::cx::v3::Flow> FlowsConnection::ListFlows(
    google::cloud::dialogflow::cx::v3::
        ListFlowsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Flow>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> FlowsConnection::GetFlow(
    google::cloud::dialogflow::cx::v3::GetFlowRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> FlowsConnection::UpdateFlow(
    google::cloud::dialogflow::cx::v3::UpdateFlowRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::protobuf::Struct>> FlowsConnection::TrainFlow(
    google::cloud::dialogflow::cx::v3::TrainFlowRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
FlowsConnection::ValidateFlow(
    google::cloud::dialogflow::cx::v3::ValidateFlowRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
FlowsConnection::GetFlowValidationResult(
    google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>
FlowsConnection::ImportFlow(
    google::cloud::dialogflow::cx::v3::ImportFlowRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>
FlowsConnection::ExportFlow(
    google::cloud::dialogflow::cx::v3::ExportFlowRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<FlowsConnection> MakeFlowsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 FlowsPolicyOptionList>(options, __func__);
  options =
      dialogflow_cx_internal::FlowsDefaultOptions(location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      dialogflow_cx_internal::CreateDefaultFlowsStub(background->cq(), options);
  return std::make_shared<dialogflow_cx_internal::FlowsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

std::shared_ptr<FlowsConnection> MakeFlowsConnection(Options options) {
  return MakeFlowsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
