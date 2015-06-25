/*file: main.cpp
 *author: Jose Aguirre
 *Created on June 25, 2015, 12:26 PM
 *Purpose: Lab 4, most violent society
 * Compare US crime rate to UK crime rate
 * URL: 
 */


//System Libraries 
#include <iostream> //I/O Library 
using namespace std;//Namespace for iostream 

//User Libraries

//Global Constants
const int cvtPer = 100;//convert decimal to percent

//Function Prototypes

//Execution Begins Here!
int main()
{
    //Declare Variables
    float usCrimes = 1.188e7f;
    float ukCrimes = 6.52e6f;
    float usPop = 3.18e8f;
    float ukPop = 6.41e7f; 
    float usRate; 
    float ukRate; 
    
    //Calculate 
    usRate = (usCrimes / usPop) * cvtPer;
    ukRate = (ukCrimes / ukPop) * cvtPer; 
    //Output the results
    
    cout << "The US crime rate is  " << endl; 
    cout << usRate << " %" << endl; 
    cout << "The UK crime rate is  " << endl; 
    cout << ukRate << " %" << endl; 
    cout << "UK is about two and a half times more dangerous than US.";
    //exit stage right!
    return 0;

}


