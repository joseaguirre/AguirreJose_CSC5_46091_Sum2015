/*file: main.cpp
 *author: Jose Aguirre
 *Created on June 23, 2015, 11:05 AM
 *Purpose: user inputs the height and width of a rectangular area and the program 
 *returns the perimeter. 
 */

#include <iostream>
using namespace std;

int main()
{
    int height, width, totalLength, area; 
    
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the height: " << endl; 
    cin >> height;
    cout << "Enter the width: " << endl; 
    cin >> width; 
    
    area = height * width;
    totalLength = 2*height + 2*width; 
    
    cout << "Your fenced area is: " << endl; 
    cout << area;
    cout << " square feet. ";
    
    cout << "\nYou will need: \n";     
    cout << totalLength; 
    cout << " feet of fence to enclose your area.\n";   
    
    return 0;

}
