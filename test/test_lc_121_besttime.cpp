#include <iostream>

#include "gtest/gtest.h"

#include "lc_121_besttime.hpp"

TEST(test_lc_121_besttime, test0)
{
	std::vector<int> input_{7, 1, 5, 3, 6, 4};
	int output_ = 5;
	int result_ = max_profit(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_121_besttime, test1)
{
	std::vector<int> input_{7, 6, 4, 3, 1};
	int output_ = 0;
	int result_ = max_profit(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_121_besttime, test2)
{
	std::vector<int> input_{7, 1, 5, 3, 6, 4};
	int output_ = 5;
	int result_ = max_profit_linear(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_121_besttime, test3)
{
	std::vector<int> input_{7, 6, 4, 3, 1};
	int output_ = 0;
	int result_ = max_profit_linear(input_);

	EXPECT_EQ(output_, result_);
}
