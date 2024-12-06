
#include "src/Library.hpp"
#include <gtest/gtest.h>

TEST(TestLibrary, Simple) {
  Library lib;
  EXPECT_EQ(lib.add(1, 1), 2);
}
