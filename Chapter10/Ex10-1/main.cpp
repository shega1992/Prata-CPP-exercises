#include <iostream>
#include "BankAccount.h"

int main()
{

    BankAccount person = BankAccount("John Smith", "a197543", 100.0);
    person.show();

    std::cout << "\nProgram has used deposit function\n";
    person.deposit(25.0);
    person.show();

    std::cout << "\nProgram has used withdraw function\n";
    person.withdraw(50.0);
    person.show();

    return 0;
}
