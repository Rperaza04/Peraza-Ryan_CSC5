/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 5, 2016, 1:51 PM
 * Purpose:  Show me the Money
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int pennies=1;  //Initial pay per day
    int payDay=0;

    
    //Input Data
    
    
    //Process the Data
    for(int day=1;day<=30;day++){
        payDay+=pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<"Ray Rate = $"<<setw(10)<<pennies/100.0f;
        cout<<"Pay earned $"<<setw(10)<<payDay/100.0f<<endl;
        pennies*=2;
        
    }
    
    
    //Output the processed Data
    

    
    //Exit Stage Right!
    return 0;
}
