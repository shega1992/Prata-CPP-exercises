#include <iostream>

int main()
{
    using namespace std;

    const int number_of_hours_in_the_day = 24;
    const int number_of_minutes_in_an_hour = 60;
    const int number_of_seconds_in_a_minute = 60;

    long long number_of_seconds;

    cout << "Enter the number of seconds: ";
    cin >> number_of_seconds;

    int days = number_of_seconds / number_of_seconds_in_a_minute / number_of_minutes_in_an_hour / number_of_hours_in_the_day;
    int hours = number_of_seconds / number_of_seconds_in_a_minute / number_of_minutes_in_an_hour - (days * number_of_hours_in_the_day);
    int minutes = number_of_seconds / number_of_seconds_in_a_minute - (hours * number_of_minutes_in_an_hour) - (days * number_of_hours_in_the_day * number_of_minutes_in_an_hour);
    int seconds = number_of_seconds - (minutes * number_of_seconds_in_a_minute) - (hours * number_of_minutes_in_an_hour * number_of_seconds_in_a_minute) - (days * number_of_hours_in_the_day * number_of_minutes_in_an_hour * number_of_seconds_in_a_minute);


    cout << number_of_seconds << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds" << endl;

    return 0;
}
