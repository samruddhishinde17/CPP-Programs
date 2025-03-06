// Problems on Recursion
// Write a program which takes 1 no as a input from user & display list upto that no. 
// Using Recursion

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        cout<<i<<endl;
        i++;
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