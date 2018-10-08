#include <iostream>

#include "gtest/gtest.h"

#include "lc_771_jewels.hpp"

TEST(test_lc_771_jewels, test0)
{
	std::string j_ = "aA";
	std::string s_ = "aAAbbbb";

	int jewels_ = num_jewels_in_stones(j_, s_);

	EXPECT_EQ(jewels_, 3);
}

TEST(test_lc_771_jewels, test1)
{
	std::string j_ = "z";
	std::string s_ = "ZZ";

	int jewels_ = num_jewels_in_stones(j_, s_);

	EXPECT_EQ(jewels_, 0);
}
