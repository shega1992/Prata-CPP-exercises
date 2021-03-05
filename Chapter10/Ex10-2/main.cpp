#include <iostream>
#include "Person.h"

int main()
{
    Person one; // use default constructor
    Person two("Smythecraft"); // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults

    cout << "Person one\n";
    one.Show();
    one.FormalShow();
    cout << endl;

    cout << "Person two\n";
    two.Show();
    two.FormalShow();
     cout << endl;

    cout << "Person three\n";
    three.Show();
    three.FormalShow();
    cout << endl;

    return 0;
}
