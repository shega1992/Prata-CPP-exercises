#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
   performers = new char[std::strlen(s1) + 1];
   label = new char[std::strlen(s2) + 1];
   std::strcpy(performers, s1);
   std::strcpy(label,s2);
   selections = n;
   playtime = x;
}

Cd::Cd()
{
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "Performers: " << performers << '\n'
		<< "Label: " << label << '\n'
		<< "Number of selections: " << selections << '\n'
		<< "Playing time in minutes: " << playtime << '\n'
		<< "**************************************" << '\n';
}

Cd & Cd::operator=(const Cd & d)
{
    if(&d == this)
        return *this;
    delete [] performers;
    delete [] label;
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * pw, const char * s1, const char * s2,
                 int n, double x) : Cd(s1, s2, n, x)
{
    primary_work = new char[std::strlen(pw) + 1];
    std::strcpy(primary_work, pw);
}

Classic::Classic()
{
    primary_work = nullptr;
}

Classic::~Classic()
{
    delete [] primary_work;
}

void Classic::Report() const
{
    std::cout << "Primary work: " << primary_work << '\n';
    Cd::Report();
}

Classic & Classic::operator=(const Classic & c)
{
    Cd::operator=(c);
    delete [] primary_work;
    primary_work = new char[std::strlen(c.primary_work) + 1];
    std::strcpy(primary_work, c.primary_work);
    return *this;
}

