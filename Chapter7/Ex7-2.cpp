#include <iostream>
#define MAX 10

using namespace std;

int get_results(int [], int );
void show_result(int [], int );
double average(int [], int );

int main()
{
    int results[MAX];

    int size = get_results(results, MAX);

    if(size == 0)
        cout << "List is empty\n";
    else
    {
       show_result(results, size);
       cout << "Average: " << average(results, size) << endl;
    }

    return 0;
}

int get_results(int results[], int n)
{
    int i;

    cout << "Enter 10 or less results: ";
    for(i = 0; i < n && cin >> results[i] && results[i] > 0; i++)
        ;

    return i;
}

void show_result(int results[], int n)
{
    cout << "Results: ";
    for(int i = 0; i < n; i++)
        cout << results[i] << " ";
    cout.put('\n');
}

double average(int results[], int n)
{
    int i;
    double sum = 0;

    for(i = 0; i < n; i++)
        sum += results[i];

    return sum / i;
}
