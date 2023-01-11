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
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_INTERNAL_TEXT_TO_SPEECH_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_INTERNAL_TEXT_TO_SPEECH_TRACING_CONNECTION_H

#include "google/cloud/texttospeech/text_to_speech_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace texttospeech_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TextToSpeechTracingConnection
    : public texttospeech::TextToSpeechConnection {
 public:
  ~TextToSpeechTracingConnection() override = default;

  explicit TextToSpeechTracingConnection(
      std::shared_ptr<texttospeech::TextToSpeechConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse> ListVoices(
      google::cloud::texttospeech::v1::ListVoicesRequest const& request)
      override;

  StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request)
      override;

 private:
  std::shared_ptr<texttospeech::TextToSpeechConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_INTERNAL_TEXT_TO_SPEECH_TRACING_CONNECTION_H
