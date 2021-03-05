#include <iostream>
#include <cstring>
#include "Plorg.h"

Plorg::Plorg(const char name[], int ci)
{
    strncpy(fullname, name, 19);
    fullname[19] = '\0';
    contentment_index = ci;
}

void Plorg::change_index()
{
    cout << "Please enter index for plorg: ";
    cin >> contentment_index;
}

void Plorg::report_name_and_CI() const
{
    cout << "Name: " << fullname << endl
         << "Contentment index: " << contentment_index << endl;
}
