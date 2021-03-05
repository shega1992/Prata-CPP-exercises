#include <iostream>
#include <cstring>

struct CandyBar{
    double weight;
    int number_of_calories;
    char *brand_name;
};

CandyBar &set_the_fields(CandyBar &target, const char *str = "Millennium Munch", double weight = 2.85, int calories =  350);
void print_structure(const CandyBar &target);

int main()
{
    CandyBar candy = set_the_fields(candy);
    print_structure(candy);

    delete [] candy.brand_name;

    return 0;
}

CandyBar &set_the_fields(CandyBar &target, const char *str, double weight, int calories)
{
     target.brand_name = new char[strlen(str) + 1];
     strcpy(target.brand_name, str);
     target.weight = weight;
     target.number_of_calories = calories;

     return target;
}

 void print_structure(const CandyBar &target)
 {
     std::cout << "Brand name: " << target.brand_name << std::endl
          << "Weight: " << target.weight << std::endl
          << "Number of calories: " << target.number_of_calories << std::endl;
 }
