#include "pch.h"
#include"../Increment/CoordinateX.h"
int a = 0;
TEST(CoordinateX_Test, Text_1)
{
	
	EXPECT_EQ(0, a++);
}

TEST(CoordinateX_Test, Text_2)
{

	EXPECT_EQ(1, ++a);

}