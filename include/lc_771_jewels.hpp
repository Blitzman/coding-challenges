#include <set>

int num_jewels_in_stones(std::string j, std::string s)
{
	int jewels_ = 0;

	std::set<char> jewel_types_;
	for (char jewel: j)
		jewel_types_.insert(jewel);

	for (char stone: s)
		if (jewel_types_.find(stone) != jewel_types_.end())
			++jewels_;

	return jewels_;
}
