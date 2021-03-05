#include <iostream>

using namespace std;

double calculate(double x, double y, double (*pf)(double , double ));
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main()
{
    double x,y;
    double (*pf[4])(double , double ) = {add, subtract, multiply, divide};

    cout << "Enter two numbers (non - numeric character for exit): ";
    while(cin >> x >> y)
    {
       for(int i = 0; i < 4; i++)
            cout << "result: " << calculate(x,y, pf[i]) << endl;

        cout << "Enter next two numbers (non - numeric character for exit): ";
    }

    return 0;
}

double calculate(double x, double y, double (*pf)(double , double ))
{
    return pf(x,y);
}

double add(double x, double y)
{
    cout << "(Addition) ";
    return x + y;
}

double subtract(double x, double y)
{
    cout << "(Subtraction) ";
    return x - y;
}

double multiply(double x, double y)
{
    cout << "(Multiplication) ";
    return x * y;
}

double divide(double x, double y)
{
    cout << "(Division) ";
    return x / y;
}
