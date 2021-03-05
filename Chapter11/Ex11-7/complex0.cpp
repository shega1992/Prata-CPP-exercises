#include <iostream>
#include "complex0.h"

complex::complex()
{
    real = imaginary = 0;
}

complex::complex(double real_part, double imag_part)
{
    real = real_part;
    imaginary = imag_part;
}

complex::~complex()
{
}

complex complex::operator~()
{
    return complex(real, -imaginary);
}

complex complex::operator+(const complex &c)
{
    return complex(real + c.real, imaginary + c.imaginary);
}

complex complex::operator-(const complex &c)
{
    return complex(real - c.real, imaginary - c.imaginary);
}

complex complex::operator*(const complex &c)
{
    return complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

complex operator*(double x, const complex &c)
{
    complex result;
    result.real = x * c.real;
    result.imaginary = x * c.imaginary;
    return result;
}

std::istream & operator>>(std::istream &is, complex & c)
{
   std::cout << "real: ";
   is >> c.real;
   if(is.fail())
       return is;
   std::cout << "imaginary: ";
   is >> c.imaginary;
   return is;
}

std::ostream & operator<<(std::ostream &os, const complex & c)
{
    os << "(" << c.real << ", " << c.imaginary << "i)";
    return os;
}
