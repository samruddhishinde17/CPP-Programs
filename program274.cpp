// Problems on Recursion
// Write a program which takes input from user and prints that no of times * 
// Using Recursion

#include<iostream>
using namespace std;

// Approach 3 : Using recursion

void Display(int iNo)
{
    static int i = 1;           //storage class

    if(i <= iNo)
    {
        cout<<"*"<<endl;
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number = "<<endl;
    cin>>iValue;

    Display(iValue);

    cout<<"End of Application"<<endl;

    return 0;
}