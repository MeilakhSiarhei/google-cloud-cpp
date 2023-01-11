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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#include "google/cloud/policytroubleshooter/internal/iam_checker_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IamCheckerTracingConnection::IamCheckerTracingConnection(
    std::shared_ptr<policytroubleshooter::IamCheckerConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
IamCheckerTracingConnection::TroubleshootIamPolicy(
    google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyRequest const&
        request) {
  return child_->TroubleshootIamPolicy(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_internal
}  // namespace cloud
}  // namespace google
