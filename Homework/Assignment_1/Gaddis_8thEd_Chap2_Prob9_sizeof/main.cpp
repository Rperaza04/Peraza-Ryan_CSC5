/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 12:27 PM
 * Purpose: The Average
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//namespace of the system libraries

//User Libraries

//Global Constants

//Function Prototypes

//Exection Begins here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i;//This just gave you an FFFFFFFFF
    long double j;//This just gave me an even bigger F!!! Sorry!
    long k;
    unsigned long l;
    
    
    //Input data
    
    //Process data
    
    //Output data
    cout<<"character has           "<<sizeof(a)<<"bytes"<<endl;
    cout<<"unsigned character has  "<<sizeof(b)<<"bytes"<<endl;
    cout<<"short has               "<<sizeof(c)<<"bytes"<<endl;
    cout<<"unsigned short has      "<<sizeof(d)<<"bytes"<<endl;
    cout<<"integer                 "<<sizeof(e)<<"bytes"<<endl;
    cout<<"unsigned integer        "<<sizeof(f)<<"bytes"<<endl;
    cout<<"boolean has             "<<sizeof(g)<<"bytes"<<endl;
    cout<<"float has               "<<sizeof(h)<<"bytes"<<endl;
    cout<<"double has              "<<sizeof(i)<<"bytes"<<endl;
    cout<<"long double has         "<<sizeof(j)<<"bytes"<<endl;
    cout<<"long has                "<<sizeof(k)<<"bytes"<<endl;
    cout<<"unsigned long has       "<<sizeof(l)<<"bytes"<<endl;
    
    //Exit Stage Right!
    return 0;
}

