#include "Cards.h"
#include <ctime>

Cards::Cards() 
{
   this->value = ERR; 
}

Cards::Cards(CardsValues value)
{
    this->value = value;
}

void Cards::setValue(CardsValues value)
{
    this->value = value;
}

CardsValues Cards::getValue()
{
    return this->value;
}
