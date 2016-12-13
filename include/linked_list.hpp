#ifndef LINKED_LIST_HPP_
#define LINKED_LIST_HPP_

#include <unordered_set>

template <class T>
class LinkedListNode
{
public:
	T m_value;
	LinkedListNode* m_next;
};

template <class T>
class LinkedList
{
public:
	int m_length;
	LinkedListNode<T>* m_root;

	LinkedList()
	{
		m_length = 0;
		m_root = nullptr;
	}

	~LinkedList()
	{
		LinkedListNode<T>* p_ = m_root;
		
		while (p_)
		{
			LinkedListNode<T>* q_ = p_;
			p_ = q_->m_next;
			if (q_)
				delete q_;
		}

		m_length = 0;
	}

	LinkedListNode<T>* get_node(const int & crPosition)
	{
		LinkedListNode<T>* n_ = m_root;

		for (int i = 0; i < crPosition && n_; ++i)
			n_ = n_->m_next;

		return n_;
	}

	void append_node(const T & crValue)
	{
		LinkedListNode<T>* new_node_ = new LinkedListNode<T>();
		new_node_->m_value = crValue;

		if (!m_root)
			m_root = new_node_;
		else
		{
			LinkedListNode<T>* p_ = m_root;
			
			while (p_->m_next)
				p_ = p_->m_next;

			p_->m_next = new_node_;
		}

		m_length++;
	}

	void append_node(LinkedListNode<T>* pNode)
	{
		LinkedListNode<T>* p_ = m_root;

		if (!m_root)
			m_root = pNode;
		else
		{
			while (p_->m_next)
				p_ = p_->m_next;

			p_->m_next = pNode;
		}

		m_length++;
	}

	void delete_node(const int & crPosition)
	{

	}

	std::string to_string()
	{
		std::string str_ = "";

		if (!m_root)
			str_ += "Empty list...";
		else
		{
			LinkedListNode<T>* p_ = m_root;
			while (p_)
			{
				str_ += std::to_string(p_->m_value) + " ";
				p_ = p_->m_next;
			}

			str_.pop_back();
		}

		return str_;
	}
};

template <class T>
void c2_1(LinkedList<T> & rList)
{
	std::unordered_set<T> hs_;

	LinkedListNode<T>* p_ = rList.m_root;
	LinkedListNode<T>* q_ = nullptr;

	while (p_)
	{
		if (hs_.find(p_->m_value) != hs_.end())
		{
			q_->m_next = p_->m_next;
			delete p_;
			p_ = q_->m_next;
			
		}
		else
		{
			hs_.insert(p_->m_value);
			q_ = p_;
			p_ = p_->m_next;
		}
	}
}

template <class T>
void c2_1_nobuffer(LinkedList<T> & rList)
{
	LinkedListNode<T>* p_ = rList.m_root;

	while (p_)
	{
		T value_ = p_->m_value;
		LinkedListNode<T>* p_p_ = p_->m_next;
		LinkedListNode<T>* p_q_ = p_;

		while (p_p_)
		{
			if (p_p_->m_value == value_)
			{
				p_q_->m_next = p_p_->m_next;
				delete p_p_;
				p_p_ = p_q_->m_next;
			}
			else
			{
				p_q_ = p_p_;
				p_p_ = p_p_->m_next;
			}
		}

		p_ = p_->m_next;
	}
}

template <class T>
int c2_2(LinkedList<T> & rList, const int & crK)
{
	LinkedListNode<T>* p_ = rList.m_root;
	LinkedListNode<T>* q_ = p_;

	for (int i = 0; i < crK; ++i)
		if (p_)
			p_ = p_->m_next;

	int pos_ = -1;

	while (p_)
	{
		p_ = p_->m_next;
		q_ = q_->m_next;
		pos_++;
	}

	return pos_;
}

template <class T>
int c2_2_recursive(LinkedListNode<T>* pNode, const int & crK, int & i, int & l)
{
	if (!pNode)
		return -1;

	l++;

	int pos_ = c2_2_recursive(pNode->m_next, crK, i, l);

	i++;

	if (crK == i -1)
		return l - i;
	
	return pos_;
}

template <class T>
void c2_4(LinkedList<T> & pList, const T & crValue)
{
	LinkedListNode<T>* p_ = pList.m_root;

	LinkedListNode<T>* l_ = nullptr;
	LinkedListNode<T>* r_ = nullptr;

	LinkedListNode<T>* l_tmp_ = nullptr;
	LinkedListNode<T>* r_tmp_ = nullptr;

	while (p_)
	{
		if (p_->m_value < crValue)
		{
			if (!l_)
			{
				l_ = p_;
				l_tmp_ = p_;
			}
			else
			{
				l_tmp_->m_next = p_;
				l_tmp_ = p_;
			}
		}
		else
		{
			if (!r_)
			{
				r_ = p_;
				r_tmp_ = p_;
			}
			else
			{
				r_tmp_->m_next = p_;
				r_tmp_ = p_;
			}
		}

		p_ = p_->m_next;
	}

	if (r_tmp_)
		r_tmp_->m_next = nullptr;

	if (l_tmp_)
	{
		l_tmp_->m_next = r_;
		pList.m_root = l_;
	}
	else
	{
		pList.m_root = r_;
	}
}

template <class T>
T list_to_number(const LinkedList<T> & crA)
{
	T a_ = 0;

	LinkedListNode<T>* p_a_ = crA.m_root;
	int i = 0;
	while (p_a_)
	{
		a_ += p_a_->m_value * pow(10.0, i++);
		p_a_ = p_a_->m_next;
	}

	return a_;
}

template <class T>
void c2_5(LinkedList<T> & rA, LinkedList<T> & rB, LinkedList<T> & rResult)
{
	T a_ = list_to_number(rA);
	T b_ = list_to_number(rB);
	T c_ = a_ + b_;
	
	while (c_ > 0)
	{
		int digit_ = c_ % 10;
		rResult.append_node(digit_);
		c_ = c_ / 10;
	}
}

template <class T>
void pad_list(LinkedList<T> & rList, const T & crValue)
{
	LinkedListNode<T>* pad_ = new LinkedListNode<T>();
	pad_->m_value = crValue;
	pad_->m_next = rList.m_root;
	rList.m_root = pad_;
	rList.m_length++;
}

template <class T>
T sum_list_reverse_recursive(LinkedListNode<T>* pNodeA, LinkedListNode<T>* pNodeB, LinkedList<T> & rList)
{
	if (!pNodeA || !pNodeB)
		return 0;

	LinkedListNode<T>* node_ = new LinkedListNode<T>();
	rList.append_node(node_);

	T carry_ = sum_list_reverse_recursive(pNodeA->m_next, pNodeB->m_next, rList);

	T sum_ = pNodeA->m_value + pNodeB->m_value + carry_;
	T digit_ = sum_ % 10;
	T carry_up_ = sum_ / 10;

	node_->m_value = digit_;

	return carry_up_;
}

template <class T>
void c2_5_reverse_recursive(LinkedList<T> & rA, LinkedList<T> & rB, LinkedList<T> & rResult)
{
	while (rA.m_length > rB.m_length)
		pad_list(rB, 0);
	while (rB.m_length < rA.m_length)
		pad_list(rA, 0);

	T carry_ = sum_list_reverse_recursive(rA.m_root, rB.m_root, rResult);

	if (carry_ > 0)
		pad_list(rResult, carry_);
}

template <class T>
void reverse_list(LinkedListNode<T>* pNode, LinkedList<T> & rResult)
{
	if (!pNode)
		return;

	reverse_list(pNode->m_next, rResult);

	rResult.append_node(pNode->m_value);
}

template <class T>
bool c2_7(const LinkedList<T> & rList)
{
	LinkedList<T> reversed_list_;
	reverse_list(rList.m_root, reversed_list_);

	LinkedListNode<T>* p_ = rList.m_root;
	LinkedListNode<T>* q_ = reversed_list_.m_root;

	while (p_ && q_)
	{
		if (p_->m_value != q_->m_value)
			return false;

		p_ = p_->m_next;
		q_ = q_->m_next;
	}

	if (p_ != q_)
		return false;

	return true; 
}

#endif
