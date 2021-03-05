#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    std::cout << "Please enter the name: ";
    std::cin.getline(g.fullname, Len);
    std::cout << "Please enter the handicap: ";
    std::cin >> g.handicap;

    if(strlen(g.fullname) > 0)
        return 1;
    else
        return 0;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "Full name: " << g.fullname << std::endl
              << "Handicap: " << g.handicap << std::endl;
}
