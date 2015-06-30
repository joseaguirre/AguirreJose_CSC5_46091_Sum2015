/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 25, 2015, 9:37 PM
 * Purpose:  Homework, Babylonian Algorithm
 * Savitch Chapter 2 Problem 2
 * URL: http://ideone.com/9d3b5I
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main() {
    //Declare variables
    int x = 1; //used for our loop
    float sqRoot = 140.0f; //square root 
    float guess = 1.0f; // our initial guess is half the square root
    float r = sqRoot / guess;
    //Prompt then Input the sqRoot	
    while(x < 101)
{
    r = sqRoot / guess;
    //Calculate the the square root
    guess = (guess + r) / 2;

    //Output the results
    cout  <<  x  <<  endl; 
    cout << "  " << guess << endl; 
    x++; 
    } 
    //Exit stage right!
    return 0;

}
