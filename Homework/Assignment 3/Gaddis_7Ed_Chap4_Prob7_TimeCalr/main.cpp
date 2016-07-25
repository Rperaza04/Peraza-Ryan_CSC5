/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 2, 5:10, PM
 * Purpose:Convert minutes, hours, and days
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
    float sec, min, hour, time;
    
    
    
   //Input Data
      cout<<" Enter the numbers of seconds"<<endl;
     cin >> sec;
     cout << "Enter the numbers of min" << endl;
     cin >> min;
     cout << "Enter the numbers of hour" << endl;
     cin >> hour;
    
    //Process the Data
     time = sec + min * 60 + hour * 3600;
   
    //Output the processed Data
     cout << "There are totally " << time << " seconds " << endl;
            
    //Exit Stage Right!
    return 0;
} 
