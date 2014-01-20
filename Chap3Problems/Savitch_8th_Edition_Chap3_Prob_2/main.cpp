/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 18, 2014
 * Savitch 8th Edition, Chapter 3, Problem2
 * Calculating minimum payment of a loan
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float INT1STK=.015;
const float INT2NDK=.01;
const float MINPAYP=.1;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
float lAmnt,minPay,over1K,over1KP,firt1KP;
float firt1K=1000;
char answr;
//Input Loan Amount
do{
cout<<"What is your loan amount: ";
cin>>lAmnt;
firt1KP=firt1K*INT1STK;
if(lAmnt>firt1K){
    over1K=lAmnt-firt1K;
    over1KP=over1K*INT2NDK;
    over1K=over1K*INT2NDK+over1K;
    firt1K=firt1K*INT1STK+firt1K;
    lAmnt=firt1K+over1K;
    minPay=lAmnt*MINPAYP;
    cout<<"Your total amount due is $"<<lAmnt<<" dollars\n";
    cout<<"Your Interest due is $"<<firt1KP+over1KP<<" dollars\n";
    cout<<"Your minimum payment is $"<<minPay<<" dollars\n";
}else{
    firt1KP=lAmnt*INT1STK;
    lAmnt=lAmnt*INT1STK+lAmnt;
    if (lAmnt>10){
        minPay=lAmnt*MINPAYP;
        cout<<"Your Total amount due is $"<<lAmnt<<" dollars\n";
        cout<<"Your Interest due is $"<<firt1KP<<" dollars\n";
        cout<<"Your minimum payment is $"<<minPay<<" dollars\n";
    }else{
        cout<<"Your Total amount due is $"<<lAmnt<<" dollars\n";
        cout<<"Your Interest due is $"<<firt1KP<<" dollars\n";
        cout<<"Your minimum payment is $10 dollars\n";}}
cout<<"Would you like to run program again: \"Y\" or \"N\" ";
cin>>answr;
}while(answr=='y'||answr=='Y');
    
return 0;
}

