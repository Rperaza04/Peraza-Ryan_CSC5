/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 30, 2016, 7:03 PM
 * Purpose:  Average Test Scores
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
    float scor1,scor2,scor3,scor4,scor5,avgscor;
    
    //Input Data
    cout<<"Enter the scores for each test [1-5] separated by a space"<<endl;
    cin>>scor1>>scor2>>scor3>>scor4>>scor5;
    
    
    //Process the Data
    avgscor=(scor1+scor2+scor3+scor4+scor5)/5;
    
    //Output the processed Data
    cout<<"The average test score is "<<avgscor<<endl;
    
    //Exit Stage Right!
    return 0;
}