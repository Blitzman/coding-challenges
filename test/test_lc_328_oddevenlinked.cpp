#include <iostream>

#include "gtest/gtest.h"

#include "lc_328_oddevenlinked.hpp"

TEST(test_lc_328_oddevenlinked, test0)
{
	std::vector<int> input_{1, 2, 3, 4, 5};
	std::vector<int> output_{1, 3, 5, 2, 4};

	std::vector<int> result_ = linked_to_vector(odd_even_list(vector_to_linked(input_)));

	EXPECT_EQ(output_, result_);
}

TEST(test_lc_328_oddevenlinked, test1)
{
	std::vector<int> input_{2, 1, 3, 5, 6, 4, 7};
	std::vector<int> output_{2, 3, 6, 7, 1, 5, 4};

	std::vector<int> result_ = linked_to_vector(odd_even_list(vector_to_linked(input_)));

	EXPECT_EQ(output_, result_);
}
