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
// source: google/cloud/dialogflow/v2/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_ENVIRONMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_ENVIRONMENTS_CONNECTION_H

#include "google/cloud/dialogflow_es/environments_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `EnvironmentsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `EnvironmentsClient`. To do so,
 * construct an object of type `EnvironmentsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockEnvironmentsConnection
    : public dialogflow_es::EnvironmentsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::dialogflow::v2::Environment>,
              ListEnvironments,
              (google::cloud::dialogflow::v2::ListEnvironmentsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::Environment>, GetEnvironment,
      (google::cloud::dialogflow::v2::GetEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::Environment>, CreateEnvironment,
      (google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::Environment>, UpdateEnvironment,
      (google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteEnvironment,
      (google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>,
      GetEnvironmentHistory,
      (google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_ENVIRONMENTS_CONNECTION_H
