// Problems on Recursion
// Write a program which takes 1 no as a input from user & display list reverse upto that no. 
// Without Using Recursion

#include<iostream>
using namespace std;

void Display(int iNo)
{
    while(iNo >= 1)
    {
        cout<<iNo<<endl;
        iNo--;
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