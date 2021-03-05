#include <iostream>

int main()
{
    using namespace std;

    float number_of_miles, number_of_gallons;

    cout << "Enter number of miles you have driven and number of gallons of gasoline you have used: ";
    cin >> number_of_miles >> number_of_gallons;

    cout << "Number of miles per gallon: " << number_of_miles / number_of_gallons << endl;

    return 0;
}
