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
// source: google/privacy/dlp/v2/dlp.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_DLP_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_DLP_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dlp_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DlpServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DlpServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DlpServiceConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency InspectContent(
      google::privacy::dlp::v2::InspectContentRequest const& request);

  virtual google::cloud::Idempotency RedactImage(
      google::privacy::dlp::v2::RedactImageRequest const& request);

  virtual google::cloud::Idempotency DeidentifyContent(
      google::privacy::dlp::v2::DeidentifyContentRequest const& request);

  virtual google::cloud::Idempotency ReidentifyContent(
      google::privacy::dlp::v2::ReidentifyContentRequest const& request);

  virtual google::cloud::Idempotency ListInfoTypes(
      google::privacy::dlp::v2::ListInfoTypesRequest const& request);

  virtual google::cloud::Idempotency CreateInspectTemplate(
      google::privacy::dlp::v2::CreateInspectTemplateRequest const& request);

  virtual google::cloud::Idempotency UpdateInspectTemplate(
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request);

  virtual google::cloud::Idempotency GetInspectTemplate(
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request);

  virtual google::cloud::Idempotency ListInspectTemplates(
      google::privacy::dlp::v2::ListInspectTemplatesRequest request);

  virtual google::cloud::Idempotency DeleteInspectTemplate(
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request);

  virtual google::cloud::Idempotency CreateDeidentifyTemplate(
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request);

  virtual google::cloud::Idempotency UpdateDeidentifyTemplate(
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request);

  virtual google::cloud::Idempotency GetDeidentifyTemplate(
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request);

  virtual google::cloud::Idempotency ListDeidentifyTemplates(
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request);

  virtual google::cloud::Idempotency DeleteDeidentifyTemplate(
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request);

  virtual google::cloud::Idempotency CreateJobTrigger(
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request);

  virtual google::cloud::Idempotency UpdateJobTrigger(
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request);

  virtual google::cloud::Idempotency HybridInspectJobTrigger(
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request);

  virtual google::cloud::Idempotency GetJobTrigger(
      google::privacy::dlp::v2::GetJobTriggerRequest const& request);

  virtual google::cloud::Idempotency ListJobTriggers(
      google::privacy::dlp::v2::ListJobTriggersRequest request);

  virtual google::cloud::Idempotency DeleteJobTrigger(
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request);

  virtual google::cloud::Idempotency ActivateJobTrigger(
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request);

  virtual google::cloud::Idempotency CreateDlpJob(
      google::privacy::dlp::v2::CreateDlpJobRequest const& request);

  virtual google::cloud::Idempotency ListDlpJobs(
      google::privacy::dlp::v2::ListDlpJobsRequest request);

  virtual google::cloud::Idempotency GetDlpJob(
      google::privacy::dlp::v2::GetDlpJobRequest const& request);

  virtual google::cloud::Idempotency DeleteDlpJob(
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request);

  virtual google::cloud::Idempotency CancelDlpJob(
      google::privacy::dlp::v2::CancelDlpJobRequest const& request);

  virtual google::cloud::Idempotency CreateStoredInfoType(
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request);

  virtual google::cloud::Idempotency UpdateStoredInfoType(
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request);

  virtual google::cloud::Idempotency GetStoredInfoType(
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request);

  virtual google::cloud::Idempotency ListStoredInfoTypes(
      google::privacy::dlp::v2::ListStoredInfoTypesRequest request);

  virtual google::cloud::Idempotency DeleteStoredInfoType(
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request);

  virtual google::cloud::Idempotency HybridInspectDlpJob(
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request);

  virtual google::cloud::Idempotency FinishDlpJob(
      google::privacy::dlp::v2::FinishDlpJobRequest const& request);
};

std::unique_ptr<DlpServiceConnectionIdempotencyPolicy>
MakeDefaultDlpServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_DLP_CONNECTION_IDEMPOTENCY_POLICY_H
