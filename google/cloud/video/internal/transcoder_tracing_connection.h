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
// source: google/cloud/video/transcoder/v1/services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_TRANSCODER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_TRANSCODER_TRACING_CONNECTION_H

#include "google/cloud/video/transcoder_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TranscoderServiceTracingConnection
    : public video::TranscoderServiceConnection {
 public:
  ~TranscoderServiceTracingConnection() override = default;

  explicit TranscoderServiceTracingConnection(
      std::shared_ptr<video::TranscoderServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::video::transcoder::v1::Job> CreateJob(
      google::cloud::video::transcoder::v1::CreateJobRequest const& request)
      override;

  StreamRange<google::cloud::video::transcoder::v1::Job> ListJobs(
      google::cloud::video::transcoder::v1::ListJobsRequest request) override;

  StatusOr<google::cloud::video::transcoder::v1::Job> GetJob(
      google::cloud::video::transcoder::v1::GetJobRequest const& request)
      override;

  Status DeleteJob(google::cloud::video::transcoder::v1::DeleteJobRequest const&
                       request) override;

  StatusOr<google::cloud::video::transcoder::v1::JobTemplate> CreateJobTemplate(
      google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
          request) override;

  StreamRange<google::cloud::video::transcoder::v1::JobTemplate>
  ListJobTemplates(google::cloud::video::transcoder::v1::ListJobTemplatesRequest
                       request) override;

  StatusOr<google::cloud::video::transcoder::v1::JobTemplate> GetJobTemplate(
      google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
          request) override;

  Status DeleteJobTemplate(
      google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
          request) override;

 private:
  std::shared_ptr<video::TranscoderServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_TRANSCODER_TRACING_CONNECTION_H
