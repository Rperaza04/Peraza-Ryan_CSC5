#include <cstdlib>
#include <ctime>
#include "Cards.h"
#include "Clubs.h"
#include "Diamonds.h"
#include "Spades.h"
#include "Hearts.h"
#include "CardsValues.h"
#include "SuitValues.h"
using namespace std;

const int BLACKJACK = 21;
const int SUIT_SIZE = 13;
const int SUITS = 4;
const int HANDS = 2;

void setUpSuits(Cards[]);
CardsValues pullACard(Cards[], Cards[], Cards[], Cards[]);


int main(int argc, char** argv) 
{
    srand(time(NULL));
    
    Clubs clubs[SUIT_SIZE];
    Hearts hearts[SUIT_SIZE];
    Diamonds diamonds[SUIT_SIZE];
    Spades spades[SUIT_SIZE];
    
    setUpSuits(clubs);
    setUpSuits(hearts);
    setUpSuits(diamonds);
    setUpSuits(spades);
    
    Cards dealer[HANDS];
    Cards user[HANDS];
    
    cout << "Dealer drew two cards" << endl;
    dealer[0].setValue(pullACard(clubs, hearts, diamonds, spades));
    dealer[1].setValue(pullACard(clubs, hearts, diamonds, spades));
    cout << "User drew two cards" << endl;
    user[0].setValue(pullACard(clubs, hearts, diamonds, spades));
    user[1].setValue(pullACard(clubs, hearts, diamonds, spades));
    
    char response = 'n';
    int sum = -1;
    short value = -1;
    
    if(user[0].getValue() == ACE)
    {
        do{
            cout << "You got an ACE (First Card), which value would you like (1/11)?: ";
            cin >> value;
        }while(value != 1 || value != 11); 
        
        sum += value;
    }
    else
    {
        sum += user[0].getValue();
    }

    if(user[1].getValue() == ACE)
    {
        do{
            cout << "You got an ACE (Second Card), which value would you like (1/11)?: ";
            cin >> value;
        }while(value != 1 || value != 11); 
        
        sum += value;
    }
    else
    {
        sum += user[1].getValue();
    }
    
    
    if(sum == BLACKJACK)
    {
        cout << "User got black jack!" << endl; 
        return 0;
    }
    
    cout << "User cards total: " << sum << endl;
    cout << "Hit or stand (y/n)?: ";
    cin >> response;
    
    while(response == 'y')
    {
        CardsValues temp = pullACard(clubs, hearts, diamonds, spades);
        short value;

        if(temp == ACE)
        {
            do{
                cout << "You got an ACE, which value would you like (1/11)?: ";
                cin >> value;
            }while(value != 1 || value != 11); 
            
            sum += value;
        }
        else
            sum += temp;

        if(sum < 21)
        {
            cout << "User cards total: " << sum << endl;
            cout << "Hit or stand (y/n)?: ";
            cin >> response;
        }
        else if (sum == 21)
        {
            cout << "User got black jack!: " << sum << endl;
            return 0;
        }
        else
        {
            cout << "User got BUST!: "<< sum << endl;
            return 0;
        }  
    }
    
    cout << "Dealer hands: " <<  dealer[0].getValue() +  dealer[1].getValue() << endl;

    int deal_sum = -1;
    
    if((dealer[0].getValue() +  dealer[1].getValue()) == BLACKJACK)
    {
        cout << "Dealer & Player got black jack, it is a push" << endl;
    }
    else if (dealer[0].getValue() +  dealer[1].getValue() < 17)
    {
        cout << "Dealer has hand under 17, hitting" << endl;
        deal_sum = dealer[0].getValue() +  dealer[1].getValue();
        
        do{
            deal_sum += pullACard(clubs, hearts, diamonds, spades);
        }while(deal_sum < 17);  
            
        if(sum > deal_sum)
        {
            cout << "Player Wins" << endl;
        }
        else if(sum < deal_sum)
        {
            cout << "Dealer Wins " << endl;
        }
        else
        {
            cout << "Seems like dealer and player are tied " << endl;
        }
    }
    
    return 0;
}

void setUpSuits(Cards cards[])
{
    cards[0].setValue(ACE);
    cards[1].setValue(TWO);
    cards[2].setValue(THREE);
    cards[3].setValue(FOUR);
    cards[4].setValue(FIVE);
    cards[5].setValue(SIX);
    cards[6].setValue(SEVEN);
    cards[7].setValue(EIGHT);
    cards[8].setValue(NINE);
    cards[9].setValue(TEN);
    cards[10].setValue(JACK);
    cards[11].setValue(QUEEN);
    cards[12].setValue(KING);
}

CardsValues pullACard(Cards clubs[], Cards hearts[], Cards diamonds[], Cards spades[])
{
    srand(time(NULL));

    switch(rand() % SUITS + 1)
    {
        case HEARTS:
            return hearts[rand() % SUIT_SIZE + 1].getValue();
        case DIAMONDS:
            return diamonds[rand() % SUIT_SIZE + 1].getValue();
        case SPADES:
            return spades[rand() % SUIT_SIZE + 1].getValue();
        case CLUBS:
            return clubs[rand() % SUIT_SIZE + 1].getValue();
    }
   
    //return -1;
}


