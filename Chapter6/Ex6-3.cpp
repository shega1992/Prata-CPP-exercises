#include <iostream>

using namespace std;

void showmenu();

int main()
{
    char selection;
    bool input_is_not_correct = true;

    showmenu();

    while(input_is_not_correct)
    {
        switch(selection = cin.get())
        {
            case 'c':
                cout << "You've selected carnivore option.\n";
                input_is_not_correct = false;
                break;
            case 'p':
                cout << "You've selected pianist option.\n";
                input_is_not_correct = false;
                break;
            case 't':
                cout << "You've selected tree option.\n";
                input_is_not_correct = false;
                break;
            case 'g':
                cout << "You've selected game option.\n";
                input_is_not_correct = false;
                break;
            default:
                cout << "Please enter a c, p, t, or g: ";
                while(cin.get() != '\n')
                    continue;
                break;
        }
    }

    return 0;
}

void showmenu()
{
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore\t" << "p) pianist\n"
         << "t) tree\t\t" << "g) game\n";
}
