std::vector<int> & move_zeroes(std::vector<int> & nums)
{
	int last_ = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != 0)
		{
			int tmp_ = nums[i];
			nums[i] = nums[last_];
			nums[last_] = tmp_;

			last_++;
    }
	}

	return nums;
}
