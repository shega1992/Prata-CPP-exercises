#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
   std::strncpy(performers, s1, 49);
   performers[49] = '\0';
   std::strncpy(label, s2, 19);
   label[19] = '\0';
   selections = n;
   playtime = x;
}

Cd::Cd()
{
    std::strcpy(performers, "No performers");
    std::strcpy(label, "No label");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
    std::cout << "Performers: " << performers << '\n'
              << "Label: " << label << '\n'
              << "Number of selections: " << selections << '\n'
              << "Playing time in minutes: " <<  playtime << '\n'
              << "**************************************" << '\n';
}

Cd & Cd::operator=(const Cd & d)
{
    if(&d == this)
        return *this;
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * pw, const char * s1, const char * s2,
                 int n, double x) : Cd(s1, s2, n, x)
{
    std::strncpy(primary_work, pw, 79);
    primary_work[79] = '\0';
}

Classic::Classic()
{
    std::strcpy(primary_work, "No primary work");
}

Classic::~Classic()
{
}

void Classic::Report() const
{
    std::cout << "Primary work: " << primary_work << '\n';
    Cd::Report();
}

Classic & Classic::operator=(const Classic & c)
{
    Cd::operator=(c);
    std::strcpy(primary_work, c.primary_work);
    return *this;
}
