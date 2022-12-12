#include "pch.h"

import Addition;
import PressureConversions;

TEST(TestCaseName, TestName) {

	double a = 7;
	double b = 13;

	double resultAdd = Add(a, b);

  EXPECT_EQ(resultAdd, 20);
  EXPECT_TRUE(true);
}

TEST(TestPascalToBar, Pa_Bar)
{
	double a = 101325;
	double resultConversion = Pascal_Bar(a);

	EXPECT_EQ(resultConversion, 1);
	EXPECT_TRUE(true);

}

TEST(TestBarToPascal, Bar_Pa)
{
	double a = 1;
	double resultConversion = Bar_Pascal(a);

	EXPECT_EQ(resultConversion, 101325);
	EXPECT_TRUE(true);
}

TEST(TestPsiToBar, Psi_bar)
{
	double a = 1;
	double resultConversion = Psi_Bar(a);

	EXPECT_EQ(resultConversion, 0.0689476);
	EXPECT_TRUE(true);
}