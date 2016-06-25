/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 6:51 PM
 * Purpose:  Death in a Can
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
    float msMass=35;     //35 grams is the mass
    float msKill=5;     //5 grams kills the mouse
    float hmMass=45400; //45400 grams is the mass on the person
    float msSoda=350;   //mass of the soda can
    float consin=1e-3;
    int nCans;
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output the processed Data
    cout<<"The Number of Cans that a Dieter with Mass = ";
    cout<<hmMass<<"(grams) may Consume is ="<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}