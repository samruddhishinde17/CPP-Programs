// Problems on Recursion
// Write a program which accepts the no from user and returns the addition of its digits.

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum = 0;

    if (iNo != 0)
    {
        iSum = iSum + (iNo % 10);     //shorthand
        SumDigits(iNo / 10);          //shorthand
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number = "<<endl;
    cin>>iValue;

    iRet = SumDigits(iValue);
    cout<<"Sum of digits is = "<<iRet<<endl;

    return 0;
}