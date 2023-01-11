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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_LIVESTREAM_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_LIVESTREAM_TRACING_CONNECTION_H

#include "google/cloud/video/livestream_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class LivestreamServiceTracingConnection
    : public video::LivestreamServiceConnection {
 public:
  ~LivestreamServiceTracingConnection() override = default;

  explicit LivestreamServiceTracingConnection(
      std::shared_ptr<video::LivestreamServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::video::livestream::v1::Channel>> CreateChannel(
      google::cloud::video::livestream::v1::CreateChannelRequest const& request)
      override;

  StreamRange<google::cloud::video::livestream::v1::Channel> ListChannels(
      google::cloud::video::livestream::v1::ListChannelsRequest request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      google::cloud::video::livestream::v1::GetChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteChannel(
      google::cloud::video::livestream::v1::DeleteChannelRequest const& request)
      override;

  future<StatusOr<google::cloud::video::livestream::v1::Channel>> UpdateChannel(
      google::cloud::video::livestream::v1::UpdateChannelRequest const& request)
      override;

  future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StartChannel(google::cloud::video::livestream::v1::StartChannelRequest const&
                   request) override;

  future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StopChannel(google::cloud::video::livestream::v1::StopChannelRequest const&
                  request) override;

  future<StatusOr<google::cloud::video::livestream::v1::Input>> CreateInput(
      google::cloud::video::livestream::v1::CreateInputRequest const& request)
      override;

  StreamRange<google::cloud::video::livestream::v1::Input> ListInputs(
      google::cloud::video::livestream::v1::ListInputsRequest request) override;

  StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      google::cloud::video::livestream::v1::GetInputRequest const& request)
      override;

  future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteInput(google::cloud::video::livestream::v1::DeleteInputRequest const&
                  request) override;

  future<StatusOr<google::cloud::video::livestream::v1::Input>> UpdateInput(
      google::cloud::video::livestream::v1::UpdateInputRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      google::cloud::video::livestream::v1::CreateEventRequest const& request)
      override;

  StreamRange<google::cloud::video::livestream::v1::Event> ListEvents(
      google::cloud::video::livestream::v1::ListEventsRequest request) override;

  StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      google::cloud::video::livestream::v1::GetEventRequest const& request)
      override;

  Status DeleteEvent(
      google::cloud::video::livestream::v1::DeleteEventRequest const& request)
      override;

 private:
  std::shared_ptr<video::LivestreamServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_LIVESTREAM_TRACING_CONNECTION_H
