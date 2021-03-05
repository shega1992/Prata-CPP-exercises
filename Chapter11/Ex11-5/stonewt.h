#ifndef STONEWT_H_INCLUDED
#define STONEWT_H_INCLUDED

class Stonewt
{
public:
    enum Mode{STN_PDS, PDS}; // STN_PDS - stone and pounds, PDS - pounds
private:
    enum {Lbs_per_stn = 14}; // pounds per stone
    int stone; // whole stones
    double pds_left; // fractional pounds
    double pounds; // entire weight in pounds
    Mode mode = PDS; // default mode
public:
    Stonewt(double lbs); // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt(); // default constructor
    void reset();
    ~Stonewt();
    void stn_pds_mode() {mode = STN_PDS;};
    void pds_mode() {mode = PDS;};
    Stonewt operator+(const Stonewt &b) const;
    Stonewt operator-(const Stonewt &b) const;
    Stonewt operator*(const Stonewt &b) const;
    friend std::ostream & operator<<(std::ostream & os, const Stonewt &s);
};


#endif // STONEWT_H_INCLUDED
