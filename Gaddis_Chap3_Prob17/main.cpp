/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 13, 2014, 11:36 AM
 * Loan Calculation
 */

//System Libraries
#include <iomanip>
#include <cmath>
using namespace std;

//Function Prototype

//Global Constant

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float payment, loan, intRate, periods;
    //Input information
    cout<<"Input loan amount in dollars, interest rate "
        <<"compounding periods in years"<<endl;
    cin>>loan>>intRate>>periods;
    //Calculate the payment
    float temp=pow(1+intRate,periods);
    payment=intRate*temp*loan/(temp-1);
    //output the payment per month
    cout<<"Payment per month = $"<<paymen
   

    return 0;
}

