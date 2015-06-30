/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 25, 2015, 9:17 AM
 * Purpose:  Homework, Treadmill Problem
 * URL: http://ideone.com/MyEUgv 
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries
//Global Constants
int minhr = 60; //minutes in an hour
int secmin = 60;//seconds in a minute 
//Function Prototypes
//Execution Begins Here!

int main() {
    //Declare variables
    float mph, mnpmi, scpmi; //miles per hour, min per mile, and sec permile    
    
    //prompt user input
    cout << "Enter mph: " << endl;
    cin >> mph; 
    
    //Calculate the min per mile then sec per mile 
    mnpmi = minhr/mph;
    scpmi = (mnpmi - static_cast<int>(mnpmi))*60; //just the decimal

    //Output the results
    cout << "That converts to: " << endl; 
    cout  <<  static_cast<int>(mnpmi)  <<  " minutes"; 
    cout << "  " << scpmi << " seconds" << endl; 
    //Exit stage right!
    return 0;
}
