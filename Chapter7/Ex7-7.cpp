#include <iostream>

const int Max = 5;

double *fill_array(double *start, double *end);
void show_array(const double *start, const double *end); // don't change data
void revalue(double r, double *start, double *end);

int main()
{
    using namespace std;
    double properties[Max];

    double *size = fill_array(properties, properties + Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";


    return 0;
}

double *fill_array(double *start, double *end)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; start < end; start++, i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
                break;
        }
        else if (temp < 0) // signal to terminate
            break;
        *start = temp;
    }
    return start;
}

void show_array(const double *start, const double *end)
{
    using namespace std;
    for (int i = 0; start < end; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *start++ << endl;
    }
}

void revalue(double r, double *start, double *end)
{
    while(start < end)
    {
        *start *= r;
         start++;
    }
}
