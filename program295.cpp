// Problems on Recursion
// Write a program which accepts the no from user and returns the factors of that no.

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            cout<<i<<endl;
        } 
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