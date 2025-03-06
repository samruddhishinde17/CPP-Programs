// Problems on Recursion
// Write a program which takes 1 no as a input from user & display addition of the no's upto that no. 
// Without Using Recursion

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;

    while(iNo >= 1)
    {
        iSum = iSum + iNo;
        iNo--;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number = "<<endl;
    cin>>iValue;

    iRet = Addition(iValue);

    cout<<"Addition is "<<iRet<<endl;

    return 0;
}