/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 10, 2014, 11:09 AM 
 * Pearson Custom RCC Edition, Chapter 2, Problem 1
 * Convert oz to tons using cereal box weight
 */

//System Libraries 
#include <iostream>
using namespace std;

//Global Constants
const float CNV_T_OZ=35273.92;
//Functional Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float crlPckT, crlPckg, boxNeed;
    char ans;
    //Do While Loop
    do{
        //Input weight of cereal package in ounces
        cout<<"After each entry press \"Enter\""<<endl;
        cout<<"Insert the weight of a package of breakfast cereal in ounces: ";
        cin>>crlPckg;
        //Convert Ounces to Tons and boxes of cereal needed to complete a Ton
        crlPckT=crlPckg/CNV_T_OZ;
        boxNeed=CNV_T_OZ/crlPckg-1;
        //Output
        cout<<"You have "<<crlPckT<< "tons of cereal"<<endl;
        cout<<"You need "<<boxNeed<<"boxes of cereal to complete 1ton."<<endl;
        //Prompt user to re-run program
        cout<<"Would you like to repeat calculation? ";
        cin>>ans;
    }while(ans=='y' || ans=='Y');    
        
    //Exit    
    return 0;
}

