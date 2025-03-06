// Problems on Digits
// Write a program which accepts the no from user and return the difference between addtion of even and odd digits.

#include<iostream>
using namespace std;

int SumDifference(int iNo)
{
    int iDigit = 0, iSumE = 0, iSumO = 0;
    int iDff = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSumE - iSumO;
    return iDff;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the no = "<<endl;
    cin>>iValue;
    
    iRet = SumDifference(iValue);

    cout<<"Difference is = "<<iRet<<endl;

    return 0;
}