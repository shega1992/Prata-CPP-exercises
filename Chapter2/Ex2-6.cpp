#include <iostream>

double Conversion(double);

int main()
{
    using namespace std;

    double distance;

    cout << "Enter the number of light years: ";
    cin >> distance;

    cout << distance << " light years = " << Conversion(distance) << " astronomical units." << endl;

    return 0;
}

double Conversion(double light_years)
{
    return light_years * 63240;
}
