// Problems on Numbers
// Using FILTER concept
//WAP to check whether the given no is Perfect or not.

#include<iostream>
using namespace std;

/*
    Accept number as No
    Search all its factors
    Perform addition of all the factors
    If adddition is same as No
    then Display as No is perfect number
    otherwise Display as No is noyt perfect number
*/

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        cout<<"Please enter only positive number";     //Filter
        return false;
    }

    for (iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
      if ((iNo % iCnt) == 0)
      {
        iSum = iSum + iCnt;
      }
    }

    if (iSum == iNo)
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

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" is perfect number";
    }
    else
    {
        cout<<iValue<<" is not a perfect number";
    }

    return 0;
}