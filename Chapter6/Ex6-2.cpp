#include <iostream>
#include <array>

int main()
{
    using namespace std;

    const int ArSize = 10;

    array<double, ArSize> arr_of_double;
    double sum = 0.0;
    int i = 0;

    cout << "Please enter value of double type: ";

    while(i < ArSize && cin >> arr_of_double[i])
        sum += arr_of_double[i++];

    double average = sum / i;
    int counter = 0; // number of values greater than average

    for(int j = 0; j < i; j++)
        counter += arr_of_double[j] > average;

    cout << "Average of the numbers: " << average << endl
         << "Numbers in the array are larger than the average: " << counter << endl;

    return 0;
}
