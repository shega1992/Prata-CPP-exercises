// private inheritance for string
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

class Wine : private string
{
private:
	typedef valarray<int> ArrayInt;

	ArrayInt vintage_years;
	ArrayInt numbers_of_bottles;
	int number_of_years;
public:
	Wine();
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	~Wine() {};
	void GetBottles();
	const string & Label() const { return (const string &) *this; }
	int sum() const { return numbers_of_bottles.sum(); }
	void Show() const;
};

#endif