#include <iostream>
#include <string>
#include <algorithm>

template <typename T>
int reduce(T ar[], int n);
template <typename T>
void Show(T ar[], int n);

int main()
{
	long arr[] = { 1,3,5,5,7,3,8,9,0 };
	std::string arr2[] = { "Sam","Mike", "Alex", "Sam", "Victor", "Luke" };

	std::cout << "Your array of long: ";
	Show(arr, sizeof arr / sizeof(long));
	std::cout << "Your array of string: ";
	Show(arr2, sizeof arr2 / sizeof(std::string));


	int size = reduce(arr, sizeof arr / sizeof(long));
	std::cout << "Your array of long after unique: ";
	Show(arr, size);

	size = reduce(arr2, sizeof arr2 / sizeof(std::string));
	std::cout << "Your array of string after unique: ";
	Show(arr2, size);

	return 0;
}

template <typename T>
int reduce(T ar[], int n)
{
	std::sort(ar, ar + n);
	std::cout << "Your array after sorting: ";
	Show(ar, n);
	T * end = std::unique(ar, ar + n);

	return end - ar;
}

template <typename T>
void Show(T ar[], int n)
{
	for (int i = 0; i < n; i++)
		std::cout << ar[i] << ' ';
	std::cout << '\n';
}
