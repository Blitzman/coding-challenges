int majority(std::vector<int> & nums)
{
	int count_ = 0;
	int candidate_ = 0;

	for (int n : nums)
	{
		if (count_ == 0)
			candidate_ = n;

		if (candidate_ == n)
			count_ += 1;
		else
			count_ -= 1;
	}

	return candidate_;
}
