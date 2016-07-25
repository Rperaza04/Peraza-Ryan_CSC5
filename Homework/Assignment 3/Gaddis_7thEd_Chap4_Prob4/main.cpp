/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 3, 2016, 5:13 PM
 * Purpose:  Area of 2 Rectangles
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
    float lenth1, lenth2, width1,width2;//The lengths and widths of the rectangles
    float area1, area2,grade;//The area of the rectangles 

    
    //Input Data
    //Prompt user for the length and width of the rectangles
    cout<<"Enter the length and width, respectively, of the first rectangle separated by a space"<<endl;
    cin>>lenth1>>width1;
    cout<<"Enter the length and width, respectively, of the second rectangle separated by a space"<<endl;
    cin>>lenth2>>width2;
    
    //Process the Data
    //Calculation used to find area of each triangle
    area1 = lenth1*width1;
    area2 = lenth2*width2;
        
    
    //Output the processed Data
        if(area1 == area2)
        cout << "Both rectangles have the same area"<<endl;
    else if (area1 > area2)
        cout<<"The first rectangle has more area than the second"<<endl;
    else
        cout<<"The second rectangle has more area than the first"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}