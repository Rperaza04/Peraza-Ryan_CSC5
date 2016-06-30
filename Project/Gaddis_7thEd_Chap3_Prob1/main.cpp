/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 28, 2016, 4:30 PM
 * Purpose:  Calculating Gas Mileage
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int nGalln;//Number of Gallons of Gas the car can Hold
    int nMiles;//Number Of Miles Car can be Driven
    int gasMil;//Number of miles that can be driven per Gallon of Gas
    
    
    //Input Data
    cout<<"Input the Number of Gallons car can hold"<<endl;
    cin>>nGalln;
    cout<<"Input the Number of Miles car can be Driven"<<endl;
    cin>>nMiles;
    
    //Process the Data
    gasMil=nMiles/nGalln;
    
    //Output the processed Data
    cout<<gasMil<<" Miles Per Gallon "<<endl;
    
    //Exit Stage Right!
    return 0;
}