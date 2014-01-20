/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 15, 2014, 4:16 PM
 * Savitch 8th Edition, Chapter 2, Problem 10
 * Sum of Ten numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int pos=0,neg=0,all=0,num;
    //For loop 10times for number input
    for(int i=1;i<=10;i++){
        cout<<"Enter a number: ";
        cin>>num;
        //if number greater than 0 add to positive count
        if(num>0){
            pos=num+pos;
        //else add number to negative count
        }else{neg=num+neg;}
        //add number to all-number count
        all=num+all;}
    //output Sum of numbers greater than zero, less than zero, and overall total  
    cout<<"The Sum of all numbers greater than zero is; "<<pos<<endl;
    cout<<"The Sum of all numbers less than zero is: "<<neg<<endl;
    cout<<"The Sum of all numbers is: "<<all<<endl;
     //Exit
    return 0;
}

