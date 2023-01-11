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
// source: google/cloud/vision/v1/image_annotator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_MOCKS_MOCK_IMAGE_ANNOTATOR_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_MOCKS_MOCK_IMAGE_ANNOTATOR_CONNECTION_H

#include "google/cloud/vision/image_annotator_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace vision_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ImageAnnotatorConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ImageAnnotatorClient`. To do so,
 * construct an object of type `ImageAnnotatorClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockImageAnnotatorConnection : public vision::ImageAnnotatorConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>,
      BatchAnnotateImages,
      (google::cloud::vision::v1::BatchAnnotateImagesRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>,
      BatchAnnotateFiles,
      (google::cloud::vision::v1::BatchAnnotateFilesRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>,
              AsyncBatchAnnotateImages,
              (google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>,
      AsyncBatchAnnotateFiles,
      (google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_MOCKS_MOCK_IMAGE_ANNOTATOR_CONNECTION_H
