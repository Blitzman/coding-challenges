#include <stack>

std::string reverse_only_letters(std::string s)
{
	std::stack<char> letter_stack_;

	for (char c : s)
		if (isalpha(c))
			letter_stack_.push(c);
        

	for (int i = 0; i < s.length(); ++i)
	{
		if (isalpha(s[i]))
		{
			s[i] = letter_stack_.top();
			letter_stack_.pop();
		}
  }

	return s;
}
