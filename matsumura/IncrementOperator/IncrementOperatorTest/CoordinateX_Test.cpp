#include "pch.h"

#include "../IncrementOperator/CoordinateX.h"

TEST(CoordinateXTest, PostfixIncrementTest) {
	///////////////////////////////////////////
	// Arrange
	CoordinateX x(5);

	///////////////////////////////////////////
	// Act
	CoordinateX result = x++;

	///////////////////////////////////////////
	// Assert
	// 元のインスタンスのvalueがincrementされていること
	EXPECT_EQ(x.Value(), 6);

	// 戻り値で返されるインスタンスはincrement前の状態であること
	EXPECT_EQ(result.Value(), 5);
}

TEST(CoordinateXTest, PrefixIncrementTest) {
	///////////////////////////////////////////
	// Arrange
	CoordinateX x(5);

	///////////////////////////////////////////
	// Act
	CoordinateX result = ++x;

	///////////////////////////////////////////
	// Assert
	// 元のインスタンスのvalueがincrementされていること
	EXPECT_EQ(x.Value(), 6);

	// 戻り値で返されるインスタンスもincrement後の状態であること
	EXPECT_EQ(result.Value(), 6);
}
