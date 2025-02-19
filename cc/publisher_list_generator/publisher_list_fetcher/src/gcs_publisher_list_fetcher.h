// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <optional>
#include <string>
#include <vector>

#include "cc/public/core/interface/execution_result.h"
#include "cc/common/csv_parser/src/csv_stream_parser_interface.h"
#include "cc/public/cpio/interface/blob_storage_client/blob_storage_client_interface.h"
#include "publisher_list_fetcher.h"

namespace google::pair::publisher_list_generator {

class GcsPublisherListFetcher : public PublisherListFetcher {
 public:
  explicit GcsPublisherListFetcher(
      std::shared_ptr<scp::cpio::BlobStorageClientInterface>
          blob_storage_client);

  google::scp::core::ExecutionResultOr<FetchIdsResponse> FetchPublisherIds(
      FetchIdsRequest request) override;

 private:
  std::shared_ptr<scp::cpio::BlobStorageClientInterface> blob_storage_client_;
  std::unique_ptr<common::CsvStreamParserInterface> csv_parser_;
};

}  // namespace google::pair::publisher_list_generator
