/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 19, 2014, 5:53 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{

int number,cent,dec,unid,r,i;
 char ans;
 do
 {
 do
 {
 cout<<"Enter number to evaluate : ";
 cin>> number;
 }while(number <= 0 || number >= 400);
 cent = number / 100;
 r = number % 100;
 dec = r / 10;
 unid = r % 10;
 cout<<"The number written in Roman numerals is: ";
 for( i=1; i<= cent ; i++)
 cout<<"C";
 switch(dec)
 {
 case 1:
 cout<<"X";
 break;
 case 2:
 cout<<"XX";
 break;
 case 3:
 cout<<"XXX";
 break;
 //other way
 /* case1:
 case2:
 case3:
 for(i=1; i<=dec;i++)
 cout<<"X";
 break;
 */
 case 4:
 cout<<"XL";
 break;
 case 5:
 cout<<"L";
 break;
 case 6:
 cout<<"LX";
 break;
 case 7:
 cout<<"LXX";
 break;
 case 8:
 cout<<"LXXX";
 break;
 case 9: cout<<"XC";
 break;
 }
 switch(unid)
 {
 case 1:
 cout<<"I";
 break;
 case 2:
 cout<<"II";
 break;
 case 3:
 cout<<"III";
 break;
 case 4:
 cout<<"IV";
 break;
 case 5:
 cout<<"V";
 break;
 case 6:
 cout<<"VI";
 break;
 case 7:
 cout<<"VII";
 break;
 case 8:
 cout<<"VIII";
 break;
 case 9:
 cout<<"IX";
 break;
 }
 cout<<endl;
 cout<<endl;
 cout<<"Do you want to continue(Y/N) ?: ";
 cin>>ans;
 }while(ans=='Y' || ans=='y');
    return 0;
}

