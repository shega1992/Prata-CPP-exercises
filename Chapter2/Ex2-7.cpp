#include <iostream>

using namespace std;

void print_two_values(int , int);

int main()
{
    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    print_two_values(hours, minutes);

    return 0;
}

void print_two_values(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}
