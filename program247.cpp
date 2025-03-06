// Problems on String
// Procedure Oriented Programming
// Write a program which accepts the 1 string and copy the contents from that string to another .

#include<iostream>
#include<string.h>

using namespace std;


int main()
{
    char Arr[30] = "Hello World!";
    char Brr [30];

    strcpy(Brr,Arr);

    cout<<"Destination string = "<<Brr<<endl;

    return 0;
}