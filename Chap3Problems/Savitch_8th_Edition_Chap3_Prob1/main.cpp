/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 18, 2014, 6:50 PM
 * Savitch 8th Edition, Chapter 3, problem 4
 * Paper, Rock, Scissors Game
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constant

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variable
    char playr1, playr2, answr;
    
    //Input players choice
    do{
    cout<<endl<<"Enter your choice of \"P\" for Paper, \"R\" for Rock, or "
        <<"\"S\" for Scissor"<<endl<<endl;
    cout<<"\"Player 1\"\n";
    cout<<"Enter your choice of Paper, Rock, or Scissor and press \"Enter\": ";
    cin>>playr1;
    cout<<"\"Player 2\"\n";
    cout<<"Enter your choice of Paper, Rock , or Scissor and press \"Enter\": ";
    cin>>playr2;
    //Process - Compare Player1's and Player2's answer and output winner
    if((playr1=='R'|| playr1=='r') && (playr2=='R'||playr2=='r')){
        cout<<"It's a draw, Nobody Wins!\n";}
    else if((playr1=='R'|| playr1=='r') && (playr2=='S'||playr2=='s')){
        cout<<"Rock breaks Scissors!\n";
        cout<<"Player 1 Wins!\n";}
    else if((playr1=='R'|| playr1=='r') && (playr2=='P'||playr2=='p')){
        cout<<"Paper covers Rock!\n";
        cout<<"Player 2 Wins!\n";}
    else if((playr1=='S'|| playr1=='s') && (playr2=='S'||playr2=='s')){
        cout<<"It's a draw, Nobody Wins!\n";}
    else if((playr1=='S'|| playr1=='s') && (playr2=='P'||playr2=='p')){
        cout<<"Scissors cuts Paper!\n";
        cout<<"Player 1 Wins!\n";}
    else if((playr1=='S'|| playr1=='s') && (playr2=='R'||playr2=='r')){
        cout<<"Rock breaks Scissors!\n";
        cout<<"Player 2 Wins!\n";}
    else if((playr1=='P'|| playr1=='p') && (playr2=='P'||playr2=='p')){
        cout<<"It's a draw, Nobody Wins!\n";}
    else if((playr1=='P'|| playr1=='p') && (playr2=='R'||playr2=='r')){
        cout<<"Paper covers Rock!\n";
        cout<<"Player 1 Wins!\n";}
    else if((playr1=='P'|| playr1=='p') && (playr2=='S'||playr2=='s')){
        cout<<"Scissors cuts Paper!\n";
        cout<<"Player 2 Wins!\n";}
    else{
        cout<<"\"Error\""<<endl;
        cout<<"Wrong Entries!\n";}
    cout<<"Would you like to play again, \"Y\" or \"N\": ";
        cin>>answr;
    }while(answr=='Y'||answr=='y');
    cout<<"THANK YOU, Good Bye!\n";
    return 0;
}

