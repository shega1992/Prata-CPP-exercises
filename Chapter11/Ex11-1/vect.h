#ifndef VECT_H_INCLUDED
#define VECT_H_INCLUDED

#include <iostream>
#include <cmath>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL};
    // RECT for rectangular, POL for Polar modes
    private:
       double x;
       double y;
       Mode mode;
       // private methods for setting values
        void set_x(double mag, double ang);
        void set_y(double mag, double ang);
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;} // report x value
        double yval() const {return y;} // report y value
        double magval() const { return sqrt(x * x + y * y);} // report magnitude
        double angval() const {if(x == 0.0 && y == 0.0) return 0.0; else return atan2(y, x);} // report angle
        void polar_mode(); // set mode to POL
        void rect_mode(); // set mode to RECT
        // operator overloading
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        // friends
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream &
        operator<<(std::ostream & os, const Vector & v);
    };
}

#endif // VECT_H_INCLUDED
