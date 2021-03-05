#include <iostream>

template <typename T> // template A
T SumArray(T arr[], int n);

template <typename T> // template B
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;

    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Sum of things: " << SumArray(things, 6) << endl; // uses template A

    cout << "Sum of debts: " << SumArray(pd, 3); // uses template B (more specialized)

    return 0;

}

template <typename T>
T SumArray(T arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
        sum += *arr[i];

    return sum;
}
