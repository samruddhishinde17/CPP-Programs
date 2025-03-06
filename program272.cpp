// Problems on Recursion
// Write a program which display 4 times * on screen 

#include<iostream>
using namespace std;

// Approach 3 : Using recursion

void Display()
{
    auto i = 1;           //storage class

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}