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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_MOCKS_MOCK_CLOUD_FILESTORE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_MOCKS_MOCK_CLOUD_FILESTORE_MANAGER_CONNECTION_H

#include "google/cloud/filestore/cloud_filestore_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace filestore_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CloudFilestoreManagerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CloudFilestoreManagerClient`. To do
 * so, construct an object of type `CloudFilestoreManagerClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockCloudFilestoreManagerConnection
    : public filestore::CloudFilestoreManagerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::filestore::v1::Instance>,
              ListInstances,
              (google::cloud::filestore::v1::ListInstancesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::filestore::v1::Instance>, GetInstance,
              (google::cloud::filestore::v1::GetInstanceRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::filestore::v1::Instance>>, CreateInstance,
      (google::cloud::filestore::v1::CreateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::filestore::v1::Instance>>, UpdateInstance,
      (google::cloud::filestore::v1::UpdateInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::filestore::v1::Instance>>, RestoreInstance,
      (google::cloud::filestore::v1::RestoreInstanceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::common::OperationMetadata>>,
      DeleteInstance,
      (google::cloud::filestore::v1::DeleteInstanceRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::filestore::v1::Backup>, ListBackups,
              (google::cloud::filestore::v1::ListBackupsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::filestore::v1::Backup>, GetBackup,
              (google::cloud::filestore::v1::GetBackupRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::filestore::v1::Backup>>, CreateBackup,
      (google::cloud::filestore::v1::CreateBackupRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::common::OperationMetadata>>, DeleteBackup,
      (google::cloud::filestore::v1::DeleteBackupRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::filestore::v1::Backup>>, UpdateBackup,
      (google::cloud::filestore::v1::UpdateBackupRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_MOCKS_MOCK_CLOUD_FILESTORE_MANAGER_CONNECTION_H
