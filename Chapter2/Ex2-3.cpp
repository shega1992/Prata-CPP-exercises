#include <iostream>

using namespace std;

void Three_blind_mice();
void See_how_they_run();

int main()
{
    Three_blind_mice();
    Three_blind_mice();
    See_how_they_run();
    See_how_they_run();

    return 0;
}

void Three_blind_mice()
{
    cout << "Three blind mice" << endl;
}

void See_how_they_run()
{
    cout << "See how they run" << endl;
}
