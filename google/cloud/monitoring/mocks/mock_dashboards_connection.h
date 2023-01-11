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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_DASHBOARDS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_DASHBOARDS_CONNECTION_H

#include "google/cloud/monitoring/dashboards_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace monitoring_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DashboardsServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DashboardsServiceClient`. To do so,
 * construct an object of type `DashboardsServiceClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockDashboardsServiceConnection
    : public monitoring::DashboardsServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::monitoring::dashboard::v1::Dashboard>,
              CreateDashboard,
              (google::monitoring::dashboard::v1::CreateDashboardRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::monitoring::dashboard::v1::Dashboard>, ListDashboards,
      (google::monitoring::dashboard::v1::ListDashboardsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::dashboard::v1::Dashboard>, GetDashboard,
      (google::monitoring::dashboard::v1::GetDashboardRequest const& request),
      (override));

  MOCK_METHOD(Status, DeleteDashboard,
              (google::monitoring::dashboard::v1::DeleteDashboardRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::monitoring::dashboard::v1::Dashboard>,
              UpdateDashboard,
              (google::monitoring::dashboard::v1::UpdateDashboardRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_MOCKS_MOCK_DASHBOARDS_CONNECTION_H
