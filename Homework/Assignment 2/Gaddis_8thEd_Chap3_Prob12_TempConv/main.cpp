/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 23, 2016, 6:51 PM
 * Purpose:  Temperature Conversion
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
    float ceq,cintrp,f;
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    cin>>f;
    
    //Input Data
    
    
    //Process the Data
    ceq=(f-32)*5/9;//Linear Equation y=mx+b
    cintrp=c1+(c2-c1)*(f-f1)/(f2-f1);//Similar Triangles or Linear Equation
    
    
    //Output the processed Data
    cout<<f<<" deg fahreheit = "<<ceq<<" deg centigrade"<<endl;
    cout<<f<<" deg fahreheit = "<<cintrp<<" deg centigrade"<<endl;

    
    //Exit Stage Right!
    return 0;
}