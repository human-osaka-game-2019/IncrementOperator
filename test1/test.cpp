#include "pch.h"
#include "Header.h"

TEST(TestCaseName1, TestName1) {
	int a = 0;
  EXPECT_EQ(1, ++a);
 
}

TEST(TestCaseName2, TestName2) {
	int a = 1;
	EXPECT_EQ(2, ++a);

}

TEST(TestCaseName3, TestName3) {
	int a = 3;
	EXPECT_EQ(4, ++a);

}

TEST(TestCaseName4, TestName4) {
	int a = 1;
	EXPECT_EQ(1, a++);

}

TEST(TestCaseName5, TestName5) {
	int a = 2;
	
	EXPECT_EQ(2, a++);

}

TEST(TestCaseName6, TestName6) {
	int a = 3;
	EXPECT_EQ(3, a++);

}