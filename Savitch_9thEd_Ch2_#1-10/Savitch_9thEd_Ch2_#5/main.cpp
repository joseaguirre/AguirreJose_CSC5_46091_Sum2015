/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 26, 2015, 1:42 PM
 *Purpose:  Homework, calculate volume of a sphere, Savitch Chapter 2 Problem 5
 *URL: http://ideone.com/9d3b5I
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>//setprecision 
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const float pi = 3.1415f; 
//Function Prototypes
//Execution Begins Here!
int main() {
    //Declare variables
    float radius, vm;//radius, volume of sphere
    //Prompt then Input the radius
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    //Calculate the volume of the sphere
    vm = (4.0 / 3.0) * pi * radius * radius * radius; 
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout << "The volume is ";
    cout << vm << endl; 
    //Exit stage right!
    return 0;




}
