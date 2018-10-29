#include <iostream>

#include "gtest/gtest.h"

#include "lc_169_majority.hpp"

TEST(test_lc_169_majority, test0)
{
	std::vector<int> input_ = {3, 2, 3};
	int output_ = 3;
	int result_ = majority(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_169_majority, test1)
{
	std::vector<int> input_ = {2, 2, 1, 1, 1, 2, 2};
	int output_ = 2;
	int result_ = majority(input_);

	EXPECT_EQ(output_, result_);
}
