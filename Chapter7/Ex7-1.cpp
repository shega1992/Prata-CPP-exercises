#include <iostream>

double harmonic_mean(double , double);

int main()
{
    using namespace std;

    double x,y;

    cout << "Please enter two numbers (0 for exit): ";

    while(cin >> x >> y && x != 0 && y != 0)
    {
       cout << "Harmonic mean of two numbers is " << harmonic_mean(x,y) << endl;
       cout << "Please enter next two numbers (0 for exit): ";
    }

    return 0;
}


double harmonic_mean(double x, double y)
{
    return 2 / (1/x + 1/y);
}
