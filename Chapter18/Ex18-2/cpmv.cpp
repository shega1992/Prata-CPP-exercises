#include "cpmv.h"

Cpmv::Cpmv() : pi(nullptr) { std::cout << "default constructor called\n"; }

Cpmv::Cpmv(std::string q, std::string z)
{
	std::cout << "constructor called\n";
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp)
{
	std::cout << "copy constructor called\n";
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv && mv)
{
	std::cout << "move constructor called\n";
	pi = mv.pi;
	mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
	std::cout << "destructor called\n";
	delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	std::cout << "copy assignment operator called\n";
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	std::cout << "move assignment operator called\n";
	if (this == &mv)
		return *this;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	std::cout << "operator+ called\n";
	Cpmv temp = Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
	return temp;
}

void Cpmv::Display() const
{
	std::cout << pi->qcode << ' ' << pi->zcode << std::endl;
}