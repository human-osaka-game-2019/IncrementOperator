#include "pch.h"

#include "../IncrementOperator/CoordinateX.h"

TEST(PostfixIncrement, OperatorTest) {
	CoordinateX x(0);
	CoordinateX y(0);
	
	x = y++;
	ASSERT_EQ(x.GetValue(), 0);
}

TEST(PrefixIncrement, OperatorTest) {
	CoordinateX x(0);
	CoordinateX y(0);
	
	x = ++y;
	ASSERT_EQ(x.GetValue(), 1);
}
