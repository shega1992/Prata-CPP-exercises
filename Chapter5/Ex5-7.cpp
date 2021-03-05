#include <iostream>

using namespace std;

struct car{
    string brand_name;
    int release_year;
};

int main()
{
    int n;

    cout << "How many cars do you wish to catalog? ";
    (cin >> n).get();

    car *catalog = new car[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Car #" <<  i + 1 << " :\n";

        cout << "Please enter the make: ";
        getline(cin, catalog[i].brand_name);
        cout << "Please enter the year made: ";
        (cin >> catalog[i].release_year).get();

    }

    cout << "Here is your collection:\n";

    for(int i = 0; i < n; i++)
        cout << catalog[i].release_year << " "
             << catalog[i].brand_name << endl;

    delete [] catalog;

    return 0;
}
