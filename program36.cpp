// Problems on Numbers
// For loop
//WAP to write a addition of given no of factors.

#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;    //4
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "; 
    cin >> iValue;
    
    iRet = SumFactors(iValue);
    cout<<"Summation of factors is "<<iRet;

    return 0;
}
