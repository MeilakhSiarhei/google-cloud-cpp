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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/internal/video_stitcher_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VideoStitcherServiceTracingConnection::VideoStitcherServiceTracingConnection(
    std::shared_ptr<video::VideoStitcherServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceTracingConnection::CreateCdnKey(
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  return child_->CreateCdnKey(request);
}

StreamRange<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceTracingConnection::ListCdnKeys(
    google::cloud::video::stitcher::v1::ListCdnKeysRequest request) {
  return child_->ListCdnKeys(request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceTracingConnection::GetCdnKey(
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  return child_->GetCdnKey(request);
}

Status VideoStitcherServiceTracingConnection::DeleteCdnKey(
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  return child_->DeleteCdnKey(request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceTracingConnection::UpdateCdnKey(
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  return child_->UpdateCdnKey(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceTracingConnection::CreateVodSession(
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  return child_->CreateVodSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceTracingConnection::GetVodSession(
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  return child_->GetVodSession(request);
}

StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceTracingConnection::ListVodStitchDetails(
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request) {
  return child_->ListVodStitchDetails(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceTracingConnection::GetVodStitchDetail(
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  return child_->GetVodStitchDetail(request);
}

StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceTracingConnection::ListVodAdTagDetails(
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request) {
  return child_->ListVodAdTagDetails(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceTracingConnection::GetVodAdTagDetail(
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  return child_->GetVodAdTagDetail(request);
}

StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceTracingConnection::ListLiveAdTagDetails(
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request) {
  return child_->ListLiveAdTagDetails(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceTracingConnection::GetLiveAdTagDetail(
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  return child_->GetLiveAdTagDetail(request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceTracingConnection::CreateSlate(
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  return child_->CreateSlate(request);
}

StreamRange<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceTracingConnection::ListSlates(
    google::cloud::video::stitcher::v1::ListSlatesRequest request) {
  return child_->ListSlates(request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceTracingConnection::GetSlate(
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  return child_->GetSlate(request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceTracingConnection::UpdateSlate(
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  return child_->UpdateSlate(request);
}

Status VideoStitcherServiceTracingConnection::DeleteSlate(
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  return child_->DeleteSlate(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceTracingConnection::CreateLiveSession(
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  return child_->CreateLiveSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceTracingConnection::GetLiveSession(
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  return child_->GetLiveSession(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google
