#include <unordered_map>

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	return gcd(b, a % b);
}

bool has_groups_sizex(std::vector<int>& deck) 
{
	// Empty deck has no groups
  if (deck.empty())
		return false;
        
  // Only one card can't make a group X=> 2
  if (deck.size() == 1)
		return false;
        
  std::unordered_map<int, int> kind_count_;
        
  // Get counts per kind
  for (int card : deck)
  {
		if (kind_count_.find(card) == kind_count_.end())
			kind_count_[card] = 0;
            
    kind_count_[card] = kind_count_[card] + 1;
  }
        
  // Check if all kinds have the same count
  int gcd_ = kind_count_.begin()->second;
  for (auto it = ++kind_count_.begin(); it != kind_count_.end(); ++it)
		gcd_ = gcd(gcd_, it->second);
        
  if (gcd_ >= 2)
		return true;
  else
		return false;
}
