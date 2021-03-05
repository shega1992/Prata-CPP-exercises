#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    const short SizeOfWord = 40;
    unsigned int number_of_words {};
    char temp[SizeOfWord];

    cout << "Enter words (to stop, type the word done):\n";
    cin >> temp;

    while(strcmp(temp, "done") != 0)
    {
        number_of_words++;
        cin >> temp;
    }

    cout << "You entered a total of " << number_of_words << " words.\n";

    return 0;
}
