#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

void string_checking(std::string &);
bool palindrome(const std::string &);

int main()
{
	std::string text;
	std::cout << "Enter your string in lowercase: ";
	getline(std::cin, text);

	string_checking(text);

	(palindrome(text)) ? std::cout << "String is a palindrome\n" : std::cout << "String is not a palindrome\n";

	return 0;
}

void string_checking(std::string & st)
{
	unsigned int i = 0;
	int ch;
	while(i < st.size())
	{
		ch = st[i++];
		if (!islower(ch))
		{
			std::cout << "Incorrect input\n"
				<< "Enter your string in lowercase: ";
			getline(std::cin, st);
			i = 0;
		}
	}
}

bool palindrome(const std::string & st)
{
	std::string temp = st;
	reverse(temp.begin(), temp.end());
	return st == temp;
}