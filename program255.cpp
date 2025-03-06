// Problems on String
// Procedure Oriented Programming
// Write a program which concatinates the 2 strings it.

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    char Brr[30] = "India";

    strcat(Brr,Arr);

    cout<<"Destination string : "<<Brr<<endl;
    
    return 0;
}