#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>

std::vector<int> Lotto(int, int);

int main()
{
	std::srand(std::time(NULL));

	std::vector<int> winners;
	winners = Lotto(51, 6);
	copy(winners.begin(), winners.end(), std::ostream_iterator<int, char>(std::cout, " "));
	std::cout << std::endl;

	return 0;
}

std::vector<int> Lotto(int spots, int selected)
{
	std::vector<int> temp(spots);
	for (int i = 0; i < spots; i++)
		temp[i] = i + 1;

	random_shuffle(temp.begin(), temp.end());
	temp.erase(temp.begin() + selected, temp.end());

	return temp;
}
