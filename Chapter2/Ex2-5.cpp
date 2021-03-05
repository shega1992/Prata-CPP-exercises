#include <iostream>

double Convert_Celsius_to_Fahrenheit(double);

int main()
{
    using namespace std;

    double temperature;

    cout << "Please enter a Celsius value: ";
    cin >> temperature;

    cout << temperature << " degrees Celsius is " << Convert_Celsius_to_Fahrenheit(temperature) << " degrees Fahrenheit." << endl;
    return 0;
}

double Convert_Celsius_to_Fahrenheit(double celsius)
{
    return 1.8 * celsius + 32;
}
