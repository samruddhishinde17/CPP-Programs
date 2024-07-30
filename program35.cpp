// Problems on Numbers
// For loop
//WAP to find the factorial of given no upta that given no.

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    cout << "Factors of " << iNo << " are: " << endl;

    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
        cout<<iCnt<<" ";    //4
        }
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "; 
    cin >> iValue;
    
    DisplayFactors(iValue);

    return 0;
}
