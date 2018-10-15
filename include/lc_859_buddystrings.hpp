bool buddy_strings(std::string & rA, std::string & rB)
{
	if (rA.length() != rB.length())
		return false;
        
	std::vector<int> diff_pos_;
        
  for (int i = 0; i < rA.length(); ++i)
  {
		if (rA[i] != rB[i])
			diff_pos_.push_back(i);
            
    if (diff_pos_.size() > 2)
      break;
  }
        
  if (diff_pos_.size() == 0)
  {
		std::set<char> characters_;
            
    for (int i = 0; i < rA.length(); ++i)
			if(characters_.find(rA[i]) == characters_.end())
				characters_.insert(rA[i]);
			else
				return true;

		return false;
  }
	else if (diff_pos_.size() == 2 && rB[diff_pos_[0]] == rA[diff_pos_[1]] && rB[diff_pos_[1]] == rA[diff_pos_[0]])
		return true;
	else
		return false;
}
