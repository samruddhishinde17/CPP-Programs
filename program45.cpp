// Problems on Numbers
// Without using FLAG & Extra varibale concept
//WAP to check whether the given no is Prime no or not.

#include<iostream>
using namespace std;

// Input : 11       No/2 = 5    iCnt = 6
// Input : 17       No/2 = 8    iCnt = 9

// Input : 10       No/2 = 5    iCnt = 2
// Input : 15       No/2 = 7    iCnt = 3

bool CheckPrime(int iNo)
{
   int iCnt = 0;

   if(iNo < 0)
   {
      iNo = -(iNo);
   }

   for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
   {
       if ((iNo % iCnt) == 0)
       {
           break;
       }
   }

   if (iCnt > (iNo/2))
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
    bool bRet = 0;

    cout<<"Enter the number = ";
    cin>>iValue;

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        cout<<iValue<<" is a prime number";
    }
    else
    {
        cout<<iValue<<" is not a prime number";
    }

    return 0;
}

