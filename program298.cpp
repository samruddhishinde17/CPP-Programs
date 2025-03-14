// Problems on Recursion
// Write a program which accepts the no from user and returns the addition of its factors.

#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    static int i = 1;
    static int iSum = 0;

    if(i <= (iNo/2))
    {
        if((iNo % i) == 0)
        {
            iSum = iSum + i;
        } 
        i++;
        SumFactors(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number = "<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);
    cout<<"Addition of factors : "<<iRet<<endl;

    return 0;
}