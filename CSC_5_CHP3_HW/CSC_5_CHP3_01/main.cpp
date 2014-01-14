/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Program: Miles Per Gallon Calculator
 * Created on January 13, 2014, 1:20 PM
 */

#include <iostream>

using namespace std;

int main() {
    //Setting variables 
    int miles, gallons, mpg;
    
    //Asking user to place gallon value
    cout << "Enter in the number of gallons\n";
    cin >> gallons;
    //Asking user for max miles on a full tank
    cout << "Enter in the amount of miles on a full tank\n";
    cin >> miles;
    //Calculating the mpg
    mpg = miles / gallons;
    //showing mpg to user
    cout << "Your MPG is " << mpg;
    
    

    return 0;
}

