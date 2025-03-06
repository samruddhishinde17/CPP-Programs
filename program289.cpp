// Problems on Recursion
// Write a program which accepts the no from user and returns the addition of its digits.

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
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