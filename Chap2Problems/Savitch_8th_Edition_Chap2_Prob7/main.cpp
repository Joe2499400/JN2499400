/* 
 * File:   main.cpp
 * Author: Jose Navarro 
 * Created on January 14, 2014, 4:30 PM
 * Savitch 8th Edition, Chapter 2, Problem 7
 * Payment Calculations
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float SOCIAL_SEC=.06;
const float FED_INC_TX=.14;
const float STATE_INC_TX=.05;
const float UNION_DUE=10;
const float DPENDTS_DUE=35;
const float OTIME_RATE=1.5;
const float PAY_RATE=16.78;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float hrsWork,dPends,gPay,NetPay,totTax,oTPay,oT;
    //Input - total hours worked and number of dependents
    cout<<"Enter total of hours worked this week: ";
    cin>>hrsWork;
    cout<<"Enter the number of dependents you have: ";
    cin>>dPends;
    //Process
    gPay=hrsWork*PAY_RATE;
    if(hrsWork>40){
        oT=hrsWork-40
        oTPay=PAY_RATE*OTIME_RATE*oT;
        gPay=gPay+oTPay;}
    if(dPends>3){
    return 0;
}

