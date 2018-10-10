struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

std::vector<int> linked_to_vector(ListNode* head)
{
	std::vector<int> vec_;

	while(head)
	{
		vec_.push_back(head->val);
		head = head->next;
	}

	return vec_;
}

ListNode* vector_to_linked(std::vector<int> vec)
{
	ListNode* head_ = new ListNode(-1);

	ListNode* curr_ = head_;

	for (int i : vec)
	{
		curr_->next = new ListNode(i);
		curr_ = curr_->next;
	}

	return head_->next;
}

ListNode* odd_even_list(ListNode* head)
{
	if (!head)
		return NULL;

	ListNode* odd_ = head;
	ListNode* even_ = head->next;
	ListNode* even_head_ = even_;

	while (even_ && even_->next)
	{
		odd_->next = even_->next;
		odd_ = odd_->next;
		even_->next = odd_->next;
		even_ = even_->next;
	}

	odd_->next = even_head_;
	return head;
}
