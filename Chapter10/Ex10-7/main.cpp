#include <iostream>
#include "Plorg.h"

int main()
{
    Plorg person;
    cout << "Default Plorg\n";
    person.report_name_and_CI();
    person.change_index();
    person.report_name_and_CI();

    Plorg person2("Alex", 100);
    cout << "\nNon-default Plorg\n";
    person2.report_name_and_CI();
    person2.change_index();
    person2.report_name_and_CI();

    return 0;
}
