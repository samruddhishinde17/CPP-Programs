//Using "DYNAMIC FOR LOOP" Concept 
//Write a program that takes an integer input from the user and displays the numbers from 1 to the input number.

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       cout<<iCnt<<endl;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number of times you want to display numbers on screen : ";
    cin>>iValue;

    Display(iValue);         

    return 0;
}