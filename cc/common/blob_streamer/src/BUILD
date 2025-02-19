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

cc_library(
    name = "blob_streamer_lib",
    srcs = [
        "blob_streamer.cc",
    ],
    hdrs = [
        "blob_streamer.h",
        "blob_streamer_interface.h",
        "get_blob_stream_context.h",
        "put_blob_stream_context.h",
    ],
    deps = [
        "@com_google_absl//absl/container:flat_hash_map",
        "@com_google_adm_cloud_scp//cc/core/async_executor/src:core_async_executor_lib",
        "@com_google_adm_cloud_scp//cc/core/interface:errors_lib",
        "@com_google_adm_cloud_scp//cc/core/interface:interface_lib",
        "@com_google_adm_cloud_scp//cc/public/core/interface:execution_result",
        "@com_google_adm_cloud_scp//cc/public/cpio/interface/blob_storage_client",
    ],
)
