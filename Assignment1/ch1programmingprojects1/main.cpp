/*file: main.cpp  
 author: Jose Aguirre
 Created on June 23, 2015, 11:24 AM
 Purpose: this program intakes two integers and outputs their sum and product
 */

#include <iostream>
using namespace std;

int main()
{
    int int1, int2, sum, product;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter your first integer:\n";
    cin >> int1;
    cout << "Enter your second integer:\n";
    cin >> int2;
    
    sum = int1 + int2; 
    cout << "Your sum is ";
    cout << sum << endl; 
    
    product = int1 * int2; 
    cout << "Your product is ";
    cout << product << endl; 
    
    cout << "This is the end of the program.\n";
    
    return 0;

}