// Accept the no from user & check whether the no ins in between range 30 to 50

// Algirithm
/*
    START
        Accept one number as iValue
        Check that iValue is in between 30 to 50
        If iValue is in betwwn 30 to 50
        Then display "Given no is in between range 30 to 50"
        Otherwise display "Given no is not in between range 30 to 50"  
    STOP
*/

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckRange
//  Description :       Used to check whether number is in given range i.e 30 to 50
//  Input :             Integer
//  Output :            Boolean
//  Author :            Samruddhi Santosh Shinde
//  Date :              22/04/2024
//
////////////////////////////////////////////////////////////

bool CheckRange(int iNo)
{
   if((iNo >= 30) && (iNo <=50))
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

    cout<<"Enter the no = "<<endl;
    cin>>iValue;

    bRet = CheckRange(iValue);

    if (bRet == true)
    {
        cout<<iValue<<" is in the range 30 and 50"<<endl;
    }
    else
    {
        cout<<iValue<<" is not in the range 30 and 50"<<endl;
    }
    
    return 0;
}