/*file: main.cpp
 *author: Jose Aguirre
 *Created on June 24, 2015, 5:26 PM
 *Purpose: convert cereal box in ounces to metric ton
 *output boxes needed to equal 1 ton.
 */


//System Libraries 
#include <iostream> //I/O Library 
using namespace std;//Namespace for iostream 

//User Libraries

//Global Constants
const float metricTonPerOunce = 35273.92; 

//Function Prototypes

//Execution Begins Here!
int main()
{
    //Declare Variables
    float cerealWeight, metricTon, cerealBoxes; 
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the weight of cereal package in ounces\n";
    
    cin >> cerealWeight;
    
    //Calculate the cereal weight in tons
    //Output the results
    metricTon = cerealWeight / metricTonPerOunce; 
    cerealBoxes = metricTonPerOunce / cerealWeight;
    
    cout << "If your package weighs ";
    cout << cerealWeight;
    cout << " ounces\n";
    
    cout << "Your cereal weighs\n" << metricTon << "Tons." << endl; 
    cout << "You need " << cerealBoxes << " cereal boxes to reach 1 ton\n";
    //exit stage right!
    return 0;

}
