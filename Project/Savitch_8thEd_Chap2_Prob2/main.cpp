/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 28, 2016, 10:00 PM
 * Purpose:  Calculate how many cans of soda can kill a man
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Libarary

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float msMass=35;    //35 Grams is the mass of the mouse
    float msKill=5;     //5 Grams of sweetener kill the mouse
    float artSwt=454;   //Grams per pound 
    int hmMass;         //Weight of the Dieter in Pounds
    float msSoda=350;   //350 grams is the mass of soda can content
    float consin=1e-3;  //1/10th of 1% concentration in soda of sweetener
    int nCans;          //Number of cans to kill dieter
    
    //Input Data
    cout<<"Input the Weight of the Dieter = "<<endl;
    cin>>hmMass;
    
    //Process the Data
    nCans=(hmMass*artSwt)*msKill/(msMass*msSoda*consin);
    
    //Output the processed Data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(Pounds) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}