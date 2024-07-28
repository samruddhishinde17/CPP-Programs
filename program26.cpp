//Using "STATIC FOR LOOP" Concept 
//Display normally 1,2,3,4

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
       cout<<iCnt<<endl;
    }
}

int main()
{
    Display();         

    return 0;
}