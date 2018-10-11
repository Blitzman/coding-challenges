int max_profit(std::vector<int> & prices)
{
	int max_profit_ = 0;

	for (int i = 0; i < prices.size(); ++i)
	{
		for (int j = i+1; j < prices.size(); ++j)
		{
			int profit_ = prices[j] - prices[i];

			if (profit_ > max_profit_)
				max_profit_ = profit_;
		}
	}

	return max_profit_;
}

int max_profit_linear(std::vector<int> & prices)
{
	int max_profit_ = 0;
	int min_price_ = std::numeric_limits<int>::max();

	for (int i = 0; i < prices.size(); ++i)
	{
		if (prices[i] < min_price_)
			min_price_ = prices[i];
		else if (prices[i] - min_price_ > max_profit_)
			max_profit_ = prices[i] - min_price_;
	}

	return max_profit_;
}
