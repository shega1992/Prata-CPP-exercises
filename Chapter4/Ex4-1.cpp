#include <iostream>
#include <string>


int main()
{
    using namespace std;

    string first_name, last_name;
    unsigned short age;
    char grade;

    cout << "What is your first name? ";
    getline(cin, first_name);
    cout << "What is your last name? ";
    getline(cin, last_name);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade++;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl
         << "Grade: " << grade << endl
         << "Age: " << age << endl;

    return 0;
}
