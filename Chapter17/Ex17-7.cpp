#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

void ShowStr(const std::string & st) { std::cout << st << std::endl;  }

class Store
{
private:
	std::ofstream *os;
public:
	Store(std::ofstream & f) { os = &f;  }
	void operator()(const std::string & st)
	{
		std::size_t len = st.size();
		os->write((char*) &len, sizeof(std::size_t));
		os->write(st.data(), len);
	}
};

void GetStrs(std::ifstream & is, std::vector<std::string> & vi)
{
	std::string tmp;
	std::size_t len;
	while (is.read((char*)&len, sizeof(std::size_t)))
	{
		char ch;
		for (int i = 0; i < len; i++)
		{
			is.read(&ch, sizeof(char));
			tmp += ch;
		}
		vi.push_back(tmp);
		tmp.clear();
	}
}

int main()
{
	using namespace std;
	vector<string> vostr;
	string temp;

	// acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	// store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	// recover file contents
	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;
}