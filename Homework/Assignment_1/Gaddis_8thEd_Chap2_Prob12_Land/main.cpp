/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 23, 2016, 8:01 PM
 * Purpose:  Converting Land Measuring Units
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float ConFtAc=4.356e4f;//Conversion from square feet to acres
const float ConMiFt=1/5.28e3f;//Conversion from miles to feet

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nAcres;//Number of Acres
    float nSqMls;//Number of Square Miles
   
    //Input Data
    cout<<"Number of Acres to Convert to Square Miles"<<endl;
    cin>>nAcres;
    
    //Process the Data
    nSqMls=nAcres*ConFtAc*ConMiFt*ConMiFt;
    
    //Output the processed Data
    cout<<nAcres<<" Acres = "<<nSqMls<<" Square Miles"<<endl;
    
    //Exit Stage Right!
    return 0;
}