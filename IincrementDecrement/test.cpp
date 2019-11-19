#include "pch.h"
#include "../Project1/Header.h"

TEST(TestCaseName, Postfix) {
	//Arange
	CoodinateX a(0);
	//Act
	CoodinateX b = a++;

	//Assert
	EXPECT_EQ(a.Value(), 1);
	EXPECT_EQ(b.Value(), 0);
}

TEST(TestCaseName, Prefix) {

	//Arange
	CoodinateX a(0);
	//Act
	CoodinateX b = ++a;

	//Assert
	EXPECT_EQ(a.Value(), 1);
	EXPECT_EQ(b.Value(), 1);
}