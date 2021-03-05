#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
    char *str;
    int ct;
};

void set(stringy &target, char *source);
void show(const stringy &beany, int n = 1);
void show(const char *testing, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);

    show(beany); // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");

    delete [] beany.str;

    return 0;
}

void set(stringy &target, char *source)
{
    target.ct = strlen(source) + 1;
    target.str = new char[target.ct];
    strcpy(target.str, source);
}

void show(const stringy &beany, int n)
{
    for(int i = 0; i < n; i++)
        cout << beany.str << endl;
}

void show(const char *testing, int n)
{
    for(int i = 0; i < n; i++)
        cout << testing << endl;
}
