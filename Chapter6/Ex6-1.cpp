#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    char ch;

    cout << "Your input (@ for exit): ";

    while((ch = cin.get()) != '@')
    {
        if(!isdigit(ch))
        {
            if(islower(ch))
                cout.put(toupper(ch));
            else
                cout.put(tolower(ch));
        }
    }

    return 0;
}
