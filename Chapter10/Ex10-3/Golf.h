#ifndef GOLF_H_INCLUDED
#define GOLF_H_INCLUDED

class Golf
{
private:
    static const int Len = 40;
    char m_fullname[Len];
    int m_handicap;
public:
    Golf() {};
    Golf(const char *name, int hc);
    int setgolf();
    void showgolf() const;
};

#endif // GOLF_H_INCLUDED
