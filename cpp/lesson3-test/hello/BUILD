cc_library(
    name = "hello_lib",
    srcs = ["hello.cpp"],
    hdrs = ["hello.h"],
)

cc_binary(
    name = "hello",
    srcs = ["main.cpp"],
    deps = [":hello_lib"],
)

cc_test(
    name = "hello-test",
    srcs = ["hello_test.cpp"],
    deps = [":hello_lib"],
)