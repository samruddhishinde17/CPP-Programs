// Problems on String
// Procedure Oriented Programming
// Write a program which accepts the 1 string and copy only Capital characters from that string to another.

#include<iostream>
using namespace std;

void strcpycapitalX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }

    *Dest = '\0';
}

int main()
{    
    char Arr[30];
    char Brr[30];

    cout<<"Enter the source string : "<<endl;
    cin.getline(Arr,30);

    strcpycapitalX(Brr, Arr);  // strcpyX(200,100);

    cout<<"Destination string is : "<<Brr<<endl;
    
    return 0;
}