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

#include <gmock/gmock.h>

#include <functional>
#include <string_view>

#include "cc/common/blob_streamer/src/blob_streamer_interface.h"
#include "cc/core/interface/service_interface.h"
#include "cc/public/core/interface/execution_result.h"

namespace google::pair::common {

/**
 * @brief Mock class for use in testing.
 * 
 */
class MockBlobStreamer : public BlobStreamerInterface {
 public:
  MockBlobStreamer() {
    ON_CALL(*this, Init)
        .WillByDefault(testing::Return(scp::core::SuccessExecutionResult()));
    ON_CALL(*this, Run)
        .WillByDefault(testing::Return(scp::core::SuccessExecutionResult()));
    ON_CALL(*this, Stop)
        .WillByDefault(testing::Return(scp::core::SuccessExecutionResult()));
  }

  MOCK_METHOD(scp::core::ExecutionResult, Init, (), (noexcept, override));
  MOCK_METHOD(scp::core::ExecutionResult, Run, (), (noexcept, override));
  MOCK_METHOD(scp::core::ExecutionResult, Stop, (), (noexcept, override));

  MOCK_METHOD(scp::core::ExecutionResult, GetBlobStream, (GetBlobStreamContext),
              (noexcept, override));

  MOCK_METHOD(scp::core::ExecutionResultOr<PutBlobCallback>, PutBlobStream,
              (PutBlobStreamContext), (noexcept, override));
};

}  // namespace google::pair::common
