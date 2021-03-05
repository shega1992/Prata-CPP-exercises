#ifndef COMPLEX0_H_INCLUDED
#define COMPLEX0_H_INCLUDED

class complex
{
private:
    double real;
    double imaginary;
public:
    complex();
    complex(double real_part, double imag_part);
    ~complex();

    complex operator~();
    complex operator+(const complex &c);
    complex operator-(const complex &c);
    complex operator*(const complex &c);

    friend complex operator*(double x, const complex &c);
    friend std::istream & operator>>(std::istream &is, complex & c);
    friend std::ostream & operator<<(std::ostream &os, const complex & c);

};


#endif // COMPLEX0_H_INCLUDED
