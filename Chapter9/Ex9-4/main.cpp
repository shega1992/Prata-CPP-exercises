#include <iostream>
#include "header.h"

int main()
{
    using namespace SALES;

    Sales str1;
    Sales str2;

    setSales(str1);
    std::cout << "Interactive version of setSales()\n";
    showSales(str1);

    double arr[4] = {5, 11, 8, 10};

    setSales(str2,arr,4);
    std::cout << "Non-interactive version of setSales()\n";
    showSales(str2);

    return 0;
}
