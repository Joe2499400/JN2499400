/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 13, 2014, 1:55 PM
 * Savitch 8th Edition, Chapter 2, Problem 2
 * Max Soda Consumption 
 */
//System libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Global Constants
const double CNV_LBS_GRMS=453.592;
const double SWNR_CAN=.001;
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double amntKM, wMouse,endWTot,swtTot,amntKF,cansTot;
    //Input amount in grams needed to kill a mouse, weight of mouse,
    //and end weight of dieter
    cout<<"What is the amount in grams needed to kill a mouse? ";
    cin>>amntKM;
    cout<<endl;
    cout<<"What is the weight of the mouse in grams? ";
    cin>>wMouse;
    cout<<endl;
    cout<<"What will you weigh at the end of your diet? ";
    cin>>endWTot;
    cout<<endl;
    //ratio of sweetener needed to kill mouse 
    swtTot=amntKM/wMouse;
    endWTot=endWTot*CNV_LBS_GRMS;
    amntKF=endWTot*swtTot;
    cansTot=amntKF/SWNR_CAN;
    //Output
    cout<<"Your Max Diet Soda Consumption is "<<cansTot<<"cans."<<endl;
    
    
    
    
    

    return 0;
}

