/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 15, 2014, 7:31 AM
 * Savitch 8th Edition, Chapter 2, Problem 9
 * Loan Payment and Duration
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype

//Global Constant


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float totLoan,intRate,mntlyPy,totPrinP,tIntPay,nIntrst;
    float lTime=0;
    //Input loan amount,interest,payment,life of loan
    cout<<"What is your loan amount? $'s ";
    cin>>totLoan;
    cout<<"what is your yearly interest rate? % ";
    cin>>intRate;
    cout<<"What is your monthly payment? $ ";
    cin>>mntlyPy;
    //Process - Convert and setup heading
    intRate=intRate/12*0.01;
    do{
        nIntrst=totLoan*intRate;
        totPrinP=mntlyPy-nIntrst;
        totLoan=totLoan-totPrinP;
        tIntPay=nIntrst+tIntPay;
        lTime++;
        cout<<nIntrst<<endl;
    }while(totLoan>mntlyPy);  
    cout<<setprecision(2)<<fixed<<showpoint;
   cout<<endl<<lTime<<endl<<tIntPay<<endl;
   cout<<"Your Loan will be paid off in "<<lTime<<"months\n";
   cout<<"You will pay a $"<<tIntPay<<"in interest\n";
  
    return 0;
}

