#include <iostream>

int main()
{
    using namespace std;

    int income;

    cout << "Please enter your income(non - numeric character or negative value for exit): ";

    while(cin >> income && income >= 0)
    {
        if(income <= 5000)
            cout << "Tax: " << 0 << endl;
        else
        {
            if(income <=  15000)
                cout << (income - 5000) * 0.1 << endl;
            else if(income <= 35000)
                cout << 10000 * 0.1 + ((income - 15000) * 0.15) << endl;
            else
                cout << 10000 * 0.1 + 20000 * 0.15 + ((income - 35000) * 0.2) << endl;
        }

        cout << "Please enter next income(non - numeric character or negative value for exit): ";
    }
    return 0;
}
