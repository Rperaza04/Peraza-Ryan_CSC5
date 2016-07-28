#ifndef SPADES_H
#define SPADES_H

#include <iostream>
#include "Cards.h"
using namespace std;

class Spades : public ICards, public Cards
{
    public:
        Spades();
        std::string getSuit();
    private:
        std::string suit;
};
#endif /* SPADES_H */

