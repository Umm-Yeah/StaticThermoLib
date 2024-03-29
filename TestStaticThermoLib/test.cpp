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

TEST(TestBarToPsi, bar_Psi)
{
	double bar = 1;
	double resultConversion = Bar_Psi(bar);

	EXPECT_EQ(resultConversion, 14.5038);
	EXPECT_TRUE(true);
}

TEST(TestPaToPsi, Pa_Psi)
{
	double pa = 1;
	double resultConversion = Pa_Psi(pa);

	EXPECT_EQ(resultConversion, 0.000145038);
	EXPECT_TRUE(true);
}

TEST(TestPsiToPa, Psi_Pa)
{
	double psi = 1;
	double resultConversion = Psi_Pa(psi);

	EXPECT_EQ(resultConversion, 6894.76);
	EXPECT_TRUE(true);
}