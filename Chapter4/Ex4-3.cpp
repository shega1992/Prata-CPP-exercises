#include <iostream>
#include <cstring>

int main()
{
    using std :: cin;
    using std :: cout;
    using std :: endl;

    const int ArSize = 20;
    char first_name[ArSize];
    char last_name[ArSize];

    cout << "Enter your first name: ";
    cin.get(first_name, ArSize).get();
    cout << "Enter your last name: ";
    cin.get(last_name,ArSize).get();

    char complete_name[strlen(last_name) + 2 + strlen(first_name) + 1]; // 2 for comma and character; 1 for \0

    strcpy(complete_name, last_name);
    strcat(complete_name, ", ");
    strcat(complete_name, first_name);

    cout << "Here\'s the information in a single string: " << complete_name << endl;

    return 0;
}
