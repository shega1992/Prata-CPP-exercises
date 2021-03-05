#include <iostream>

int main()
{
    using namespace std;

    int latitude_in_degrees, latitude_in_minutes, latitude_in_seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> latitude_in_degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> latitude_in_minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> latitude_in_seconds;

    cout << "Result: " << latitude_in_degrees + (latitude_in_minutes / 60.0) + (latitude_in_seconds / 60.0 / 60.0) << endl;

    return 0;
}
