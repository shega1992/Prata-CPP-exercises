#include <iostream>

int main()
{
    using namespace std;

    long long population_of_world, population_of_the_USA;

    cout << "Enter the world's population: ";
    cin >> population_of_world;
    cout << "Enter the population of the US: ";
    cin >> population_of_the_USA;

    cout << "The population of the US is " << double(population_of_the_USA) / double(population_of_world) * 100.0 << "% of the world population.\n";

    return 0;
}
