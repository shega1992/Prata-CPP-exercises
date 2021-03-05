#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);
void Show(long ar[], int n);

int main()
{
	const int Size = 10;
	long arr[Size];

	for (int i = 0; i < Size; i++)
	{
		std::cout << "Enter the value for " << i + 1 << "element: ";
		std::cin >> arr[i];
	}
	std::cout << "Your array: "; 
	Show(arr, Size);
	
	int size = reduce(arr, Size);
	std::cout << "Your array after unique: ";
	Show(arr, size);
	
	return 0;
}

int reduce(long ar[], int n)
{
	std::sort(ar, ar + n);
	std::cout << "Your array after sorting: ";
	Show(ar, n);
	long * end = std::unique(ar, ar + n);
	
	return end - ar;
}


void Show(long ar[], int n)
{
	for (int i = 0; i < n; i++)
		std::cout << ar[i] << ' ';
	std::cout << '\n';
}
