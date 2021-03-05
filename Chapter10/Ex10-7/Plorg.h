#ifndef PLORG_H_INCLUDED
#define PLORG_H_INCLUDED

using std::cout;
using std::cin;
using std::endl;

class Plorg
{
private:
    char fullname[20];
    int contentment_index;
public:
    Plorg(const char name[] = "Plorga", int ci = 50);
    void change_index();
    void report_name_and_CI() const;
};

#endif // PLORG_H_INCLUDED
