/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 23, 2016, 6:51 PM
 * Purpose:  Calculate Total Price after Discount
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //Manip Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float totCst=0;//Cost of the Units after Discount
    float perDis;//The Percentage Discount
    float unitSld;//Number of units Sold
    
    //Input Data
    cout<<"Enter the number of units sold"<<endl;
    cin>>unitSld;
    
    //Process the Data
    if (unitSld >=10)
    {
        perDis=unitSld*0.20*99;
        totCst=unitSld*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCst<<endl;
    }
    else if (unitSld >=20)    
    {
        perDis=unitSld*0.30*99;
        totCst=unitSld*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCst<<endl;
    }
    else if (unitSld >=50)
    {
        perDis=unitSld*.40*99;
        totCst=unitSld*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCst<<endl;
    }
    else if (unitSld >=100)
    {
        perDis=unitSld*.50*99;
        totCst=unitSld*99-perDis;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCst<<endl;
    }
    else
    {
        totCst=unitSld*99;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total cost is $ "<<totCst<<endl;
    }
    //Exit Stage Right!
    return 0;
}
