#include "gtest/gtest.h"

#include "decorator_test.hpp"
//#include "sort_test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
