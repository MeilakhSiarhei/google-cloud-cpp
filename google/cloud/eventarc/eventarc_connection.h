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
// source: google/cloud/eventarc/v1/eventarc.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_EVENTARC_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_EVENTARC_CONNECTION_H

#include "google/cloud/eventarc/eventarc_connection_idempotency_policy.h"
#include "google/cloud/eventarc/v1/eventarc_connection.h"

namespace google {
namespace cloud {
namespace eventarc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// @deprecated Use eventarc_v1::MakeEventarcConnection directly.
using ::google::cloud::eventarc_v1::MakeEventarcConnection;

/// @deprecated Use eventarc_v1::EventarcConnection directly.
using ::google::cloud::eventarc_v1::EventarcConnection;

/// @deprecated Use eventarc_v1::EventarcLimitedErrorCountRetryPolicy directly.
using ::google::cloud::eventarc_v1::EventarcLimitedErrorCountRetryPolicy;

/// @deprecated Use eventarc_v1::EventarcLimitedTimeRetryPolicy directly.
using ::google::cloud::eventarc_v1::EventarcLimitedTimeRetryPolicy;

/// @deprecated Use eventarc_v1::EventarcRetryPolicy directly.
using ::google::cloud::eventarc_v1::EventarcRetryPolicy;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_EVENTARC_CONNECTION_H
