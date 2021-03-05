#include <iostream>

int main()
{
    using namespace std;

    const short Years = 3;
    const short Months = 12;
    unsigned int sum;
    unsigned int total_sum{};
    const char *months[Months] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthly_sales[Years][Months];

    for(int i = 0; i < Years; i++)
    {
        cout << i + 1 << " year:\n";
        sum = 0;

        for(int j = 0; j < Months; j++)
        {
             cout << "Please enter monthly sales for " << months[j] << ": ";
             cin >> monthly_sales[i][j];

             sum += monthly_sales[i][j];
        }

        cout << "Worth of monthly sales for " << i+1 << " year: " << sum << endl;
        total_sum += sum;
        cout << "**********************************************" << endl;
    }

    cout << "Total: " << total_sum << endl;

    return 0;
}
