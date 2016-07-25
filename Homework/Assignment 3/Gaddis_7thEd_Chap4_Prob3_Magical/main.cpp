/*
* File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 5, 2016, 10:01 PM
 * Purpose:  Find if your Birthday is Magical or Not
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int month, day, year;   //Declare the day month and year user was born in
    float magic;            //Used to test in if statement
 
    //Process the Data
    cout<<"Please enter, in numeric form, the month you were born in"<<endl;
    cin>>month;
    cout<<"Please enter the day you were born in"<<endl;
    cin>>day;
    cout<<"Please enter the year, in two digit form, you were born in"<<endl;
    cin>>year;
    
    magic = month*day;// Calculation for the month and day
    if (magic == year)
        cout<<"Your Birthday is Magical.\n";
    else 
        cout<<"Your Birthday is not Magical.\n";
    
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}