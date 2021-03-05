#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
    size = n;
    pitems = new Item[size];
    top = 0;
}

Stack::Stack(const Stack & st)
{
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for(int i = 0; i < top; i++)
        pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item & item)
{
    if(top < size)
    {
       pitems[top++] = item;
       return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if(top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack & Stack::operator=(const Stack & st)
{
    if(&st == this)
        return *this;
    delete [] pitems;
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for(int i = 0; i < top; i++)
        pitems[i] = st.pitems[i];
    return *this;
}

std::ostream & operator<<(std::ostream & os, const Stack & st)
{
    if(st.top == 0)
        os << "stack is empty\n";
    else
    {
        for(int i = 0; i < st.top; i++)
            os << st.pitems[i] << '\n';
    }
    return os;
}




