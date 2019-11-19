#include "pch.h"
#include"../Increment/CoordinateX.h"

TEST(CoordinateX_Test, Text_1)
{
	int a = 0;
	EXPECT_EQ(0, a++);
}

TEST(CoordinateX_Test, Text_2)
{
	int a = 0;
	EXPECT_EQ(1, ++a);

}

TEST(CoordinateX_Test, Text_3)
{
	int a = 3;
	EXPECT_EQ(4, ++a);

}

TEST(CoordinateX_Test, Text_4)
{
	int a = 3;
	EXPECT_EQ(3, a++);

}

TEST(CoordinateX_Test, Text_5)
{
	int a = 6;
	EXPECT_EQ(7, ++a);

}
