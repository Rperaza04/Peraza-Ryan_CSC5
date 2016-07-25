/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July,3 2016, 3:00 PM
 * Purpose:  Calculating the average rain fall for 3 months
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //Used to read a sereis of characters
#include <iomanip>   //Used to manipulate
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string allMon;
    float mon1;
    float mon2;
    float mon3;
    float avgRain;
    
    //Input Data
    cout<<"Enter the three months you choose";
    cout<<" calculate the average rain fall for"<<endl;
    getline(cin,allMon);
    cout<<"Enter the rain fall for each month";
    cout<<" seperated by a space"<<endl;
    cin>>mon1>>mon2>>mon3;
   
    //Process the Data
    avgRain=(mon1+mon2+mon3)/3;
    
    //Output the processed Data
    cout<<"The average rain fall for "<<allMon<<" is ";
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<avgRain<<" inches"<<endl;
    
    //Exit Stage Right!
    return 0;
}