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
// source: google/cloud/retail/v2/search_service.proto

#include "google/cloud/retail/search_connection.h"
#include "google/cloud/retail/internal/search_connection_impl.h"
#include "google/cloud/retail/internal/search_option_defaults.h"
#include "google/cloud/retail/internal/search_stub_factory.h"
#include "google/cloud/retail/search_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SearchServiceConnection::~SearchServiceConnection() = default;

StreamRange<google::cloud::retail::v2::SearchResponse::SearchResult>
SearchServiceConnection::Search(
    google::cloud::retail::v2::
        SearchRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::retail::v2::SearchResponse::SearchResult>>();
}

std::shared_ptr<SearchServiceConnection> MakeSearchServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SearchServicePolicyOptionList>(options,
                                                                __func__);
  options = retail_internal::SearchServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = retail_internal::CreateDefaultSearchServiceStub(background->cq(),
                                                              options);
  return std::make_shared<retail_internal::SearchServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google
