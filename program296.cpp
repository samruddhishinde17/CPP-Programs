// Problems on Recursion
// Write a program which accepts the no from user and returns the factors of that no.

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int i = 1;

    while(i <= (iNo/2))
    {
        if((iNo % i) == 0)
        {
            cout<<i<<endl;
        } 
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number = "<<endl;
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}