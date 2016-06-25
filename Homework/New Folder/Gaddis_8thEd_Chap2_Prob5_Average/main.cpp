/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 12:27 PM
 * Purpose: The Average
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Exection Begins here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int x1=28,x2=32,x3=37,x4=24,x5=33;//Value to average
    float avg;//Average of total input Values
    
    //Input data
    
    //Process data
    avg=(x1+x2+x3+x4+x5)/5;
    
    //Output data
    cout<<"the average = "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}

