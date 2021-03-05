#include <iostream>

using namespace std;

inline void print_string(const char *str, int number_of_calls = 1)
{
    for(int i = 0; i < number_of_calls; i++)
        cout << str << endl;
}

int main()
{
    const int StrLen = 80;

    int number_of_calls = 0;
    int selection;
    char str[StrLen];

    cout << "Please enter your string: ";
    cin.getline(str, StrLen);

    print_string(str);
    number_of_calls++;
    cout << "number of function's call: " << number_of_calls << endl;

    cout << "Enter any digit except 0 to use number of calls or 0 to print the string one time(non-numeric character for exit): ";
    while(cin >> selection)
    {
        if(selection != 0)
             print_string(str, number_of_calls);
        else
             print_string(str);

        number_of_calls++;
        cout << "number of function's call: " << number_of_calls << endl;

        cout << "Enter any digit except 0 to use number of calls or 0 to print the string one time(non-numeric character for exit): ";
    }

    return 0;
}
