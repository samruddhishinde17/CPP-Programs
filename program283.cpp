// Problems on Recursion
// Write a program which takes 1 no as a input from user & display addition of the no's upto that no. 
// Using Recursion

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    static int iSum = 0;
    static int i = 1;

    if(i <= iNo)
    {
        iSum = iSum + i;
        i++;
        Addition(iNo);
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