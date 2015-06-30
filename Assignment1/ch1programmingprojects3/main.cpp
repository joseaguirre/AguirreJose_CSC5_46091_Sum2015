/*file: main.cpp  
 author: Jose Aguirre
 Created on June 23, 2015, 11:53 AM
 Purpose: user inputs # of coins and is returned the total value
 */

#include <iostream>
using namespace std;

int main()
{
    float totalNickels, totalDimes, totalQuarters, totalValue; 
    
    cout << "Press return after entering a number.\n";
    cout << "How many nickels do you have?\n";
    cin >> totalNickels;
    cout << "How many dimes do you have?\n";
    cin >> totalDimes;
    cout << "How many quarters do you have?\n";
    cin >> totalQuarters;
    
    totalValue = totalNickels * .05 + totalDimes * .10 + totalQuarters * .25; 
   
    cout << "Your monetary value is ";
    cout << totalValue << endl; 
    
    cout << "This is the end of the program.\n";
    
    return 0;

}