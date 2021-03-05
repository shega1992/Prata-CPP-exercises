#include <iostream>
#include <cctype>
#include <string>

int main()
{
    using namespace std;

    string str;
    int vowels, consonants, others;
    vowels = consonants = others = 0;

    cout << "Enter words (q to quit):\n";

    while(cin >> str && str != "q")
    {
        if(isalpha(str[0]))
        {
            switch(str[0])
            {
                case 'A': case 'E': case 'I':case 'O':case 'U':case 'Y':
                case 'a': case 'e': case 'i':case 'o':case 'u':case 'y':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        }
        else
            others++;
    }

    cout << vowels << "words beginning with vowels\n"
         << consonants << "words beginning with consonants\n"
         << others << "others\n";


    return 0;
}
