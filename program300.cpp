// Problems on Recursion
// Write a program which accepts the string from user and calculate the length of that string.

#include<iostream>
using namespace std;

int strlenX(char *str)
{
   int iCount = 0;

   while(*str != '\0')
   {
      iCount++;
      str++;
   }
   return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter the string = "<<endl;
    cin.getline(Arr, 30);

    iRet = strlenX(Arr);
    cout<<"String length is = "<<iRet<<endl;

    return 0;
}