#include <iostream>

#include "gtest/gtest.h"

#include "lc_914_xofakind.hpp"

TEST(test_lc_914_xofakind, test0)
{
	std::vector<int> input_ = {1,2,3,4,4,3,2,1};
	bool output_ = true;
	bool result_ = has_groups_sizex(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_914_xofakind, test1)
{
	std::vector<int> input_ = {1,1,1,2,2,2,3,3};
	bool output_ = false;
	bool result_ = has_groups_sizex(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_914_xofakind, test2)
{
	std::vector<int> input_ = {1};
	bool output_ = false;
	bool result_ = has_groups_sizex(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_914_xofakind, test3)
{
	std::vector<int> input_ = {1,1};
	bool output_ = true;
	bool result_ = has_groups_sizex(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_914_xofakind, test4)
{
	std::vector<int> input_ = {1,1,2,2,2,2};
	bool output_ = true;
	bool result_ = has_groups_sizex(input_);

	EXPECT_EQ(output_, result_);
}

