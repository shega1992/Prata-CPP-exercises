#include <iostream>
#include "header.h"

namespace SALES
{
     using std::cout;
     using std::cin;
     using std::endl;

    void setSales(Sales & s, const double ar[], int n)
    {
        s.average=0;
        s.max = s.min = ar[0];

        for(int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
            s.average+=ar[i];

            if(s.sales[i] > s.max)
                s.max = s.sales[i];

            if(s.sales[i] < s.min)
                s.min = s.sales[i];
        }

        s.average /= n;
    }

     void setSales(Sales & s)
     {
        s.average = 0;

        cout << "Enter the sales for 4 quarters: ";
        for(int i = 0; i < QUARTERS; i++)
            cin >> s.sales[i];

        s.max = s.min = s.sales[0];

         for(int i = 0; i < QUARTERS; i++)
         {
             s.average += s.sales[i];

             if(s.sales[i] > s.max)
                s.max = s.sales[i];

              if(s.sales[i] < s.min)
                s.min = s.sales[i];
         }

         s.average /= QUARTERS;
     }

     void showSales(const Sales & s)
    {
        cout << "Average: " << s.average << endl;
        cout << "Min: " << s.min << endl;
        cout << "Max: " << s.max << endl;
    }
}
