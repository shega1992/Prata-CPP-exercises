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
    CandyBar *snack = new CandyBar[3];

    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Mucha Manch", 2.8, 375};
    snack[2] = {"Macha Mench", 2.5, 325};

    for(int i = 0; i < 3; i++)
    {
       cout << i + 1 << " structure:\n";

       cout << "Brand name: " << snack[i].brand_name << endl
         << "Weight: " << snack[i].weight << endl
         << "Number of calories: " << snack[i].number_of_calories << endl;

        cout.put('\n');
    }

    delete snack;

    return 0;
}
