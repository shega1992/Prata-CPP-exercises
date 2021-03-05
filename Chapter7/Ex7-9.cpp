#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];

    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    if(entered == 0)
        cout << "List is empty\n";
    else
        display3(ptr_stu, entered);

    delete [] ptr_stu;

    cout << "Done\n";

    return 0;
}

int getinfo(student pa[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        cout << "Enter the name of " << i + 1 << " student: " ;
        cin.getline(pa[i].fullname, SLEN);
        if(strlen(pa[i].fullname) == 0)
            break;

        cout << "Enter the hobby of " << i + 1 << " student: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter the ooplevel of " << i + 1 << " student: ";
        (cin >> pa[i].ooplevel).get();
    }

    return i;
}

void display1(student st)
{
    cout << "display 1 function:\n";
    cout << "Full name: " << st.fullname << endl
         << "Hobby: " << st.hobby << endl
         << "OOP Level: " << st.ooplevel << endl;
    cout << "**********************************\n";
}

void display2(const student * ps)
{
    cout << "display 2 function:\n";
    cout << "Full name: " << ps ->fullname << endl
         << "Hobby: " << ps ->hobby << endl
         << "OOP Level: " << ps ->ooplevel << endl;
    cout << "**********************************\n";
}

void display3(const student pa[], int n)
{
   cout << "display 3 function:\n";

   for(int i = 0; i < n; i++)
   {
       cout << "Full name: " << pa[i].fullname << endl
         << "Hobby: " << pa[i].hobby << endl
         << "OOP Level: " << pa[i].ooplevel << endl;

   }
}
