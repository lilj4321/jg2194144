/*
* Author: Julian Gonzalez
* Program: Calculate currency
* Date: 01/17/2014
*/

//LibrarIes
#include <iostream>

using namespace std;

//Global Constants
const float USDOLLAR_ECONV= .74;
const float USDOLLAR_JCONV=104.31;

//Function Prototypes

//Execution begins here!
int main() {
    //Declare variables
    int us_dollars,i;
    
    //PrOmpt For setting US dollar value
    cout << "Enter in the Amount of US Dollars you\n";
    cout << "want to Exchange\n";
    cin>>us_dollars;
    //Ask for which conversion they want
    cout << "Enter the number for which currency\n";
    cout << "you would like to exchange\n";
    cout << "1.Euro\n";
    cout << "2.Yen\n";
    cin>>i; //the variable i is choice
    float choice;
    if(i==1) {
        choice= static_cast<float>(us_dollars)*USDOLLAR_ECONV;
        cout<< "Your exchange amount is "<<choice<<" Euros\n";
    }
    else {
        choice= static_cast<float>(us_dollars)*USDOLLAR_JCONV;
        cout<< "Your exchange amount is "<<choice<<" Yen\n";
    }
  
   return 0;
}