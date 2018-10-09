int reverse(int x)
{
	int rev_ = 0;

	while (x != 0)
	{
		// Pop the last digit
		int pop_ = x % 10;
		x /= 10;

		// Check if integer overflows or underflows
		if (rev_ > std::numeric_limits<int>::max() / 10 || (rev_ == std::numeric_limits<int>::max() / 10 && pop_ > 7))
			return 0;
		if (rev_ < std::numeric_limits<int>::min() / 10 || (rev_ == std::numeric_limits<int>::min() / 10 && pop_ < -8))
			return 0;

		// Accumulate reversed integer
		rev_ = 10 * rev_ + pop_;
	}

	return rev_;
}
