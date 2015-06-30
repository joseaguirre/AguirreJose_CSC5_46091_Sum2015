/*file: main.cpp  
 author: Jose Aguirre
 Created on June 23, 2015, 12:08 PM
 Purpose: user inputs the time object has been in free fall and outputs distance
 */

#include <iostream>
using namespace std;

int main()
{
    int time, distance; 
    
    cout << "Press return after entering a number.\n";
    cout << "How many seconds has your object been in free fall?\n";
    cin >> time;
    
    distance = 32 * (time*time) / 2;
    cout << "Your object has traveled a distance of  \n";
    cout << distance << " feet" << endl;
    cout << "This is the end of the program.\n";
    
    return 0;

}