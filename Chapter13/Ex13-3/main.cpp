#include <iostream>
#include <cstring>
#include"dmaabc.h"

const int SIZE = 5;
const int LEN = 40;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    DmaABC * dma[SIZE];
    char label[LEN];
    int rating;

    int ct;
    for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Select the class to create object:\n"
			<< "b:  baseDMA l: lacksDMA "
			<< "h:  hasDMA q: quit\n";
		(cin >> choice).get();
		while (strchr("blhq", choice) == NULL)
		{
			cout << "Please enter a b, l, h, or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
        cout << "For element " << ct + 1 << ", enter the label: ";
		cin.getline(label, LEN);
		cout << "Enter the rating: ";
		(cin >> rating).get();
		switch (choice)
		{
		case 'b':
		    dma[ct] = new baseDMA(label,rating);
			break;
		case 'l':
		    char color[LEN];
		    cout << "Enter color: ";
            cin.getline(color, LEN);
		    dma[ct] = new lacksDMA(color,label,rating);
			break;
		case 'h':
		    char style[LEN];
		    cout << "Enter the style: ";
            cin.getline(style, LEN);
		    dma[ct] = new hasDMA(style, label, rating);
			break;
		}
	}

	cout << "\nHere is your objects:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		dma[i]->View();
	}
	for (i = 0; i < ct; i++)
		delete dma[i];
	cout << "Bye.\n";

    return 0;
}
