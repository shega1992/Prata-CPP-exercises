#include <iostream>

int main()
{
    using namespace std;

    const short Months = 12;
    unsigned int sum {};
    const char *months[Months] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthly_sales[Months];

    for(int i = 0; i < Months; i++)
    {
        cout << "Please enter monthly sales for " << months[i] << ": ";
        cin >> monthly_sales[i];

        sum += monthly_sales[i];
    }

    cout << "Year\'s worth of monthly sales: " << sum << endl;

    return 0;
}
