#include "gtest/gtest.h"

extern "C" {
#include "testy/func_cust.h"
}

TEST(func_cust, ok) {
  ASSERT_EQ(customer_check(5), 1);
}

TEST(testy, not_ok) {
  ASSERT_EQ(customer_check(0), 0);  
}