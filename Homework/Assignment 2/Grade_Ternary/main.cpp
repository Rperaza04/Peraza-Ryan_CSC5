/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 23, 2016, 6:51 PM
 * Purpose:  Template
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
    unsigned int score; //Input [0,100]
    char grade;         //Output [A,B,C,D,F]]
    
    //Input Data
    cout<<"input the score [0,100] output will be the grade"<<endl;
    cin>>score;
    
    
    //Process the Data
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    
    
    
    //Output the processed Data
    cout<<score<<" Equates to a "<<grade<<" grade!"<<endl;
    
    //Exit Stage Right!
    return 0;
}