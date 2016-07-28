/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 13, 2016, 8:19 PM
 * Purpose:  Number to Star Power
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
#include <cstdlib>   //Setting random number seed
#include <ctime> //Time library
#include <cmath>
#include <fstream>
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries
char square[11]={'0','1','2','3','4','5','6','7','8','9','\0'};
    void board();
    int win();

//Global Constants - PI, Gravity, Conversions
const int CNVINFT=12;//There are 12 inches in a foot;

//Function Prototypes
void game1();
void game2();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':game1();break;
            case '2':game2();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit Stage Right!
    return 0;
}

void game1(){
     srand((unsigned)time(0));
    //Declare Variables
    int sum;
    int value;
    int bet;
    int dCard1,dCard2,pCard1,pCard2;
    int dTotal,pTotal;
    
    dCard1=rand()%13+1;//dealer card 1 
    dCard2=rand()%13+1;//dealer card 2
    pCard1=rand()%13+1;//player card 1
    pCard2=rand()%13+1;//player card 2
    
    //Input Data
    cout<<"LETS PLAY BLACKJACK! "<<endl;
    cout<<"Do you want to Play ?"<<endl;
    cout<<"Please place your bet: $";
    cin>>bet;	//your bet
    
    //Process Data
    cout<<"The dealer has ";
    switch(dCard1){
        case 1: cout<<"Ace and ";break;
        case 2: cout<<"2 and ";break;
        case 3: cout<<"3 and ";break;
        case 4: cout<<"4 and ";break;
        case 5: cout<<"5 and ";break;
        case 6: cout<<"6 and ";break;
        case 7: cout<<"7 and ";break;
        case 8: cout<<"8 and ";break;
        case 9: cout<<"9 and ";break;
        case 10: cout<<"10 and ";break;
        case 11: cout<<"Ace and ";
        case 12: cout<<"Queen and ";
        case 13: cout<<"King and ";break;
        default: cout<<dCard1;
    }
    
    switch(dCard2){
        case 1: cout<<"Ace ";break;
        case 2: cout<<"2 ";break;
        case 3: cout<<"3 ";break;
        case 4: cout<<"4 ";break;
        case 5: cout<<"5 ";break;
        case 6: cout<<"6 ";break;
        case 7: cout<<"7 ";break;
        case 8: cout<<"8 ";break;
        case 9: cout<<"9 ";break;
        case 10: cout<<"10 ";break;
        case 11: cout<<"Jack ";break;
        case 12: cout<<"Queen ";break;
        case 13: cout<<"King ";break;
        default: cout<<dCard2;
    }
    
    cout<<endl<<"You have ";
    switch(pCard1){
        case 1: cout<<"Ace and ";break;
        case 2: cout<<"2 and ";break;
        case 3: cout<<"3 and ";break;
        case 4: cout<<"4 and ";break;
        case 5: cout<<"5 and ";break;
        case 6: cout<<"6 and ";break;
        case 7: cout<<"7 and ";break;
        case 8: cout<<"8 and ";break;
        case 9: cout<<"9 and ";break;
        case 10: cout<<"10 and ";break;
        case 11: cout<<"Jack and ";break;
        case 12: cout<<"Queen and ";break;
        case 13: cout<<"King and ";break;
        default: cout<<pCard1;
    }
    
    switch(pCard2){
        case 1: cout<<"Ace ";break;
        case 2: cout<<"2 ";break;
        case 3: cout<<"3 ";break;
        case 4: cout<<"4 ";break;
        case 5: cout<<"5 ";break;
        case 6: cout<<"6 ";break;
        case 7: cout<<"7 ";break;
        case 8: cout<<"8 ";break;
        case 9: cout<<"9 ";break;
        case 10: cout<<"10 ";break;
        case 11: cout<<"Jack ";break;
        case 12: cout<<"Queen ";break;
        case 13: cout<<"King ";break;
        default: cout<<pCard2;
    }
    
    cout<<endl;
    //Output Data
    
    dTotal=dCard1+dCard2;
    pTotal=pCard1+pCard2;
    
    if ((pCard1==1) && (pCard2==10||pCard2==11||pCard2==12||pCard2==13))
        cout<<"Blackjack! You Win $"<<bet<<endl;
    else
    if((pCard1==10||pCard1==11||pCard1==12||pCard1==13) && (pCard2==1))
        cout<<"Blackjack! You Win $"<<bet<<endl;
    
    if ((dCard1==1) && (dCard2==10||dCard2==11||dCard2==12||dCard2==13))
        cout<<"Blackjack! You Lose $"<<bet<<endl;
    else
        
    if((dCard1==10||dCard1==11||dCard1==12||dCard1==13) && (dCard2==1))
        cout<<"Blackjack! You Lose $"<<bet<<endl;
    else 
    
    if(pTotal>dTotal)
        cout<<"You Win $"<<bet<<endl;
    else 
        cout<<"You lose $"<<bet<<endl;
    
    //return 0;
}

void game2(){
    //Declare Variables
    char playagain='y';
    while(playagain=='y')
    {
    //Input data
        cout<<"Welcome to my Tic Tac Toe!!!\n\n\n"<<endl;
        int player=1;
        int i,choice;
        char mark;
        
        do
        {
            
            board();
            player=(player%2)?1:2;
            cout<<"Player "<<player<<" enter a number: ";
            cin>>choice;
            mark=(player==1)?'x':'0';
            
            if(choice==1  && square[1]=='1')
                square[1]=mark;
            
            else if (choice == 2 && square[2] == '2')
                
                square[2] = mark;
            else if (choice == 3 && square[3] == '3')
                
                square[3] = mark;
            else if (choice == 4 && square[4] == '4')
                
                square[4] = mark;
            else if (choice == 5 && square[5] == '5')
                
                square[5] = mark;
            else if (choice == 6 && square[6] == '6')
                
                square[6] = mark;
            else if (choice == 7 && square[7] == '7')
                
                square[7] = mark;
            else if (choice == 8 && square[8] == '8')
                
                square[8] = mark;
            else if (choice == 9 && square[9] == '9')
                
                square[9] = mark;
            else
            {
                cout<<"\nINVALID MOVE \n\n";
                player--;
                
            }
            i=win();
            player++;
        }while(i==-1);
        board();
        if(i==1)
        cout<<"Player"<<--player<<" win";
        if(i==0)
        cout<<"Game draw";
        
        
        cout<<"\n\nDo You Want to Keep Playing?(y\n)?:";
        cin>>playagain;
        cout<<endl;
        
        if(playagain=='y')
        {
            cout<<"You choice to play again\n\n";
        }
        else if(playagain=='n')
        {
            cout<<"You choice not to play again\n\n";
        }
        else
        {
            cout<<"You didn't put an valid character so I will take it like(n),so the program will close.\n\n";
        }
        
        for(int c=0;c<40;c++)
        {
            cout<<"****";
        }
        cout<<endl;
        
        square[1] = '1';
        square[2] = '2';
        square[3] = '3';
        square[4] = '4';
        square[5] = '5';
        square[6] = '6';
        square[7] = '7';
        square[8] = '8';
        square[9] = '9';
        
    }
}

int win()
{
    if(square[1]==square[2]&&square[2]==square[3])
        return 1;
    
    else if(square[4]==square[5]&&square[5]==square[6])
        return 1;
    
    else if(square[7]==square[8]&&square[8]==square[9])
        return 1;
    
    else if(square[1]==square[4]&&square[4]==square[7])
        return 1;
    
    else if(square[2]==square[5]&&square[5]==square[8])
        return 1;
    
    else if(square[3]==square[6]&&square[6]==square[9])
        return 1;
    
    else if(square[1]==square[5]&&square[5]==square[9])
        return 1;
    
    else if(square[3]==square[5]&&square[5]==square[7])
        return 1;
    
    else if (square[1] != '1' && square[2] !='2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8'
            && square[9] != '9')
        return 0;
    
    else
        return -1;
    
}

void board()
{
    cout<<"\tTic Tac Toe\t\t\n\n";
    cout<<"PLAYER 1(x) , PLAYER 2(0)\n\n";
    cout<<square[1]<<"|"<<square[2]<<"|"<<square[3]<<endl;
    cout<<"_____"<<endl;
    cout<<square[4]<<"|"<<square[5]<<"|"<<square[6]<<endl;
    cout<<"_____"<<endl;
    cout<<square[7]<<"|"<<square[8]<<"|"<<square[9]<<endl;
   
}

void menu(){
    cout<<endl;
    cout<<"Menu Program for Midterm Example Test"<<endl;
    cout<<"Simple choose the number for the problem to display"<<endl;
    cout<<"Type 1 for BlackJack "<<endl;
    cout<<"Type 2 for Tic Tac Toe "<<endl;
    cout<<endl;
}