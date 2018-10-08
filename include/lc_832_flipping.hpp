std::vector<std::vector<int>> flip_and_invert(std::vector<std::vector<int>> & input)
{
	std::vector<std::vector<int>> result_;

	for (int i = 0; i < input.size(); ++i)
	{
		const int row_size_ = input[i].size();
		std::vector<int> row_(row_size_);

		for (int j = 0; j < (row_size_ + 1) / 2; ++j)
		{
			row_[j] = input[i][row_size_ - j -1] ^ 1;
			row_[row_size_ - j - 1] = input[i][j] ^ 1;
		}

		result_.push_back(row_);
	}

	return result_;
}
