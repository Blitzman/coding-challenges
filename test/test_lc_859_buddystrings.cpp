#include <iostream>

#include "gtest/gtest.h"

#include "lc_859_buddystrings.hpp"

TEST(test_lc_859_buddystrings, test0)
{
	std::string input_a_ = "ab";
	std::string input_b_ = "ba";
	bool output_ = true;
	bool result_ = buddy_strings(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_859_buddystrings, test1)
{
	std::string input_a_ = "ab";
	std::string input_b_ = "ab";
	bool output_ = false;
	bool result_ = buddy_strings(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_859_buddystrings, test2)
{
	std::string input_a_ = "aa";
	std::string input_b_ = "aa";
	bool output_ = true;
	bool result_ = buddy_strings(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_859_buddystrings, test3)
{
	std::string input_a_ = "aaaaaaabc";
	std::string input_b_ = "aaaaaaacb";
	bool output_ = true;
	bool result_ = buddy_strings(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_859_buddystrings, test4)
{
	std::string input_a_ = "";
	std::string input_b_ = "aa";
	bool output_ = false;
	bool result_ = buddy_strings(input_a_, input_b_);

	EXPECT_EQ(output_, result_);
}
