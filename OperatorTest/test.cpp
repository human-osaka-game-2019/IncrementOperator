#include "pch.h"

#include "../IncrementOperator/CoordinateX.h"

TEST(PostfixIncrement, OperatorTest) {
	CoordinateX x(0);
	for (int i = 1; i < 10; ++i) {
		x++;
		EXPECT_EQ(x.GetValue(), i);
	}
}

TEST(PrefixIncrement, OperatorTest) {
	CoordinateX x(0);
	for (int i = 1; i < 10; ++i) {
		++x;
		EXPECT_EQ(x.GetValue(), i);
	}
}