#include <iostream>

int main()
{
    using namespace std;

    float gasoline_consumption;

    cout << "Please enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers): ";
    cin >> gasoline_consumption;

    cout << "MPG: " << 62.14 / (gasoline_consumption / 3.785) << endl;

    return 0;
}
