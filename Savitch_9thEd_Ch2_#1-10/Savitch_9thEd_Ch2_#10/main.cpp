/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 27, 2015, 8:35 AM
 * Purpose:  Homework, Meeting Max Capacity
 * Savitch 9th edition chapter 2 #10
 *URL: http://ideone.com/bQSzKk
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
    do{
    //Declare variables
    int mxCp; //maxcapacity
    int ppl; //people in attendance
    int adPpl; //additional people 
         
    //Prompt then Input 
    cout << "Room's max capacity? " << endl; 
    cin >> mxCp; 
    cout << "People Attending? "  << endl; 
    cin >> ppl; 
        
    //Calculate, how many more ppl can be added to the room
    adPpl = mxCp - ppl; 
    if(ppl <= mxCp){
        
    //Output the results
    cout << "It is legal to hold meeting. "<< endl; //output
    cout << "You may include " << adPpl << " more ppl in your meeting." << endl; //output
    }else
    cout << "Meeting can't be held due to fire regulations" << endl;
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
    //Exit stage right!
    return 0;
}
