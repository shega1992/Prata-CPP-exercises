#include <iostream>
#include "cpmv.h"
#include <utility>

int main()
{
	Cpmv obj1("Hello", "World");
	std::cout << "obj1: ";
	obj1.Display();

	Cpmv obj2(obj1);
	std::cout << "obj2: ";
	obj2.Display();

	Cpmv obj3;
	obj3 = obj1;
	std::cout << "obj3: ";
	obj3.Display();

	Cpmv obj4("Hello", "People");
	std::cout << "obj4: ";
	obj4.Display();

	Cpmv obj5(obj3 + obj4);
	std::cout << "obj5: ";
	obj5.Display();

	obj5 = std::move(obj1);
	std::cout << "obj5: ";
	obj5.Display();

	return 0;
}


