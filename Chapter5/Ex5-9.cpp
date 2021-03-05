#include <iostream>
#include <string>

int main()
{
    using namespace std;

    unsigned int number_of_words {};
    string temp;

    cout << "Enter words (to stop, type the word done):\n";
    cin >> temp;

    while(temp != "done")
    {
        number_of_words++;
        cin >> temp;
    }

    cout << "You entered a total of " << number_of_words << " words.\n";

    return 0;
}
