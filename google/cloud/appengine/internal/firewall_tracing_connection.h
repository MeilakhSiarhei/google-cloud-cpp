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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_FIREWALL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_FIREWALL_TRACING_CONNECTION_H

#include "google/cloud/appengine/firewall_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class FirewallTracingConnection : public appengine::FirewallConnection {
 public:
  ~FirewallTracingConnection() override = default;

  explicit FirewallTracingConnection(
      std::shared_ptr<appengine::FirewallConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::appengine::v1::FirewallRule> ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest request) override;

  StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
  BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request)
      override;

  StatusOr<google::appengine::v1::FirewallRule> CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const& request) override;

  StatusOr<google::appengine::v1::FirewallRule> GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const& request) override;

  StatusOr<google::appengine::v1::FirewallRule> UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const& request) override;

  Status DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const& request) override;

 private:
  std::shared_ptr<appengine::FirewallConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_FIREWALL_TRACING_CONNECTION_H
