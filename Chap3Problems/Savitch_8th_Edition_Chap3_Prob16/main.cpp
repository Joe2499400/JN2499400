/* 
 * File:   main.cpp
 * Author: Jose Navarro
 * Created on January 19, 2014
 * 
 */


#include <iostream>
using namespace std;

//Global Constant


int main(int argc, char** argv) {
    int celCS=100;
    int fHt;
    fHt=(((9.0*celCS)/5.0)+32);
    while((fHt>celCS)||(fHt<celCS)){
    int fHt=(((9.0*celCS)/5.0)+32);
    celCS--;}
    cout<<celCS<<endl<<fHt;
    return 0;
}

