// Problems on String
// Procedure Oriented Programming
// Write a program which takes 2 strings from user and compare them, if the both the strings are same then returns ture else false.

#include<iostream>
using namespace std;

bool strcmpX(char *first, char *second)
{
    while ((*first != '\0') && (*second != '\0'))
    {
        if (*first != *second)
        {
            break;
        }
        first++;
        second++;  
    }

    if (*first == '\0' && *second == '\0')
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
    char Arr[30];
    char Brr [30];
    bool bRet = false;

    cout<<"Enter the first string = "<<endl;
    cin.getline(Arr, 30);

    cout<<"Enter the second string = "<<endl;
    cin.getline(Brr, 30);

    bRet = strcmpX(Arr,Brr);

    if (bRet == true)
    {
        cout<<"Strings are identical"<<endl;
    }
    else
    {
        cout<<"Strings are different"<<endl;
    }
    
    return 0;
}