/*
  Jose Navarro
  January 14, 2014
  Inflation, effects of
*/

//Sysmtem Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Function
const float CNV_PERC=100;
//Function Prototypes


//Execution Begins Here!
int main()
{
    cout << "Hello World!" << endl;
    //Declare Variables
    float price,infltn;
    //Input price
    cout<<"Input the starting price of an item in $"<<endl;
    cin>>price;
    cout<<"Input the inflation rate over time in %"<<endl;
    cin>>infltn;
    //Adjust
    infltn/=CNV_PERC;
    //Calculate the first year increase
    price*=(1+infltn);
    //output
    cout<<setprecision(2);
    cout<<fixed;
    cout<<showpoint;
    cout<<"Price increase "
        <<"first year = $"
        <<price<<endl;
    //Calculate the second year increase
    price*=(1+infltn);
    //output
    cout<<"Price increase "
        <<"second year = $"
        <<price<<endl;
    //Calculate the third year increase
    price*=(1+infltn);
    //output
    cout<<"Price increase "
        <<"third year = $"
        <<price<<endl;


    return 0;

}

