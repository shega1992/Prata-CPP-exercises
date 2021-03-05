#include <iostream>

int main()
{
    float Daphne_sum = 100.00;
    float Cleo_sum = 100.00;
    unsigned short int years = 0;
    bool Daphne_has_more_money_than_Cleo = 1;

    while(Daphne_has_more_money_than_Cleo)
    {
        Daphne_has_more_money_than_Cleo = ((Daphne_sum += 100.00 * 0.1) > (Cleo_sum += Cleo_sum * 0.05));
        years ++;
        std::cout << "Daphne sum after " << years << " year: " << Daphne_sum << std::endl
             << "Cleo sum after " << years << " year: " << Cleo_sum << std::endl;
        std::cout << "*******************************" << std::endl;
    }

    std::cout << "Daphne\'s investment is " << Daphne_sum << std::endl
         << "Cleo\'s investment is " << Cleo_sum << std::endl
         << "Years: " << years << std::endl;

    return 0;
}
