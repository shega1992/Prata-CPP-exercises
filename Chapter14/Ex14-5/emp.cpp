#include "emp.h"

int & check_inchargeof(int & x);

abstr_emp::abstr_emp() : fname("No first name"), lname("No last name"), job("No job") {}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
		 : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const
{
	std::cout << "first name: " << fname << ", "
		<< "last name: " << lname << ", "
		<< "job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, fname);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lname);
	std::cout << "Enter job: ";
	std::getline(std::cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << "*****************************************************\n";
	os << "overloaded << operator is used\n";
	os << "first name: " << e.fname << ", "
		<< "last name: " << e.lname << std::endl;
	os << "*****************************************************\n";
	return os;
}

abstr_emp::~abstr_emp() {}

//  employee methods
employee::employee() : abstr_emp() {}

employee::employee(const std::string & fn, const std::string & ln, const std::string & j)
	: abstr_emp(fn, ln, j) {}

void employee::ShowAll() const
{
	std::cout << "Status: Employee" << std::endl;
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

//  manager methods
manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j,
	int ico) : abstr_emp(fn, ln, j), inchargeof(ico) 
{
	inchargeof = check_inchargeof(inchargeof);
}

manager::manager(const abstr_emp & e, int ico) : inchargeof(ico) 
{
	inchargeof = check_inchargeof(inchargeof);
}

manager::manager(const manager & m)
{
	inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
	std::cout << "Status: Manager" << std::endl;
	abstr_emp::ShowAll();
	std::cout << "Number of employees managed: " << InChargeOf() << std::endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Enter number of employees managed: ";
	std::cin >> InChargeOf();
	std::cin.get();
	inchargeof = check_inchargeof(inchargeof);
}

// fink methods
fink::fink() : abstr_emp(), reportsto("No reports") {}

fink::fink(const std::string & fn, const std::string & ln,const std::string & j, 
	const std::string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink & e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}

void fink::ShowAll() const
{
	std::cout << "Status: Fink" << std::endl;
	abstr_emp::ShowAll();
	std::cout << "Reports to " << ReportsTo() << std::endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Enter whomever is reported to: ";
	std::getline(std::cin, ReportsTo());
}

// highfink methods
highfink::highfink() : abstr_emp(), manager(), fink() {}

highfink::highfink(const std::string & fn, const std::string & ln,
	const std::string & j, const std::string & rpo, int ico) 
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
		: abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink & f, int ico) : abstr_emp(f), fink(f)
{
	InChargeOf() = ico;
}

highfink::highfink(const manager & m, const std::string & rpo) : abstr_emp(m), manager(m)
{
	ReportsTo() = rpo;
}

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const
{
	std::cout << "Status: Highfink" << std::endl;
	abstr_emp::ShowAll();
	std::cout << "Number of employees managed: " << InChargeOf() << std::endl;
	std::cout << "Reports to  " << ReportsTo() << std::endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Enter number of employees managed: ";
	std::cin >> InChargeOf();
	InChargeOf() = check_inchargeof(InChargeOf());
	std::cin.get();
	std::cout << "Enter whomever is reported to : ";
	std::getline(std::cin, ReportsTo());
}

int & check_inchargeof(int & x)
{
	if (x < 0)
	{
		std::cout << "Error, cannot be in charge of negative people." << std::endl;
		std::cout << "Setting inchargeof to 0" << std::endl;
		x = 0;
	}
	return x;
}

