#ifndef CLUBS_H
#define CLUBS_H

#include <iostream>
#include "Cards.h"

using namespace std;

class Clubs : public ICards, public Cards
{
    public:
        Clubs();
        string getSuit();
    private:
        string suit;
};


#endif	// CLUBS_H

