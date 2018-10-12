void set_row(std::vector<std::vector<int>> & rMatrix, const int & crRow, const int & crModified)
{
		for (int i = 0; i < rMatrix[crRow].size(); ++i)
			if (rMatrix[crRow][i] != 0)
				rMatrix[crRow][i] = crModified;
}

void set_col(std::vector<std::vector<int>> & rMatrix, const int & crCol, const int & crModified)
{
		for (int i = 0; i < rMatrix.size(); ++i)
			if (rMatrix[i][crCol] != 0)
				rMatrix[i][crCol] = crModified;
}

std::vector<std::vector<int>> set_zeros(std::vector<std::vector<int>> & rMatrix)
{
	const int k_modified_ = -16384;

	for (int i = 0; i < rMatrix.size(); ++i)
	{
		for (int j = 0; j < rMatrix[i].size(); ++j)
		{
			if (rMatrix[i][j] == 0)
			{
				set_row(rMatrix, i, k_modified_);
				set_col(rMatrix, j, k_modified_);
			}	
		}
	}

	for (int i = 0; i < rMatrix.size(); ++i)
		for (int j = 0; j < rMatrix[i].size(); ++j)
			if (rMatrix[i][j] == k_modified_)
				rMatrix[i][j] = 0;

	return rMatrix;
}
