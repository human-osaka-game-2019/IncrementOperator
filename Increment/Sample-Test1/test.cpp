#include "pch.h"
#include"../Increment/CoordinateX.h"

int a = 0;

TEST(CoordinateX_Test, Text_1)
{
	int a = 0;
	EXPECT_EQ(0,a++);
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

TEST(CoordinateX_Test, Text_6)
{

	CoordinateX x(0);

	CoordinateX xx(0);

	xx = x++;

	EXPECT_EQ(0,xx.Value());

}

TEST(CoordinateX_Test, Text_7)
{

	CoordinateX x(4);

	CoordinateX xx(0);

	xx = x++;

	EXPECT_EQ(4, xx.Value());

}

TEST(CoordinateX_Test, Text_8)
{

	CoordinateX x(5);

	CoordinateX xx(0);

	xx = ++x;

	EXPECT_EQ(6, xx.Value());

}

TEST(CoordinateX_Test, Text_9)
{

	CoordinateX x(3);

	CoordinateX xx(0);

	xx = ++x;

	EXPECT_EQ(4, xx.Value());

}