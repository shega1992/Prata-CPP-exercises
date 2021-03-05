#include <iostream>
#include "worker.h"

void Worker::Set()
{
	std::cout << "Enter worker's name: ";
	getline(std::cin, fullname);
	std::cout << "Enter worker's ID: ";
	std::cin >> id;
	while (std::cin.get() != '\n')
		continue;
}

void Worker::Show() const
{
	std::cout << "Name: " << fullname << std::endl;
	std::cout << "Employee ID: " << id << std::endl;
}