#include "gtest/gtest.h"
#include "src/greeter.h"

TEST(HelloTest, GetGreet) {
    EXPECT_EQ("Hello Damien", greet("Damien"));
}