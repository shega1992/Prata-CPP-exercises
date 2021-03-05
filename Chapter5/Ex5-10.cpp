#include <iostream>

int main()
{
    using namespace std;

    int i,j,number_of_rows;

    cout << "Enter number of rows: ";
    cin >> number_of_rows;

    for(i = 1; i <= number_of_rows; i++)
    {
        j = 1;

        while(j <= number_of_rows - i)
        {
            cout << '.';
            j++;
        }

        while(j <= number_of_rows)
        {
            cout << '*';
            j++;
        }

        cout << '\n';

    }

    return 0;
}
