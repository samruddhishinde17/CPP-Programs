// Problems on Numbers
// For loop
//WAP which accept the no from user and display the how many factors that no have 

#include<iostream>
using namespace std;

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCount++;    //4
        }
    }
    
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "; 
    cin >> iValue;
    
    iRet = CountFactors(iValue);
    cout<<"No of factors are = "<<iRet;

    return 0;
}
