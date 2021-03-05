#include <iostream>

using namespace std;

struct PizzaInfo
{
    char name_of_the_pizza_company[20];
    float diameter;
    float weight;
};

int main()
{
    PizzaInfo pizza;

    cout << "Please enter the name of the pizza company: ";
    cin.getline(pizza.name_of_the_pizza_company, 20);
    cout << "Please enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Please enter the weight of the pizza: ";
    cin >> pizza.weight;

    cout << "The name of the pizza company: " << pizza.name_of_the_pizza_company << endl
         << "The diameter of the pizza: " << pizza.diameter << endl
         << "The weight of the pizza: " << pizza.weight << endl;

    return 0;
}
