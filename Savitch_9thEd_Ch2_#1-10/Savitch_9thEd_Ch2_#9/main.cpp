/*
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 27, 2015, 8:09 AM
 *Purpose:  Homework, Calculating Consumer Loan
 *URL: http://ideone.com/T56tvg
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const int cvtPrDc = 100; //convert percent to decimal
const int cvtMn = 12; //convert years to months
//Function Prototypes
//Execution Begins Here!
int main() {
     char ans; 
     do
     {
        //Declare variables
          float mnNd;//money needed
          float rt;//interest rate in percent
          float y; //duration of loan  in years
          float fcVl; //face value the consumer will have to repay
          float mtpay; //monthly payment    
       
        //Prompt then Input 
        cout << "How much money do you need to borrow? " << endl; 
        cin >> mnNd; 
        cout << "What is your interest rate in percent? "  << endl; 
        cin >> rt; 
        cout << "How long will it take to repay your loan in years? " << endl; 
        cin >> y; 

        //Calculate, convert percent to decimal and calculate face value
        rt = rt/cvtPrDc;
        fcVl = mnNd / (1 - rt*y); 
        //calculate monthly payment
        mtpay = fcVl / (y*cvtMn);         

        //Output the results
        //output facevalue
        cout<<fixed<<showpoint<<setprecision(2);
        cout << "Your fave value is " << fcVl << "." << endl; //output monthly payment
        cout << "Your monthly payment is " << mtpay << "." << endl; //output monthly payment        
        cout << "would you like to repeat?" << endl;
        cout << "y for yes, any other key for no" << endl; 
        cin >> ans; 
        }while(ans == 'y');
        cout << "Thank you.";
  //Exit stage right!
    return 0;
}
