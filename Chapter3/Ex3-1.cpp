#include <iostream>

int main()
{
    using namespace std;

    const int conversion_factor = 12;
    int height;

    cout << "Please enter your height in integer inches:_\b";
    cin >> height;

    cout << "Result: " << height / conversion_factor << " feet " << height % conversion_factor << " inches\n";

    return 0;
}
