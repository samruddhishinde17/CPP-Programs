// Problems on Numbers
// Using UPDATER concept
//WAP to check whether the given no is Prime no or not.

#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);      
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        iCount++;
    }

    if (iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the no = ";
    cin>>iValue;

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        cout<<iValue<<" is a prime no";
    }
    else
    {
        cout<<iValue<<" is not a prime no";
    }

    return 0;
}