/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 6:51 PM
 * Purpose:  Calculate Sales tax
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float Purchs=52;    //Price of the Purchased Item
    float SlsTax=.04;   //Sales Tax Rate
    float CtyTax=.02;   //County Tax Rate
    float TotTax;
    
    //Input Data
    
    //Process the Data
    TotTax=Purchs*(SlsTax+CtyTax);
            
    //Output the processed Data
    cout<<"Total Purchase Price without Tax = "<<"$"<<Purchs<<endl;
    cout<<"Sales Tax = " <<SlsTax*100<<"%"<<endl;
    cout<<"County Tax = "<<CtyTax*100<<"%"<<endl;
    cout<<"Total Sales Tax = "<<"$"<<TotTax<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    //Exit Stage Right!
    return 0;
}