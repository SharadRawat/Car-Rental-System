# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library

cc_library(
    name = "user_client",
    srcs = glob(["**/*.cpp"]),
    hdrs = glob(["**/*.h"]),
    visibility = ["//visibility:public"],
    deps = ["//rental_manager:rental_manager"],
)
