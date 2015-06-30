/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 26, 2015, 10:00 PM
 *Purpose:  Homework, Calculating Retroactive pay for any number of months
 *URL:http://ideone.com/2XJvVW
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main() {
     char ans; 
     do
     {
        //Declare variables
        float rtactpy = .076f; // retroactive pay is 7.6%
        float annsal; //annual salary
        float rtdue; //retroactive pay due to employee
        float nwanns; //new annual salary
        float nwmnsl; //new monthly salary
        float months; //months of retroactive pay due to employee
       
        //Prompt then Input the employees previous annual salary
        cout << "Enter your current annual salary with no commas: " << endl; 
        cin >> annsal; 
        cout << "How many months of retroactive pay are you due?" << endl;
        cin >> months; 
       
        //Calculate NEW retroactive pay due depending on months entered by user
        rtdue = (annsal * rtactpy) / (12/months) ;
        //calculate new annual salary
        nwanns = annsal * (1 + rtactpy);
        //calculate new monthly salary
        nwmnsl = nwanns / 12;
        //Output the results
        //Echo input
        cout << "Your old annual salary was " << annsal << "." << endl; 
        cout << "Retroactive pay for six months is " << rtdue << "." << endl; 
        cout << "Your new annual salary is " << nwanns << "." << endl; 
        cout << "Your new monthly salary is " << nwmnsl << "." << endl; 
        cout << "would you like to repeat?" << endl;
        cout << "y for yes, any other key for no" << endl; 
        cin >> ans; 
        }while(ans == 'y');
        cout << "Thank you.";
    //Exit stage right!
    return 0;
}
