#include "cstring"
#include "port.h"

Port::Port(const char * br, const char * st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strncpy(style, st, 19);
    style[19] = '\0';
    bottles = b;
}

Port::Port(const Port & p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
    if(&p == this)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if(bottles < b)
        cout << "The passed value exceeds the number of bottles\n";
    else
        bottles -= b;
    return * this;
}

void Port::Show() const
{
    cout << "***************************\n";
    cout << "Brand: " << brand << '\n'
         << "Kind: " << style << '\n'
         << "Bottles: " << bottles << '\n';
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

// VintagePort methods
VintagePort::VintagePort() : Port("none", "vintage", 0)
{
    nickname = new char[strlen("none") + 1];
    strcpy(nickname, "none");
    year = 0;
}

VintagePort::VintagePort(const char * br, int b,
                         const char * nn, int y) : Port(br, "vintage", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if(&vp == this)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << '\n'
         << "Vintage year: " << year << '\n';
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;

}
