/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 13, 2014, 11:08 AM
 * Calculating the square root
 */

//
#include <iostream>
#include <cmath>
using namespace std;

//

int main(int argc, char** argv) {
    //Declare variables
    float x,r,guess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the Square Root of ?"<<endl;
    cin>>x;
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first approximation
    cout<<"The fist Approximation = "<<guess<<endl;
    //Second approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output second approximation
    cout<<"The second Approximation = "<<guess<<endl;
    //Third approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output Third approximation
    cout<<"The third Approximation = "<<guess<<endl;
    //Output the actual answer
    cout<<"The Exact answer = "<<sqrt(x)<<endl;
    //Exit Stage
    return 0;
}

