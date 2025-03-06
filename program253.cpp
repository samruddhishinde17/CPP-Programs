// Problems on String
// Procedure Oriented Programming
// Write a program which accepts the 1 string and remove the white space.
// Eg:
// Source : HEllo WorLd
// Destination : HElloWorLd

#include<iostream>
using namespace std;

void strcpyX(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if (*Src != ' ')
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
    char Brr [30];

    cout<<"Enter the source string = "<<endl;
    cin.getline(Arr, 30);

    strcpyX(Brr,Arr);  // strcpyX(200,100);

    cout<<"Destination string = "<<Brr<<endl;

    return 0;
}