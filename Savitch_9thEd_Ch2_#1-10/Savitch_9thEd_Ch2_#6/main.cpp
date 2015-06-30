/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 26, 2015, 9:21 PM
 *Purpose:  Homework, Diet soda needed to kill a person
 * Savitch 9th edition chapter 2 #1 Programming Problems
 *URL:http://ideone.com/AUaCG7
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const float DtSdSw = 0.001f;//Diet soda sweetner, I don’t think this should be const
//Function Prototypes
//Execution Begins Here!
int main() {
     char ans; 
     do
     {
        //Declare variables
        int DtSdCns;//Diet soda cans necessary to kill you 
        int cnMss = 350;// can mass is 350 grams, so it contains about 350 grams of soda
        float lthMs = 5.0f;//lethal amount for mouse in grams
        float msMass = 35.0f;//mouse weight in grams
        float lthDtr;//lethal amount for dieter
        float wtDtr;//Dieter’s weight I think in grams as well
    
        //Prompt then Input the mouse and human weight details
        cout << "This program calculates how many cans of soda it will take to kill you !\n";
        cout << "Each can contains 0.001 (0.1%) of artificial sweetener\n" << endl;
        cout << "The amount of Artificial Sweetner needed to kill a mouse is \n";
        cout << lthMs;
        cout << " grams." << endl;
        cout << "The weight of a mouse  is \n";
        cout << msMass; 
        cout << " grams." << endl;
        cout << "Enter the weight of the dieter, IN GRAMS, at which dieting activity will be stopped: \n";
        cin >> wtDtr;
        //Calculate 
        lthDtr = (lthMs/msMass) * wtDtr;
        DtSdCns = lthDtr/(DtSdSw*cnMss);
        //Output the results
        cout << "The amount of Diet Soda Pop Can's necessary to kill you is: ";
        cout << DtSdCns << endl;
        cout << "would you like to repeat?" << endl;
        cout << "y for yes, any other key for no" << endl; 
        cin >> ans; 
        }while(ans == 'y');
        cout << "Thank you.";

    //Exit stage right!
    return 0;
}
