#include <iostream>
#include <string>

using namespace std;

struct CandyBar{
    string brand_name;
    float weight;
    int number_of_calories;
};

int main()
{
    CandyBar snack {"Mocha Munch", 2.3, 350};

    cout << "Brand name: " << snack.brand_name << endl
         << "Weight: " << snack.weight << endl
         << "Number of calories: " << snack.number_of_calories << endl;

    return 0;
}
