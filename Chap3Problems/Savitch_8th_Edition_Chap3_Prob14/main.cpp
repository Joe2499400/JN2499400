/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 19, 2014, 11:28 AM
 * Savitch 8th Edition, Chapter 3, Problem 14
 * Find all Prime numbers from 1-100
 */

//System Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    cout<<"Prime numbers from 1 to 100\n";
    //for loop 3-100 if number divisible by sqrt of 2, number not prime
    for (int i=3; i<100; i++){
        bool prime=true;
        for (int j=2; j*j<=i; j++){
            if (i % j == 0){
            prime=false;}}   
        if(prime)
            //output prime numbers
            cout<<i<<" ";}
    return 0;
}

