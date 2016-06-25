/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 22, 2016, 6:51 PM
 * Purpose:  First Program
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd=20;//Hours Worked
    float payRate=10;//Rate of Pay for Hours Worked
    char ovrTime=40;//Overtime Worked after 40 Hours
    float payChck;//Total Pay
    //Input Data
    
    //Process the Data
    payChck=hrsWrkd<ovrTime?
            hrsWrkd*payRate:
            hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate*1.5;//False
    
    //Output the processed Data
    cout<<"Hours Worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<" hrs"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<endl;
    
    //Exit Stage Right!
    return 0;
}
