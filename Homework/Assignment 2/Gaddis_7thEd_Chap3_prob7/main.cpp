/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 4, 7:50, PM
 * Purpose: How many calories consumed in Cookies
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float calCon;
    float numCook;
    float calories=75;
    
    //Input Data
    cout<<"How many cookies did you eat ? "<<endl;
    cin>>numCook;
    
    //Process the Data
    calCon=(calories*numCook);
    
    //Output the processed Data
    cout<<"You consumed "<<calCon<<" calories "<<endl;
    
    //Exit Stage Right!
    return 0;
} 
