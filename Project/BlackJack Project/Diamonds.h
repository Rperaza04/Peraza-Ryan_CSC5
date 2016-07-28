#ifndef DIAMONDS_H
#define DIAMONDS_H

#include <iostream>
#include "Cards.h"
using namespace std;

class Diamonds : public ICards, public Cards
{
    public:
        Diamonds();
        std::string getSuit();
    private:
        std::string suit;
};

#endif /* DIAMONDS_H */

