// Problems on Recursion
// Write a program which accepts the no from user and returns the no of digits in that no.

#include<iostream>
using namespace std;

int Count(int iNo)
{
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        Count(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number = "<<endl;
    cin>>iValue;

    iRet = Count(iValue);
    cout<<"No of digits are = "<<iRet<<endl;

    return 0;
}