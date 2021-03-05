#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string first_name;
    string last_name;
    string complete_name;

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;

    complete_name = last_name + ", " + first_name;

    cout << "Here\'s the information in a single string: " << complete_name << endl;

    return 0;
}

