#include <iostream>

#include "gtest/gtest.h"

#include "lc_73_setmatrixzeros.hpp"

TEST(test_lc_73_setmatrixzeros, test0)
{
	std::vector<std::vector<int>> input_ = {{1, 1, 1},{1, 0, 1},{1, 1, 1}};
	std::vector<std::vector<int>> output_ = {{1, 0, 1},{0, 0, 0},{1, 0, 1}};
	std::vector<std::vector<int>> result_ = set_zeros(input_);
	EXPECT_EQ(output_, result_);
}

TEST(test_lc_73_setmatrixzeros, test1)
{
	std::vector<std::vector<int>> input_ = {{0, 1, 2, 0},{3, 4, 5, 2},{1, 3, 1, 5}};
	std::vector<std::vector<int>> output_ = {{0, 0, 0, 0},{0, 4, 5, 0},{0, 3, 1, 0}};
	std::vector<std::vector<int>> result_ = set_zeros(input_);
	EXPECT_EQ(output_, result_);
}
