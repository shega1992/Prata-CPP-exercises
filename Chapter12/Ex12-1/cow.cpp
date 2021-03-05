#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
    std::strcpy(name, "No name");
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strncpy(name, nm, 19);
    name[19] = '\0';
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if(this == &c)
        return *this;
    delete [] hobby;
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "name: " << name << ", "
              << "hobby: " << hobby << ", "
              << "weight: " << weight << std::endl;
}
