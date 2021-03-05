#include <iostream>
#include "stonewt.h"

int main()
{
    using std::cout;
    using std::cin;

    const int SIZE = 6;
    Stonewt arr[SIZE] = {
        Stonewt(289.5),
        Stonewt(21,8),
        Stonewt(285.9),
    };
    Stonewt s11(11,0);
    double pounds;

    for(int i = 3; i < SIZE; i++)
    {
        cout << "Please enter the number of pounds for " << i << "th element: ";
        cin >> pounds;
        arr[i] = pounds;
    }

    int min,max,count;
    min = max = count = 0;

    for(int i = 1; i < SIZE; i++)
    {
        if(arr[i] < arr[min]) min = i;
        if(arr[i] > arr[max]) max = i;
        if(arr[i] >= s11) count++;
    }

    cout << "Smallest element\n" << "index: " << min << ", value: ";
    arr[min].show_lbs();
    cout << "or ";
    arr[min].show_stn();

    cout << "\nLargest element\n" << "index: " << max << ", value: ";
    arr[max].show_lbs();
    cout << "or ";
    arr[max].show_stn();

    cout << "\nNumber of elements is greater or equal to 11 stone: " << count;

    return 0;
}
