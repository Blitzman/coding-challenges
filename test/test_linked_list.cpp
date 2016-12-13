#include <iostream>

#include "gtest/gtest.h"

#include "linked_list.hpp"

TEST(test_linkedlist, test0)
{
	LinkedList<int> l_;
	EXPECT_EQ(l_.to_string(), "Empty list...");
	l_.append_node(0);
	l_.append_node(1);
	l_.append_node(2);
	EXPECT_EQ(l_.to_string(), "0 1 2");
}

void test_c2_1()
{
	LinkedList<int> l_;
	l_.append_node(4);
	l_.append_node(2);
	l_.append_node(5);
	l_.append_node(2);
	l_.append_node(4);
	l_.append_node(8);
	l_.append_node(10);
	l_.append_node(4);
	std::cout << l_.to_string();
	c2_1(l_);
	std::cout << l_.to_string();

	LinkedList<int> l_2_;
	l_2_.append_node(4);
	l_2_.append_node(2);
	l_2_.append_node(5);
	l_2_.append_node(2);
	l_2_.append_node(4);
	l_2_.append_node(8);
	l_2_.append_node(10);
	l_2_.append_node(4);
	std::cout << l_2_.to_string();
	c2_1_nobuffer(l_2_);
	std::cout << l_2_.to_string();
}

void test_c2_2()
{
	LinkedList<int> l_;
	l_.append_node(4);
	l_.append_node(2);
	l_.append_node(5);
	l_.append_node(2);
	l_.append_node(4);
	l_.append_node(8);
	l_.append_node(10);
	l_.append_node(4);
	std::cout << l_.to_string();

	for (int i = 0; i < 10; ++i)
	{
		int pos_ = c2_2(l_, i);
		int value_ = l_.get_node(pos_)->m_value;
		std::cout << "k: " << i << " Position: " << pos_ << " Value:" << value_ << "\n";
	}
}

void test_c2_2_recursive()
{
	LinkedList<int> l_;
	l_.append_node(4);
	l_.append_node(2);
	l_.append_node(5);
	l_.append_node(2);
	l_.append_node(4);
	l_.append_node(8);
	l_.append_node(10);
	l_.append_node(4);
	std::cout << l_.to_string();

	for (int i = 0; i < 10; ++i)
	{
		int m_ = 0;
		int p_ = 0;

		int pos_ = c2_2_recursive(l_.m_root, i, m_, p_);
		int value_ = l_.get_node(pos_)->m_value;
		std::cout << "k: " << i << " Position: " << pos_ << " Value:" << value_ << "\n";
	}
}

void test_c2_4()
{
	LinkedList<int> l_;
	l_.append_node(4);
	l_.append_node(2);
	l_.append_node(5);
	l_.append_node(2);
	l_.append_node(4);
	l_.append_node(8);
	l_.append_node(10);
	l_.append_node(4);
	std::cout << l_.to_string();

	c2_4(l_, 5);
	std::cout << l_.to_string();

	c2_4(l_, 2);
	std::cout << l_.to_string();

	c2_4(l_, 10);
	std::cout << l_.to_string();

	LinkedList<int> l_2_;
	std::cout << l_2_.to_string();
	c2_4(l_2_, 5);
	std::cout << l_2_.to_string();
}

void test_c2_5()
{
	LinkedList<int> a_;
	a_.append_node(5);
	a_.append_node(9);
	a_.append_node(2);

	LinkedList<int> b_;
	b_.append_node(7);
	b_.append_node(1);
	b_.append_node(6);

	LinkedList<int> c_;

	std::cout << a_.to_string();
	std::cout << b_.to_string();
	std::cout << c_.to_string();

	c2_5(a_, b_, c_);

	std::cout << c_.to_string();
}

void test_c2_5_reverse()
{
	LinkedList<int> a_;
	a_.append_node(3);
	a_.append_node(9);
	a_.append_node(5);

	LinkedList<int> b_;
	b_.append_node(6);
	b_.append_node(1);
	b_.append_node(7);

	LinkedList<int> c_;

	std::cout << a_.to_string();
	std::cout << b_.to_string();
	std::cout << c_.to_string();

	c2_5_reverse_recursive(a_, b_, c_);

	std::cout << c_.to_string();
}

void test_c2_7()
{
	LinkedList<int> l_;
	l_.append_node(3);
	l_.append_node(9);
	l_.append_node(5);
	std::cout << l_.to_string();

	std::cout << c2_7(l_) << "\n";

	LinkedList<int> l_2_;
	l_2_.append_node(3);
	l_2_.append_node(9);
	l_2_.append_node(3);
	std::cout << l_2_.to_string();

	std::cout << c2_7(l_2_) << "\n";

	LinkedList<int> l_3_;
	l_3_.append_node(3);
	l_3_.append_node(9);
	l_3_.append_node(9);
	l_3_.append_node(3);
	std::cout << l_3_.to_string();

	std::cout << c2_7(l_3_) << "\n";
}


