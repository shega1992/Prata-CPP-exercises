#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <cstdlib>

class Customer
{
private:
	long arrive; // arrival time for customer
	int processtime; // processing time for customer
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}

#endif

