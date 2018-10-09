#include <iostream>

#include "gtest/gtest.h"

#include "lc_371_sumintegers.hpp"

TEST(test_lc_371_sumintegers, test0)
{
	int input_a_ = 1;
	int input_b_ = 2;
	int output_ = 3;
	int result_ = get_sum(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_371_sumintegers, test1)
{
	int input_a_ = -2;
	int input_b_ = 3;
	int output_ = 1;
	int result_ = get_sum(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_371_sumintegers, test2)
{
	int input_a_ = 1;
	int input_b_ = 2;
	int output_ = 3;
	int result_ = get_sum_iterative(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_371_sumintegers, test3)
{
	int input_a_ = -2;
	int input_b_ = 3;
	int output_ = 1;
	int result_ = get_sum_iterative(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}
