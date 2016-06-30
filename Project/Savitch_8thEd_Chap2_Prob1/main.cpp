/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 23, 2016, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float metTon=35273.92;//Number of Ounces in a Metric Ton
    float cerPkg;         //Weight of a Cereal Package
    float metCer;         //Cereal Weight in Metric Tons
    float numPkg;         //Number of Cereal Packages to make a Metric Ton
    
    //Input Data
    cout<<"Input the Weight of the Cereal Package in Ounces "<<endl;
    cin>>cerPkg;
    
    //Process the Data
    metCer=(cerPkg/metTon);
    numPkg=(1.0f/metCer);
    
    //Output the processed Data
    cout<<"Cereal Weight = "<<metCer<<" Metric Tons "<<endl; 
    cout<<"Number of Cereal Packages to make a Metric Ton = "<<numPkg<<endl;
    
    
    //Exit Stage Right!
    return 0;
}