// Problems on String
// Procedure Oriented Programming
// Write a program which returns the length of that string.

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int iRet = 0;
    char Arr[30] = "Hello World";

    iRet = strlen(Arr);

    cout<<"String length is : "<<iRet<<endl;

    return 0;
}