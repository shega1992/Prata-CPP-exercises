#include <iostream>

template <typename T>
long double sum_values(T value) { return value; }

template <typename T, typename... Args>
long double sum_values(T value, Args... args)
{
	return sum_values(args...) + value;
}

int main()
{
	std::cout << "Result: " << sum_values(14, 1.5, 1.75, 15) << std::endl;
	return 0;
}


