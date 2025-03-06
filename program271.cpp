// Problems on Recursion
// Write a program which display 4 times * on screen 
// Without Recursion

#include<iostream>
using namespace std;

// Approach 3 : Using recursion

void Display()
{
    int i = 1;

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
    }
}

int main()
{
    Display();

    return 0;
}