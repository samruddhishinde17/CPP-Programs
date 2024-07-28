//Using "FOR LOOOP" Concept
//Ask the user to input a number that how many times they want to display the "Jay Hanuman" on the screen.

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    //      1         2         3  
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("JAY HANUMAN...\n");  // 4
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the no you want to display JAY HANUMAN on screen : "<<endl;
    cin>>iValue;

    Display(iValue);         

    return 0;
}