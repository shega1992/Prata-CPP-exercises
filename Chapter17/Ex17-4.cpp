#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	if (argc < 4)
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
	std::ifstream fin2(argv[2]);
	if (!fin.is_open())
	{
		std::cerr << "Couldn't open " << argv[2] << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream fout(argv[3]);
	if (!fout.is_open())
	{
		std::cerr << "Couldn't open " << argv[3] << std::endl;
		exit(EXIT_FAILURE);
	}

	char ch;
	while (!fin.eof() || !fin2.eof())
	{
		while (fin.get(ch) && ch != '\n')
			fout << ch;
		fout << ' ';
		while (fin2.get(ch) && ch != '\n')
			fout << ch;
		fout << '\n';
	}

	fin.close();
	fin2.close();
	fout.close();

	return 0;
}


