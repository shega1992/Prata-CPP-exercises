#include <iostream>

long long Factorial(long long n);

int main()
{
    using namespace std;

    long long n;

    cout << "Enter your number (negative number for exit): ";
    while(cin >> n && n >= 0)
    {
       cout << n << "! = " << Factorial(n) << endl;
       cout << "Enter next number (negative number for exit): ";
    }

    return 0;
}

long long Factorial(long long n)
{
    if(n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}
