#include <iostream>
#include <cctype>
#include "Stack.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    Stack st;
    Item current_customer;
    double running_total = 0;
    char ch;

    cout << "Please enter A to add a customer, R to remove a customer and Q to quit\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;

        switch(ch)
        {
            case 'A':
            case 'a':
                cout << "Enter the full name of customer: ";
                cin.getline(current_customer.fullname, 35);
                cout << "Enter the payment: ";
                cin >> current_customer.payment;

                (st.push(current_customer))? cout << current_customer.fullname << " has been added\n" : cout << "Stack is full\n";

                break;
            case 'R':
            case 'r':
                if(st.pop(current_customer))
                {
                    cout << current_customer.fullname << " has been removed\n"
                         << current_customer.payment << " has been added to running total\n";
                    running_total += current_customer.payment;
                }
                else
                    cout << "Stack is empty\n";

                cout << "Running total: " << running_total << endl;
                break;
            default:
                cout << "Invalid option. Please try again\n";
                break;
        }

        cout << "Please enter A to add a customer, R to remove a customer and Q to quit\n";
    }
    return 0;
}
