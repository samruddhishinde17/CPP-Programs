// Problems on Recursion
// Write a program which display 4 times * on screen 
// Without Recursion

#include<iostream>
using namespace std;

// Approach 1 : Using for loop

void Display()
{
    int i = 0;

    for (i = 1; i <= 4; i++)
    {
        cout<<"*"<<endl;
    }
}

int main()
{
    Display();

    return 0;
}