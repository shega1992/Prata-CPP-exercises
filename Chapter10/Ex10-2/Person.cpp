#include <iostream>
#include <cstring>
#include "Person.h"

Person::Person(const string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const
{
    cout << "Show function: " << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
    cout << "FormalShow function: " << lname << " " << fname << endl;
}
