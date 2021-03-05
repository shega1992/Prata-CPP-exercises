#include <iostream>
#include <string>

using namespace std;

void strcount(string str);

int main()
{
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(string str)
{
    int i = 0;
    static int total = 0; // static local variable
    int count = 0; // automatic local variable

    cout << "\"" << str <<"\" contains ";
    while (str[i++]) // go to end of string
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
