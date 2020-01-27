#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialTest, ReturnPos) {
  Solution solution;
   int a = 3;
  EXPECT_EQ(solution.Factorial(a), 6);
  EXPECT_EQ(solution.FactorialRecursive(a), 6);
}

TEST(FactorialTest, ReturnNeg) {
  Solution solution;
  int c = 0;
  EXPECT_EQ(solution.Factorial(c), -1);
  EXPECT_EQ(solution.FactorialRecursive(c), -1);
}
TEST(FactorialTest, ReturnOne) {
  Solution solution;
  int d = 1;
  EXPECT_EQ(solution.Factorial(d), 1);
  EXPECT_EQ(solution.FactorialRecursive(d), 1);
}
