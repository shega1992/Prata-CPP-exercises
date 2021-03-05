#include <iostream>

int main()
{
	char ch;
	int count = 0;
	std::cout << "Your input: ";
	while ((ch = std::cin.peek()) != '$')
	{
		std::cin.get();
		count++;
	}
	std::cout << "number of characters up to the first $ in input: " << count << std::endl;
}



