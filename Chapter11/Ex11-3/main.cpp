// This program uses my versions of vect.h and vect.cpp from Ex11_2
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long highest_number_of_steps;
    unsigned long lowest_number_of_steps;
    unsigned long average_number_of_steps;
    double target;
    double dstep;
    unsigned long number_of_trials;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        cout << "Enter number of trials: ";
        cin >> number_of_trials;

        average_number_of_steps = 0;
        for(unsigned long i = 0; i < number_of_trials; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }

            average_number_of_steps += steps;
            if(i == 0) highest_number_of_steps = lowest_number_of_steps = steps;
            if(highest_number_of_steps < steps) highest_number_of_steps = steps;
            if(lowest_number_of_steps > steps) lowest_number_of_steps = steps;
            steps = 0;
            result.reset(0.0, 0.0);
        }
        average_number_of_steps /= number_of_trials;

        cout << "for " << number_of_trials << " trials\n"
            << "highest number of steps: " << highest_number_of_steps << endl
            << "lowest number of steps: " << lowest_number_of_steps << endl
            << "average_number_of_steps: " << average_number_of_steps << endl;

        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    return 0;
}


