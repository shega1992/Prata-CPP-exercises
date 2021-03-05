#include <iostream>

int main()
{
    using namespace std;

    const int convert_feet_and_inches_to_inches = 12;
    const float convert_inches_to_meters = 0.0254;
    const float convert_pounds_to_kilograms = 2.2;

    int feet, inches, weight;

    cout << "Please enter your height in feet and inches and your weight in pounds: ";
    cin >> feet >> inches >> weight;

    float height_in_meters = (feet * convert_feet_and_inches_to_inches + inches) * convert_inches_to_meters;
    float mass_in_kilograms =  weight / convert_pounds_to_kilograms;

    cout << "Your BMI: " << mass_in_kilograms / (height_in_meters * height_in_meters) << endl;

    return 0;
}
