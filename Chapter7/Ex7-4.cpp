#include<iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
	using namespace std;

	double total, total_powerball, choices, choices_powerball;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed for the power ball:\n";
		if ((cin >> total_powerball >> choices_powerball) && choices_powerball <= total_powerball)
		{
			cout << "you have one chance in ";
			cout << probability(total, choices) * probability(total_powerball, choices_powerball); 	// compute the odds
			cout << " of winning.\n";
			cout << "Next two numbers (q to quit): ";
		}
		else
			break;
	}
	cout << "bye\n";

	return 0;
}


long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
