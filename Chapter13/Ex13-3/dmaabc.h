#ifndef DMAABC_H_INCLUDED
#define DMAABC_H_INCLUDED

#include <iostream>

class DmaABC
{
private:
    char * label;
    int rating;
public:
    DmaABC(const char * l = "null", int r = 0);
    DmaABC(const DmaABC & rs);
    virtual ~DmaABC();
    DmaABC & operator=(const DmaABC & rs);
    virtual void View() const = 0;
    friend std::ostream & operator<<(std::ostream & os, const DmaABC & rs);
};

class baseDMA : public DmaABC
{
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    virtual void View() const;
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

class lacksDMA : public DmaABC
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const DmaABC & rs);
    virtual void View() const;
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

class hasDMA : public DmaABC
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const DmaABC & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    virtual void View() const;
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif // DMAABC_H_INCLUDED
