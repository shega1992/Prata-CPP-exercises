#include <iostream>
#include <cstring>
#include "Golf.h"

Golf::Golf(const char *name, int hc)
{
    strncpy(m_fullname, name, Len - 1);
    m_fullname[Len - 1] = '\0';
    m_handicap = hc;
}

int Golf::setgolf()
{
    // This code doesn't use the object for temporary storage
    /*std::cout << "Please enter the name: ";
    std::cin.getline(m_fullname, Len);

    if(strlen(m_fullname) == 0)
        return 0;
    else
    {
        std::cout << "Please enter the handicap: ";
        std::cin >> m_handicap;
        return 1;
    }*/

    char fullname[Len];
    int handicap;
    std::cout << "Please enter the name: ";
    std::cin.getline(fullname, Len);

    if(strlen(fullname) == 0)
        return 0;
    else
    {
        std::cout << "Please enter the handicap: ";
        std::cin >> handicap;
    }

    Golf temp(fullname, handicap);
    *this = temp;

    return 1;
}

void Golf::showgolf() const
{
    std::cout << "Full name: " << m_fullname << std::endl
              << "Handicap: " << m_handicap << std::endl;
}
