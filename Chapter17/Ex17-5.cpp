#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

typedef std::set<std::string> Set;

int main(int argc, char * argv[])
{
	if (argc < 4)
	{
		std::cerr << "You haven't passed the file names to program\n";
		exit(EXIT_FAILURE);
	}
	std::ifstream fin;
	std::string temp;
	
	fin.open(argv[1]);
	if (!fin.is_open())
	{
		std::cerr << "Couldn't open " << argv[1] << std::endl;
		exit(EXIT_FAILURE);
	}
	Set Mat;
	while (fin >> temp)
		Mat.insert(temp);
	std::cout << "Mat's list: ";
	copy(Mat.begin(), Mat.end(), std::ostream_iterator<std::string, char>(std::cout, " "));
	std::cout << std::endl;
	fin.clear();
	fin.close();

	fin.open(argv[2]);
	if(!fin.is_open())
	{
		std::cerr << "Couldn't open " << argv[2] << std::endl;
		exit(EXIT_FAILURE);
	}
	Set Pat;
	while (fin >> temp)
		Pat.insert(temp);
	std::cout << "Pat's list: ";
	copy(Pat.begin(), Pat.end(), std::ostream_iterator<std::string, char>(std::cout, " "));
	std::cout << std::endl;
	fin.close();

	std::ofstream fout(argv[3]);
	if (!fout.is_open())
	{
		std::cerr << "Couldn't open " << argv[3] << std::endl;
		exit(EXIT_FAILURE);
	}

	set_union(Mat.begin(), Mat.end(), Pat.begin(), Pat.end(),
		std::ostream_iterator<std::string, char>(fout, "\n"));

	fout.close();

	return 0;
}


