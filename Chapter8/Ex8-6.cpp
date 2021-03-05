#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int n);

// explicit specialization
template <> const char* maxn (const char *arr[], int n);

int main()
{
    double arr_of_double[]{1.1, 5.5, 2, 3};
    int arr_of_int[]{1, 2, 10, 5, 7, 9};
    const char *arr_of_pchar[]{"Red", "Green", "Black", "White", "Grey"};

    std::cout << "Max value in double array: " << maxn(arr_of_double, sizeof arr_of_double / sizeof(double)) << std::endl
         << "Max value in int array: " << maxn(arr_of_int, sizeof arr_of_int / sizeof(int)) << std::endl
         << "The longest string: " << maxn(arr_of_pchar, sizeof arr_of_pchar / sizeof(char*)) << std::endl;

    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
    T max_value = arr[0];

    for(int i = 1; i < n; i++)
        if(arr[i] > max_value)
            max_value = arr[i];

    return max_value;
}

template <> const char* maxn (const char *arr[], int n)
{
    int max_length = 0;

    for(int i = 1; i < n; i++)
        if(strlen(arr[i]) > strlen(arr[max_length]))
            max_length = i;

    return arr[max_length];
}
