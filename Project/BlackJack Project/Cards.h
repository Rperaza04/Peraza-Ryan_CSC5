#ifndef CARDS_H
#define CARDS_H

#include "ICards.h"
#include "CardsValues.h"

class Cards 
{
    public:
        Cards();
        Cards(CardsValues);
        void setValue(CardsValues);
        CardsValues getValue();
    protected:
        CardsValues value;
};

#endif /* CARDS_H */

