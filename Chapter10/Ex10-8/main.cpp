#include <iostream>
#include "List.h"
#include <cctype>

void showmenu();

int main()
{
    List list_of_customers;
    char selection;

    showmenu();
    while(cin >> selection && toupper(selection) != 'Q')
    {
        while(cin.get() != '\n')
            continue;

        switch(selection)
        {
            case 'E':
            case 'e':
                (list_of_customers.ListIsEmpty())? cout << "List is empty\n" : cout << "List is not empty\n";
                break;
            case 'F':
            case 'f':
                (list_of_customers.ListIsFull())? cout << "List is full\n" : cout << "List is not full\n";
                break;
            case 'A':
            case 'a':
                (list_of_customers.AddItem())? cout << "Item has been added to the list\n": cout << "Item has not been added to the list\n";
                break;
            case 'S':
            case 's':
                list_of_customers.ShowList();
                break;
            default:
                cout << "Incorrect option. Please try again\n";
                break;
        }
         showmenu();
    }

    return 0;
}

void showmenu()
{
    cout << "***************************************\n"
         <<"Please select the option:\n"
         << "E) Determine whether the list is empty.\n"
         << "F) Determine whether the list is full\n"
         << "A) Add item to the list\n"
         << "S) Show the list\n"
         << "Q) Quit\n"
         << "***************************************\n";
}
