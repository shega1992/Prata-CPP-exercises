#include <iostream>
#include "stonewt.h"

int main()
{
    using std::cout;

    Stonewt wolfe(385.7);
    Stonewt taft(21, 8);
    Stonewt result;
    // addition
    result = wolfe + taft;
    cout << "wolfe + taft = " << result;
    result.stn_pds_mode();
    cout << "or\n" << result;
    // subtraction
    result.reset();
    result.pds_mode();
    result = wolfe - taft;
    cout << "wolfe - taft = " << result;
    result.stn_pds_mode();
    cout << "or\n" << result;
    // multiplication
    result.reset();
    result.pds_mode();
    result = wolfe * taft;
    cout << "wolfe * taft = " << result;
    result.stn_pds_mode();
    cout << "or\n" << result;

    return 0;
}
