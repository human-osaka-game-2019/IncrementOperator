#include "pch.h"
#include "../Project1/Header.h"

TEST(TestCaseName, TestName1) {

	CoodinateX x(0);

	


  EXPECT_EQ(x++, CoodinateX(0));
}

TEST(TestCaseName, TestName2) {

	CoodinateX x(0);


	EXPECT_EQ(++x, CoodinateX(1));
}