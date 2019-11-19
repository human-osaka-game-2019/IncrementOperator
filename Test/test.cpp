#include "pch.h"
#include"../Test_Increment/Header.h"

TEST(CoordinateXTest1, Test1) 
{

	CoordinateX coordinate_x(4);

	CoordinateX result = ++coordinate_x;
	
	EXPECT_EQ(coordinate_x.Value(), 5);
	
	EXPECT_EQ(result.Value(), 5);
}

TEST(CoordinateXTest2, Test2) 
{
	CoordinateX coordinate_x(4);

	CoordinateX result = coordinate_x++;

	EXPECT_EQ(coordinate_x.Value(), 5);

	EXPECT_EQ(result.Value(), 4);
}

TEST(CoordinateXTest3, Test3) 
{

	CoordinateX coordinate_x(10);

	CoordinateX result = ++coordinate_x;

	EXPECT_EQ(coordinate_x.Value(), 11);

	EXPECT_EQ(result.Value(), 11);

}

TEST(CoordinateXTest4, Test4) 
{

	CoordinateX coordinate_x(10);

	CoordinateX result = coordinate_x++;

	EXPECT_EQ(coordinate_x.Value(), 11);

	EXPECT_EQ(result.Value(), 10);

}
