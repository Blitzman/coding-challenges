#include <iostream>

#include "gtest/gtest.h"

#include "lc_917_reverseonlyletters.hpp"

TEST(test_lc_917_reverseonlyletters, test0)
{
	std::string input_ = "ab-cd";
	std::string output_ = "dc-ba";
	std::string result_ = reverse_only_letters(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_917_reverseonlyletters, test1)
{
	std::string input_ = "a-bC-dEf-ghIj";
	std::string output_ = "j-Ih-gfE-dCba";
	std::string result_ = reverse_only_letters(input_);

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_917_reverseonlyletters, test2)
{
	std::string input_ = "Test1ng-Leet=code-Q!";
	std::string output_ = "Qedo1ct-eeLg=ntse-T!";
	std::string result_ = reverse_only_letters(input_);

	EXPECT_EQ(output_, result_);
}
