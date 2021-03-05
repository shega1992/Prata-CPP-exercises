#include <iostream>
#include <list>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

typedef std::list <std::string> List;
typedef std::set <std::string> Set;

void output(const std::string & s) { std::cout << s << " "; }

int main()
{
	List Mat;
	List Pat;
	std::string temp;

	std::cout << "enter a list of Mat's friends('quit' to quit): ";
	while (std::cin >> temp && temp != "quit")
		Mat.push_back(temp);

	std::cout << "enter a list of Pat's friends('quit' to quit): ";
	while (std::cin >> temp && temp != "quit")
		Pat.push_back(temp);

	Mat.sort();
	std::cout << "Mat's list: ";
	for_each(Mat.begin(), Mat.end(), output);
	std::cout << std::endl;

	Pat.sort();
	std::cout << "Pat's list: ";
	for_each(Pat.begin(), Pat.end(), output);
	std::cout << std::endl;

	Set Mat_and_Pat;
	Mat_and_Pat.insert(Mat.begin(), Mat.end());
	Mat_and_Pat.insert(Pat.begin(), Pat.end());
	std::cout << "Common list of friends: ";
	for_each(Mat_and_Pat.begin(), Mat_and_Pat.end(), output);
	std::cout << std::endl;

	return 0;
}


