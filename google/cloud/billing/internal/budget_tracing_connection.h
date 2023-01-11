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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_INTERNAL_BUDGET_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_INTERNAL_BUDGET_TRACING_CONNECTION_H

#include "google/cloud/billing/budget_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BudgetServiceTracingConnection : public billing::BudgetServiceConnection {
 public:
  ~BudgetServiceTracingConnection() override = default;

  explicit BudgetServiceTracingConnection(
      std::shared_ptr<billing::BudgetServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      google::cloud::billing::budgets::v1::CreateBudgetRequest const& request)
      override;

  StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request)
      override;

  StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      google::cloud::billing::budgets::v1::GetBudgetRequest const& request)
      override;

  StreamRange<google::cloud::billing::budgets::v1::Budget> ListBudgets(
      google::cloud::billing::budgets::v1::ListBudgetsRequest request) override;

  Status DeleteBudget(
      google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request)
      override;

 private:
  std::shared_ptr<billing::BudgetServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_INTERNAL_BUDGET_TRACING_CONNECTION_H
