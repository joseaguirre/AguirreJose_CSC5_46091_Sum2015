/*file: main.cpp
 author: Jose Aguirre
 Created on June 23, 2015, 11:13 AM
 Purpose: familiarity with various error messages, created as comments
 * a. extra space b/w < and iostream
 * b. Omit one of the < or > in include directive
 * c. Omit int from main function
 * d. omit or misspell main
 * e. omit one of the (); then omit both the (). 
 * f. misspell identifiers, omit <<, leave off {} 
 */

//a. extra space b/w < and iostream
/*
#include < iostream>
using namespace std;

int main()
{
    cout << "Hello World!"; 
    
    return 0;

}
*/

//b. Omit one of the < or > in include directive
/*
#include iostream>
using namespace std;

int main()
{
    cout << "Hello World!"; 
    
    return 0;

}
*/

//c. Omit int from main function

/*
#include <iostream>
using namespace std;

 main()
{
    cout << "Hello World!"; 
    
    return 0;

}
*/

//d. omit or misspell main

/*
#include <iostream>
using namespace std;

int mian()
{
    cout << "Hello World!"; 
    
    return 0;

}
*/

//e. omit one of the (); then omit both the (). 
/*
#include <iostream>
using namespace std;

int main)
{
    cout << "Hello World!"; 
    
    return 0;

}
*/
/*
#include <iostream>
using namespace std;

int main
{
    cout << "Hello World!"; 
    
    return 0;

}
*/


//f. misspell identifiers, omit <<, leave off {} 
/*
#include < iostream>
using namespace std;

int main()
{
    cuot << "Hello World!"; 
    
    return 0;

}
*/
/*
#include < iostream>
using namespace std;

int main()
{
    cout "Hello World!"; 
    
    return 0;

}
*/

/*
#include < iostream>
using namespace std;

int main()
{
    cout << "Hello World!"; 
    
    return 0;
*/

