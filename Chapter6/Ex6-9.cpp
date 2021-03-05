#include <iostream>
#include <fstream>
#include <string>
#define SIZE 60

using namespace std;

struct contributors
{
    string name;
    double contribution;
};

int main()
{
    ifstream inFile;
    char filename[SIZE];

    // name of text file: contributors.txt
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int number_of_contributors;

    inFile >> number_of_contributors;
    inFile.get();

    contributors *list_of_contributors = new contributors[number_of_contributors];

    for(int i = 0; i < number_of_contributors; i++)
    {
        getline(inFile, list_of_contributors[i].name);
        (inFile >> list_of_contributors[i].contribution).get();
    }

    inFile.close();
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
        cout << "none\n";

    cout << "*****************************************" << endl;

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

