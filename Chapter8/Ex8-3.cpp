#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void to_upper(string &);

int main()
{
    string input;

    cout << "Enter a string (q to quit): ";
    while(getline(cin, input) && input != "q")
    {
        to_upper(input);
        cout << input << endl;

        cout << "Next string (q to quit): ";
    }

    return 0;
}

void to_upper(string &str)
{
    int i = 0;
    while(str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
}
