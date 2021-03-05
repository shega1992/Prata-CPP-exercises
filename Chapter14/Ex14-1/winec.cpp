#include "winec.h"

Wine::Wine()
	 : label("No label"), number_of_years(0), vintage_years(), numbers_of_bottles() {}


Wine::Wine(const char * l, int y, const int yr[], const int bot[])
	 : label(l), number_of_years(y), vintage_years(y), numbers_of_bottles(y)
{
	for(int i = 0; i < number_of_years; i++)
	{
	   vintage_years[i] = yr[i];
	   numbers_of_bottles[i] = bot[i];
	}
}

Wine::Wine(const char * l, int y)
	 : label(l), number_of_years(y), vintage_years(y), numbers_of_bottles(y) {}


void Wine::GetBottles()
{
	cout << "Enter " << label << " data for " << number_of_years << " year(s):\n";

	for (int i = 0; i < number_of_years; i++)
	{
		cout << "Enter year: ";
		cin >> vintage_years[i];
		cout << "Enter bottles for that year: ";
		cin >> numbers_of_bottles[i];
	}
	
}

void Wine::Show() const
{
	cout << "Wine: " << label << endl;
	for(int i = 0; i < number_of_years; i++)
		cout << i+1 << ": " << "Year: " << vintage_years[i]
			 << ", " << "Bottles: " << numbers_of_bottles[i] << endl;
}
