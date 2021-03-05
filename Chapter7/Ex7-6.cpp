#include <iostream>
#define MAX 10

using namespace std;

int Fill_array(double [], int );
void Show_array(double [], int );
void Reverse_array(double [], int );

int main()
{
    double arr[MAX];

    int size = Fill_array(arr, MAX);

    cout << "Original array: ";
    Show_array(arr, size);

    Reverse_array(arr, size);

    cout << "Array after reverse: ";
    Show_array(arr, size);

    return 0;
}

int Fill_array(double arr[], int n)
{
    int i;

    cout << "Enter 10 or less values (non - numeric character for exit): ";
    for(i = 0; i < n && cin >> arr[i]; i++)
        ;

    return i;
}

void Show_array(double arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout.put('\n');
}

void Reverse_array(double arr[], int n)
{
    int i,j;

    for(i = 1, j = n - 2; i < j; i++, j--)
        swap(arr[i], arr[j]);
}
