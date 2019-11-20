#include "pch.h"
#include "../Increment/Increment.h"

TEST(TestCaseName, PrifixIncrement)
{
	//Arrange
	CoordinateX a(5);

	//Act
	CoordinateX b = ++a;

	//Assert
	EXPECT_EQ(a.Value(), 6);
	EXPECT_EQ(b.Value(), 6);
}

TEST(TestCaseName, PostfixIncrement)
{
	//Arrange
	CoordinateX a(5);

	//Act
	CoordinateX b = a++;

	//Assert
	EXPECT_EQ(a.Value(), 6);
	EXPECT_EQ(b.Value(), 5);
}
