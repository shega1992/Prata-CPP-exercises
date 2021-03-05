#include <iostream>
#include "Sales.h"

int main()
{
    using namespace SALES;

    Sales obj_1;
    obj_1.setSales();
    cout << "Interactive version\n";
    obj_1.showSales();

    double arr[QUARTERS] = {5, 11, 8, 10};

    Sales obj_2(arr, QUARTERS);
    cout << "Non-interactive version\n";
    obj_2.showSales();

    return 0;
}
