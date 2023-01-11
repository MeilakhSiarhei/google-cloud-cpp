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
// source: google/devtools/clouddebugger/v2/controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_MOCKS_MOCK_CONTROLLER2_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_MOCKS_MOCK_CONTROLLER2_CONNECTION_H

#include "google/cloud/debugger/controller2_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace debugger_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `Controller2Connection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `Controller2Client`. To do so,
 * construct an object of type `Controller2Client` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockController2Connection : public debugger::Controller2Connection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::devtools::clouddebugger::v2::RegisterDebuggeeResponse>,
      RegisterDebuggee,
      (google::devtools::clouddebugger::v2::RegisterDebuggeeRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::devtools::clouddebugger::v2::ListActiveBreakpointsResponse>,
      ListActiveBreakpoints,
      (google::devtools::clouddebugger::v2::ListActiveBreakpointsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::devtools::clouddebugger::v2::UpdateActiveBreakpointResponse>,
      UpdateActiveBreakpoint,
      (google::devtools::clouddebugger::v2::UpdateActiveBreakpointRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_MOCKS_MOCK_CONTROLLER2_CONNECTION_H
