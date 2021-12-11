#include "gtest/gtest.h"

extern "C" {
#include "testy/func.h"
}

TEST(func, ok) {
  ASSERT_EQ(func_ok(1, 1), 1);
}

TEST(testy, not_ok) {
  ASSERT_EQ(func_ok(1, 2), 0);
}