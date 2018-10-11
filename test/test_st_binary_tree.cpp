#include <iostream>

#include "gtest/gtest.h"

#include "st_binary_tree.hpp"

TEST(test_st_binary_tree, test0)
{
	BinaryTree bt_;
	EXPECT_EQ(bt_.to_string(), "N");
}

TEST(test_st_binary_tree, test1)
{
	BinaryTree bt_;
	bt_.insert(4);

	EXPECT_EQ(bt_.to_string(), "4,N,N");

	bt_.insert(2);
	EXPECT_EQ(bt_.to_string(), "4,2,N,N,N");

	bt_.insert(5);
	EXPECT_EQ(bt_.to_string(), "4,2,N,N,5,N,N");
}
