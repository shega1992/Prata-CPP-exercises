#ifndef STONEWT_H_INCLUDED
#define STONEWT_H_INCLUDED

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt(){};
    void show_lbs() const;
    void show_stn() const;
    bool operator>(const Stonewt &b) const;
    bool operator>=(const Stonewt &b) const;
    bool operator<(const Stonewt &b) const;
    bool operator<=(const Stonewt &b) const;
    bool operator==(const Stonewt &b) const;
    bool operator!=(const Stonewt &b) const;
};

#endif // STONEWT_H_INCLUDED
