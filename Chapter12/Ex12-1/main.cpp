#include <iostream>
#include "cow.h"

int main()
{
    Cow no_name;
    Cow name("Alex", "football", 70);

    std::cout << "no_name object:\n";
    no_name.ShowCow();
    std::cout << "name object:\n";
    name.ShowCow();
    // assignment
    no_name = name;
    std::cout << "no_name object after assignment:\n";
    no_name.ShowCow();
    // initialization
    Cow name_copy = name;
    std::cout << "name_copy object:\n";
    name_copy.ShowCow();

    return 0;
}
