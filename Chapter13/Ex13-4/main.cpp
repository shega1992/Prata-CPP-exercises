// port.h includes iostream and using namespace std directive
#include "port.h"

int main()
{
    Port gallo("Gallo", "tawny", 20);
    VintagePort graham("Graham's", 5, "Graham's Late Bottled Vintage Port", 2009);

    Port * ptrport = &gallo;

    cout << "Using object directly:\n";
    cout << "\nUsing Show methods:\n";
    gallo.Show();
    graham.Show();
    cout << "\nUsing friends:\n";
    cout << gallo << endl;
    cout << graham << endl;

    cout << "\nUsing type  ptrport * pointer to objects:\n";
    ptrport->Show(); // use Port method for Port object
    ptrport = &graham;
    ptrport->Show(); // use VintagePort method for VintagePort object

    cout << "\nTesting initialization:\n";
    VintagePort graham_copy(graham);
    graham_copy.Show();

    cout << "\nTesting assignment:\n";
    VintagePort graham_copy2;
    graham_copy2 = graham;
    graham_copy2.Show();

    cout << "\nTesting operator+=\n";
    graham_copy += 5;
    cout << "Number of bottles after graham_copy += 5: "
         << graham_copy.BottleCount() << endl;

    cout << "\nTesting operator-=\n";
    graham_copy -= 10;
    cout << "Number of bottles after graham_copy -= 15: "
         << graham_copy.BottleCount() << endl;

    cout << "\nBye!\n";

    return 0;
}
