#include <iostream>
#include <cstring>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
const int N = 2;

char buffer[BUF];

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    chaff arr[N];
    chaff *ptr;

    ptr = new(buffer) chaff[N];

    for(int i = 0; i < N; i++)
    {
       cout << "Enter the string: ";
       cin.getline(arr[i].dross, 20);
       cout << "Enter the value: ";
       (cin >> arr[i].slag).get();
    }

    for(int i = 0; i < N; i++)
    {
        strcpy(ptr[i].dross, arr[i].dross);
        ptr[i].slag = arr[i].slag;
    }

    for(int i = 0; i < N; i++)
        cout << "Dross: " << ptr[i].dross << endl
             << "Slag: " << ptr[i].slag << endl;

    return 0;
}
