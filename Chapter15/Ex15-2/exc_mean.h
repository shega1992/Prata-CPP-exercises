#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
	bad_hmean() : std::logic_error("bad arguments to hmean()") {}
};

class bad_gmean : public std::logic_error
{
public:
	bad_gmean() : std::logic_error("bad arguments to gmean()") {}
};

#endif 

