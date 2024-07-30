// WAP which checks the given no is divisible by 4 or not.

#include<iostream>
using namespace std;

bool CheckDivisible(int iNo)
{
    if ((iNo % 4) == 0 )
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
    int iRet = 0;

    printf("Enter the no = \n");
    scanf("%d",&iValue);

    iRet = CheckDivisible(iValue);

    if (iRet == true)
    {
        cout<<iValue<<" is divisible by 4"<<endl;
    }
    else
    {
        cout<<iValue<<" is not divisible by 4"<<endl;
    }
    
    return 0;
}