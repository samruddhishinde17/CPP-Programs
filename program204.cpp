// Write a program which accepts  no from user and returns the addition of its factors.
// By reducing time complexity

#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
   int iCnt = 0, iSum = 0;

   for(iCnt = 1; iCnt <= iNo / 2; iCnt++)     // iNo / 2 condition added
   {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }   
   }
   return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the no = "<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Addition of factors is = "<<iRet<<endl;

    return 0;
}
