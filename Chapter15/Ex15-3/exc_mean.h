#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <iostream>
#include <stdexcept>

class bad_arguments : public std::logic_error
{
private:
	double v1;
	double v2;
protected:
	double get_arg1() { return v1; }
	double get_arg2() { return v2; }
public:
	bad_arguments(double a = 0, double b = 0) : std::logic_error("bad arguments"), v1(a), v2(b) {}
	virtual void mesg() = 0;
};

class bad_hmean : public bad_arguments
{
public:
	bad_hmean(double a = 0, double b = 0) : bad_arguments(a,b) {}
	virtual void mesg();
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << get_arg1() << ", " << get_arg2() << "): "
		<< "invalid arguments: a = -b\n";
}

class bad_gmean : public bad_arguments
{
public:
	bad_gmean(double a = 0, double b = 0) : bad_arguments(a, b) {}
	virtual void mesg();
};

void bad_gmean::mesg()
{
	std::cout << "gmean() arguments should be >= 0\n"
			  << "Values used: " << get_arg1() << ", " << get_arg2() << std::endl;
}

#endif 
