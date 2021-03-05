#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	char ch;
	if (argc < 2)
	{
		std::cerr << "You haven't passed the file name to program\n";
		exit(EXIT_FAILURE);
	}
	std::ofstream fout(argv[1]);
	if (!fout.is_open())
	{
		std::cerr << "Couldn't open " << argv[1] << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "Your input: ";
	while (std::cin.get(ch))
		fout << ch;
	
	fout.close();

	return 0;
}


