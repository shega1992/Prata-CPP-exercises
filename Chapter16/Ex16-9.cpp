#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
	srand(time(NULL));
	const int Size = 100000;

	std::vector<int> vi0(Size);
	for (auto x : vi0) std::rand();
	std::vector<int> vi(Size);
	copy(vi0.begin(), vi0.end(), vi.begin());
	std::list<int> li(Size);
	copy(vi0.begin(), vi0.end(), li.begin());

	clock_t start = clock();
	sort(vi.begin(), vi.end());
	clock_t end = clock();
	std::cout << "Time for vector's sorting: " << (double)(end - start) / CLOCKS_PER_SEC << std::endl;

	start = clock();
	li.sort();
	end = clock();
	std::cout << "Time for list's sorting: " << (double)(end - start) / CLOCKS_PER_SEC << std::endl;

	copy(vi0.begin(), vi0.end(), li.begin());
	start = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	std::cout << "Time for combined operation of copying list to vector, sorting vector, and copying the result back to list: "
		      << (double)(end - start) / CLOCKS_PER_SEC << std::endl;

	return 0;
}


