#include <iostream>
#include <array>

int main()
{
    using namespace std;

    const int ArSize = 3;
    array <float, ArSize> results;

    cout << "Please enter the first result: ";
    (cin >> results[0]).get();
    cout << "Please enter the second result: ";
    (cin >> results[1]).get();
    cout << "Please enter the third results: ";
    (cin >> results[2]).get();

    cout << "The first result: " << results[0] << endl
         << "The second result: " << results[1] << endl
         << "The third result: " << results[2] << endl
         << "The average: " << (results[0] + results[1] + results[2]) / ArSize << endl;

    return 0;
}
