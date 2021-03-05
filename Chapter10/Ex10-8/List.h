#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

using std::cout;
using std::cin;
using std::endl;


typedef struct customer {
    char fullname[35];
    double payment;
    customer *next;
} Item;

class List
{
private:
    Item *new_node;
    Item *previous_node;
    Item *head;
public:
    List() {head = NULL;}
    ~List();
    bool ListIsEmpty();
    bool ListIsFull();
    bool AddItem();
    void ShowList() const;
};
#endif // LIST_H_INCLUDED
