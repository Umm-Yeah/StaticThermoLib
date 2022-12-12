#include "pch.h"

import Addition;

TEST(TestCaseName, TestName) {

	double a = 7;
	double b = 13;

	double resultAdd = Add(a, b);

  EXPECT_EQ(resultAdd, 1);
  EXPECT_TRUE(true);
}