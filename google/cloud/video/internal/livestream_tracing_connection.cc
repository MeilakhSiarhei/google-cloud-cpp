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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/internal/livestream_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LivestreamServiceTracingConnection::LivestreamServiceTracingConnection(
    std::shared_ptr<video::LivestreamServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceTracingConnection::CreateChannel(
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  return child_->CreateChannel(request);
}

StreamRange<google::cloud::video::livestream::v1::Channel>
LivestreamServiceTracingConnection::ListChannels(
    google::cloud::video::livestream::v1::ListChannelsRequest request) {
  return child_->ListChannels(request);
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceTracingConnection::GetChannel(
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  return child_->GetChannel(request);
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceTracingConnection::DeleteChannel(
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  return child_->DeleteChannel(request);
}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceTracingConnection::UpdateChannel(
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  return child_->UpdateChannel(request);
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceTracingConnection::StartChannel(
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  return child_->StartChannel(request);
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceTracingConnection::StopChannel(
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  return child_->StopChannel(request);
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceTracingConnection::CreateInput(
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  return child_->CreateInput(request);
}

StreamRange<google::cloud::video::livestream::v1::Input>
LivestreamServiceTracingConnection::ListInputs(
    google::cloud::video::livestream::v1::ListInputsRequest request) {
  return child_->ListInputs(request);
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceTracingConnection::GetInput(
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  return child_->GetInput(request);
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceTracingConnection::DeleteInput(
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  return child_->DeleteInput(request);
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceTracingConnection::UpdateInput(
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  return child_->UpdateInput(request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingConnection::CreateEvent(
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  return child_->CreateEvent(request);
}

StreamRange<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingConnection::ListEvents(
    google::cloud::video::livestream::v1::ListEventsRequest request) {
  return child_->ListEvents(request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingConnection::GetEvent(
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  return child_->GetEvent(request);
}

Status LivestreamServiceTracingConnection::DeleteEvent(
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  return child_->DeleteEvent(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google
