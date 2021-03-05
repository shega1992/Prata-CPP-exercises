#include <iostream>
#include "Sales.h"

namespace SALES
{
     Sales::Sales(const double ar[], int n)
     {
        m_average = 0;
        m_max = m_min = ar[0];

        for(int i = 0; i < n; i++)
        {
            m_sales[i] = ar[i];
            m_average += ar[i];

            if(m_sales[i] > m_max)
                m_max = m_sales[i];

            if(m_sales[i] < m_min)
                m_min = m_sales[i];
        }

        m_average /= n;
     }



     void Sales::setSales()
     {
        double temp_arr[QUARTERS];

        cout << "Enter the sales for 4 quarters: ";
        for(int i = 0; i < QUARTERS; i++)
            cin >> temp_arr[i];

        Sales temp(temp_arr, QUARTERS);
        *this = temp;
     }

     void Sales::showSales() const
    {
        cout << "Average: " << m_average << endl
             << "Min: " << m_min << endl
             << "Max: " << m_max << endl;
    }
}
