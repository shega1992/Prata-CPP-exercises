#include <iostream>
#include "Golf.h"

int main()
{
    // Using the non-default constructor
    Golf ann("Ann Birdfree", 24);
    ann.showgolf();

    std:: cout << "\nUsing setgolf() function\n";
    Golf player;
    if(player.setgolf())
        player.showgolf();
    else
        std::cout << "You haven't entered the name for player\n";

    return 0;
}
