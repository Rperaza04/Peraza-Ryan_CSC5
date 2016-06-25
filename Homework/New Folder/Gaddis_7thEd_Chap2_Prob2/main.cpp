/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 6:51 PM
 * Purpose:  East Coast Sales Division 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float sales=4.6e6;
    float EstPct=.62;
    float EstGen;
    
    //Input Data
    
    //Process the Data
    EstGen=sales*EstPct;
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Calculation of East Coast Divisions Portion of Sales = $"<<EstGen<<endl;
    //Exit Stage Right!
    return 0;
}