#include <iostream>
#include "List.h"

List::~List()
{
    Item *ptr;
    while(head)
    {
        ptr = head ->next;
        delete head;
        head = ptr;
    }
}

bool List::ListIsEmpty()
{
    if(head == NULL)
        return true;
    else
        return false;
}

bool List::ListIsFull()
{
    Item *ptr = new Item;

    if(ptr == NULL)
        return true;
    else
    {
        delete ptr;
        return false;
    }
}

bool List::AddItem()
{
    previous_node = new_node;
    new_node = new Item;

    if(new_node == NULL)
        return false;

    if(head == NULL)
        head = new_node;
    else
       previous_node ->next = new_node;

    cout << "Please enter full name: ";
    cin.getline(new_node ->fullname, 35);
    cout << "Please enter the payment: ";
    (cin >> new_node ->payment).get();
    new_node ->next = NULL;

    return true;
}

void List::ShowList() const
{
    Item *ptr = head;
    while(ptr)
    {
         cout << "Name: " << ptr ->fullname << endl
             << "Payment: " << ptr ->payment << endl;
         ptr = ptr ->next;
    }
}
