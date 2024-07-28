//Using "WHILE LOOOP" Concept 
//Ask the user to input a number that how many times they want to display the "Jay Hanuman" on the screen.

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;                           //1
    while( iCnt <= iNo )                //2 
    {
        cout<<"Jay HAnuman..."<<endl;   //4     
        iCnt++;                         //3
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number of times you want to display Jay Hanuman on screen : "<<endl;
    cin>>iValue;

    Display(iValue);         

    return 0;
}