package(default_visibility = ["//visibility:public"])

cc_library(
    name = "greeter",
    srcs = ["greeter.cc"],
    hdrs = ["greeter.h"]
)

cc_test(
    name = "greeter-test",
    srcs = ["greeter_test.cc"],
    deps = [
        ":greeter",
        "@com_google_googletest//:gtest_main"
    ]
)

cc_binary(
    name = "cppflags",
    srcs = ["main.cc"],
    visibility = ["//visibility:public"],
    deps = [
        ":greeter",
        "@com_github_gflags_gflags//:gflags",
        "@com_github_google_glog//:glog"
    ] 
)
