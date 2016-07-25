/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Mass Weight
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate Data
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float masKg;//Mass of the Object in Kilograms
    float masNewt;//Mass of the Object converted in Newtons
    float gravity=9.8;//Constant for Gravity
    
    //Input Data
    cout<<"Enter the objects mass in Kg"<<endl;
    cin>>masKg;
    
    //Process the Data
    masNewt=masKg*gravity;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The mass in newtons is "<<masNewt<<endl;
    if(masNewt>=1000)
        cout<<"The object is too heavy"<<endl;
    else cout<<"The object is too light"<<endl;
    
    //Exit Stage Right!
    return 0;
}