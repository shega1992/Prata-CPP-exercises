#include <iostream>

int main()
{
    using namespace std;

    int number;
    int sum{};

    cout << "Please enter the number: ";
    cin >> number;

    while(number != 0)
    {
        sum += number;
        cout << "Cumulative sum: " << sum << endl
             << "Please enter the next number: ";
        cin >> number;
    }

    cout << "Done!\n";

    return 0;
}
