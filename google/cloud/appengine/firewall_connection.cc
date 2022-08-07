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

#include "google/cloud/appengine/firewall_connection.h"
#include "google/cloud/appengine/firewall_options.h"
#include "google/cloud/appengine/internal/firewall_connection_impl.h"
#include "google/cloud/appengine/internal/firewall_option_defaults.h"
#include "google/cloud/appengine/internal/firewall_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallConnection::~FirewallConnection() = default;

StreamRange<google::appengine::v1::FirewallRule>
FirewallConnection::ListIngressRules(
    google::appengine::v1::
        ListIngressRulesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::appengine::v1::FirewallRule>>();
}

StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
FirewallConnection::BatchUpdateIngressRules(
    google::appengine::v1::BatchUpdateIngressRulesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallConnection::CreateIngressRule(
    google::appengine::v1::CreateIngressRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallConnection::GetIngressRule(
    google::appengine::v1::GetIngressRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallConnection::UpdateIngressRule(
    google::appengine::v1::UpdateIngressRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status FirewallConnection::DeleteIngressRule(
    google::appengine::v1::DeleteIngressRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<FirewallConnection> MakeFirewallConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 FirewallPolicyOptionList>(options, __func__);
  options = appengine_internal::FirewallDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      appengine_internal::CreateDefaultFirewallStub(background->cq(), options);
  return std::make_shared<appengine_internal::FirewallConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google
