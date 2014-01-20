/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 14, 2014, 6:39 PM
 * Loan Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float faceVal,intrst,realV,loanP,mPay;
    //Input amount needed received, interest rate, and duration of loan
    cout<<"Input the amount of Dollars needed: ";
    cin>>realV;
    cout<<"Input Interest Rate amount: ";
    cin>>intrst;
    cout<<"What is the duration of the loan in months: ";
    cin>>loanP;
    cout<<endl;
    //Process - FaceValue=Real_Value/1-interest*Period
    faceVal=realV/(1-(intrst*loanP));
    //output - Face Value,Monthly Payment
    cout<<"Your Face Value is: "<<faceVal<<endl;
    loanP=loanP*12;
    mPay=faceVal/loanP;
    cout<<"Your monthly payment is: "<<mPay;
    cout<<endl;
    
    
            
    

    return 0;
}

