#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


typedef struct customer {
    char fullname[35];
    double payment;
} Item;

class Stack
{
private:
    enum{MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif // STACK_H_INCLUDED
