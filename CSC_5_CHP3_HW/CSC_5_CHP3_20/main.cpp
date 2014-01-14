/* 
 * File:   main.cpp
 * Author: Julian Gonzalez
 * Program: Angle Calculator
 * Created on January 13, 2014, 1:39 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    //Setting variables for the program
    float degree, rads, radc, radt;
    //using rad since the angle needs to be in rad
    cout << "enter in your angle\n";
    cin >> degree;
    
    //calculating from cmath of sin,cos,tan
    rads = sin(degree);
    radc = cos(degree);
    radt = tan(degree);
    //using the fixed point from iomanip (4 dec places)
    cout << setprecision(4) <<fixed;
    //displaying the outputs in sin,cos,tan
    cout << "sin of " << degree << " is " << rads <<endl;
    cout << "cos of " << degree << " is " << radc <<endl;
    cout << "tan of " << degree << " is " << radt <<endl;

    return 0;
}

