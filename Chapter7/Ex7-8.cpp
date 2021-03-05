#include <iostream>

using namespace std;

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct
{
    double struct_expenses[Seasons];
} info_expenses;

void fill(double expenses[]);
void show(double expenses[]);

int main()
{
    double expenses[Seasons];

    cout << "Option a (ordinary array of double for the expenses):\n";
    fill(expenses);
    show(expenses);

    cout << "\nOption b (using a structure whose sole member is an ordinary array of double for the expenses): \n";
    fill(info_expenses.struct_expenses);
    show(info_expenses.struct_expenses);
    return 0;
}

void fill(double expenses[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expenses[i];
    }
}

void show(double expenses[])
{

    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
