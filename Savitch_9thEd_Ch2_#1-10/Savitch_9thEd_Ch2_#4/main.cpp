/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 25, 2015, 10:09 AM
 * Purpose:  Homework, Treadmill Problem
 * savitch 9th edition chapter 2 #4 madlibs
URL: 
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(){
    //Declare variables
    string instructor, name, food, adjective, color, animal;
    int number;     
    //Prompt user for input
    cout << "Enter instructor's name " << endl;
    cin >> instructor;
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Enter your fav food " << endl;
    cin >> food;
    cout << "Enter your fav adjective " << endl;
    cin >> adjective;
    cout << "Enter your fav color " << endl;
    cin >> color;
    cout << "Enter your fav animal " << endl;
    cin >> animal;
    cout << "Enter a number b/w 100 and 120"  << endl;
    cin >> number;
    
    //Output the results
    cout  <<  "Dear instructor " << instructor << "," << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. ";
    cout << "First, "<< endl;
    cout << "I ate a rotten " << food << ", which made me turn " << color;
    cout << " and extremely ill. I" << endl; 
    cout << "I came down with a fever of  "<< number;
    cout << ". Next, my " << adjective << " pet " << endl;
    cout << animal << " must have smelled the remains of the " << food;
    cout << " on my homework," << endl; 
    cout << "because he ate it. I am currently rewriting my homework";
    cout << " and hope you " << endl;
    cout << "will accept it late." << endl;
    cout << endl;   
    cout << "Sincerely," << endl; 
    cout << name;     
    //Exit stage right!

    return 0;}
