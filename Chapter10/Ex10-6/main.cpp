#include <iostream>
#include "Move.h"

int main()
{
    Move n;
    cout << "n object\n";
    n.showmove();

    Move m(3,1);
    cout << "m object\n";
    m.showmove();

    n = n.add(m);
    cout << "n after add function\n";
    n.showmove();

    n.reset();
    cout << "n after reset function\n";
    n.showmove();

    m.reset();
    cout << "m after reset function\n";
    m.showmove();

    return 0;
}
