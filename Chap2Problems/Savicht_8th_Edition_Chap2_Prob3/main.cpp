/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 13, 2014, 4:40 PM
 * Savitch 8th Edit, Chapter 2, Problem 3
 * Pay Increase Calculations 
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constant
const int RAISE=.076;
const int MRAISE=.01267;
//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int lYrSal,nYrSal,mntPay,nMntPay,retroP; 
    //Input last years salary
    cout<<"Enter Last Years Salary Amount $";
    cin>>lYrSal;
    cout<<endl;
    //Process - Calculate New yearly and monthly pay including new raise
    retroP=(lYrSal+(lYrSal*RAISE))/2;
    mntPay=lYrSal/12;
    nMntPay=(retroP+(lYrSal/2))/12;
    nYrSal=retroP+(lYrSal/2);
    //Output new yearly salary with raise as well as monthly payment
    cout<<"Your Retro Active Pay is $"<<retroP<<endl;
    cout<<"Your New Yearly Salary with the raise is $"<<nYrSal<<endl;
    cout<<"Your New Monthly Salary for the first six months is $"<<nMntPay<<endl;
    //Exit
    return 0;
}

