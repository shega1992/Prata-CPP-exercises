#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

// stack.h -- class declaration for the stack ADT
typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10}; // constant specific to class
    Item * pitems; // holds stack items
    int size; // number of elements in stack
    int top; // index for top stack item
public:
    Stack(int n = MAX); // creates stack with n elements
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item); // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item); // pop top into item
    Stack & operator=(const Stack & st);
    // friend
    friend std::ostream & operator<<(std::ostream & os, const Stack & st);
};

#endif // STACK_H_INCLUDED
