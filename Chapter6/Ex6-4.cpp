#include <iostream>

using namespace std;

const int strsize = 40;
const int ListLength = 5;

struct bop {
    char fullname[strsize]; // real name
    char title[strsize]; // job title
    char bopname[strsize]; // secret BOP name
    int preference; // 0 = fullname, 1 = title, 2 = bopname
};

void showmenu();

int main()
{
    bop programmers[ListLength] =
    {
		{"Barak Obama", "President", "Obamarama", 1},
		{"Elvis", "Singer", "The man, the legend", 0},
		{"Aristotle", "Philosopher", "The Thinker", 2},
		{"Einstein", "Physicist", "Genius", 1},
		{"Marlon Brando", "Actor", "Bad boy", 0}
	};
    char selection;

    showmenu();
    cout << "Enter your choice: ";

    while((selection = cin.get()) != 'q')
    {
        switch(selection)
        {
            case 'a':
                for(int i = 0; i < ListLength; i++)
                    cout << programmers[i].fullname << endl;
                break;
            case 'b':
                for(int i = 0; i < ListLength; i++)
                    cout << programmers[i].title << endl;
                break;
            case 'c':
                for(int i = 0; i < ListLength; i++)
                    cout << programmers[i].bopname << endl;
                break;
            case 'd':
                for(int i = 0; i < ListLength; i++)
                {
                    if(programmers[i].preference == 0)
                        cout << programmers[i].fullname << endl;
                    else if(programmers[i].preference == 1)
                        cout << programmers[i].title << endl;
                    else
                       cout << programmers[i].bopname << endl;
                }
                break;
            default:
                cout << "You've selected incorrect option\n"
                     << "Please enter a,b,c,d or q\n";
                break;
        }
        while(cin.get() != '\n')
                continue;

        cout << "Next choice: ";
    }

    return 0;
}

void showmenu()
{
    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name\t" << "b. display by title\n"
         << "c. display by bopname\t" << "d. display by preference\n"
         << "q. quit\n";
}
