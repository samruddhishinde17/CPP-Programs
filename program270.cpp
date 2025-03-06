// Problems on Recursion
// Write a program which display 4 times * on screen 
// Without Recursion

#include<iostream>
using namespace std;

// Approach 2 : Using while loop

void Display()
{
    int i = 1;

    while(i <= 4)
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