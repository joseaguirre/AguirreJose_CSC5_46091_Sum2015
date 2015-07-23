/*Author: Jose Aguirre
 *Created on July 22, 2015, 11:25 AM
 *Class: C++
 *Purpose: Mastermind w/ menu
*/

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>//header library includes random numbers
#include <ctime>//header file for time 0 since 1970

using namespace std; 
//User Libraries
//Global Constants
//Function Prototypes
//greets players 
void greeting();
//says bye to players
void goodBye();
//mastermind instructions
void instructions();
//runs the game
void mastermind();
//begins game
void introduction(char clrs[], int SIZE);
//sets 4 color code
char setClr1(char clrs[], int SIZE);
char setClr2(char clrs[], int SIZE);
char setClr3(char clrs[], int SIZE);
char setClr4(char clrs[], int SIZE);
//user starts to enter 4 colors
int game(char& clr1, char& clr2, char& clr3, char& clr4);

//Execution Begins Here!
int main()
{
    //variable declaration
    char ans;//answer 'y' to repeat, any other key to terminate 
    //do, ensures that the program is run a min of one time
    do{
        //variable declaration 
        int choice;//user chooses to read instructions or play game
        //prompt user input

        //this function generates a random hello
        greeting();

        cout<<"This is a menu for mastermind."<<endl
            <<"Below are the options you may select from."<<endl
            <<"Enter 1 to read instructions"<<endl
            <<"Enter 2 to play game"<<endl;
        cin >> choice;//user enters ins. or play game

        //switch statement for both choices
        switch(choice)
        {
            case 1: instructions();
            break;
            case 2: mastermind();
            break; 
        }
        //loop, repeat program?
        cout<<"If you won, go do something else."
            <<"If you'd like to continue"<<endl
            <<"Enter 'y', or any other key to end program: "<<endl; 

    }while(ans=='y'||ans=='Y');//only y repeats program
    
    //generate a random bye-bye message
    goodBye();
 
    //exit stage right!
    return 0;
}
/**********************************************
 ******************instructions****************
 **********************************************
 * Purpose: Instruction Manual for mastermind
 * 
 * input: 1 for instructions
 * 
 * output: instructions for mastermind
 * *********************************************/
void instructions()
{
    cout<<"OBJECT OF THE GAME\n"
        <<"The computer is the Codemaker."<<endl
        <<"It will set up a line of four Code pegs (secret code)"<<endl
        <<"in the secret code holes(somewhere in the computer's memory)."<<endl
        <<"The code can be made up of any combination of the 8 coloured pegs."<<endl
        <<"You may NOT use two or more pegs of the same colour."<<endl
        <<endl
        <<"The Decoder can begin guessing, trying to"<<endl
        <<"duplicate the exact colours and positions of the hidden Code pegs."<<endl 
        <<"Each guess is made by typing a row of Code pegs on the screen."<<endl
        <<"After every guess, the Codemaker(computer) informs the Decoder of their"<<endl
        <<"progress as follows:"<<endl; 
    cout<<"\nBlack Indicator Pegs"<<endl;
    cout<<"\nBlack Indicator Pegs will be notated with a 'B'"<<endl
        <<"a 'B' will be placed under your code if a Code peg is"<<endl
        <<"of the correct colour AND in the correct position. "<<endl; 
        
    cout<<"\nWhite Indicator Pegs"<<endl;
    cout<<"\nWhite Indicator Pegs will be notated with a 'W'"<<endl
        <<"a 'W' will be placed under your line of code if a Code peg is"<<endl
        <<"of the correct colour but NOT in the correct position. ";
        
    cout<<"\nBlank Space"<<endl;
    cout<<"\nBlank Space will just be an empty space'"<<endl
        <<"If decoder gets a blank line under code"<<endl
        <<"it means that none of the colors entered were correct."<<endl; 
        
    cout<<"Decoders: if you break the secret code, the Codemaker(computer)"<<endl
        <<"places four Black Indicator pegs below that row and adjacent to"<<endl
        <<"that row reveals the hidden code."<<endl
        <<"Remember, you will only get 10 guesses to break the code."<<endl
        <<"If you are unable to, then you receive the message: YOU LOSE!"<<endl
        <<"Good Luck!"<<endl; 
}
/**********************************************
 ****************** mastermind ****************
 **********************************************
 * Purpose: declares array with colors and calls functions
 * to set colors and initiate game.   
 * input: none
 *
 * output: none
 * *********************************************/
void mastermind()
{    
    //declare variables
    const int SIZE=8;
    char clrs[SIZE]={'r','o','y','g','b','i','v','w'};
    char clr1,clr2,clr3,clr4;//for code
    
    //call functions
    introduction(clrs,SIZE); 
    clr1=setClr1(clrs,SIZE);
    clr2=setClr2(clrs,SIZE);
    clr3=setClr3(clrs,SIZE);
    clr4=setClr4(clrs,SIZE);
    if(clr1==clr2||clr1==clr3||clr1==clr4||clr2==clr3||clr2==clr4||clr3==clr4)

    game(clr1, clr2, clr3, clr4);    
}
/**********************************************
 ******************introduction****************
 **********************************************
 * Purpose: Introduces the program to the user
 * 
 * input: none
 *
 * output: colors used in the game
 * *********************************************/
void introduction(char clrs[], int SIZE)
{
    //output colors used
    cout<<"This is mastermind!"<<endl; 
    cout<<"Your color choices are the following: "<<endl; 
    
    for(int i=0;i<SIZE;i++)
    cout<<clrs[i]<<" "; 
}
/**********************************************
 ******************    game    ****************
 **********************************************
 * Purpose: user tries to guess the four colors
 * 
 * input: guess-> color 1,2,3,4
 *
 * output: true-> W or B 
 * W for a correct color in incorrect place
 * B for correct color in correct place
 *      false-> blank space for a incorrect colors
 * *********************************************/
int game(char& clr1, char& clr2, char& clr3, char& clr4)
{
    //declare variables
    const int numSIZE=10;
    string num[numSIZE]={"first","second","third","fourth","fifth","sixth","seventh","eight","ninth","tenth"};
    char guess1,guess2,guess3,guess4;//user inputs their guess 
    
    //Prompt user input
    cout<<"\nEnter your four color choices, then press enter."<<endl;
    for(int j=0;j<numSIZE;j++)
    {
        cout<<"\nEnter your "<<num[j]<<" guess:"<<endl;
        cin>>guess1>>guess2>>guess3>>guess4;
        
        if(guess1==clr1)
            cout<<"B"; 
            else if(guess2==clr1||guess3==clr1||guess4==clr1)
                cout<<"W";
        if(guess2==clr2)
            cout<<"B"; 
            else if(guess1==clr2||guess3==clr2||guess4==clr2)
                cout<<"W";
        if(guess3==clr3)
            cout<<"B"; 
            else if(guess1==clr3||guess2==clr3||guess4==clr3)
                cout<<"W";
        if(guess4==clr4)
            cout<<"B"; 
            else if(guess1==clr4||guess2==clr4||guess3==clr4)
                cout<<"W";  
        if(guess1==clr1&&guess2==clr2&&guess3==clr3&&guess4==clr4)
        {
            cout<<"\nCongratulations! You Win!"<<endl; 
            return 1; 
        }
    }      
}

/**********************************************
 ******************setClr1****************
 **********************************************
 * Purpose: sets first color
 * 
 * input: clrs
 * output: first color
 * *********************************************/
char setClr1(char clrs[], int SIZE)
{
    //declare variables
    char clr1;
    //set the code
    clr1=clrs[0];
    return clr1;
}
/**********************************************
 ******************setClr2****************
 **********************************************
 * Purpose: sets second color
 * 
 * input: colors array
 * output: second color
 * *********************************************/
char setClr2(char clrs[], int SIZE)
{
    //declare variables
    char clr2;
    //set the code
    clr2=clrs[1];
    return clr2;
}
/**********************************************
 ******************setClr3****************
 **********************************************
 * Purpose: sets third color
 * 
 * input: colors array
 * output: third color
 * *********************************************/
char setClr3(char clrs[], int SIZE)
{
    //declare variables
    char clr3;
    //set the code
    clr3=clrs[2];
    return clr3;
}
/**********************************************
 ******************setClr4****************
 **********************************************
 * Purpose: sets fourth color
 * 
 * input: colors array
 * output: fourth color
 * *********************************************/
char setClr4(char clrs[], int SIZE)
{
    //declare variables
    char clr4;
    //set the code
    clr4=clrs[3];
    return clr4;
}
/******************************************************
 ***************** greeting *****************************
 ******************************************************
 * Purpose:  To display a greeting message
 * Input:
        Void funnction, no input necessary
 * Output:
 *      greeting
 */
void greeting()
{
    srand(time(0));//to make the program truly generate a random greeting
    int num;
    num = (1+rand()%4); //+1 bc 0 is not a valid entry
    //cout << num; I did this to trace bc could not figure out where 0 was coming from(%)
        switch (num)
        {
            case 1: 
                cout << "Hi!" << endl; 
                break; 
            case 2: 
                cout << "Hola!" << endl; 
                break; 
            case 3: 
                cout << "Welcome!" << endl; 
                break; 
            case 4: 
                cout << "Yo! Yo! Yo!" << endl; 
                break;
            default: 
                cout <<"Not valid entry" << endl; //it will generate zero
        }
    
}
/******************************************************
 ***************** goodBye *****************************
 ******************************************************
 * Purpose:  To display a farewell message and exit game
 * Input:
        any key other than 'y'
 * Output:
 *      farewell message
 */
void goodBye()
{
    srand(time(0));//to make the program truly generate a random greeting
    int num;
    num = (1+rand()%5); //+1 bc 0 is not a valid entry
    //cout << num; I did this to trace bc could not figure out where 0 was coming from(%)
        switch (num)
        {
            case 1: 
                cout << "Good-bye!" << endl; 
                break; 
            case 2: 
                cout << "Smell ya later!" << endl; 
                break; 
            case 3: 
                cout << "See you later!" << endl; 
                break; 
            case 4: 
                cout << "Hasta la vista" << endl; 
                break;
            case 5:
                cout << "Thank you, come again!" << endl; 
                break; 
            default: 
                cout <<"Not valid entry" << endl; //it will generate zero
        }
}
