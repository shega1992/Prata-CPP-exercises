#include <iostream>
#include "Move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x = " << x << endl
         << "y = " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move s(m.x + this->x, m.y + this->y);
	return s;
}

void Move::reset(double a , double b)
{
    x = a;
    y = b;
}
