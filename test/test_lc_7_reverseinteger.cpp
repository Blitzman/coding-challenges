#include <iostream>

#include "gtest/gtest.h"

#include "lc_7_reverseinteger.hpp"

TEST(test_lc_7_reverseinteger, test0)
{
	int input_ = 123;
	int output_ = 321;
	int result_ = reverse(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_7_reverseinteger, test1)
{
	int input_ = -123;
	int output_ = -321;
	int result_ = reverse(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_7_reverseinteger, test2)
{
	int input_ = 120;
	int output_ = 21;
	int result_ = reverse(input_);

	EXPECT_EQ(output_, result_);
}
