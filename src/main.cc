#include <iostream>
#include <gflags/gflags.h>
#include <glog/logging.h>
#include "src/greeter.h"

DEFINE_string(name, "", "Person to greet");

int main(int argc, char** argv) {
    // Initialize gflags with the command line arguments
    gflags::SetUsageMessage("Hello world with flags");
    gflags::SetVersionString("1.0.0");
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    
    // Initialize glog with the name of the app from the command line
    // The failure signal handler will provide stack trace if app crashes
    google::InitGoogleLogging(argv[0]);
    google::InstallFailureSignalHandler();

    auto greeting = greet(FLAGS_name);
    std::cout << greeting << '\n';
}