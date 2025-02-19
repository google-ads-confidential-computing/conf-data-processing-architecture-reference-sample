# Copyright 2024 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

package(default_visibility = ["//visibility:public"])

cc_test(
    name = "csv_row_test",
    srcs = [
        "csv_row_test.cc",
    ],
    deps = [
        "//cc/common/csv_parser/src:csv_stream_parser_lib",
        "@com_google_absl//absl/strings",
        "@com_google_adm_cloud_scp//cc/core/test/utils:utils_lib",
        "@com_google_adm_cloud_scp//cc/public/core/test/interface:execution_result_matchers",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "csv_stream_parser_config_test",
    srcs = [
        "csv_stream_parser_config_test.cc",
    ],
    deps = [
        "//cc/common/csv_parser/src:csv_stream_parser_lib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "csv_stream_parser_test",
    srcs = [
        "csv_stream_parser_test.cc",
    ],
    deps = [
        "//cc/common/csv_parser/src:csv_stream_parser_lib",
        "@com_google_adm_cloud_scp//cc/core/test/utils:utils_lib",
        "@com_google_adm_cloud_scp//cc/public/core/test/interface:execution_result_matchers",
        "@com_google_googletest//:gtest_main",
    ],
)
