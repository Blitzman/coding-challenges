int get_sum(int a, int b)
{
	if (b == 0)
		return a;
	else
		return get_sum(a ^ b, (a & b) << 1);
}

int get_sum_iterative(int a, int b)
{
	while (b != 0)
	{
		int carry_ = a & b;
		a = a ^ b;
		b = carry_ << 1;
	}

	return a;
}
