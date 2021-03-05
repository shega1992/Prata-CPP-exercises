#include <iostream>
#include <fstream>
#include <cstdlib>
#define SIZE 60

int main()
{
    using namespace std;

    char filename[SIZE];
    ifstream inFile;
    int number_of_characters = 0;

    // name of text file: test.txt
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    while( inFile.get() != EOF)
        number_of_characters++;

    if(inFile.eof())
        cout << "End of file reached.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    if(number_of_characters == 0)
        cout << "No data processed.\n";
    else
        cout << "Number of characters in " << filename << ": " << number_of_characters << endl;

    inFile.close();

    return 0;
}
