#include <iostream>

template <typename T>
T max5(T arr[]);

int main()
{
    double arr_of_double[]{1.1, 2.2, 5.5, 3.3, 4.4};
    int arr_of_int[]{1, 2, 5, 4, 3};

    std::cout << "Max value in double array: " << max5(arr_of_double) << std::endl
         << "Max value in int array: " << max5(arr_of_int) << std::endl;

    return 0;
}

template <typename T>
T max5(T arr[])
{
    T max_value = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > max_value)
            max_value = arr[i];
    }

    return max_value;
}
