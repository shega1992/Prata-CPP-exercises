#ifndef WINEC_H_
#define WINEC_H_

#include <iostream>
#include <string>
#include <valarray>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::valarray;

class Wine
{
private:
	typedef valarray<int> ArrayInt;

	string label;
	ArrayInt vintage_years;
	ArrayInt numbers_of_bottles;
	int number_of_years;
public:
	Wine();
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	~Wine() {};
	void GetBottles();
	string & Label() { return label; }
	int sum() const { return numbers_of_bottles.sum(); }
	void Show() const;
};

#endif 