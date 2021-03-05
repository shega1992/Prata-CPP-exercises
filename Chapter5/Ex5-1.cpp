#include <iostream>

int main()
{
    using namespace std;

    int x,y;
    int sum{};

    cout << "Please enter the first number: ";
    cin >> x;
    cout << "Please enter the second number: ";
    cin >> y;

    while(x <= y)
    {
         sum += x;
         x++;
    }

    cout << "Result: " << sum << endl;

    return 0;
}
