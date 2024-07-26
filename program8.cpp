//Accept a no from user and check whether the no even or odd

#include <iostream>
using namespace std;

// Algorithm
/*
//  START
     Accept 1 no as No
     Divide that no No by 2
     If remainder is 0
     Then display the result as Even no
     Otherwise display the result as Odd no
  STOP
*/

bool CheckEvenOdd(unsigned int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       Used to check whether number is even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Samruddhi Santosh Shinde
//  Date :              16/04/2024
//
////////////////////////////////////////////////////////////


int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    cout<<"Enter the no = "<<endl;
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        cout<<"%d is even no"<<iValue<<endl;
    }
    else
    {
        cout<<"%d is odd no"<<iValue<<endl;
    }

    return 0;
}