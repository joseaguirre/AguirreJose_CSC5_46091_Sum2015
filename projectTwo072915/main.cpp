/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Purpose: Menu for my games
 * Created on July 26, 2015, 3:27 PM
 */

//system libraries
#include <iostream>//i/o stream
#include <cstdlib>//rndm()
#include <ctime>//time since 70s)
#include <fstream>//for file
using namespace std;

//user libraries
//global constants
//function prototypes
void enterName(); 
void instructions();
void mastermind();
void introduction(char clrs[], int SIZE);
char setClr1(char clrs[], int SIZE);
char setClr2(char clrs[], int SIZE);
char setClr3(char clrs[], int SIZE);
char setClr4(char clrs[], int SIZE);
int game(char& clr1, char& clr2, char& clr3, char& clr4);
void guessNum();
void orderNum();
void swap(int myArray[], const int SIZE);
//execution begins here!
int main() 
{
    enterName();
    //variable declaration
    char ans; 
    do
    { 
        //variable declarations
        int choice;//for user choices

        //prompt user input to choose from menu
        cout<<"Enter 1 for mastermind."<<endl 
            <<"Enter 2 for mastermind instructions."<<endl 
            <<"Enter 3 for guess the number game."<<endl 
            <<"Enter 4 for order whole numbers game."<<endl 
            <<"Enter your choice: "<<endl; 
        cin>>choice; 
        switch(choice)
        {
            case 1: mastermind(); 
            break; 
            case 2: instructions(); 
            break;
            case 3: guessNum();
            break;
            case 4: orderNum();
            break; 
        }

        //prompt user input to repeat program
        cout<<"Would you like to return to the menu?"<<endl
            <<"Type y for yes, any other key to end."<<endl; 
        cin>>ans; 
    }while(ans=='y'||ans=='Y');//create a condition to repeat
    return 0;
}
/******************************************
 *****************enterName****************
 *
 * purpose: get users name and id 
 * return the information
 * when the player ends game(not really done yet)
 * 
 * 
 * input: name and id
 * output: stores it in a file 
 */

void enterName()
{
     ofstream theFile("players.txt");
    //enter player information
    cout<<"Enter player ID and first Name."<<endl;
    int idNumber;
    string name; 
    //this can read in a player's name, but not quite finished
    cin>>idNumber>>name;
    theFile<<idNumber<<" "<<name<<endl; 
}

/*************mastermind****************
 *Purpose: initializes the game
 * 
 * input: 
 * output: 
 * 
 ************************************/

void mastermind()
{
    srand(time(0));//time 0 calculates secs from beginning of comp time
    //declare variables
    const int SIZE=8;
    char clrs[SIZE]={'r','o','y','g','b','i','v','w'};
    char clr1='z',clr2='z',clr3='z',clr4='z';//for code
    //call functions
    introduction(clrs,SIZE); 
    clr1=setClr1(clrs,SIZE);
    //cout<<endl<<clr1<<endl; 
    do
    {

        clr2=setClr2(clrs,SIZE);

    }while(clr1==clr2);//ensures that there are no duplicates

    //cout<<clr2<<endl;

    do

    {

        clr3=setClr3(clrs,SIZE);

    }while((clr2==clr3)||(clr1==clr3));

    //cout<<clr3<<endl;

    do

    {

        clr4=setClr4(clrs,SIZE);

    }while(clr3==clr4||(clr2==4)||(clr1==clr4));

    //cout<<clr4<<endl; 

    

    game(clr1, clr2, clr3, clr4); 

    

}

/*************introduction****************

 *Purpose: displays the array and intro

 * 

 * input: color array

 * output: color array

 * 

 ************************************/

void introduction(char clrs[], int SIZE)

{

    //output colors used

    cout<<"This is mastermind!"<<endl; 

    cout<<"Your color choices are the following: "<<endl; 

    

    for(int i=0;i<SIZE;i++)

    cout<<clrs[i]<<" "; 

}




/*************game****************

 *Purpose: To set all four colors 

 * and no duplicates

 * 

 * input: array

 * output: na

 * 

 ************************************/




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

    cout<<"\nCODE="<<clr1<<clr2<<clr3<<clr4<<endl;

}

/*************setClr1****************

 *Purpose: set the first color

 * 

 * input: color array and size

 * output: first color

 * 

 ************************************/

char setClr1(char clrs[], int SIZE)

{

    //declare variables

    char clr1;

    //set the code

    clr1=clrs[rand()%8];

    return clr1;

}

/*************setClr2****************

 *Purpose: set the second color

 * 

 * input: color array and size

 * output: second color

 * 

 ************************************/

char setClr2(char clrs[], int SIZE)

{

    //declare variables

    char clr2;

    //set the code

    clr2=clrs[rand()%8];

    return clr2;

}

/*************setClr3****************

 *Purpose: set the third color

 * 

 * input: color array and size

 * output: third color

 * 

 ************************************/

char setClr3(char clrs[], int SIZE)

{

    //declare variables

    char clr3;

    //set the code

    clr3=clrs[rand()%8];

    return clr3;

}

/*************setClr4****************

 *Purpose: set the fourth color

 * 

 * input: color array and size

 * output: fourth color

 * 

 ************************************/

char setClr4(char clrs[], int SIZE)

{

    //declare variables

    char clr4;

    //set the code

    clr4=clrs[rand()%8];

    return clr4;

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

 ******************guessNum****************

 **********************************************

 * Purpose: I added this game to illustrate a search

 * 

 * input: number

 * 

 * output: if number true cout correct and index

 *         if false cout incorrect play again

 * *********************************************/

void guessNum()

{

    const int ROWS=3; 

    const int COLS=3; 

    int size=3; 

    int myArray[ROWS][COLS]={{72,32,43},{3,4,89},{56,81,13}};

    int guess=-1; 

    bool found = false;

    int index=-1; 

    int index2=-1; 

    char endGame=' '; 




    //now go search the array

    //create a loop to allow user to continue

    while(true)

    {

        found=false;//this deactivates the found=true inside loop below 

        //prompt user input

        cout<<"I've stored 9 numbers in my 2d array."<<endl

            <<"They range from 1-100."<<endl

            <<"Try to guess one of the numbers."<<endl

            <<"Enter a # from 1-100: ";

        cin>>guess;

    

        for(index=0; index<size;index++)

        {

            for(index2=0; index2<size; index2++)

            {

                if(guess==myArray[index][index2])

                {

                    found = true; 

                    cout<<"Congratulations! You guessed a correct"<<endl

                        <<"number.The number was found at indices"<<endl

                        <<index<<" and "<<index2<<endl; 

                    break; 

                }

            }

            

        }

        if(!found) cout<<"Sorry! You did not guess a number."<<endl;

        cout<<"play again? y or any other key to quit"<<endl; 

        cin>>endGame;

        if(endGame!='y') break;    

    }

    

}




/**********************************************

 ******************orderNum****************

 **********************************************

 * Purpose: I added this game to illustrate a sort

 * 

 * input: array integers

 * 

 * output: order from least to greatest

 * *********************************************/

void orderNum()

{

     const int NEWSIZE=10; 

    int myArray[NEWSIZE]={}; 

    int num; 







    //prompt user input

    cout<<"Enter a list of ten numbers between 1 and 1000"<<endl

        <<"and this program will order from least to greatest."<<endl;

        

    for(int i=0; i<NEWSIZE; i++)

    {

        cin>>num;

        myArray[i]=num; 

    }

    //echo input

    cout<<"You entered the following numbers: ";

    for(int i=0; i<NEWSIZE; i++)

    cout<<myArray[i]<<" ";

    //call swap

    swap(myArray, NEWSIZE);

}




/**********************************************

 ******************swap****************

 **********************************************

 * Purpose: I added this game to illustrate a sort

 * 

 * input: array elements

 * 

 * output: swaps elements

 * *********************************************/

void swap(int myArray[], const int NEWSIZE)

{

    int swap = -1; 

    int length=10; 




    for(int counter=length-1;counter>0; counter--)

    {

        for(int index=0; index<NEWSIZE; index++)

        {

            if (myArray[index]>myArray[index+1])

            //if element(i) is > element(i+1)

            //then we need to swap values

            {

                swap=myArray[index+1];

                myArray[index+1]=myArray[index];

                myArray[index]=swap; 

            }

        }

        cout<<endl; 

    

        /***********************************

            for(int index=0;index<10;index++)

            {

                cout<<myArray[index]<<", ";

            }

            cout<<endl; 

            SIZE--; 

            

         * @param myArray

         * @param SIZE

         ************************************/

    

    }    

    cout<<"From least to greatest: ";

    for(int index=0;index<NEWSIZE;index++)

    {

        cout<<myArray[index]<<", ";

    }

    cout<<endl; 

}