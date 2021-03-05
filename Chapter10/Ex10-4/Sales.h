#ifndef SALES_H_INCLUDED
#define SALES_H_INCLUDED

namespace SALES
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int QUARTERS = 4;

    class Sales
    {
    private:
        double m_sales[QUARTERS];
        double m_average;
        double m_max;
        double m_min;
    public:
        Sales() {};
        Sales(const double ar[], int n);
        void setSales();
        void showSales() const;
    };
}

#endif // SALES_H_INCLUDED
