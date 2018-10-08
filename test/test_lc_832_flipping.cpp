#include <iostream>

#include "gtest/gtest.h"

#include "lc_832_flipping.hpp"

TEST(test_lc_832_flipping, test0)
{
	std::vector<std::vector<int>> input_{{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
	std::vector<std::vector<int>> output_{{1, 0, 0}, {0, 1, 0}, {1, 1, 1}};
	std::vector<std::vector<int>> result_ = flip_and_invert(input_);
	EXPECT_EQ(output_, result_);
}

TEST(test_lc_832_flipping, test1)
{
	std::vector<std::vector<int>> input_{{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};
	std::vector<std::vector<int>> output_{{1, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 0, 1}, {1, 0, 1, 0}};
	std::vector<std::vector<int>> result_ = flip_and_invert(input_);
	EXPECT_EQ(output_, result_);
}
