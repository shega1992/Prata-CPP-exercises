#include <iostream>


int main()
{
    using namespace std;

    double distance;

    cout << "Please enter a distance in furlongs: ";
    cin >> distance;

    cout << "Distance in yards: " << distance * 220 << endl;

    return 0;
}
