#ifndef HEARTS_H
#define HEARTS_H

#include <iostream>
#include "Cards.h"
using namespace std;

class Hearts : public ICards, public Cards
{
    public:
        Hearts();
        std::string getSuit();
    private:
        std::string suit;
};

#endif /* HEARTS_H */

