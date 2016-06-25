/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 21, 2016, 12:27 PM
 * Purpose: Circuit Board Selling Price
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//namespace of the system libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float profit=0.40f,//40 percent profit
          cost=12.67f,//cost in $'s
          selprce;//selling price in $'s
    //Input data
    
    //Process data
    //selprce=cost*profit+cost;
    selprce=cost*(1+profit);
    int pennies=selprce*100+0.5;//shift into pennies add a half to r
    selprce=pennies/100.0f;
    
    //Output data
    cout<<"cost of circuit to the company = $"<<cost<<endl;
    cout<<"profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"selling price = $"<<selprce<<endl;
    
    //Exit Stage Right!
    return 0;
}

