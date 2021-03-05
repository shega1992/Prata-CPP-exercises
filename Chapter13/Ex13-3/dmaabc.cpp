#include"dmaabc.h"
#include <cstring>

// DmaABC methods
DmaABC::DmaABC(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DmaABC::DmaABC(const DmaABC & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

DmaABC::~DmaABC()
{
    delete [] label;
}

DmaABC & DmaABC::operator=(const DmaABC & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void DmaABC::View() const
{
    std::cout << "Label: " << label << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}

std::ostream & operator<<(std::ostream & os, const DmaABC & rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r) : DmaABC(l,r) {}

baseDMA::baseDMA(const baseDMA & rs) : DmaABC(rs) {}

baseDMA::~baseDMA()
{
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    DmaABC::operator=(rs);
    return *this;
}

void baseDMA::View() const
{
    std::cout << "baseDMA object\n";
    DmaABC::View();
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << (const DmaABC &) rs;
    return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : DmaABC(l,r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const DmaABC & rs) : DmaABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
   std::cout << "lacksDMA object\n";
   DmaABC::View();
   std::cout << "Color: " << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << (const DmaABC &) rs;
    os << "Color: " << rs.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : DmaABC(l,r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const DmaABC & rs) : DmaABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : DmaABC(hs)
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    DmaABC::operator=(hs);
    delete [] style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

void hasDMA::View() const
{
    std::cout << "hasDMA object\n";
    DmaABC::View();
    std::cout << "Style: " << style << std::endl;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << (const DmaABC &) rs;
    os << "Style: " << rs.style << std::endl;
    return os;
}

