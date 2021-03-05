#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print_structure(box information);
void calculations(box *information);

int main()
{
    box information = {"Intel", 24.0, 15.0, 16.0, 0.0};

    cout << "Initial structure:\n";
    print_structure(information) ;

    cout << "Structure after calculations:\n";
    calculations(&information);
    print_structure(information);

    return 0;
}

void print_structure(box information)
{
    cout << "Maker: " << information.maker << endl
         << "Height: " << information.height << endl
         << "Width: " << information.width << endl
         << "Length: " << information.length << endl
         << "Volume: " << information.volume << endl;
}

void calculations(box *information)
{
    information ->volume = information ->height * information ->width * information ->length;
}
