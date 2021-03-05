#include <iostream>
#include <string>

using namespace std;

struct contributors
{
    string name;
    double contribution;
};

int main()
{
    int number_of_contributors;

    cout << "Please enter number of contributors: ";
    (cin >> number_of_contributors).get();


    contributors *list_of_contributors = new contributors[number_of_contributors];

    for(int i = 0; i < number_of_contributors; i++)
    {
        cout << "contributor #" << i + 1 << endl;

        cout << "Name: ";
        getline(cin, list_of_contributors[i].name);
        cout << "Contribution: ";
        (cin >> list_of_contributors[i].contribution).get();
    }

    int counter = 0;

    cout << "Grand Patrons:\n";
    for(int i = 0; i < number_of_contributors; i++)
    {
        if(list_of_contributors[i].contribution >= 10000)
        {
            cout << "Name: " << list_of_contributors[i].name << endl
                 << "Sum: " << list_of_contributors[i].contribution << endl
                 << endl;

            counter ++;
        }
    }

    if(counter == 0)
        cout << "none\n\n";

    counter = 0;

    cout << "Patrons:\n";
    for(int i = 0; i < number_of_contributors; i++)
    {
        if(list_of_contributors[i].contribution < 10000)
        {
            cout << "Name: " << list_of_contributors[i].name << endl
                 << "Sum: " << list_of_contributors[i].contribution << endl
                 << endl;

            counter ++;
        }
    }

    if(counter == 0)
        cout << "none\n";

    delete [] list_of_contributors;

    return 0;
}
