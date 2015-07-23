#include<iostream>
using namespace std;
int main()
{
    const int numSIZE=10;
    const int SIZE=8;
    string num[numSIZE]={"first","second","third","fourth","fifth","sixth","seventh","eight","ninth","tenth"};
    char clrs[SIZE]={'r','o','y','g','b','i','v','w'};
    char clr1,clr2,clr3,clr4;
    char guess1,guess2,guess3,guess4;//user inputs their guess 
    cout<<"This is mastermind!"<<endl; 
    cout<<"Your color choices are the following: "<<endl; 
    
    for(int i;i<SIZE;i++)
    cout<<clrs[i]<<" "; 
    
    clr1=clrs[0];
    clr2=clrs[1];
    clr3=clrs[2];
    clr4=clrs[3];
    
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
        if(guess1==clr1&&guess2==clr2&&guess3==clr3&guess4==clr4)
        {
            cout<<"\nCongratulations! You Win!"<<endl; 
            return 1; 
        }
    }            
    return 0; 
}

