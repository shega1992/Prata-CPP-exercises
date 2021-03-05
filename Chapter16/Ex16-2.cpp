#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

void string_checking(std::string &);
bool palindrome(const std::string &);

int main()
{
	std::string text;
	std::cout << "Enter your string: ";
	getline(std::cin, text);

	string_checking(text);

	(palindrome(text)) ? std::cout << "String is a palindrome\n" : std::cout << "String is not a palindrome\n";

	return 0;
}

void string_checking(std::string & st)
{
	std::string::iterator it = st.begin();
	while (it != st.end())
	{
		if (!isalpha(*it))
			st.erase(it);
		else
		{
			*it = std::tolower(*it);
			it++;
		}
	}
}

bool palindrome(const std::string & st)
{
	std::string temp = st;
	reverse(temp.begin(), temp.end());
	return st == temp;
}
