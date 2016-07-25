/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 14, 2016, 10:32 PM
 * Purpose: Midterm Menu
 */

//System Libraries
#include <iostream>     //Input/ Output Stream Library
#include <iomanip>      //Formatting Library
#include <cstring>      //Formatting Library
#include <cmath>        //Math Library
using namespace std;    //Namespace of the System Libraries

//User Libraries

//Global Constants - Pi, Gravity, Conversion

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution
int main(int argc, char** argv) {
    //Variables
    char choice;
    //Input Data
    do{
        menu();
        cin>>choice;

        //Process Data
        switch(choice){
            case'1':prob1();break;
            case'2':prob2();break;
            case'3':prob3();break;
            case'4':prob4();break;
            case'5':prob5();break;
            case'6':prob6();break;
            default:cout<<"Not an Option"<<endl;
        } 
    }while(choice>='1'&&choice<='6');
    return 0;
}

void prob1(){
    cout<<"You are entering Problem 1"<<endl;
    //Declare Variables
        int numb,colms,rows;
        //Input Data
        cout<<"Enter a number 1 to 50: "<<endl;
        cin>>numb;
        //Process Data
        cout<<endl;
        //Even Case
        if(numb%2==0){    
                for(int rows=1;rows<=numb;rows++){ //rows
                       for(int colms=1;colms<=numb;colms++){
                          if(rows==colms || colms==(numb+1)-rows){
                            cout<<colms;
                          }
                          else cout<<" ";
                       }
                          cout<<endl;
                }
        }else{
        //Odd Case         
                for(int rows=numb;rows>=1;rows--){ //rows
                        for(int colms=numb;colms>=1;colms--){
                          if(colms==rows || rows==(numb+1)-colms){
                            cout<<colms;
                          }
                          else cout<<" ";
                       }
                          cout<<endl;
                }
        }
}

void prob2(){
    cout<<"You are entering Problem 2"<<endl;
    
    //Declare Variables
    unsigned char fthRow,trdRow,scdRow,fstRow;    
    
    //Input Data
    cout<<"Input a four digit number to convert"<<endl;
    cout<<"To Star Power"<<endl;
    cin >> fthRow;
    cin >> trdRow;
    cin >> scdRow;
    cin >> fstRow;
    // //Process the Data
    //Output the processed Data
	//Ones Position
    switch(fstRow){
        case '9':cout<<"9 *********\n";break;
        case '8':cout<<"8 ********\n";break;
        case '7':cout<<"7 *******\n";break;
        case '6':cout<<"6 ******\n";break;
        case '5':cout<<"5 *****\n";break;
        case '4':cout<<"4 ****\n";break;
        case '3':cout<<"3 ***\n";break;
        case '2':cout<<"2 **\n";break;
        case '1':cout<<"1 *\n";break;
        case '0':cout<<"0 \n";break;
        default:cout<<fstRow<<" ? \n";break;
    }
    //Tens Position
    switch(scdRow){
        case '9':cout<<"9 *********\n";break;
        case '8':cout<<"8 ********\n";break;
        case '7':cout<<"7 *******\n";break;
        case '6':cout<<"6 ******\n";break;
        case '5':cout<<"5 *****\n";break;
        case '4':cout<<"4 ****\n";break;
        case '3':cout<<"3 ***\n";break;
        case '2':cout<<"2 **\n";break;
        case '1':cout<<"1 *\n";break;
        case '0':cout<<"0 \n";break;
        default:cout<<scdRow<<" ? \n";break;
    }
    //Hundreds Position
    switch(trdRow){
        case '9':cout<<"9 *********\n";break;
        case '8':cout<<"8 ********\n";break;
        case '7':cout<<"7 *******\n";break;
        case '6':cout<<"6 ******\n";break;
        case '5':cout<<"5 *****\n";break;
        case '4':cout<<"4 ****\n";break;
        case '3':cout<<"3 ***\n";break;
        case '2':cout<<"2 **\n";break;
        case '1':cout<<"1 *\n";break;
        case '0':cout<<"0 \n";break;
        default:cout<<trdRow<<" ? \n";break;
    }
    //Thousands Position
    switch(fthRow){
        case '9':cout<<"9 *********\n";break;
        case '8':cout<<"8 ********\n";break;
        case '7':cout<<"7 *******\n";break;
        case '6':cout<<"6 ******\n";break;
        case '5':cout<<"5 *****\n";break;
        case '4':cout<<"4 ****\n";break;
        case '3':cout<<"3 ***\n";break;
        case '2':cout<<"2 **\n";break;
        case '1':cout<<"1 *\n";break;
        case '0':cout<<"0 \n";break;
        default:cout<<fthRow<<" ? \n";break;
    }
}

void prob3(){
    cout<<"You are entering Problem 3"<<endl;
    //Declare Variables
    unsigned short x;
    unsigned char n1000s,n100s,n10s,n1s;
    
    char date[25],acct[25],payee[25]; 
    
    //Input Data
    cout<<"Would like to write a check? Input the following: "<<endl;
    cin.ignore();
    cout<<"Date: "<<endl; 
    cin.getline(date,25);
    cout<<"Payee: "<<endl; 
    cin.getline(payee,25);
    cout<<"Account Holder: "<<endl;
    cin.getline(acct,25);
    cout<<"Amount: "<<endl; 
    cin>>x;

    //Output
    cout<<endl;
    cout<<acct<<endl; 
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE  ZIP                            Date:  "<<date<<endl;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pay to the Order of:  "<<payee<<"              $"<<x*1.0f<<endl;
    cout<<endl;

    //Thousands Position
    n1000s=(x-x%1000)/1000.0f;
    switch(n1000s){
        case 1:cout<<"One Thousand ";
    }
    //Hundreds Position
    x-=n1000s*1000; 
    n100s=(x-x%100)/100.0f;
     switch (n100s){
         case 9:cout<<"Nine Hundred ";break;
         case 8:cout<<"Eight Hundred ";break;
         case 7:cout<<"Seven Hundred ";break;
         case 6:cout<<"Six Hundred ";break;
         case 5:cout<<"Five Hundred ";break;
         case 4:cout<<"Four Hundred ";break;
         case 3:cout<<"Three Hundred ";break;
         case 2:cout<<"Two Hundred ";break;
         case 1:cout<<"One Hundred ";break; 
         }

    //Tenths Position
    x-=n100s*100; 
    n10s=(x-x%10)/10.0f;  
    switch (n10s){
         case 9:cout<<"Ninety ";break;
         case 8:cout<<"Eighty ";break;
         case 7:cout<<"Seventy ";break;
         case 6:cout<<"Sixty ";break;
         case 5:cout<<"Fifty ";break;
         case 4:cout<<"Fourty ";break;
         case 3:cout<<"Thirty ";break;
         case 2:cout<<"Twenty ";break;
         case 1:{
             x-=n10s*10; 
             n1s=(x-x%1)/1.0f;
                switch(n1s){
                 case 9:cout<<"Nineteen ";break;
                 case 8:cout<<"Eighteen ";break;
                 case 7:cout<<"Seventeen ";break;
                 case 6:cout<<"Sixteen ";break;
                 case 5:cout<<"Fifteen ";break;
                 case 4:cout<<"Fourteen ";break;
                 case 3:cout<<"Thirteen ";break;
                 case 2:cout<<"Tweleve ";break;
                 case 1:cout<<"Eleven ";break;
                 case 0:cout<<"Ten ";break;
               }
            }
        }     
    //Ones Positions
    if(n10s!=1){
             x-=n10s*10; 
             n1s=(x-x%1)/1.0f;
         switch (n1s){
             case 9:cout<<"Nine ";break;
             case 8:cout<<"Eight";break;
             case 7:cout<<"Seven ";break;
             case 6:cout<<"Six ";break;
             case 5:cout<<"Five ";break;
             case 4:cout<<"Four ";break;
             case 3:cout<<"Three ";break;
             case 2:cout<<"Two ";break;
             case 1:cout<<"One ";
         }
    }
    cout<<"and 00/100s Dollars"<<endl;
    cout<<endl;
    cout<<"Wells Embargo"<<endl;
    cout<<endl;
    cout<<"FOR:  Payment for Services               "<<acct<<endl;
    return ;
}

void prob4(){
    cout<<"You are entering Problem 4"<<endl;
    //Declare Variables
    char choice;//Used to choose package
   
    //Input Data
    cout<<" Monthly Bill for Subscription"<<endl;
    cout<<" Choose your Subscription"<<endl;
    cout<<" Type 1 for package A"<<endl;
    cout<<" Type 2 for package B"<<endl;
    cout<<" Type 3 for package C"<<endl;
    cin>>choice;

    //Process the Data
    switch(choice){
        case '1':{
            //Declare Variables
            unsigned int hrs;//The amount of hours used
            float chrgs1,chrgs2,chrgs3;//Charges for each subscription
            float savings;//The amount a customer can save
            
            //Input Data
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Enter the number of hours used"<<endl;
            cin>>hrs;
            
            //Process the Data
            //For Package 1
            if(hrs<=5)
                chrgs1=16.75;//Charges for subscription
            if(hrs>5&&hrs<=20)
                chrgs1=16.75+(hrs-5)*.75;//Charges for additional hours
            if(hrs>20)
                chrgs1=16.75+(0.75*15)+(hrs-20)*1.0;
            cout<<"Your total charges are $ "<<chrgs1<<endl;


            //For Package 2
            if(hrs<=15)
                chrgs2=23.75;//Charges for subscription
            if(hrs>15&&hrs<=25)
                chrgs2=23.75+(hrs-15)*.55;//Charges for additional hours
            if(hrs>25)
                chrgs2=23.75+(0.55*10)+(hrs-25)*.7;//Charges for double add hours

            //For Package 3
            chrgs3=29.95;

            //Check for cheapest deal and output
            if(hrs>27){
                savings=chrgs1-chrgs3;
                cout<<"Switch to Package 3 to save"<<endl;
                cout<<"Your savings $ "<<savings<<endl;
            }else if(hrs<27&&chrgs2<chrgs1){
                savings=chrgs1-chrgs2;
                cout<<"Choose Package 2 to save "<<endl;
                cout<<"Your savings $ "<<savings<<endl;
            }else{
                cout<<"Stay with Package 1 to save "<<endl;
            }
            //Exit the switch
            break;
        }
        case '2':{
            //Declare Variables
            unsigned int hrs;//The amount of hours used
            float chrgs1,chrgs2,chrgs3;//Charges for each subscription
            float savings;//The amount a customer can save
            
            //Input Data
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Enter the number of hours used"<<endl;
            cin>>hrs;
            
            //Process the Data
            //For Package 1
            if(hrs<=5)
                chrgs1=16.75;//Charges for subscription
            if(hrs>5&&hrs<=20)
                chrgs1=16.75+(hrs-5)*.75;//Charges for additional hours
            if(hrs>20)
                chrgs1=16.75+(0.75*15)+(hrs-20)*1.0;

            //For Package 2
            if(hrs<=15)
                chrgs2=23.75;//Charges for subscription
            if(hrs>15&&hrs<=25)
                chrgs2=23.75+(hrs-15)*.55;//Charges for additional hours
            if(hrs>25)
                chrgs2=23.75+(0.55*10)+(hrs-25)*.7;//Charges for double add hours
                cout<<"Total charges $ "<<chrgs2<<endl;

            //For Package 3
            chrgs3=29.95;

            //Check for cheapest deal and output
            if(hrs>27){
                savings=chrgs2-chrgs3;
                cout<<"Choose Package 3 to save"<<endl;
                cout<<"Your savings $ "<<savings<<endl;
            }else if(hrs<27&&chrgs1<chrgs2){
                savings=chrgs2-chrgs1;
                cout<<"Choose Package 1 to save "<<endl;
                cout<<"Your savings $ "<<savings<<endl;
            }else{
                cout<<"Stay with Package 2 to save "<<endl;
            }
            //Exit the switch
            break;
        }
        case '3':{
            //Declare Variables
            unsigned int hrs;//The amount of hours used
            float chrgs1,chrgs2,chrgs3;//Charges for each subscription
            float savings;//The amount a customer can save
            
            //Input Data
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Enter Number of hours used"<<endl;
            cin>>hrs;
            
            //Process the Data
            //For Package 1
            if(hrs<=5)
                chrgs1=16.75;//Charges for subscription
            if(hrs>5&&hrs<=20)
                chrgs1=16.75+(hrs-5)*.75;//Charges for additional hours
            if(hrs>20)
                chrgs1=16.75+(0.75*15)+(hrs-20)*1.0;
            cout<<"Total Charges $ "<<chrgs1<<endl;

            //For Package 2
            if(hrs<=15)
                chrgs2=23.75;//Charges for subscription
            if(hrs>15&&hrs<=25)
                chrgs2=23.75+(hrs-15)*.55;//Charges for additional hours
            if(hrs>25)
                chrgs2=23.75+(0.55*10)+(hrs-25)*.7;//Charges for double add hours
            
            //For Package 3
            chrgs3=29.95;

            //Check for cheapest deal and output
            if(hrs>27){
                cout<<"Stay with Package 3 to continue saving "<<endl;
            }else if(hrs<27&&chrgs2<chrgs1){
                savings=chrgs1-chrgs2;
                cout<<"Choose Package 2 to save "<<endl;
                cout<<"Your savings $ "<<savings<<endl;
            }else if (hrs<27&&chrgs1<chrgs2){
                savings=chrgs2-chrgs1;
                cout<<"Choose Package 1 to save "<<endl;
                cout<<"Your Savings $ "<<savings<<endl;
            }
            break;
        }
    }
}

void prob5(){
    //Declare Variables
    float hrsWkd;//Hours worked
    unsigned short payRte;//$s/hr
    float dblTme=20;//Double Time after 20 hours
    float trpTme=40;//Triple Time after 40 
    float payChck;//Paycheck in $'s 
    //Input Data
       cout<<"Hours worked = "<<endl;
       cin>>hrsWkd;
       cout<<"Pay Rate per hour = $"<<endl;
       cin>>payRte;
    //Process the Data
    payChck=hrsWkd*payRte;
    payChck+=hrsWkd<dblTme?//Test
             0              ://True
            (hrsWkd-dblTme)*payRte*1.0f;//False
    payChck+=hrsWkd<trpTme?//Test
             0              ://True
            (hrsWkd-trpTme)*payRte*1.0f;//False
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross Pay = $"<<payChck<<endl;
    cout<<"You are entering Problem 5"<<endl;
}
    
void prob6(){
    //Function Prototypes
float fact(int);//Factorial Function
    //Declare Variables
    int       x,
          nTerm;//Number of Terms
    float sum=0;//Sum of Factorial
    
    //Input Data
    cout<<"Input value for x: ";
    cin>>x;
    cout<<"Input the number of terms: ";
    cin>>nTerm;
    
    //Process the Data
    for(int n=1, power=1;n<=nTerm;n++){
        if(n%2==1){
            sum+=(pow(x,power))/fact(power);
            power+=2;
            cout<<"After "<<n<<" terms, sum = "<<sum<<endl;
        }else{   
            sum-=(pow(x,power))/fact(power);
            power+=2;
            cout<<"After "<<n<<" terms, sum = "<<sum<<endl;
        }
    }
}
float fact (int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return (fact);
    cout<<"You are entering Problem 6"<<endl;
}

void menu(){
    cout<<"Menu program for Midterm.\n"
          "Choose the number for the problem to display\n"
          "Type 1 for Problem 1\n"
          "Type 2 for Problem 2\n"
          "Type 3 for Problem 3\n"
          "Type 4 for Problem 4\n"
          "Type 5 for Problem 5\n"
          "Type 6 for Problem 6\n";
          
}