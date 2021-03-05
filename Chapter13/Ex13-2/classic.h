#ifndef CLASSIC_H_INCLUDED
#define CLASSIC_H_INCLUDED

class Cd
{
private:
    char * performers;
    char * label;
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char * s1, const char * s2, int n, double x);
    //Cd(const Cd & d); not required for this task
    Cd();
    ~Cd();
    virtual void Report() const; // reports all CD data
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char * primary_work;
public:
    Classic(const char * pw, const char * s1, const char * s2, int n, double x);
    //Classic(const char *pw, const Cd & d); not required for this task
    Classic();
    ~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic & c);
};

#endif // CLASSIC_H_INCLUDED
