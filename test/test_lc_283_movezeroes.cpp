#include <iostream>

#include "gtest/gtest.h"

#include "lc_283_movezeroes.hpp"

TEST(test_lc_283_movezeroes, test0)
{
	std::vector<int> input_ = {0, 1, 0, 3, 12};
	std::vector<int> output_ = {1, 3, 12, 0, 0};
	std::vector<int> result_ = move_zeroes(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_283_movezeroes, test1)
{
	std::vector<int> input_ = {0, 4, 0, 0, 0, 5, 1, 3, 10, 0, 1, 3, 4, 0, 0};
	std::vector<int> output_ = {4, 5, 1, 3, 10, 1, 3, 4, 0, 0, 0, 0, 0, 0, 0};
	std::vector<int> result_ = move_zeroes(input_);

	EXPECT_EQ(output_, result_);
}
