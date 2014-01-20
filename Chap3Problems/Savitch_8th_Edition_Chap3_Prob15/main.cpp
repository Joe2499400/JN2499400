/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 17,2014
 * Savitch 8th Edition,Chapter 3, Problem 15
 * Buoyancy Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
 //Declare variables
 float y=62.4;//Constant given
 float w; //Variable weight
 float r; //Variable radius
 float V; //Variable Volume
 float Fb; //Variable Buoyant Force
 char answer; // Variable answer
 float M_PI=3.14;
 do{
 //InputPrompts user to enter weight and radius    
 cout<< "Please enter weight of the object in lbs and press enter: " <<endl;
 cin>> w; 
 cout<< "Please enter radius of the object in feet and press enter: " << endl;
 cin >> r ; 
 //Process - Calculate Volume and Buoyant Force
 V=(4/3)*(M_PI)*r*r*r; 
 Fb=(V)*(y);{
 if(Fb >= w){
 //Output result    
 cout << "This Sphere will float!" << endl;
 }else 
 {cout << "This Sphere will sink!"<<endl;}}
 cout << "Calculate another buoyancy? (y/n) "<< endl; 
 cin >>answer; 
 }while((answer == 'y' || answer == 'Y'));
 cout<<"End of Testing!"<<endl;
 //Exit
 return 0;
}

