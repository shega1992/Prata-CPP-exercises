#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	if (argc < 3)
	{
		std::cerr << "You haven't passed the file names to program\n";
		exit(EXIT_FAILURE);
	}
	std::ifstream fin(argv[1]);
	if (!fin.is_open())
	{
		std::cerr << "Couldn't open " << argv[1] << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream fout(argv[2]);
	if (!fout.is_open())
	{
		std::cerr << "Couldn't open " << argv[2] << std::endl;
		exit(EXIT_FAILURE);
	}
	char ch;
	while (fin.get(ch))
		fout << ch;

	fin.close();
	fout.close();
	
	return 0;
}




